/*
 * Reverse-Engineered ABI Specification for: libGLES_mali.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libGLES_mali.so
 */

#ifndef BEGONIA_RE_LIBGLES_MALI_H
#define BEGONIA_RE_LIBGLES_MALI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: osup_mutex_static_get */
/* Demangled: osup_mutex_static_get */
int osup_mutex_static_get(void);

/* Symbol: egl_check_display_valid_and_retain */
/* Demangled: egl_check_display_valid_and_retain */
int egl_check_display_valid_and_retain(void);

/* Symbol: glLightModelxOES */
/* Demangled: glLightModelxOES */
int glLightModelxOES(void);

/* Symbol: glPrimitiveBoundingBoxEXT */
/* Demangled: glPrimitiveBoundingBoxEXT */
int glPrimitiveBoundingBoxEXT(void);

/* Symbol: glProgramUniform3fv */
/* Demangled: glProgramUniform3fv */
int glProgramUniform3fv(void);

/* Symbol: glTexImage3D */
/* Demangled: glTexImage3D */
int glTexImage3D(void);

/* Symbol: glIsEnabled */
/* Demangled: glIsEnabled */
int glIsEnabled(void);

/* Symbol: glGetStringi */
/* Demangled: glGetStringi */
int glGetStringi(void);

/* Symbol: glIsRenderbuffer */
/* Demangled: glIsRenderbuffer */
int glIsRenderbuffer(void);

/* Symbol: glGetFixedvOES */
/* Demangled: glGetFixedvOES */
int glGetFixedvOES(void);

/* Symbol: glPointSizePointerOES */
/* Demangled: glPointSizePointerOES */
int glPointSizePointerOES(void);

/* Symbol: glClearStencil */
/* Demangled: glClearStencil */
int glClearStencil(void);

/* Symbol: cmpbep_shutdown_llvm */
/* Demangled: cmpbep_shutdown_llvm */
int cmpbep_shutdown_llvm(void);

/* Symbol: clEnqueueReadBuffer */
/* Demangled: clEnqueueReadBuffer */
int clEnqueueReadBuffer(void);

/* Symbol: mali_egl_image_get_buffer_ext_phandle */
/* Demangled: mali_egl_image_get_buffer_ext_phandle */
int mali_egl_image_get_buffer_ext_phandle(void);

/* Symbol: glColor4ub */
/* Demangled: glColor4ub */
int glColor4ub(void);

/* Symbol: glClearBufferiv */
/* Demangled: glClearBufferiv */
int glClearBufferiv(void);

/* Symbol: glTexParameterIuivOES */
/* Demangled: glTexParameterIuivOES */
int glTexParameterIuivOES(void);

/* Symbol: vkAcquireImageANDROID */
/* Demangled: vkAcquireImageANDROID */
int vkAcquireImageANDROID(void);

/* Symbol: eglCopyBuffers */
/* Demangled: eglCopyBuffers */
int eglCopyBuffers(void);

/* Symbol: glLightxOES */
/* Demangled: glLightxOES */
int glLightxOES(void);

/* Symbol: glLoadMatrixf */
/* Demangled: glLoadMatrixf */
int glLoadMatrixf(void);

/* Symbol: glScalexOES */
/* Demangled: glScalexOES */
int glScalexOES(void);

/* Symbol: egl_color_buffer_get_yuva_comp_sizes */
/* Demangled: egl_color_buffer_get_yuva_comp_sizes */
int egl_color_buffer_get_yuva_comp_sizes(void);

/* Symbol: mali_egl_image_get_format */
/* Demangled: mali_egl_image_get_format */
int mali_egl_image_get_format(void);

/* Symbol: glGetTexParameterxv */
/* Demangled: glGetTexParameterxv */
int glGetTexParameterxv(void);

/* Symbol: glTexEnvfv */
/* Demangled: glTexEnvfv */
int glTexEnvfv(void);

/* Symbol: glGetBooleani_v */
/* Demangled: glGetBooleani_v */
int glGetBooleani_v(void);

/* Symbol: glGetSamplerParameterIivOES */
/* Demangled: glGetSamplerParameterIivOES */
int glGetSamplerParameterIivOES(void);

/* Symbol: mtk_set_extra_buffer_type */
/* Demangled: mtk_set_extra_buffer_type */
int mtk_set_extra_buffer_type(void);

/* Symbol: egl_color_buffer_wrap_external */
/* Demangled: egl_color_buffer_wrap_external */
int egl_color_buffer_wrap_external(void);

/* Symbol: glClipPlanefOES */
/* Demangled: glClipPlanefOES */
int glClipPlanefOES(void);

/* Symbol: glTexEnvxvOES */
/* Demangled: glTexEnvxvOES */
int glTexEnvxvOES(void);

/* Symbol: glCreateShaderProgramv */
/* Demangled: glCreateShaderProgramv */
int glCreateShaderProgramv(void);

/* Symbol: glGetnUniformiv */
/* Demangled: glGetnUniformiv */
int glGetnUniformiv(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: glAlphaFunc */
/* Demangled: glAlphaFunc */
int glAlphaFunc(void);

/* Symbol: glNormal3x */
/* Demangled: glNormal3x */
int glNormal3x(void);

/* Symbol: glDrawArraysIndirect */
/* Demangled: glDrawArraysIndirect */
int glDrawArraysIndirect(void);

/* Symbol: clCreateSubDevices */
/* Demangled: clCreateSubDevices */
int clCreateSubDevices(void);

/* Symbol: clCreateSamplerWithProperties */
/* Demangled: clCreateSamplerWithProperties */
int clCreateSamplerWithProperties(void);

/* Symbol: glMultMatrixf */
/* Demangled: glMultMatrixf */
int glMultMatrixf(void);

/* Symbol: glProgramUniformMatrix4x2fv */
/* Demangled: glProgramUniformMatrix4x2fv */
int glProgramUniformMatrix4x2fv(void);

/* Symbol: glSamplerParameterIuivOES */
/* Demangled: glSamplerParameterIuivOES */
int glSamplerParameterIuivOES(void);

/* Symbol: prof_buffer_include_switch_time */
/* Demangled: prof_buffer_include_switch_time */
extern void* prof_buffer_include_switch_time;

/* Symbol: clRetainContext */
/* Demangled: clRetainContext */
int clRetainContext(void);

/* Symbol: egl_color_buffer_validate_render_target */
/* Demangled: egl_color_buffer_validate_render_target */
int egl_color_buffer_validate_render_target(void);

/* Symbol: glDisableiOES */
/* Demangled: glDisableiOES */
int glDisableiOES(void);

/* Symbol: clSetKernelArg */
/* Demangled: clSetKernelArg */
int clSetKernelArg(void);

/* Symbol: glMaterialx */
/* Demangled: glMaterialx */
int glMaterialx(void);

/* Symbol: glActiveShaderProgram */
/* Demangled: glActiveShaderProgram */
int glActiveShaderProgram(void);

/* Symbol: egl_get_winsys_surface */
/* Demangled: egl_get_winsys_surface */
int egl_get_winsys_surface(void);

/* Symbol: glDiscardFramebufferEXT */
/* Demangled: glDiscardFramebufferEXT */
int glDiscardFramebufferEXT(void);

/* Symbol: glReadnPixelsEXT */
/* Demangled: glReadnPixelsEXT */
int glReadnPixelsEXT(void);

/* Symbol: eglGetCurrentContext */
/* Demangled: eglGetCurrentContext */
int eglGetCurrentContext(void);

/* Symbol: eglGetCurrentSurface */
/* Demangled: eglGetCurrentSurface */
int eglGetCurrentSurface(void);

/* Symbol: glFrustumfOES */
/* Demangled: glFrustumfOES */
int glFrustumfOES(void);

/* Symbol: glDisableVertexAttribArray */
/* Demangled: glDisableVertexAttribArray */
int glDisableVertexAttribArray(void);

/* Symbol: MTK_isRGB888Supported */
/* Demangled: MTK_isRGB888Supported */
int MTK_isRGB888Supported(void);

/* Symbol: clSetKernelArgSVMPointer */
/* Demangled: clSetKernelArgSVMPointer */
int clSetKernelArgSVMPointer(void);

/* Symbol: glGetLightxv */
/* Demangled: glGetLightxv */
int glGetLightxv(void);

/* Symbol: glLightf */
/* Demangled: glLightf */
int glLightf(void);

/* Symbol: glProgramUniformMatrix3x2fv */
/* Demangled: glProgramUniformMatrix3x2fv */
int glProgramUniformMatrix3x2fv(void);

/* Symbol: glUniform4f */
/* Demangled: glUniform4f */
int glUniform4f(void);

/* Symbol: glTexEnvxOES */
/* Demangled: glTexEnvxOES */
int glTexEnvxOES(void);

/* Symbol: glBindImageTexture */
/* Demangled: glBindImageTexture */
int glBindImageTexture(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: MTK_ATRACE_BEGIN */
/* Demangled: MTK_ATRACE_BEGIN */
int MTK_ATRACE_BEGIN(void);

/* Symbol: MTK_ATRACE_END */
/* Demangled: MTK_ATRACE_END */
int MTK_ATRACE_END(void);

/* Symbol: glDeleteProgramPipelines */
/* Demangled: glDeleteProgramPipelines */
int glDeleteProgramPipelines(void);

/* Symbol: glClearColor */
/* Demangled: glClearColor */
int glClearColor(void);

/* Symbol: glMatrixIndexPointerOES */
/* Demangled: glMatrixIndexPointerOES */
int glMatrixIndexPointerOES(void);

/* Symbol: glDrawBuffers */
/* Demangled: glDrawBuffers */
int glDrawBuffers(void);

/* Symbol: glGetProgramResourceName */
/* Demangled: glGetProgramResourceName */
int glGetProgramResourceName(void);

/* Symbol: glTexBuffer */
/* Demangled: glTexBuffer */
int glTexBuffer(void);

/* Symbol: glUniform4i */
/* Demangled: glUniform4i */
int glUniform4i(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: eglGetError */
/* Demangled: eglGetError */
int eglGetError(void);

/* Symbol: glIsTransformFeedback */
/* Demangled: glIsTransformFeedback */
int glIsTransformFeedback(void);

/* Symbol: glGenBuffers */
/* Demangled: glGenBuffers */
int glGenBuffers(void);

/* Symbol: glGetTexParameteriv */
/* Demangled: glGetTexParameteriv */
int glGetTexParameteriv(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: glNormalPointer */
/* Demangled: glNormalPointer */
int glNormalPointer(void);

/* Symbol: glBufferStorageEXT */
/* Demangled: glBufferStorageEXT */
int glBufferStorageEXT(void);

/* Symbol: glDrawElementsInstancedBaseVertexOES */
/* Demangled: glDrawElementsInstancedBaseVertexOES */
int glDrawElementsInstancedBaseVertexOES(void);

/* Symbol: glDrawArrays */
/* Demangled: glDrawArrays */
int glDrawArrays(void);

/* Symbol: glDrawTexiOES */
/* Demangled: glDrawTexiOES */
int glDrawTexiOES(void);

/* Symbol: glTexCoordPointer */
/* Demangled: glTexCoordPointer */
int glTexCoordPointer(void);

/* Symbol: glProgramBinary */
/* Demangled: glProgramBinary */
int glProgramBinary(void);

/* Symbol: glVertexAttrib1fv */
/* Demangled: glVertexAttrib1fv */
int glVertexAttrib1fv(void);

/* Symbol: glCopyTexSubImage2D */
/* Demangled: glCopyTexSubImage2D */
int glCopyTexSubImage2D(void);

/* Symbol: egl_color_buffer_set_rotation */
/* Demangled: egl_color_buffer_set_rotation */
int egl_color_buffer_set_rotation(void);

/* Symbol: glFogf */
/* Demangled: glFogf */
int glFogf(void);

/* Symbol: glFramebufferTexture */
/* Demangled: glFramebufferTexture */
int glFramebufferTexture(void);

/* Symbol: glDebugMessageInsertKHR */
/* Demangled: glDebugMessageInsertKHR */
int glDebugMessageInsertKHR(void);

/* Symbol: _ZTSNSt3__117bad_function_callE */
/* Demangled: typeinfo name for std::__1::bad_function_call */
extern void* _ZTSNSt3__117bad_function_callE;

/* Symbol: egl_cobj_surface_format_create */
/* Demangled: egl_cobj_surface_format_create */
int egl_cobj_surface_format_create(void);

/* Symbol: glLoadMatrixx */
/* Demangled: glLoadMatrixx */
int glLoadMatrixx(void);

/* Symbol: glDeleteTransformFeedbacks */
/* Demangled: glDeleteTransformFeedbacks */
int glDeleteTransformFeedbacks(void);

/* Symbol: glPauseTransformFeedback */
/* Demangled: glPauseTransformFeedback */
int glPauseTransformFeedback(void);

/* Symbol: glDebugMessageControl */
/* Demangled: glDebugMessageControl */
int glDebugMessageControl(void);

/* Symbol: clEnqueueMarker */
/* Demangled: clEnqueueMarker */
int clEnqueueMarker(void);

/* Symbol: glBlendFuncSeparateiOES */
/* Demangled: glBlendFuncSeparateiOES */
int glBlendFuncSeparateiOES(void);

/* Symbol: osup_thread_data_set */
/* Demangled: osup_thread_data_set */
int osup_thread_data_set(void);

/* Symbol: glTexBufferRangeEXT */
/* Demangled: glTexBufferRangeEXT */
int glTexBufferRangeEXT(void);

/* Symbol: glUniform2iv */
/* Demangled: glUniform2iv */
int glUniform2iv(void);

/* Symbol: eglCreateWindowSurface */
/* Demangled: eglCreateWindowSurface */
int eglCreateWindowSurface(void);

/* Symbol: glGetShaderPrecisionFormat */
/* Demangled: glGetShaderPrecisionFormat */
int glGetShaderPrecisionFormat(void);

/* Symbol: glIsVertexArrayOES */
/* Demangled: glIsVertexArrayOES */
int glIsVertexArrayOES(void);

/* Symbol: clEnqueueFillBuffer */
/* Demangled: clEnqueueFillBuffer */
int clEnqueueFillBuffer(void);

/* Symbol: glMultMatrixx */
/* Demangled: glMultMatrixx */
int glMultMatrixx(void);

/* Symbol: glPolygonOffsetx */
/* Demangled: glPolygonOffsetx */
int glPolygonOffsetx(void);

/* Symbol: glBeginQuery */
/* Demangled: glBeginQuery */
int glBeginQuery(void);

/* Symbol: glProgramUniform2iv */
/* Demangled: glProgramUniform2iv */
int glProgramUniform2iv(void);

/* Symbol: glEGLImageTargetTexStorageEXT */
/* Demangled: glEGLImageTargetTexStorageEXT */
int glEGLImageTargetTexStorageEXT(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: glLightxv */
/* Demangled: glLightxv */
int glLightxv(void);

/* Symbol: glTexStorage3DEXT */
/* Demangled: glTexStorage3DEXT */
int glTexStorage3DEXT(void);

/* Symbol: glGetObjectLabelKHR */
/* Demangled: glGetObjectLabelKHR */
int glGetObjectLabelKHR(void);

/* Symbol: clEnqueueCopyBuffer */
/* Demangled: clEnqueueCopyBuffer */
int clEnqueueCopyBuffer(void);

/* Symbol: glGetProgramiv */
/* Demangled: glGetProgramiv */
int glGetProgramiv(void);

/* Symbol: glBindBuffer */
/* Demangled: glBindBuffer */
int glBindBuffer(void);

/* Symbol: glCheckFramebufferStatusOES */
/* Demangled: glCheckFramebufferStatusOES */
int glCheckFramebufferStatusOES(void);

/* Symbol: glBlendEquationSeparate */
/* Demangled: glBlendEquationSeparate */
int glBlendEquationSeparate(void);

/* Symbol: glTexStorage3DMultisample */
/* Demangled: glTexStorage3DMultisample */
int glTexStorage3DMultisample(void);

/* Symbol: glValidateProgramPipeline */
/* Demangled: glValidateProgramPipeline */
int glValidateProgramPipeline(void);

/* Symbol: egl_color_buffer_group_set_layer */
/* Demangled: egl_color_buffer_group_set_layer */
int egl_color_buffer_group_set_layer(void);

/* Symbol: glGenerateMipmap */
/* Demangled: glGenerateMipmap */
int glGenerateMipmap(void);

/* Symbol: glProgramUniform1f */
/* Demangled: glProgramUniform1f */
int glProgramUniform1f(void);

/* Symbol: glLightx */
/* Demangled: glLightx */
int glLightx(void);

/* Symbol: glGetnUniformuiv */
/* Demangled: glGetnUniformuiv */
int glGetnUniformuiv(void);

/* Symbol: glVertexAttrib2f */
/* Demangled: glVertexAttrib2f */
int glVertexAttrib2f(void);

/* Symbol: glFramebufferTextureOES */
/* Demangled: glFramebufferTextureOES */
int glFramebufferTextureOES(void);

/* Symbol: glColorMask */
/* Demangled: glColorMask */
int glColorMask(void);

/* Symbol: glTexStorage2DEXT */
/* Demangled: glTexStorage2DEXT */
int glTexStorage2DEXT(void);

/* Symbol: egl_display_release */
/* Demangled: egl_display_release */
int egl_display_release(void);

/* Symbol: glAlphaFuncx */
/* Demangled: glAlphaFuncx */
int glAlphaFuncx(void);

/* Symbol: glProgramUniform1i */
/* Demangled: glProgramUniform1i */
int glProgramUniform1i(void);

/* Symbol: glPushDebugGroup */
/* Demangled: glPushDebugGroup */
int glPushDebugGroup(void);

/* Symbol: clCreateImage2D */
/* Demangled: clCreateImage2D */
int clCreateImage2D(void);

/* Symbol: clCreateKernelsInProgram */
/* Demangled: clCreateKernelsInProgram */
int clCreateKernelsInProgram(void);

/* Symbol: clGetKernelInfo */
/* Demangled: clGetKernelInfo */
int clGetKernelInfo(void);

/* Symbol: eglGetSyncAttribKHR */
/* Demangled: eglGetSyncAttribKHR */
int eglGetSyncAttribKHR(void);

/* Symbol: osup_sync_object_term */
/* Demangled: osup_sync_object_term */
int osup_sync_object_term(void);

/* Symbol: glDispatchCompute */
/* Demangled: glDispatchCompute */
int glDispatchCompute(void);

/* Symbol: glGetInternalformativ */
/* Demangled: glGetInternalformativ */
int glGetInternalformativ(void);

/* Symbol: clEnqueueNDRangeKernel */
/* Demangled: clEnqueueNDRangeKernel */
int clEnqueueNDRangeKernel(void);

/* Symbol: glBlendEquationSeparateiOES */
/* Demangled: glBlendEquationSeparateiOES */
int glBlendEquationSeparateiOES(void);

/* Symbol: glGetQueryObjectui64vEXT */
/* Demangled: glGetQueryObjectui64vEXT */
int glGetQueryObjectui64vEXT(void);

/* Symbol: glTexBufferOES */
/* Demangled: glTexBufferOES */
int glTexBufferOES(void);

/* Symbol: clEnqueueMapImage */
/* Demangled: clEnqueueMapImage */
int clEnqueueMapImage(void);

/* Symbol: clReleaseCommandQueue */
/* Demangled: clReleaseCommandQueue */
int clReleaseCommandQueue(void);

/* Symbol: clReleaseSampler */
/* Demangled: clReleaseSampler */
int clReleaseSampler(void);

/* Symbol: config_compatible_with_format */
/* Demangled: config_compatible_with_format */
int config_compatible_with_format(void);

/* Symbol: glCompressedTexImage3DOES */
/* Demangled: glCompressedTexImage3DOES */
int glCompressedTexImage3DOES(void);

/* Symbol: clCreateFromEGLImageKHR */
/* Demangled: clCreateFromEGLImageKHR */
int clCreateFromEGLImageKHR(void);

/* Symbol: clGetMemObjectInfo */
/* Demangled: clGetMemObjectInfo */
int clGetMemObjectInfo(void);

/* Symbol: clReleaseKernel */
/* Demangled: clReleaseKernel */
int clReleaseKernel(void);

/* Symbol: glClearDepthf */
/* Demangled: glClearDepthf */
int glClearDepthf(void);

/* Symbol: vkGetSwapchainGrallocUsage2ANDROID */
/* Demangled: vkGetSwapchainGrallocUsage2ANDROID */
int vkGetSwapchainGrallocUsage2ANDROID(void);

/* Symbol: _ZTINSt3__117bad_function_callE */
/* Demangled: typeinfo for std::__1::bad_function_call */
extern void* _ZTINSt3__117bad_function_callE;

/* Symbol: glColor4f */
/* Demangled: glColor4f */
int glColor4f(void);

/* Symbol: glBindRenderbuffer */
/* Demangled: glBindRenderbuffer */
int glBindRenderbuffer(void);

/* Symbol: glGetTexParameterIuiv */
/* Demangled: glGetTexParameterIuiv */
int glGetTexParameterIuiv(void);

/* Symbol: glDepthMask */
/* Demangled: glDepthMask */
int glDepthMask(void);

/* Symbol: __fixdfdi */
/* Demangled: __fixdfdi */
int __fixdfdi(void);

/* Symbol: glFogx */
/* Demangled: glFogx */
int glFogx(void);

/* Symbol: glDeleteSync */
/* Demangled: glDeleteSync */
int glDeleteSync(void);

/* Symbol: glGetProgramBinaryOES */
/* Demangled: glGetProgramBinaryOES */
int glGetProgramBinaryOES(void);

/* Symbol: glGetShaderiv */
/* Demangled: glGetShaderiv */
int glGetShaderiv(void);

/* Symbol: glFrontFace */
/* Demangled: glFrontFace */
int glFrontFace(void);

/* Symbol: glLightModelf */
/* Demangled: glLightModelf */
int glLightModelf(void);

/* Symbol: glOrthoxOES */
/* Demangled: glOrthoxOES */
int glOrthoxOES(void);

/* Symbol: glBindProgramPipeline */
/* Demangled: glBindProgramPipeline */
int glBindProgramPipeline(void);

/* Symbol: glUniformMatrix2fv */
/* Demangled: glUniformMatrix2fv */
int glUniformMatrix2fv(void);

/* Symbol: eglDestroyContext */
/* Demangled: eglDestroyContext */
int eglDestroyContext(void);

/* Symbol: eglDestroySurface */
/* Demangled: eglDestroySurface */
int eglDestroySurface(void);

/* Symbol: glRenderbufferStorageOES */
/* Demangled: glRenderbufferStorageOES */
int glRenderbufferStorageOES(void);

/* Symbol: glGetError */
/* Demangled: glGetError */
int glGetError(void);

/* Symbol: __fixunssfdi */
/* Demangled: __fixunssfdi */
int __fixunssfdi(void);

/* Symbol: egl_color_buffer_group_get_num_layers */
/* Demangled: egl_color_buffer_group_get_num_layers */
int egl_color_buffer_group_get_num_layers(void);

/* Symbol: glMaterialfv */
/* Demangled: glMaterialfv */
int glMaterialfv(void);

/* Symbol: glClearBufferuiv */
/* Demangled: glClearBufferuiv */
int glClearBufferuiv(void);

/* Symbol: glPatchParameteriEXT */
/* Demangled: glPatchParameteriEXT */
int glPatchParameteriEXT(void);

/* Symbol: glDeleteTextures */
/* Demangled: glDeleteTextures */
int glDeleteTextures(void);

/* Symbol: glMultiTexCoord4bOES */
/* Demangled: glMultiTexCoord4bOES */
int glMultiTexCoord4bOES(void);

/* Symbol: _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: clReleaseMemObject */
/* Demangled: clReleaseMemObject */
int clReleaseMemObject(void);

/* Symbol: egl_color_buffer_get_format */
/* Demangled: egl_color_buffer_get_format */
int egl_color_buffer_get_format(void);

/* Symbol: egl_color_buffer_validate_format */
/* Demangled: egl_color_buffer_validate_format */
int egl_color_buffer_validate_format(void);

/* Symbol: glDrawTexivOES */
/* Demangled: glDrawTexivOES */
int glDrawTexivOES(void);

/* Symbol: glSamplerParameterf */
/* Demangled: glSamplerParameterf */
int glSamplerParameterf(void);

/* Symbol: glBindBufferBase */
/* Demangled: glBindBufferBase */
int glBindBufferBase(void);

/* Symbol: glGetSynciv */
/* Demangled: glGetSynciv */
int glGetSynciv(void);

/* Symbol: glUniform4ui */
/* Demangled: glUniform4ui */
int glUniform4ui(void);

/* Symbol: glTexParameterf */
/* Demangled: glTexParameterf */
int glTexParameterf(void);

/* Symbol: cmpbe_blend_shadergen_generate_shader */
/* Demangled: cmpbe_blend_shadergen_generate_shader */
int cmpbe_blend_shadergen_generate_shader(void);

/* Symbol: glDeleteRenderbuffersOES */
/* Demangled: glDeleteRenderbuffersOES */
int glDeleteRenderbuffersOES(void);

/* Symbol: glVertexBindingDivisor */
/* Demangled: glVertexBindingDivisor */
int glVertexBindingDivisor(void);

/* Symbol: osup_dlclose */
/* Demangled: osup_dlclose */
int osup_dlclose(void);

/* Symbol: clUnloadCompiler */
/* Demangled: clUnloadCompiler */
int clUnloadCompiler(void);

/* Symbol: eglBindAPI */
/* Demangled: eglBindAPI */
int eglBindAPI(void);

/* Symbol: glPolygonOffsetxOES */
/* Demangled: glPolygonOffsetxOES */
int glPolygonOffsetxOES(void);

/* Symbol: glTexGenxOES */
/* Demangled: glTexGenxOES */
int glTexGenxOES(void);

/* Symbol: glProgramUniform4ui */
/* Demangled: glProgramUniform4ui */
int glProgramUniform4ui(void);

/* Symbol: glSamplerParameteri */
/* Demangled: glSamplerParameteri */
int glSamplerParameteri(void);

/* Symbol: clEnqueueUnmapMemObject */
/* Demangled: clEnqueueUnmapMemObject */
int clEnqueueUnmapMemObject(void);

/* Symbol: clSetEventCallback */
/* Demangled: clSetEventCallback */
int clSetEventCallback(void);

/* Symbol: glUseProgram */
/* Demangled: glUseProgram */
int glUseProgram(void);

/* Symbol: glVertexAttribI4ui */
/* Demangled: glVertexAttribI4ui */
int glVertexAttribI4ui(void);

/* Symbol: glTexParameteri */
/* Demangled: glTexParameteri */
int glTexParameteri(void);

/* Symbol: egl_color_buffer_unmap */
/* Demangled: egl_color_buffer_unmap */
int egl_color_buffer_unmap(void);

/* Symbol: glGetQueryivEXT */
/* Demangled: glGetQueryivEXT */
int glGetQueryivEXT(void);

/* Symbol: clEnqueueCopyImageToBuffer */
/* Demangled: clEnqueueCopyImageToBuffer */
int clEnqueueCopyImageToBuffer(void);

/* Symbol: clGetImageInfo */
/* Demangled: clGetImageInfo */
int clGetImageInfo(void);

/* Symbol: clReleaseProgram */
/* Demangled: clReleaseProgram */
int clReleaseProgram(void);

/* Symbol: clSetUserEventStatus */
/* Demangled: clSetUserEventStatus */
int clSetUserEventStatus(void);

/* Symbol: glVertexPointer */
/* Demangled: glVertexPointer */
int glVertexPointer(void);

/* Symbol: glColorMaskiOES */
/* Demangled: glColorMaskiOES */
int glColorMaskiOES(void);

/* Symbol: glGenProgramPipelines */
/* Demangled: glGenProgramPipelines */
int glGenProgramPipelines(void);

/* Symbol: egl_color_buffer_set_transform */
/* Demangled: egl_color_buffer_set_transform */
int egl_color_buffer_set_transform(void);

/* Symbol: eglBindTexImage */
/* Demangled: eglBindTexImage */
int eglBindTexImage(void);

/* Symbol: glGetTexParameterIuivEXT */
/* Demangled: glGetTexParameterIuivEXT */
int glGetTexParameterIuivEXT(void);

/* Symbol: glGetVertexAttribfv */
/* Demangled: glGetVertexAttribfv */
int glGetVertexAttribfv(void);

/* Symbol: glTransformFeedbackVaryings */
/* Demangled: glTransformFeedbackVaryings */
int glTransformFeedbackVaryings(void);

/* Symbol: clCreateProgramWithBuiltInKernels */
/* Demangled: clCreateProgramWithBuiltInKernels */
int clCreateProgramWithBuiltInKernels(void);

/* Symbol: glGetTexEnvxvOES */
/* Demangled: glGetTexEnvxvOES */
int glGetTexEnvxvOES(void);

/* Symbol: glReadPixels */
/* Demangled: glReadPixels */
int glReadPixels(void);

/* Symbol: clGetEventInfo */
/* Demangled: clGetEventInfo */
int clGetEventInfo(void);

/* Symbol: clImportMemoryARM */
/* Demangled: clImportMemoryARM */
int clImportMemoryARM(void);

/* Symbol: glQueryMatrixxOES */
/* Demangled: glQueryMatrixxOES */
int glQueryMatrixxOES(void);

/* Symbol: glCopyTexSubImage3D */
/* Demangled: glCopyTexSubImage3D */
int glCopyTexSubImage3D(void);

/* Symbol: clGetKernelSubGroupInfoKHR */
/* Demangled: clGetKernelSubGroupInfoKHR */
int clGetKernelSubGroupInfoKHR(void);

/* Symbol: clEnqueueSVMMemcpy */
/* Demangled: clEnqueueSVMMemcpy */
int clEnqueueSVMMemcpy(void);

/* Symbol: egl_color_buffer_get_age */
/* Demangled: egl_color_buffer_get_age */
int egl_color_buffer_get_age(void);

/* Symbol: glIsSync */
/* Demangled: glIsSync */
int glIsSync(void);

/* Symbol: osup_thread_callback_unset */
/* Demangled: osup_thread_callback_unset */
int osup_thread_callback_unset(void);

/* Symbol: glClearDepthx */
/* Demangled: glClearDepthx */
int glClearDepthx(void);

/* Symbol: glGetMaterialxvOES */
/* Demangled: glGetMaterialxvOES */
int glGetMaterialxvOES(void);

/* Symbol: glProgramUniformMatrix3fv */
/* Demangled: glProgramUniformMatrix3fv */
int glProgramUniformMatrix3fv(void);

/* Symbol: glGetFloatv */
/* Demangled: glGetFloatv */
int glGetFloatv(void);

/* Symbol: MTK_GetDumpFolder */
/* Demangled: MTK_GetDumpFolder */
int MTK_GetDumpFolder(void);

/* Symbol: glColor4x */
/* Demangled: glColor4x */
int glColor4x(void);

/* Symbol: glEnableiOES */
/* Demangled: glEnableiOES */
int glEnableiOES(void);

/* Symbol: glGetProgramPipelineiv */
/* Demangled: glGetProgramPipelineiv */
int glGetProgramPipelineiv(void);

/* Symbol: eglCreateContext */
/* Demangled: eglCreateContext */
int eglCreateContext(void);

/* Symbol: glDeleteFramebuffersOES */
/* Demangled: glDeleteFramebuffersOES */
int glDeleteFramebuffersOES(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: glClearColorxOES */
/* Demangled: glClearColorxOES */
int glClearColorxOES(void);

/* Symbol: glLightModelx */
/* Demangled: glLightModelx */
int glLightModelx(void);

/* Symbol: osup_thread_getname */
/* Demangled: osup_thread_getname */
int osup_thread_getname(void);

/* Symbol: glDrawTexfvOES */
/* Demangled: glDrawTexfvOES */
int glDrawTexfvOES(void);

/* Symbol: glTranslatef */
/* Demangled: glTranslatef */
int glTranslatef(void);

/* Symbol: glDrawRangeElements */
/* Demangled: glDrawRangeElements */
int glDrawRangeElements(void);

/* Symbol: glTexSubImage2D */
/* Demangled: glTexSubImage2D */
int glTexSubImage2D(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: glGetGraphicsResetStatusKHR */
/* Demangled: glGetGraphicsResetStatusKHR */
int glGetGraphicsResetStatusKHR(void);

/* Symbol: clGetProgramBuildInfo */
/* Demangled: clGetProgramBuildInfo */
int clGetProgramBuildInfo(void);

/* Symbol: clSetMemObjectDestructorCallback */
/* Demangled: clSetMemObjectDestructorCallback */
int clSetMemObjectDestructorCallback(void);

/* Symbol: glTexGenxvOES */
/* Demangled: glTexGenxvOES */
int glTexGenxvOES(void);

/* Symbol: glBindFramebuffer */
/* Demangled: glBindFramebuffer */
int glBindFramebuffer(void);

/* Symbol: glVertexAttribDivisor */
/* Demangled: glVertexAttribDivisor */
int glVertexAttribDivisor(void);

/* Symbol: _essl_set_compiler_option_value */
/* Demangled: _essl_set_compiler_option_value */
int _essl_set_compiler_option_value(void);

/* Symbol: glMapBufferRange */
/* Demangled: glMapBufferRange */
int glMapBufferRange(void);

/* Symbol: __aeabi_f2ulz */
/* Demangled: __aeabi_f2ulz */
int __aeabi_f2ulz(void);

/* Symbol: clCreateCommandQueueWithPropertiesKHR */
/* Demangled: clCreateCommandQueueWithPropertiesKHR */
int clCreateCommandQueueWithPropertiesKHR(void);

/* Symbol: eglp_wait_buffer_displayed */
/* Demangled: eglp_wait_buffer_displayed */
int eglp_wait_buffer_displayed(void);

/* Symbol: glFrustumf */
/* Demangled: glFrustumf */
int glFrustumf(void);

/* Symbol: glTexParameterx */
/* Demangled: glTexParameterx */
int glTexParameterx(void);

/* Symbol: glColorMaski */
/* Demangled: glColorMaski */
int glColorMaski(void);

/* Symbol: glFenceSync */
/* Demangled: glFenceSync */
int glFenceSync(void);

/* Symbol: glGetTexLevelParameterfv */
/* Demangled: glGetTexLevelParameterfv */
int glGetTexLevelParameterfv(void);

/* Symbol: glProgramUniform2f */
/* Demangled: glProgramUniform2f */
int glProgramUniform2f(void);

/* Symbol: glWaitSync */
/* Demangled: glWaitSync */
int glWaitSync(void);

/* Symbol: glPixelStorei */
/* Demangled: glPixelStorei */
int glPixelStorei(void);

/* Symbol: vkQueueSignalReleaseImageANDROID */
/* Demangled: vkQueueSignalReleaseImageANDROID */
int vkQueueSignalReleaseImageANDROID(void);

/* Symbol: osup_thread_create */
/* Demangled: osup_thread_create */
int osup_thread_create(void);

/* Symbol: osup_sync_object_init */
/* Demangled: osup_sync_object_init */
int osup_sync_object_init(void);

/* Symbol: eglp_read_write_buffer */
/* Demangled: eglp_read_write_buffer */
int eglp_read_write_buffer(void);

/* Symbol: glClearDepthxOES */
/* Demangled: glClearDepthxOES */
int glClearDepthxOES(void);

/* Symbol: glCopyBufferSubData */
/* Demangled: glCopyBufferSubData */
int glCopyBufferSubData(void);

/* Symbol: glVertexAttrib3f */
/* Demangled: glVertexAttrib3f */
int glVertexAttrib3f(void);

/* Symbol: _ZTISt12out_of_range */
/* Demangled: typeinfo for std::out_of_range */
extern void* _ZTISt12out_of_range;

/* Symbol: glDebugMessageCallbackKHR */
/* Demangled: glDebugMessageCallbackKHR */
int glDebugMessageCallbackKHR(void);

/* Symbol: glStencilMask */
/* Demangled: glStencilMask */
int glStencilMask(void);

/* Symbol: glProgramUniform2i */
/* Demangled: glProgramUniform2i */
int glProgramUniform2i(void);

/* Symbol: clCreateImage3D */
/* Demangled: clCreateImage3D */
int clCreateImage3D(void);

/* Symbol: glGetTexEnvfv */
/* Demangled: glGetTexEnvfv */
int glGetTexEnvfv(void);

/* Symbol: glBlendFuncSeparate */
/* Demangled: glBlendFuncSeparate */
int glBlendFuncSeparate(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: eglSwapInterval */
/* Demangled: eglSwapInterval */
int eglSwapInterval(void);

/* Symbol: egl_color_buffer_set_non_thread_safe */
/* Demangled: egl_color_buffer_set_non_thread_safe */
int egl_color_buffer_set_non_thread_safe(void);

/* Symbol: glMemoryBarrier */
/* Demangled: glMemoryBarrier */
int glMemoryBarrier(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: glGetRenderbufferParameterivOES */
/* Demangled: glGetRenderbufferParameterivOES */
int glGetRenderbufferParameterivOES(void);

/* Symbol: glMultiTexCoord4b */
/* Demangled: glMultiTexCoord4b */
int glMultiTexCoord4b(void);

/* Symbol: glObjectPtrLabel */
/* Demangled: glObjectPtrLabel */
int glObjectPtrLabel(void);

/* Symbol: glColorPointer */
/* Demangled: glColorPointer */
int glColorPointer(void);

/* Symbol: glDrawRangeElementsBaseVertexEXT */
/* Demangled: glDrawRangeElementsBaseVertexEXT */
int glDrawRangeElementsBaseVertexEXT(void);

/* Symbol: glUniform4fv */
/* Demangled: glUniform4fv */
int glUniform4fv(void);

/* Symbol: egl_color_buffer_set_fence */
/* Demangled: egl_color_buffer_set_fence */
int egl_color_buffer_set_fence(void);

/* Symbol: eglCreateImageKHR */
/* Demangled: eglCreateImageKHR */
int eglCreateImageKHR(void);

/* Symbol: eglQueryDmaBufFormatsEXT */
/* Demangled: eglQueryDmaBufFormatsEXT */
int eglQueryDmaBufFormatsEXT(void);

/* Symbol: eglClientWaitSyncKHR */
/* Demangled: eglClientWaitSyncKHR */
int eglClientWaitSyncKHR(void);

/* Symbol: eglDestroySyncKHR */
/* Demangled: eglDestroySyncKHR */
int eglDestroySyncKHR(void);

/* Symbol: glRotatef */
/* Demangled: glRotatef */
int glRotatef(void);

/* Symbol: glReleaseShaderCompiler */
/* Demangled: glReleaseShaderCompiler */
int glReleaseShaderCompiler(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: osup_sem_timedwait */
/* Demangled: osup_sem_timedwait */
int osup_sem_timedwait(void);

/* Symbol: glLineWidthx */
/* Demangled: glLineWidthx */
int glLineWidthx(void);

/* Symbol: glProgramUniform4fv */
/* Demangled: glProgramUniform4fv */
int glProgramUniform4fv(void);

/* Symbol: glFramebufferTexture2DMultisampleEXT */
/* Demangled: glFramebufferTexture2DMultisampleEXT */
int glFramebufferTexture2DMultisampleEXT(void);

/* Symbol: glGetBooleanv */
/* Demangled: glGetBooleanv */
int glGetBooleanv(void);

/* Symbol: glGetPointervKHR */
/* Demangled: glGetPointervKHR */
int glGetPointervKHR(void);

/* Symbol: clRetainDevice */
/* Demangled: clRetainDevice */
int clRetainDevice(void);

/* Symbol: clWaitForEvents */
/* Demangled: clWaitForEvents */
int clWaitForEvents(void);

/* Symbol: eglQueryAPI */
/* Demangled: eglQueryAPI */
int eglQueryAPI(void);

/* Symbol: glGenFramebuffersOES */
/* Demangled: glGenFramebuffersOES */
int glGenFramebuffersOES(void);

/* Symbol: glMultiTexCoord4f */
/* Demangled: glMultiTexCoord4f */
int glMultiTexCoord4f(void);

/* Symbol: glHint */
/* Demangled: glHint */
int glHint(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: clGetEventProfilingInfo */
/* Demangled: clGetEventProfilingInfo */
int clGetEventProfilingInfo(void);

/* Symbol: osup_sync_object_wait */
/* Demangled: osup_sync_object_wait */
int osup_sync_object_wait(void);

/* Symbol: glSampleCoveragex */
/* Demangled: glSampleCoveragex */
int glSampleCoveragex(void);

/* Symbol: _Z20MTK_getThreadCmdlinePci */
/* Demangled: MTK_getThreadCmdline(char*, int) */
int _Z20MTK_getThreadCmdlinePci(void);

/* Symbol: clLinkProgram */
/* Demangled: clLinkProgram */
int clLinkProgram(void);

/* Symbol: eglCreatePbufferFromClientBuffer */
/* Demangled: eglCreatePbufferFromClientBuffer */
int eglCreatePbufferFromClientBuffer(void);

/* Symbol: glFogfv */
/* Demangled: glFogfv */
int glFogfv(void);

/* Symbol: glTranslatex */
/* Demangled: glTranslatex */
int glTranslatex(void);

/* Symbol: glGetVertexAttribIiv */
/* Demangled: glGetVertexAttribIiv */
int glGetVertexAttribIiv(void);

/* Symbol: glDepthRangef */
/* Demangled: glDepthRangef */
int glDepthRangef(void);

/* Symbol: egl_color_buffer_group_create */
/* Demangled: egl_color_buffer_group_create */
int egl_color_buffer_group_create(void);

/* Symbol: glFogxOES */
/* Demangled: glFogxOES */
int glFogxOES(void);

/* Symbol: glGenSamplers */
/* Demangled: glGenSamplers */
int glGenSamplers(void);

/* Symbol: clCreateSampler */
/* Demangled: clCreateSampler */
int clCreateSampler(void);

/* Symbol: glGenFramebuffers */
/* Demangled: glGenFramebuffers */
int glGenFramebuffers(void);

/* Symbol: glLineWidth */
/* Demangled: glLineWidth */
int glLineWidth(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: glGetUniformiv */
/* Demangled: glGetUniformiv */
int glGetUniformiv(void);

/* Symbol: glSampleMaski */
/* Demangled: glSampleMaski */
int glSampleMaski(void);

/* Symbol: glUniform1ui */
/* Demangled: glUniform1ui */
int glUniform1ui(void);

/* Symbol: clFlush */
/* Demangled: clFlush */
int clFlush(void);

/* Symbol: glFrustumx */
/* Demangled: glFrustumx */
int glFrustumx(void);

/* Symbol: glGenRenderbuffersOES */
/* Demangled: glGenRenderbuffersOES */
int glGenRenderbuffersOES(void);

/* Symbol: glGetFramebufferAttachmentParameteriv */
/* Demangled: glGetFramebufferAttachmentParameteriv */
int glGetFramebufferAttachmentParameteriv(void);

/* Symbol: glProgramUniformMatrix4x3fv */
/* Demangled: glProgramUniformMatrix4x3fv */
int glProgramUniformMatrix4x3fv(void);

/* Symbol: stdlibp_neon_f32x16_to_f16x16 */
/* Demangled: stdlibp_neon_f32x16_to_f16x16 */
int stdlibp_neon_f32x16_to_f16x16(void);

/* Symbol: glPointParameterfv */
/* Demangled: glPointParameterfv */
int glPointParameterfv(void);

/* Symbol: glPointSize */
/* Demangled: glPointSize */
int glPointSize(void);

/* Symbol: glCreateShader */
/* Demangled: glCreateShader */
int glCreateShader(void);

/* Symbol: glProgramUniform1ui */
/* Demangled: glProgramUniform1ui */
int glProgramUniform1ui(void);

/* Symbol: glUniform3uiv */
/* Demangled: glUniform3uiv */
int glUniform3uiv(void);

/* Symbol: glBlendBarrierKHR */
/* Demangled: glBlendBarrierKHR */
int glBlendBarrierKHR(void);

/* Symbol: clSVMFree */
/* Demangled: clSVMFree */
int clSVMFree(void);

/* Symbol: egl_color_buffer_wrap_external_planar */
/* Demangled: egl_color_buffer_wrap_external_planar */
int egl_color_buffer_wrap_external_planar(void);

/* Symbol: eglMakeCurrent */
/* Demangled: eglMakeCurrent */
int eglMakeCurrent(void);

/* Symbol: glUseProgramStages */
/* Demangled: glUseProgramStages */
int glUseProgramStages(void);

/* Symbol: glDrawArraysInstanced */
/* Demangled: glDrawArraysInstanced */
int glDrawArraysInstanced(void);

/* Symbol: glProgramUniform3uiv */
/* Demangled: glProgramUniform3uiv */
int glProgramUniform3uiv(void);

/* Symbol: glUniformMatrix4x2fv */
/* Demangled: glUniformMatrix4x2fv */
int glUniformMatrix4x2fv(void);

/* Symbol: _Z17getProcessCmdlinev */
/* Demangled: getProcessCmdline() */
int _Z17getProcessCmdlinev(void);

/* Symbol: clGetPlatformInfo */
/* Demangled: clGetPlatformInfo */
int clGetPlatformInfo(void);

/* Symbol: egl_winsys_get_implementation */
/* Demangled: egl_winsys_get_implementation */
int egl_winsys_get_implementation(void);

/* Symbol: glLightModelfv */
/* Demangled: glLightModelfv */
int glLightModelfv(void);

/* Symbol: glPointParameterf */
/* Demangled: glPointParameterf */
int glPointParameterf(void);

/* Symbol: glGetSamplerParameterIuivEXT */
/* Demangled: glGetSamplerParameterIuivEXT */
int glGetSamplerParameterIuivEXT(void);

/* Symbol: glGetShaderInfoLog */
/* Demangled: glGetShaderInfoLog */
int glGetShaderInfoLog(void);

/* Symbol: clEnqueueSVMMap */
/* Demangled: clEnqueueSVMMap */
int clEnqueueSVMMap(void);

/* Symbol: glDrawTexxOES */
/* Demangled: glDrawTexxOES */
int glDrawTexxOES(void);

/* Symbol: eglCreateSyncKHR */
/* Demangled: eglCreateSyncKHR */
int eglCreateSyncKHR(void);

/* Symbol: clCreateSubBuffer */
/* Demangled: clCreateSubBuffer */
int clCreateSubBuffer(void);

/* Symbol: clEnqueueReadBufferRect */
/* Demangled: clEnqueueReadBufferRect */
int clEnqueueReadBufferRect(void);

/* Symbol: egl_color_buffer_get_non_thread_safe */
/* Demangled: egl_color_buffer_get_non_thread_safe */
int egl_color_buffer_get_non_thread_safe(void);

/* Symbol: glGetTexParameterIiv */
/* Demangled: glGetTexParameterIiv */
int glGetTexParameterIiv(void);

/* Symbol: glSamplerParameterIivEXT */
/* Demangled: glSamplerParameterIivEXT */
int glSamplerParameterIivEXT(void);

/* Symbol: glUniformMatrix3x2fv */
/* Demangled: glUniformMatrix3x2fv */
int glUniformMatrix3x2fv(void);

/* Symbol: clReleaseEvent */
/* Demangled: clReleaseEvent */
int clReleaseEvent(void);

/* Symbol: glRotatex */
/* Demangled: glRotatex */
int glRotatex(void);

/* Symbol: glCopyImageSubDataOES */
/* Demangled: glCopyImageSubDataOES */
int glCopyImageSubDataOES(void);

/* Symbol: glDrawElementsBaseVertexOES */
/* Demangled: glDrawElementsBaseVertexOES */
int glDrawElementsBaseVertexOES(void);

/* Symbol: glIsEnablediEXT */
/* Demangled: glIsEnablediEXT */
int glIsEnablediEXT(void);

/* Symbol: glUniform1uiv */
/* Demangled: glUniform1uiv */
int glUniform1uiv(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: clCreatePipe */
/* Demangled: clCreatePipe */
int clCreatePipe(void);

/* Symbol: eglCreatePbufferSurface */
/* Demangled: eglCreatePbufferSurface */
int eglCreatePbufferSurface(void);

/* Symbol: glTexEnvxv */
/* Demangled: glTexEnvxv */
int glTexEnvxv(void);

/* Symbol: glGetProgramInfoLog */
/* Demangled: glGetProgramInfoLog */
int glGetProgramInfoLog(void);

/* Symbol: glProgramUniformMatrix2x3fv */
/* Demangled: glProgramUniformMatrix2x3fv */
int glProgramUniformMatrix2x3fv(void);

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: glMultiTexCoord4x */
/* Demangled: glMultiTexCoord4x */
int glMultiTexCoord4x(void);

/* Symbol: glBlendFunciEXT */
/* Demangled: glBlendFunciEXT */
int glBlendFunciEXT(void);

/* Symbol: glProgramUniform1uiv */
/* Demangled: glProgramUniform1uiv */
int glProgramUniform1uiv(void);

/* Symbol: glSamplerParameterfv */
/* Demangled: glSamplerParameterfv */
int glSamplerParameterfv(void);

/* Symbol: glTexSubImage3D */
/* Demangled: glTexSubImage3D */
int glTexSubImage3D(void);

/* Symbol: clCloneKernel */
/* Demangled: clCloneKernel */
int clCloneKernel(void);

/* Symbol: glVertexAttrib2fv */
/* Demangled: glVertexAttrib2fv */
int glVertexAttrib2fv(void);

/* Symbol: glDisable */
/* Demangled: glDisable */
int glDisable(void);

/* Symbol: clCompileProgram */
/* Demangled: clCompileProgram */
int clCompileProgram(void);

/* Symbol: clRetainEvent */
/* Demangled: clRetainEvent */
int clRetainEvent(void);

/* Symbol: glGetMaterialfv */
/* Demangled: glGetMaterialfv */
int glGetMaterialfv(void);

/* Symbol: glGetnUniformuivKHR */
/* Demangled: glGetnUniformuivKHR */
int glGetnUniformuivKHR(void);

/* Symbol: glVertexAttribFormat */
/* Demangled: glVertexAttribFormat */
int glVertexAttribFormat(void);

/* Symbol: clCreateBuffer */
/* Demangled: clCreateBuffer */
int clCreateBuffer(void);

/* Symbol: clGetCommandQueueInfo */
/* Demangled: clGetCommandQueueInfo */
int clGetCommandQueueInfo(void);

/* Symbol: glDepthRangex */
/* Demangled: glDepthRangex */
int glDepthRangex(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: glGetQueryiv */
/* Demangled: glGetQueryiv */
int glGetQueryiv(void);

/* Symbol: glProgramUniform3f */
/* Demangled: glProgramUniform3f */
int glProgramUniform3f(void);

/* Symbol: clGetDeviceAndHostTimer */
/* Demangled: clGetDeviceAndHostTimer */
int clGetDeviceAndHostTimer(void);

/* Symbol: eglp_find_unterminated_state */
/* Demangled: eglp_find_unterminated_state */
int eglp_find_unterminated_state(void);

/* Symbol: glPopMatrix */
/* Demangled: glPopMatrix */
int glPopMatrix(void);

/* Symbol: glUniform3iv */
/* Demangled: glUniform3iv */
int glUniform3iv(void);

/* Symbol: glVertexAttrib4f */
/* Demangled: glVertexAttrib4f */
int glVertexAttrib4f(void);

/* Symbol: stdlibp_neon_f32x4_to_f16x4 */
/* Demangled: stdlibp_neon_f32x4_to_f16x4 */
int stdlibp_neon_f32x4_to_f16x4(void);

/* Symbol: _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: glDepthRangexOES */
/* Demangled: glDepthRangexOES */
int glDepthRangexOES(void);

/* Symbol: glGetFramebufferParameteriv */
/* Demangled: glGetFramebufferParameteriv */
int glGetFramebufferParameteriv(void);

/* Symbol: glTexParameterIivEXT */
/* Demangled: glTexParameterIivEXT */
int glTexParameterIivEXT(void);

/* Symbol: osup_mutex_unlock */
/* Demangled: osup_mutex_unlock */
int osup_mutex_unlock(void);

/* Symbol: glBlendEquationi */
/* Demangled: glBlendEquationi */
int glBlendEquationi(void);

/* Symbol: glBlitFramebuffer */
/* Demangled: glBlitFramebuffer */
int glBlitFramebuffer(void);

/* Symbol: glProgramUniform3i */
/* Demangled: glProgramUniform3i */
int glProgramUniform3i(void);

/* Symbol: glProgramUniform3iv */
/* Demangled: glProgramUniform3iv */
int glProgramUniform3iv(void);

/* Symbol: glBlendBarrier */
/* Demangled: glBlendBarrier */
int glBlendBarrier(void);

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: clGetHostTimer */
/* Demangled: clGetHostTimer */
int clGetHostTimer(void);

/* Symbol: eglSwapBuffers */
/* Demangled: eglSwapBuffers */
int eglSwapBuffers(void);

/* Symbol: eglp_check_attribute_present */
/* Demangled: eglp_check_attribute_present */
int eglp_check_attribute_present(void);

/* Symbol: egl_surface_release */
/* Demangled: egl_surface_release */
int egl_surface_release(void);

/* Symbol: glFogxvOES */
/* Demangled: glFogxvOES */
int glFogxvOES(void);

/* Symbol: glGetProgramResourceiv */
/* Demangled: glGetProgramResourceiv */
int glGetProgramResourceiv(void);

/* Symbol: glMinSampleShadingOES */
/* Demangled: glMinSampleShadingOES */
int glMinSampleShadingOES(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: osup_register_unload_callback */
/* Demangled: osup_register_unload_callback */
int osup_register_unload_callback(void);

/* Symbol: egl_color_buffer_retain */
/* Demangled: egl_color_buffer_retain */
int egl_color_buffer_retain(void);

/* Symbol: glTexSubImage3DOES */
/* Demangled: glTexSubImage3DOES */
int glTexSubImage3DOES(void);

/* Symbol: glDeleteBuffers */
/* Demangled: glDeleteBuffers */
int glDeleteBuffers(void);

/* Symbol: egl_color_buffer_group_free */
/* Demangled: egl_color_buffer_group_free */
int egl_color_buffer_group_free(void);

/* Symbol: glPrimitiveBoundingBoxOES */
/* Demangled: glPrimitiveBoundingBoxOES */
int glPrimitiveBoundingBoxOES(void);

/* Symbol: glBufferSubData */
/* Demangled: glBufferSubData */
int glBufferSubData(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: clEnqueueAcquireEGLObjectsKHR */
/* Demangled: clEnqueueAcquireEGLObjectsKHR */
int clEnqueueAcquireEGLObjectsKHR(void);

/* Symbol: glPointParameterx */
/* Demangled: glPointParameterx */
int glPointParameterx(void);

/* Symbol: glTexEnviv */
/* Demangled: glTexEnviv */
int glTexEnviv(void);

/* Symbol: cmpbe_v2_compile_multiple_shaders */
/* Demangled: cmpbe_v2_compile_multiple_shaders */
int cmpbe_v2_compile_multiple_shaders(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: eglGetConfigs */
/* Demangled: eglGetConfigs */
int eglGetConfigs(void);

/* Symbol: glTexParameterIiv */
/* Demangled: glTexParameterIiv */
int glTexParameterIiv(void);

/* Symbol: __fixsfdi */
/* Demangled: __fixsfdi */
int __fixsfdi(void);

/* Symbol: clCreateUserEvent */
/* Demangled: clCreateUserEvent */
int clCreateUserEvent(void);

/* Symbol: clEnqueueCopyBufferRect */
/* Demangled: clEnqueueCopyBufferRect */
int clEnqueueCopyBufferRect(void);

/* Symbol: glUniform1fv */
/* Demangled: glUniform1fv */
int glUniform1fv(void);

/* Symbol: eglReleaseThread */
/* Demangled: eglReleaseThread */
int eglReleaseThread(void);

/* Symbol: glGetTexGenxvOES */
/* Demangled: glGetTexGenxvOES */
int glGetTexGenxvOES(void);

/* Symbol: glMultMatrixxOES */
/* Demangled: glMultMatrixxOES */
int glMultMatrixxOES(void);

/* Symbol: glGetActiveAttrib */
/* Demangled: glGetActiveAttrib */
int glGetActiveAttrib(void);

/* Symbol: glProgramUniform1fv */
/* Demangled: glProgramUniform1fv */
int glProgramUniform1fv(void);

/* Symbol: glGetPointerv */
/* Demangled: glGetPointerv */
int glGetPointerv(void);

/* Symbol: g_counting_index_in */
/* Demangled: g_counting_index_in */
extern void* g_counting_index_in;

/* Symbol: glDrawElementsBaseVertex */
/* Demangled: glDrawElementsBaseVertex */
int glDrawElementsBaseVertex(void);

/* Symbol: glLinkProgram */
/* Demangled: glLinkProgram */
int glLinkProgram(void);

/* Symbol: glVertexAttribI4i */
/* Demangled: glVertexAttribI4i */
int glVertexAttribI4i(void);

/* Symbol: glEndQuery */
/* Demangled: glEndQuery */
int glEndQuery(void);

/* Symbol: glGetSamplerParameterfv */
/* Demangled: glGetSamplerParameterfv */
int glGetSamplerParameterfv(void);

/* Symbol: clEnqueueReleaseEGLObjectsKHR */
/* Demangled: clEnqueueReleaseEGLObjectsKHR */
int clEnqueueReleaseEGLObjectsKHR(void);

/* Symbol: glLightModelxvOES */
/* Demangled: glLightModelxvOES */
int glLightModelxvOES(void);

/* Symbol: glEnablei */
/* Demangled: glEnablei */
int glEnablei(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: clRetainSampler */
/* Demangled: clRetainSampler */
int clRetainSampler(void);

/* Symbol: glOrthofOES */
/* Demangled: glOrthofOES */
int glOrthofOES(void);

/* Symbol: glDebugMessageInsert */
/* Demangled: glDebugMessageInsert */
int glDebugMessageInsert(void);

/* Symbol: glMapBufferOES */
/* Demangled: glMapBufferOES */
int glMapBufferOES(void);

/* Symbol: glUniformMatrix3fv */
/* Demangled: glUniformMatrix3fv */
int glUniformMatrix3fv(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: cmpbe_v2_deserialize_MBS2_to_C */
/* Demangled: cmpbe_v2_deserialize_MBS2_to_C */
int cmpbe_v2_deserialize_MBS2_to_C(void);

/* Symbol: osup_dlsym */
/* Demangled: osup_dlsym */
int osup_dlsym(void);

/* Symbol: clCreateContextFromType */
/* Demangled: clCreateContextFromType */
int clCreateContextFromType(void);

/* Symbol: eglInitialize */
/* Demangled: eglInitialize */
int eglInitialize(void);

/* Symbol: eglGetConfigAttrib */
/* Demangled: eglGetConfigAttrib */
int eglGetConfigAttrib(void);

/* Symbol: glLogicOp */
/* Demangled: glLogicOp */
int glLogicOp(void);

/* Symbol: glGetTexParameterIivEXT */
/* Demangled: glGetTexParameterIivEXT */
int glGetTexParameterIivEXT(void);

/* Symbol: MTK_ATRACE_COUNTER */
/* Demangled: MTK_ATRACE_COUNTER */
int MTK_ATRACE_COUNTER(void);

/* Symbol: osup_spinlock_unlock */
/* Demangled: osup_spinlock_unlock */
int osup_spinlock_unlock(void);

/* Symbol: glShadeModel */
/* Demangled: glShadeModel */
int glShadeModel(void);

/* Symbol: glDrawElementsInstanced */
/* Demangled: glDrawElementsInstanced */
int glDrawElementsInstanced(void);

/* Symbol: glGetActiveUniformBlockiv */
/* Demangled: glGetActiveUniformBlockiv */
int glGetActiveUniformBlockiv(void);

/* Symbol: glInvalidateFramebuffer */
/* Demangled: glInvalidateFramebuffer */
int glInvalidateFramebuffer(void);

/* Symbol: glGetDebugMessageLog */
/* Demangled: glGetDebugMessageLog */
int glGetDebugMessageLog(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: clCreateProgramWithBinary */
/* Demangled: clCreateProgramWithBinary */
int clCreateProgramWithBinary(void);

/* Symbol: eglWaitClient */
/* Demangled: eglWaitClient */
int eglWaitClient(void);

/* Symbol: glLightxvOES */
/* Demangled: glLightxvOES */
int glLightxvOES(void);

/* Symbol: glSampleCoveragexOES */
/* Demangled: glSampleCoveragexOES */
int glSampleCoveragexOES(void);

/* Symbol: glTexGenfOES */
/* Demangled: glTexGenfOES */
int glTexGenfOES(void);

/* Symbol: glGetInteger64i_v */
/* Demangled: glGetInteger64i_v */
int glGetInteger64i_v(void);

/* Symbol: glGetProgramResourceIndex */
/* Demangled: glGetProgramResourceIndex */
int glGetProgramResourceIndex(void);

/* Symbol: glGenVertexArrays */
/* Demangled: glGenVertexArrays */
int glGenVertexArrays(void);

/* Symbol: clCreateCommandQueueWithProperties */
/* Demangled: clCreateCommandQueueWithProperties */
int clCreateCommandQueueWithProperties(void);

/* Symbol: eglp_get_attribute_value */
/* Demangled: eglp_get_attribute_value */
int eglp_get_attribute_value(void);

/* Symbol: glGetObjectPtrLabel */
/* Demangled: glGetObjectPtrLabel */
int glGetObjectPtrLabel(void);

/* Symbol: MTK_CheckThreadName */
/* Demangled: MTK_CheckThreadName */
int MTK_CheckThreadName(void);

/* Symbol: osup_get_number_of_cpu_cores */
/* Demangled: osup_get_number_of_cpu_cores */
int osup_get_number_of_cpu_cores(void);

/* Symbol: clGetProgramInfo */
/* Demangled: clGetProgramInfo */
int clGetProgramInfo(void);

/* Symbol: glCurrentPaletteMatrixOES */
/* Demangled: glCurrentPaletteMatrixOES */
int glCurrentPaletteMatrixOES(void);

/* Symbol: clCreateImage */
/* Demangled: clCreateImage */
int clCreateImage(void);

/* Symbol: clEnqueueCopyBufferToImage */
/* Demangled: clEnqueueCopyBufferToImage */
int clEnqueueCopyBufferToImage(void);

/* Symbol: eglSetDamageRegionKHR */
/* Demangled: eglSetDamageRegionKHR */
int eglSetDamageRegionKHR(void);

/* Symbol: glBlendEquation */
/* Demangled: glBlendEquation */
int glBlendEquation(void);

/* Symbol: glGetSamplerParameterIiv */
/* Demangled: glGetSamplerParameterIiv */
int glGetSamplerParameterIiv(void);

/* Symbol: clEnqueueWriteImage */
/* Demangled: clEnqueueWriteImage */
int clEnqueueWriteImage(void);

/* Symbol: glCopyImageSubData */
/* Demangled: glCopyImageSubData */
int glCopyImageSubData(void);

/* Symbol: glRenderbufferStorageMultisample */
/* Demangled: glRenderbufferStorageMultisample */
int glRenderbufferStorageMultisample(void);

/* Symbol: glEGLImageTargetTexture2DOES */
/* Demangled: glEGLImageTargetTexture2DOES */
int glEGLImageTargetTexture2DOES(void);

/* Symbol: glTexParameterfv */
/* Demangled: glTexParameterfv */
int glTexParameterfv(void);

/* Symbol: mali_egl_surface_get_front_buffer_rendering_supported */
/* Demangled: mali_egl_surface_get_front_buffer_rendering_supported */
int mali_egl_surface_get_front_buffer_rendering_supported(void);

/* Symbol: glBlendFunci */
/* Demangled: glBlendFunci */
int glBlendFunci(void);

/* Symbol: glEnableVertexAttribArray */
/* Demangled: glEnableVertexAttribArray */
int glEnableVertexAttribArray(void);

/* Symbol: glGenQueries */
/* Demangled: glGenQueries */
int glGenQueries(void);

/* Symbol: glGetProgramInterfaceiv */
/* Demangled: glGetProgramInterfaceiv */
int glGetProgramInterfaceiv(void);

/* Symbol: glGetUniformuiv */
/* Demangled: glGetUniformuiv */
int glGetUniformuiv(void);

/* Symbol: egl_color_buffer_group_get_layer */
/* Demangled: egl_color_buffer_group_get_layer */
int egl_color_buffer_group_get_layer(void);

/* Symbol: glTexBufferRangeOES */
/* Demangled: glTexBufferRangeOES */
int glTexBufferRangeOES(void);

/* Symbol: egl_color_buffer_rgb_format_get_bpp */
/* Demangled: egl_color_buffer_rgb_format_get_bpp */
int egl_color_buffer_rgb_format_get_bpp(void);

/* Symbol: osup_thread_setdeferrability */
/* Demangled: osup_thread_setdeferrability */
int osup_thread_setdeferrability(void);

/* Symbol: glFinish */
/* Demangled: glFinish */
int glFinish(void);

/* Symbol: glGetClipPlanexOES */
/* Demangled: glGetClipPlanexOES */
int glGetClipPlanexOES(void);

/* Symbol: glMaterialxv */
/* Demangled: glMaterialxv */
int glMaterialxv(void);

/* Symbol: glGetAttribLocation */
/* Demangled: glGetAttribLocation */
int glGetAttribLocation(void);

/* Symbol: glProgramUniformMatrix4fv */
/* Demangled: glProgramUniformMatrix4fv */
int glProgramUniformMatrix4fv(void);

/* Symbol: glActiveTexture */
/* Demangled: glActiveTexture */
int glActiveTexture(void);

/* Symbol: glFlush */
/* Demangled: glFlush */
int glFlush(void);

/* Symbol: glColor4xOES */
/* Demangled: glColor4xOES */
int glColor4xOES(void);

/* Symbol: glFlushMappedBufferRange */
/* Demangled: glFlushMappedBufferRange */
int glFlushMappedBufferRange(void);

/* Symbol: glProgramUniform4f */
/* Demangled: glProgramUniform4f */
int glProgramUniform4f(void);

/* Symbol: glTexBufferRange */
/* Demangled: glTexBufferRange */
int glTexBufferRange(void);

/* Symbol: glBufferData */
/* Demangled: glBufferData */
int glBufferData(void);

/* Symbol: clEnqueueWriteBuffer */
/* Demangled: clEnqueueWriteBuffer */
int clEnqueueWriteBuffer(void);

/* Symbol: clEnqueueWriteBufferRect */
/* Demangled: clEnqueueWriteBufferRect */
int clEnqueueWriteBufferRect(void);

/* Symbol: eglp_has_display_terminated */
/* Demangled: eglp_has_display_terminated */
int eglp_has_display_terminated(void);

/* Symbol: egl_get_winsys_display */
/* Demangled: egl_get_winsys_display */
int egl_get_winsys_display(void);

/* Symbol: glMemoryBarrierByRegion */
/* Demangled: glMemoryBarrierByRegion */
int glMemoryBarrierByRegion(void);

/* Symbol: glVertexAttribPointer */
/* Demangled: glVertexAttribPointer */
int glVertexAttribPointer(void);

/* Symbol: eglGetCurrentDisplay */
/* Demangled: eglGetCurrentDisplay */
int eglGetCurrentDisplay(void);

/* Symbol: glBindRenderbufferOES */
/* Demangled: glBindRenderbufferOES */
int glBindRenderbufferOES(void);

/* Symbol: glMaterialxvOES */
/* Demangled: glMaterialxvOES */
int glMaterialxvOES(void);

/* Symbol: glBeginTransformFeedback */
/* Demangled: glBeginTransformFeedback */
int glBeginTransformFeedback(void);

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: glPushMatrix */
/* Demangled: glPushMatrix */
int glPushMatrix(void);

/* Symbol: glBlendEquationiEXT */
/* Demangled: glBlendEquationiEXT */
int glBlendEquationiEXT(void);

/* Symbol: glClientWaitSync */
/* Demangled: glClientWaitSync */
int glClientWaitSync(void);

/* Symbol: glGetVertexAttribPointerv */
/* Demangled: glGetVertexAttribPointerv */
int glGetVertexAttribPointerv(void);

/* Symbol: glProgramUniform4i */
/* Demangled: glProgramUniform4i */
int glProgramUniform4i(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: eglQueryContext */
/* Demangled: eglQueryContext */
int eglQueryContext(void);

/* Symbol: glCopyTexSubImage3DOES */
/* Demangled: glCopyTexSubImage3DOES */
int glCopyTexSubImage3DOES(void);

/* Symbol: glDrawElementsIndirect */
/* Demangled: glDrawElementsIndirect */
int glDrawElementsIndirect(void);

/* Symbol: glIsQueryEXT */
/* Demangled: glIsQueryEXT */
int glIsQueryEXT(void);

/* Symbol: glGetString */
/* Demangled: glGetString */
int glGetString(void);

/* Symbol: glObjectLabel */
/* Demangled: glObjectLabel */
int glObjectLabel(void);

/* Symbol: clRetainKernel */
/* Demangled: clRetainKernel */
int clRetainKernel(void);

/* Symbol: glRotatexOES */
/* Demangled: glRotatexOES */
int glRotatexOES(void);

/* Symbol: glClearDepthfOES */
/* Demangled: glClearDepthfOES */
int glClearDepthfOES(void);

/* Symbol: glTexGenivOES */
/* Demangled: glTexGenivOES */
int glTexGenivOES(void);

/* Symbol: glDrawRangeElementsBaseVertex */
/* Demangled: glDrawRangeElementsBaseVertex */
int glDrawRangeElementsBaseVertex(void);

/* Symbol: glCompressedTexImage2D */
/* Demangled: glCompressedTexImage2D */
int glCompressedTexImage2D(void);

/* Symbol: glStencilOpSeparate */
/* Demangled: glStencilOpSeparate */
int glStencilOpSeparate(void);

/* Symbol: glBlendFuncSeparatei */
/* Demangled: glBlendFuncSeparatei */
int glBlendFuncSeparatei(void);

/* Symbol: glGetQueryObjectivEXT */
/* Demangled: glGetQueryObjectivEXT */
int glGetQueryObjectivEXT(void);

/* Symbol: _Z21MTK_getProcessCmdlinePci */
/* Demangled: MTK_getProcessCmdline(char*, int) */
int _Z21MTK_getProcessCmdlinePci(void);

/* Symbol: egl_color_buffer_get_width */
/* Demangled: egl_color_buffer_get_width */
int egl_color_buffer_get_width(void);

/* Symbol: eglChooseConfig */
/* Demangled: eglChooseConfig */
int eglChooseConfig(void);

/* Symbol: osup_d_mutex_term */
/* Demangled: osup_d_mutex_term */
int osup_d_mutex_term(void);

/* Symbol: clCreateProgramWithSource */
/* Demangled: clCreateProgramWithSource */
int clCreateProgramWithSource(void);

/* Symbol: glGenQueriesEXT */
/* Demangled: glGenQueriesEXT */
int glGenQueriesEXT(void);

/* Symbol: glTexStorage2DMultisample */
/* Demangled: glTexStorage2DMultisample */
int glTexStorage2DMultisample(void);

/* Symbol: glIsVertexArray */
/* Demangled: glIsVertexArray */
int glIsVertexArray(void);

/* Symbol: glUniformBlockBinding */
/* Demangled: glUniformBlockBinding */
int glUniformBlockBinding(void);

/* Symbol: glGetGraphicsResetStatus */
/* Demangled: glGetGraphicsResetStatus */
int glGetGraphicsResetStatus(void);

/* Symbol: clRetainProgram */
/* Demangled: clRetainProgram */
int clRetainProgram(void);

/* Symbol: mali_egl_image_get_buffer_ext_type */
/* Demangled: mali_egl_image_get_buffer_ext_type */
int mali_egl_image_get_buffer_ext_type(void);

/* Symbol: glGetnUniformivKHR */
/* Demangled: glGetnUniformivKHR */
int glGetnUniformivKHR(void);

/* Symbol: glGetUniformBlockIndex */
/* Demangled: glGetUniformBlockIndex */
int glGetUniformBlockIndex(void);

/* Symbol: glPatchParameteriOES */
/* Demangled: glPatchParameteriOES */
int glPatchParameteriOES(void);

/* Symbol: glBlendFunc */
/* Demangled: glBlendFunc */
int glBlendFunc(void);

/* Symbol: stdlibp_neon_soft_f32_to_f16 */
/* Demangled: stdlibp_neon_soft_f32_to_f16 */
int stdlibp_neon_soft_f32_to_f16(void);

/* Symbol: clEnqueueSVMMemFill */
/* Demangled: clEnqueueSVMMemFill */
int clEnqueueSVMMemFill(void);

/* Symbol: egl_color_buffer_get_crop_rectangle */
/* Demangled: egl_color_buffer_get_crop_rectangle */
int egl_color_buffer_get_crop_rectangle(void);

/* Symbol: glOrthof */
/* Demangled: glOrthof */
int glOrthof(void);

/* Symbol: glClearBufferfi */
/* Demangled: glClearBufferfi */
int glClearBufferfi(void);

/* Symbol: glMinSampleShading */
/* Demangled: glMinSampleShading */
int glMinSampleShading(void);

/* Symbol: glGetObjectPtrLabelKHR */
/* Demangled: glGetObjectPtrLabelKHR */
int glGetObjectPtrLabelKHR(void);

/* Symbol: cmpbe_v2_free_compilation_result */
/* Demangled: cmpbe_v2_free_compilation_result */
int cmpbe_v2_free_compilation_result(void);

/* Symbol: eglWaitGL */
/* Demangled: eglWaitGL */
int eglWaitGL(void);

/* Symbol: glStencilMaskSeparate */
/* Demangled: glStencilMaskSeparate */
int glStencilMaskSeparate(void);

/* Symbol: egl_color_buffer_set_private_data */
/* Demangled: egl_color_buffer_set_private_data */
int egl_color_buffer_set_private_data(void);

/* Symbol: clEnqueueBarrier */
/* Demangled: clEnqueueBarrier */
int clEnqueueBarrier(void);

/* Symbol: glIsTexture */
/* Demangled: glIsTexture */
int glIsTexture(void);

/* Symbol: osup_sem_trywait */
/* Demangled: osup_sem_trywait */
int osup_sem_trywait(void);

/* Symbol: clCreateProgramWithILKHR */
/* Demangled: clCreateProgramWithILKHR */
int clCreateProgramWithILKHR(void);

/* Symbol: clGetSamplerInfo */
/* Demangled: clGetSamplerInfo */
int clGetSamplerInfo(void);

/* Symbol: eglQuerySurface */
/* Demangled: eglQuerySurface */
int eglQuerySurface(void);

/* Symbol: osup_mutex_lock */
/* Demangled: osup_mutex_lock */
int osup_mutex_lock(void);

/* Symbol: clEnqueueSVMUnmap */
/* Demangled: clEnqueueSVMUnmap */
int clEnqueueSVMUnmap(void);

/* Symbol: glGetVertexAttribiv */
/* Demangled: glGetVertexAttribiv */
int glGetVertexAttribiv(void);

/* Symbol: egl_color_buffer_get_early_display */
/* Demangled: egl_color_buffer_get_early_display */
int egl_color_buffer_get_early_display(void);

/* Symbol: glClearColorx */
/* Demangled: glClearColorx */
int glClearColorx(void);

/* Symbol: glTexGenfvOES */
/* Demangled: glTexGenfvOES */
int glTexGenfvOES(void);

/* Symbol: glWeightPointerOES */
/* Demangled: glWeightPointerOES */
int glWeightPointerOES(void);

/* Symbol: egl_color_buffer_get_fence */
/* Demangled: egl_color_buffer_get_fence */
int egl_color_buffer_get_fence(void);

/* Symbol: mtk_is_flex_yuv_format */
/* Demangled: mtk_is_flex_yuv_format */
int mtk_is_flex_yuv_format(void);

/* Symbol: glBindFramebufferOES */
/* Demangled: glBindFramebufferOES */
int glBindFramebufferOES(void);

/* Symbol: glGetTexParameterxvOES */
/* Demangled: glGetTexParameterxvOES */
int glGetTexParameterxvOES(void);

/* Symbol: glDebugMessageCallback */
/* Demangled: glDebugMessageCallback */
int glDebugMessageCallback(void);

/* Symbol: glGetGraphicsResetStatusEXT */
/* Demangled: glGetGraphicsResetStatusEXT */
int glGetGraphicsResetStatusEXT(void);

/* Symbol: glGetTexEnvxv */
/* Demangled: glGetTexEnvxv */
int glGetTexEnvxv(void);

/* Symbol: glBeginQueryEXT */
/* Demangled: glBeginQueryEXT */
int glBeginQueryEXT(void);

/* Symbol: glGenTransformFeedbacks */
/* Demangled: glGenTransformFeedbacks */
int glGenTransformFeedbacks(void);

/* Symbol: glGetTexParameterIuivOES */
/* Demangled: glGetTexParameterIuivOES */
int glGetTexParameterIuivOES(void);

/* Symbol: glPrimitiveBoundingBox */
/* Demangled: glPrimitiveBoundingBox */
int glPrimitiveBoundingBox(void);

/* Symbol: glUniform2ui */
/* Demangled: glUniform2ui */
int glUniform2ui(void);

/* Symbol: glGetLightxvOES */
/* Demangled: glGetLightxvOES */
int glGetLightxvOES(void);

/* Symbol: glTexParameterIuiv */
/* Demangled: glTexParameterIuiv */
int glTexParameterIuiv(void);

/* Symbol: glGetBufferPointerv */
/* Demangled: glGetBufferPointerv */
int glGetBufferPointerv(void);

/* Symbol: MTK_GetDebugPropertyValue */
/* Demangled: MTK_GetDebugPropertyValue */
int MTK_GetDebugPropertyValue(void);

/* Symbol: clEnqueueSVMMigrateMem */
/* Demangled: clEnqueueSVMMigrateMem */
int clEnqueueSVMMigrateMem(void);

/* Symbol: glProgramBinaryOES */
/* Demangled: glProgramBinaryOES */
int glProgramBinaryOES(void);

/* Symbol: glProgramUniform2ui */
/* Demangled: glProgramUniform2ui */
int glProgramUniform2ui(void);

/* Symbol: glTexParameterIuivEXT */
/* Demangled: glTexParameterIuivEXT */
int glTexParameterIuivEXT(void);

/* Symbol: glLoadPaletteFromModelViewMatrixOES */
/* Demangled: glLoadPaletteFromModelViewMatrixOES */
int glLoadPaletteFromModelViewMatrixOES(void);

/* Symbol: egl_color_buffer_is_protected */
/* Demangled: egl_color_buffer_is_protected */
int egl_color_buffer_is_protected(void);

/* Symbol: glPointParameterxOES */
/* Demangled: glPointParameterxOES */
int glPointParameterxOES(void);

/* Symbol: glGetQueryObjectuivEXT */
/* Demangled: glGetQueryObjectuivEXT */
int glGetQueryObjectuivEXT(void);

/* Symbol: glGetRenderbufferParameteriv */
/* Demangled: glGetRenderbufferParameteriv */
int glGetRenderbufferParameteriv(void);

/* Symbol: glGetSamplerParameterIivEXT */
/* Demangled: glGetSamplerParameterIivEXT */
int glGetSamplerParameterIivEXT(void);

/* Symbol: glUniformMatrix4x3fv */
/* Demangled: glUniformMatrix4x3fv */
int glUniformMatrix4x3fv(void);

/* Symbol: clGetPlatformIDs */
/* Demangled: clGetPlatformIDs */
int clGetPlatformIDs(void);

/* Symbol: glClearBufferfv */
/* Demangled: glClearBufferfv */
int glClearBufferfv(void);

/* Symbol: glGetnUniformfvKHR */
/* Demangled: glGetnUniformfvKHR */
int glGetnUniformfvKHR(void);

/* Symbol: glCullFace */
/* Demangled: glCullFace */
int glCullFace(void);

/* Symbol: glStencilOp */
/* Demangled: glStencilOp */
int glStencilOp(void);

/* Symbol: glDrawTexfOES */
/* Demangled: glDrawTexfOES */
int glDrawTexfOES(void);

/* Symbol: glProgramUniformMatrix3x4fv */
/* Demangled: glProgramUniformMatrix3x4fv */
int glProgramUniformMatrix3x4fv(void);

/* Symbol: glGenTextures */
/* Demangled: glGenTextures */
int glGenTextures(void);

/* Symbol: clSetDefaultDeviceCommandQueue */
/* Demangled: clSetDefaultDeviceCommandQueue */
int clSetDefaultDeviceCommandQueue(void);

/* Symbol: glTexParameterxOES */
/* Demangled: glTexParameterxOES */
int glTexParameterxOES(void);

/* Symbol: glSamplerParameterIuivEXT */
/* Demangled: glSamplerParameterIuivEXT */
int glSamplerParameterIuivEXT(void);

/* Symbol: MTK_CheckRootPermission */
/* Demangled: MTK_CheckRootPermission */
int MTK_CheckRootPermission(void);

/* Symbol: glDisableiEXT */
/* Demangled: glDisableiEXT */
int glDisableiEXT(void);

/* Symbol: glGetnUniformfv */
/* Demangled: glGetnUniformfv */
int glGetnUniformfv(void);

/* Symbol: glIsProgramPipeline */
/* Demangled: glIsProgramPipeline */
int glIsProgramPipeline(void);

/* Symbol: glIsQuery */
/* Demangled: glIsQuery */
int glIsQuery(void);

/* Symbol: glValidateProgram */
/* Demangled: glValidateProgram */
int glValidateProgram(void);

/* Symbol: glScissor */
/* Demangled: glScissor */
int glScissor(void);

/* Symbol: glGetTexLevelParameteriv */
/* Demangled: glGetTexLevelParameteriv */
int glGetTexLevelParameteriv(void);

/* Symbol: eglQueryString */
/* Demangled: eglQueryString */
int eglQueryString(void);

/* Symbol: glFogxv */
/* Demangled: glFogxv */
int glFogxv(void);

/* Symbol: glOrthox */
/* Demangled: glOrthox */
int glOrthox(void);

/* Symbol: glEndTransformFeedback */
/* Demangled: glEndTransformFeedback */
int glEndTransformFeedback(void);

/* Symbol: clUnloadPlatformCompiler */
/* Demangled: clUnloadPlatformCompiler */
int clUnloadPlatformCompiler(void);

/* Symbol: osup_thread_data_get */
/* Demangled: osup_thread_data_get */
int osup_thread_data_get(void);

/* Symbol: glProgramUniformMatrix2x4fv */
/* Demangled: glProgramUniformMatrix2x4fv */
int glProgramUniformMatrix2x4fv(void);

/* Symbol: glReadnPixels */
/* Demangled: glReadnPixels */
int glReadnPixels(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: osup_sync_object_timedwait */
/* Demangled: osup_sync_object_timedwait */
int osup_sync_object_timedwait(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: clCreateCommandQueue */
/* Demangled: clCreateCommandQueue */
int clCreateCommandQueue(void);

/* Symbol: clGetSupportedImageFormats */
/* Demangled: clGetSupportedImageFormats */
int clGetSupportedImageFormats(void);

/* Symbol: glGetTexEnviv */
/* Demangled: glGetTexEnviv */
int glGetTexEnviv(void);

/* Symbol: glFramebufferRenderbuffer */
/* Demangled: glFramebufferRenderbuffer */
int glFramebufferRenderbuffer(void);

/* Symbol: glVertexAttrib3fv */
/* Demangled: glVertexAttrib3fv */
int glVertexAttrib3fv(void);

/* Symbol: clEnqueueFillImage */
/* Demangled: clEnqueueFillImage */
int clEnqueueFillImage(void);

/* Symbol: glUniformMatrix2x3fv */
/* Demangled: glUniformMatrix2x3fv */
int glUniformMatrix2x3fv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: glPointParameterxv */
/* Demangled: glPointParameterxv */
int glPointParameterxv(void);

/* Symbol: glUniform1f */
/* Demangled: glUniform1f */
int glUniform1f(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: clIcdGetPlatformIDsKHR */
/* Demangled: clIcdGetPlatformIDsKHR */
int clIcdGetPlatformIDsKHR(void);

/* Symbol: glBlendColor */
/* Demangled: glBlendColor */
int glBlendColor(void);

/* Symbol: glCompressedTexImage3D */
/* Demangled: glCompressedTexImage3D */
int glCompressedTexImage3D(void);

/* Symbol: glShaderBinary */
/* Demangled: glShaderBinary */
int glShaderBinary(void);

/* Symbol: glTexImage3DOES */
/* Demangled: glTexImage3DOES */
int glTexImage3DOES(void);

/* Symbol: glIsBuffer */
/* Demangled: glIsBuffer */
int glIsBuffer(void);

/* Symbol: glDepthRangefOES */
/* Demangled: glDepthRangefOES */
int glDepthRangefOES(void);

/* Symbol: glBlendEquationSeparatei */
/* Demangled: glBlendEquationSeparatei */
int glBlendEquationSeparatei(void);

/* Symbol: glDeleteFramebuffers */
/* Demangled: glDeleteFramebuffers */
int glDeleteFramebuffers(void);

/* Symbol: glUniform4iv */
/* Demangled: glUniform4iv */
int glUniform4iv(void);

/* Symbol: glClear */
/* Demangled: glClear */
int glClear(void);

/* Symbol: glGetDebugMessageLogKHR */
/* Demangled: glGetDebugMessageLogKHR */
int glGetDebugMessageLogKHR(void);

/* Symbol: clReleaseContext */
/* Demangled: clReleaseContext */
int clReleaseContext(void);

/* Symbol: osup_thread_callback_set */
/* Demangled: osup_thread_callback_set */
int osup_thread_callback_set(void);

/* Symbol: glDrawElementsInstancedBaseVertexEXT */
/* Demangled: glDrawElementsInstancedBaseVertexEXT */
int glDrawElementsInstancedBaseVertexEXT(void);

/* Symbol: glFramebufferTexture2D */
/* Demangled: glFramebufferTexture2D */
int glFramebufferTexture2D(void);

/* Symbol: glIsSampler */
/* Demangled: glIsSampler */
int glIsSampler(void);

/* Symbol: glUniform1i */
/* Demangled: glUniform1i */
int glUniform1i(void);

/* Symbol: glLightModelxv */
/* Demangled: glLightModelxv */
int glLightModelxv(void);

/* Symbol: glProgramUniform4iv */
/* Demangled: glProgramUniform4iv */
int glProgramUniform4iv(void);

/* Symbol: glDrawRangeElementsBaseVertexOES */
/* Demangled: glDrawRangeElementsBaseVertexOES */
int glDrawRangeElementsBaseVertexOES(void);

/* Symbol: glVertexAttribI4iv */
/* Demangled: glVertexAttribI4iv */
int glVertexAttribI4iv(void);

/* Symbol: glGetTexParameterfv */
/* Demangled: glGetTexParameterfv */
int glGetTexParameterfv(void);

/* Symbol: glReadnPixelsKHR */
/* Demangled: glReadnPixelsKHR */
int glReadnPixelsKHR(void);

/* Symbol: glDispatchComputeIndirect */
/* Demangled: glDispatchComputeIndirect */
int glDispatchComputeIndirect(void);

/* Symbol: clSetKernelExecInfo */
/* Demangled: clSetKernelExecInfo */
int clSetKernelExecInfo(void);

/* Symbol: glBlendFuncSeparateiEXT */
/* Demangled: glBlendFuncSeparateiEXT */
int glBlendFuncSeparateiEXT(void);

/* Symbol: glVertexAttribIFormat */
/* Demangled: glVertexAttribIFormat */
int glVertexAttribIFormat(void);

/* Symbol: glStencilFuncSeparate */
/* Demangled: glStencilFuncSeparate */
int glStencilFuncSeparate(void);

/* Symbol: clGetKernelSubGroupInfo */
/* Demangled: clGetKernelSubGroupInfo */
int clGetKernelSubGroupInfo(void);

/* Symbol: egl_env_set */
/* Demangled: egl_env_set */
int egl_env_set(void);

/* Symbol: glMatrixMode */
/* Demangled: glMatrixMode */
int glMatrixMode(void);

/* Symbol: glBindTransformFeedback */
/* Demangled: glBindTransformFeedback */
int glBindTransformFeedback(void);

/* Symbol: egl_register_gles_blob_cache_callbacks */
/* Demangled: egl_register_gles_blob_cache_callbacks */
int egl_register_gles_blob_cache_callbacks(void);

/* Symbol: glClientActiveTexture */
/* Demangled: glClientActiveTexture */
int glClientActiveTexture(void);

/* Symbol: glGetFixedv */
/* Demangled: glGetFixedv */
int glGetFixedv(void);

/* Symbol: glUniform2fv */
/* Demangled: glUniform2fv */
int glUniform2fv(void);

/* Symbol: glBindTexture */
/* Demangled: glBindTexture */
int glBindTexture(void);

/* Symbol: glUnmapBufferOES */
/* Demangled: glUnmapBufferOES */
int glUnmapBufferOES(void);

/* Symbol: clFinish */
/* Demangled: clFinish */
int clFinish(void);

/* Symbol: egl_check_surface_valid_and_retain */
/* Demangled: egl_check_surface_valid_and_retain */
int egl_check_surface_valid_and_retain(void);

/* Symbol: glGetMaterialxv */
/* Demangled: glGetMaterialxv */
int glGetMaterialxv(void);

/* Symbol: glCompressedTexSubImage2D */
/* Demangled: glCompressedTexSubImage2D */
int glCompressedTexSubImage2D(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: glGetLightfv */
/* Demangled: glGetLightfv */
int glGetLightfv(void);

/* Symbol: glGetAttachedShaders */
/* Demangled: glGetAttachedShaders */
int glGetAttachedShaders(void);

/* Symbol: glGetInteger64v */
/* Demangled: glGetInteger64v */
int glGetInteger64v(void);

/* Symbol: glProgramUniform2fv */
/* Demangled: glProgramUniform2fv */
int glProgramUniform2fv(void);

/* Symbol: glObjectPtrLabelKHR */
/* Demangled: glObjectPtrLabelKHR */
int glObjectPtrLabelKHR(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: egl_color_buffer_set_age */
/* Demangled: egl_color_buffer_set_age */
int egl_color_buffer_set_age(void);

/* Symbol: glGetTexGenivOES */
/* Demangled: glGetTexGenivOES */
int glGetTexGenivOES(void);

/* Symbol: glBindVertexBuffer */
/* Demangled: glBindVertexBuffer */
int glBindVertexBuffer(void);

/* Symbol: glRenderbufferStorage */
/* Demangled: glRenderbufferStorage */
int glRenderbufferStorage(void);

/* Symbol: clEnqueueCopyImage */
/* Demangled: clEnqueueCopyImage */
int clEnqueueCopyImage(void);

/* Symbol: glFramebufferRenderbufferOES */
/* Demangled: glFramebufferRenderbufferOES */
int glFramebufferRenderbufferOES(void);

/* Symbol: glPointSizexOES */
/* Demangled: glPointSizexOES */
int glPointSizexOES(void);

/* Symbol: glCreateProgram */
/* Demangled: glCreateProgram */
int glCreateProgram(void);

/* Symbol: glEndQueryEXT */
/* Demangled: glEndQueryEXT */
int glEndQueryEXT(void);

/* Symbol: glIsEnabledi */
/* Demangled: glIsEnabledi */
int glIsEnabledi(void);

/* Symbol: glReadBuffer */
/* Demangled: glReadBuffer */
int glReadBuffer(void);

/* Symbol: eglGetDisplay */
/* Demangled: eglGetDisplay */
int eglGetDisplay(void);

/* Symbol: glFramebufferTextureEXT */
/* Demangled: glFramebufferTextureEXT */
int glFramebufferTextureEXT(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: egl_color_buffer_get_num_planes */
/* Demangled: egl_color_buffer_get_num_planes */
int egl_color_buffer_get_num_planes(void);

/* Symbol: egl_color_buffer_get_plane_dims */
/* Demangled: egl_color_buffer_get_plane_dims */
int egl_color_buffer_get_plane_dims(void);

/* Symbol: glIsFramebufferOES */
/* Demangled: glIsFramebufferOES */
int glIsFramebufferOES(void);

/* Symbol: glGetProgramPipelineInfoLog */
/* Demangled: glGetProgramPipelineInfoLog */
int glGetProgramPipelineInfoLog(void);

/* Symbol: osup_sync_object_clear */
/* Demangled: osup_sync_object_clear */
int osup_sync_object_clear(void);

/* Symbol: clCreateProgramWithIL */
/* Demangled: clCreateProgramWithIL */
int clCreateProgramWithIL(void);

/* Symbol: eglp_config_set_attributes */
/* Demangled: eglp_config_set_attributes */
int eglp_config_set_attributes(void);

/* Symbol: glDisablei */
/* Demangled: glDisablei */
int glDisablei(void);

/* Symbol: glFramebufferTextureMultiviewOVR */
/* Demangled: glFramebufferTextureMultiviewOVR */
int glFramebufferTextureMultiviewOVR(void);

/* Symbol: glUniformMatrix4fv */
/* Demangled: glUniformMatrix4fv */
int glUniformMatrix4fv(void);

/* Symbol: glCopyTexImage2D */
/* Demangled: glCopyTexImage2D */
int glCopyTexImage2D(void);

/* Symbol: _ZTVNSt3__117bad_function_callE */
/* Demangled: vtable for std::__1::bad_function_call */
extern void* _ZTVNSt3__117bad_function_callE;

/* Symbol: glBlendEquationSeparateiEXT */
/* Demangled: glBlendEquationSeparateiEXT */
int glBlendEquationSeparateiEXT(void);

/* Symbol: glTexBufferEXT */
/* Demangled: glTexBufferEXT */
int glTexBufferEXT(void);

/* Symbol: MTK_TIME_PROFILE_STOP */
/* Demangled: MTK_TIME_PROFILE_STOP */
int MTK_TIME_PROFILE_STOP(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: clEnqueueReadImage */
/* Demangled: clEnqueueReadImage */
int clEnqueueReadImage(void);

/* Symbol: glClipPlanexOES */
/* Demangled: glClipPlanexOES */
int glClipPlanexOES(void);

/* Symbol: glPointSizex */
/* Demangled: glPointSizex */
int glPointSizex(void);

/* Symbol: glTexParameterxvOES */
/* Demangled: glTexParameterxvOES */
int glTexParameterxvOES(void);

/* Symbol: glGetSamplerParameterIuivOES */
/* Demangled: glGetSamplerParameterIuivOES */
int glGetSamplerParameterIuivOES(void);

/* Symbol: cmpbep_v2_get_variant_info */
/* Demangled: cmpbep_v2_get_variant_info */
int cmpbep_v2_get_variant_info(void);

/* Symbol: egl_color_buffer_set_early_display */
/* Demangled: egl_color_buffer_set_early_display */
int egl_color_buffer_set_early_display(void);

/* Symbol: egl_color_buffer_get_mapped_address */
/* Demangled: egl_color_buffer_get_mapped_address */
int egl_color_buffer_get_mapped_address(void);

/* Symbol: glGetActiveUniform */
/* Demangled: glGetActiveUniform */
int glGetActiveUniform(void);

/* Symbol: egl_color_buffer_new */
/* Demangled: egl_color_buffer_new */
int egl_color_buffer_new(void);

/* Symbol: eglQueryDmaBufModifiersEXT */
/* Demangled: eglQueryDmaBufModifiersEXT */
int eglQueryDmaBufModifiersEXT(void);

/* Symbol: glGetQueryObjecti64vEXT */
/* Demangled: glGetQueryObjecti64vEXT */
int glGetQueryObjecti64vEXT(void);

/* Symbol: glTexEnvf */
/* Demangled: glTexEnvf */
int glTexEnvf(void);

/* Symbol: glAttachShader */
/* Demangled: glAttachShader */
int glAttachShader(void);

/* Symbol: glSamplerParameterIivOES */
/* Demangled: glSamplerParameterIivOES */
int glSamplerParameterIivOES(void);

/* Symbol: glSamplerParameteriv */
/* Demangled: glSamplerParameteriv */
int glSamplerParameteriv(void);

/* Symbol: glShaderSource */
/* Demangled: glShaderSource */
int glShaderSource(void);

/* Symbol: __aeabi_f2lz */
/* Demangled: __aeabi_f2lz */
int __aeabi_f2lz(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: clSetCommandQueueProperty */
/* Demangled: clSetCommandQueueProperty */
int clSetCommandQueueProperty(void);

/* Symbol: eglDestroyImageKHR */
/* Demangled: eglDestroyImageKHR */
int eglDestroyImageKHR(void);

/* Symbol: glBlendFuncSeparateOES */
/* Demangled: glBlendFuncSeparateOES */
int glBlendFuncSeparateOES(void);

/* Symbol: glLineWidthxOES */
/* Demangled: glLineWidthxOES */
int glLineWidthxOES(void);

/* Symbol: glCheckFramebufferStatus */
/* Demangled: glCheckFramebufferStatus */
int glCheckFramebufferStatus(void);

/* Symbol: glIsEnablediOES */
/* Demangled: glIsEnablediOES */
int glIsEnablediOES(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: egl_color_buffer_set_crop_rectangle */
/* Demangled: egl_color_buffer_set_crop_rectangle */
int egl_color_buffer_set_crop_rectangle(void);

/* Symbol: glBindVertexArray */
/* Demangled: glBindVertexArray */
int glBindVertexArray(void);

/* Symbol: vkGetSwapchainGrallocUsageANDROID */
/* Demangled: vkGetSwapchainGrallocUsageANDROID */
int vkGetSwapchainGrallocUsageANDROID(void);

/* Symbol: cmpbe_v2_compile_single_shader */
/* Demangled: cmpbe_v2_compile_single_shader */
int cmpbe_v2_compile_single_shader(void);

/* Symbol: glFrustumxOES */
/* Demangled: glFrustumxOES */
int glFrustumxOES(void);

/* Symbol: glTexEnvi */
/* Demangled: glTexEnvi */
int glTexEnvi(void);

/* Symbol: glBlendFunciOES */
/* Demangled: glBlendFunciOES */
int glBlendFunciOES(void);

/* Symbol: glGetMultisamplefv */
/* Demangled: glGetMultisamplefv */
int glGetMultisamplefv(void);

/* Symbol: glGetUniformIndices */
/* Demangled: glGetUniformIndices */
int glGetUniformIndices(void);

/* Symbol: glPopDebugGroup */
/* Demangled: glPopDebugGroup */
int glPopDebugGroup(void);

/* Symbol: glLightfv */
/* Demangled: glLightfv */
int glLightfv(void);

/* Symbol: glDetachShader */
/* Demangled: glDetachShader */
int glDetachShader(void);

/* Symbol: egl_color_buffer_flush_mapping_to_cpu */
/* Demangled: egl_color_buffer_flush_mapping_to_cpu */
int egl_color_buffer_flush_mapping_to_cpu(void);

/* Symbol: eglGetProcAddress */
/* Demangled: eglGetProcAddress */
int eglGetProcAddress(void);

/* Symbol: glGetProgramResourceLocation */
/* Demangled: glGetProgramResourceLocation */
int glGetProgramResourceLocation(void);

/* Symbol: glGetUniformLocation */
/* Demangled: glGetUniformLocation */
int glGetUniformLocation(void);

/* Symbol: glGetObjectLabel */
/* Demangled: glGetObjectLabel */
int glGetObjectLabel(void);

/* Symbol: glClipPlanef */
/* Demangled: glClipPlanef */
int glClipPlanef(void);

/* Symbol: glGetTexGenfvOES */
/* Demangled: glGetTexGenfvOES */
int glGetTexGenfvOES(void);

/* Symbol: glProgramParameteri */
/* Demangled: glProgramParameteri */
int glProgramParameteri(void);

/* Symbol: glResumeTransformFeedback */
/* Demangled: glResumeTransformFeedback */
int glResumeTransformFeedback(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: clGetKernelWorkGroupInfo */
/* Demangled: clGetKernelWorkGroupInfo */
int clGetKernelWorkGroupInfo(void);

/* Symbol: _essl_error_init */
/* Demangled: _essl_error_init */
int _essl_error_init(void);

/* Symbol: __aeabi_d2lz */
/* Demangled: __aeabi_d2lz */
int __aeabi_d2lz(void);

/* Symbol: glGetClipPlanefOES */
/* Demangled: glGetClipPlanefOES */
int glGetClipPlanefOES(void);

/* Symbol: glDeleteProgram */
/* Demangled: glDeleteProgram */
int glDeleteProgram(void);

/* Symbol: glTexParameterIivOES */
/* Demangled: glTexParameterIivOES */
int glTexParameterIivOES(void);

/* Symbol: cmpbe_v2_init_options */
/* Demangled: cmpbe_v2_init_options */
int cmpbe_v2_init_options(void);

/* Symbol: clGetDeviceInfo */
/* Demangled: clGetDeviceInfo */
int clGetDeviceInfo(void);

/* Symbol: clGetPipeInfo */
/* Demangled: clGetPipeInfo */
int clGetPipeInfo(void);

/* Symbol: glIsProgram */
/* Demangled: glIsProgram */
int glIsProgram(void);

/* Symbol: glUniform2f */
/* Demangled: glUniform2f */
int glUniform2f(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: eglp_call_config_get_color_buffer_format */
/* Demangled: eglp_call_config_get_color_buffer_format */
int eglp_call_config_get_color_buffer_format(void);

/* Symbol: glBindSampler */
/* Demangled: glBindSampler */
int glBindSampler(void);

/* Symbol: glColorMaskiEXT */
/* Demangled: glColorMaskiEXT */
int glColorMaskiEXT(void);

/* Symbol: osup_sem_term */
/* Demangled: osup_sem_term */
int osup_sem_term(void);

/* Symbol: osup_thread_setname */
/* Demangled: osup_thread_setname */
int osup_thread_setname(void);

/* Symbol: clBuildProgram */
/* Demangled: clBuildProgram */
int clBuildProgram(void);

/* Symbol: MTK_TIME_PROFILE_START */
/* Demangled: MTK_TIME_PROFILE_START */
int MTK_TIME_PROFILE_START(void);

/* Symbol: glUniform2i */
/* Demangled: glUniform2i */
int glUniform2i(void);

/* Symbol: glVertexAttribBinding */
/* Demangled: glVertexAttribBinding */
int glVertexAttribBinding(void);

/* Symbol: glBindBufferRange */
/* Demangled: glBindBufferRange */
int glBindBufferRange(void);

/* Symbol: glUniform1iv */
/* Demangled: glUniform1iv */
int glUniform1iv(void);

/* Symbol: glUniform4uiv */
/* Demangled: glUniform4uiv */
int glUniform4uiv(void);

/* Symbol: glDeleteVertexArraysOES */
/* Demangled: glDeleteVertexArraysOES */
int glDeleteVertexArraysOES(void);

/* Symbol: eglp_display_create_default_configs */
/* Demangled: eglp_display_create_default_configs */
int eglp_display_create_default_configs(void);

/* Symbol: glCompressedTexSubImage3DOES */
/* Demangled: glCompressedTexSubImage3DOES */
int glCompressedTexSubImage3DOES(void);

/* Symbol: glFramebufferTextureLayer */
/* Demangled: glFramebufferTextureLayer */
int glFramebufferTextureLayer(void);

/* Symbol: glPolygonOffset */
/* Demangled: glPolygonOffset */
int glPolygonOffset(void);

/* Symbol: glProgramUniform1iv */
/* Demangled: glProgramUniform1iv */
int glProgramUniform1iv(void);

/* Symbol: glProgramUniform4uiv */
/* Demangled: glProgramUniform4uiv */
int glProgramUniform4uiv(void);

/* Symbol: glTexStorage2D */
/* Demangled: glTexStorage2D */
int glTexStorage2D(void);

/* Symbol: glEnableiEXT */
/* Demangled: glEnableiEXT */
int glEnableiEXT(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: clEnqueueMapBuffer */
/* Demangled: clEnqueueMapBuffer */
int clEnqueueMapBuffer(void);

/* Symbol: glMultiTexCoord4xOES */
/* Demangled: glMultiTexCoord4xOES */
int glMultiTexCoord4xOES(void);

/* Symbol: glTexEnvx */
/* Demangled: glTexEnvx */
int glTexEnvx(void);

/* Symbol: glTexParameterxv */
/* Demangled: glTexParameterxv */
int glTexParameterxv(void);

/* Symbol: glGetSamplerParameterIuiv */
/* Demangled: glGetSamplerParameterIuiv */
int glGetSamplerParameterIuiv(void);

/* Symbol: glGetSamplerParameteriv */
/* Demangled: glGetSamplerParameteriv */
int glGetSamplerParameteriv(void);

/* Symbol: eglCreatePixmapSurface */
/* Demangled: eglCreatePixmapSurface */
int eglCreatePixmapSurface(void);

/* Symbol: glBufferStorageExternalEXT */
/* Demangled: glBufferStorageExternalEXT */
int glBufferStorageExternalEXT(void);

/* Symbol: glDeleteVertexArrays */
/* Demangled: glDeleteVertexArrays */
int glDeleteVertexArrays(void);

/* Symbol: glDepthFunc */
/* Demangled: glDepthFunc */
int glDepthFunc(void);

/* Symbol: glEnable */
/* Demangled: glEnable */
int glEnable(void);

/* Symbol: _essl_init_compiler_options */
/* Demangled: _essl_init_compiler_options */
int _essl_init_compiler_options(void);

/* Symbol: clEnqueueMigrateMemObjects */
/* Demangled: clEnqueueMigrateMemObjects */
int clEnqueueMigrateMemObjects(void);

/* Symbol: egl_color_buffer_increment_age */
/* Demangled: egl_color_buffer_increment_age */
int egl_color_buffer_increment_age(void);

/* Symbol: glLoadMatrixxOES */
/* Demangled: glLoadMatrixxOES */
int glLoadMatrixxOES(void);

/* Symbol: glDeleteShader */
/* Demangled: glDeleteShader */
int glDeleteShader(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: osup_sync_object_set_and_broadcast */
/* Demangled: osup_sync_object_set_and_broadcast */
int osup_sync_object_set_and_broadcast(void);

/* Symbol: glBlendEquationSeparateOES */
/* Demangled: glBlendEquationSeparateOES */
int glBlendEquationSeparateOES(void);

/* Symbol: glGetFramebufferAttachmentParameterivOES */
/* Demangled: glGetFramebufferAttachmentParameterivOES */
int glGetFramebufferAttachmentParameterivOES(void);

/* Symbol: glTranslatexOES */
/* Demangled: glTranslatexOES */
int glTranslatexOES(void);

/* Symbol: glPushDebugGroupKHR */
/* Demangled: glPushDebugGroupKHR */
int glPushDebugGroupKHR(void);

/* Symbol: mtk_get_status */
/* Demangled: mtk_get_status */
int mtk_get_status(void);

/* Symbol: egl_color_buffer_get_rotation */
/* Demangled: egl_color_buffer_get_rotation */
int egl_color_buffer_get_rotation(void);

/* Symbol: egl_color_buffer_release */
/* Demangled: egl_color_buffer_release */
int egl_color_buffer_release(void);

/* Symbol: glBindAttribLocation */
/* Demangled: glBindAttribLocation */
int glBindAttribLocation(void);

/* Symbol: glCompileShader */
/* Demangled: glCompileShader */
int glCompileShader(void);

/* Symbol: glCompressedTexSubImage3D */
/* Demangled: glCompressedTexSubImage3D */
int glCompressedTexSubImage3D(void);

/* Symbol: glSamplerParameterIuiv */
/* Demangled: glSamplerParameterIuiv */
int glSamplerParameterIuiv(void);

/* Symbol: glUniform2uiv */
/* Demangled: glUniform2uiv */
int glUniform2uiv(void);

/* Symbol: DUMP_STACK_TRACE */
/* Demangled: DUMP_STACK_TRACE */
int DUMP_STACK_TRACE(void);

/* Symbol: MTK_NeedModifyToHighPrecison */
/* Demangled: MTK_NeedModifyToHighPrecison */
int MTK_NeedModifyToHighPrecison(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: glGetProgramBinary */
/* Demangled: glGetProgramBinary */
int glGetProgramBinary(void);

/* Symbol: glGetVertexAttribIuiv */
/* Demangled: glGetVertexAttribIuiv */
int glGetVertexAttribIuiv(void);

/* Symbol: glTexStorage3DMultisampleOES */
/* Demangled: glTexStorage3DMultisampleOES */
int glTexStorage3DMultisampleOES(void);

/* Symbol: eglTerminate */
/* Demangled: eglTerminate */
int eglTerminate(void);

/* Symbol: glClipPlanex */
/* Demangled: glClipPlanex */
int glClipPlanex(void);

/* Symbol: glLoadIdentity */
/* Demangled: glLoadIdentity */
int glLoadIdentity(void);

/* Symbol: glDeleteSamplers */
/* Demangled: glDeleteSamplers */
int glDeleteSamplers(void);

/* Symbol: glProgramUniform2uiv */
/* Demangled: glProgramUniform2uiv */
int glProgramUniform2uiv(void);

/* Symbol: glEGLImageTargetRenderbufferStorageOES */
/* Demangled: glEGLImageTargetRenderbufferStorageOES */
int glEGLImageTargetRenderbufferStorageOES(void);

/* Symbol: MTK_CheckAppName */
/* Demangled: MTK_CheckAppName */
int MTK_CheckAppName(void);

/* Symbol: glGetBufferParameteri64v */
/* Demangled: glGetBufferParameteri64v */
int glGetBufferParameteri64v(void);

/* Symbol: glGetBufferParameteriv */
/* Demangled: glGetBufferParameteriv */
int glGetBufferParameteriv(void);

/* Symbol: stdlibp_neon_hard_f32_to_f16 */
/* Demangled: stdlibp_neon_hard_f32_to_f16 */
int stdlibp_neon_hard_f32_to_f16(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: clGetContextInfo */
/* Demangled: clGetContextInfo */
int clGetContextInfo(void);

/* Symbol: glGetTexParameterIivOES */
/* Demangled: glGetTexParameterIivOES */
int glGetTexParameterIivOES(void);

/* Symbol: glGetTransformFeedbackVarying */
/* Demangled: glGetTransformFeedbackVarying */
int glGetTransformFeedbackVarying(void);

/* Symbol: osup_spinlock_term */
/* Demangled: osup_spinlock_term */
int osup_spinlock_term(void);

/* Symbol: egl_feature_add_extension_string */
/* Demangled: egl_feature_add_extension_string */
int egl_feature_add_extension_string(void);

/* Symbol: glGetShaderSource */
/* Demangled: glGetShaderSource */
int glGetShaderSource(void);

/* Symbol: glDrawElements */
/* Demangled: glDrawElements */
int glDrawElements(void);

/* Symbol: _ZTSSt12out_of_range */
/* Demangled: typeinfo name for std::out_of_range */
extern void* _ZTSSt12out_of_range;

/* Symbol: glGenerateMipmapOES */
/* Demangled: glGenerateMipmapOES */
int glGenerateMipmapOES(void);

/* Symbol: glSampleCoverage */
/* Demangled: glSampleCoverage */
int glSampleCoverage(void);

/* Symbol: glTexImage2D */
/* Demangled: glTexImage2D */
int glTexImage2D(void);

/* Symbol: glNormal3xOES */
/* Demangled: glNormal3xOES */
int glNormal3xOES(void);

/* Symbol: glGenVertexArraysOES */
/* Demangled: glGenVertexArraysOES */
int glGenVertexArraysOES(void);

/* Symbol: glTexParameteriv */
/* Demangled: glTexParameteriv */
int glTexParameteriv(void);

/* Symbol: clGetDeviceIDs */
/* Demangled: clGetDeviceIDs */
int clGetDeviceIDs(void);

/* Symbol: glDisableClientState */
/* Demangled: glDisableClientState */
int glDisableClientState(void);

/* Symbol: glDrawTexxvOES */
/* Demangled: glDrawTexxvOES */
int glDrawTexxvOES(void);

/* Symbol: glDeleteQueries */
/* Demangled: glDeleteQueries */
int glDeleteQueries(void);

/* Symbol: glIsShader */
/* Demangled: glIsShader */
int glIsShader(void);

/* Symbol: mtk_get_videobuffer_status */
/* Demangled: mtk_get_videobuffer_status */
int mtk_get_videobuffer_status(void);

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: glGetActiveUniformsiv */
/* Demangled: glGetActiveUniformsiv */
int glGetActiveUniformsiv(void);

/* Symbol: cmpbe_v2_set_option_value */
/* Demangled: cmpbe_v2_set_option_value */
int cmpbe_v2_set_option_value(void);

/* Symbol: glAlphaFuncxOES */
/* Demangled: glAlphaFuncxOES */
int glAlphaFuncxOES(void);

/* Symbol: glGetQueryObjectuiv */
/* Demangled: glGetQueryObjectuiv */
int glGetQueryObjectuiv(void);

/* Symbol: glUniform3ui */
/* Demangled: glUniform3ui */
int glUniform3ui(void);

/* Symbol: glUnmapBuffer */
/* Demangled: glUnmapBuffer */
int glUnmapBuffer(void);

/* Symbol: osup_sem_post */
/* Demangled: osup_sem_post */
int osup_sem_post(void);

/* Symbol: clEnqueueTask */
/* Demangled: clEnqueueTask */
int clEnqueueTask(void);

/* Symbol: clRetainCommandQueue */
/* Demangled: clRetainCommandQueue */
int clRetainCommandQueue(void);

/* Symbol: clRetainMemObject */
/* Demangled: clRetainMemObject */
int clRetainMemObject(void);

/* Symbol: egl_color_buffer_get_height */
/* Demangled: egl_color_buffer_get_height */
int egl_color_buffer_get_height(void);

/* Symbol: glProgramUniform3ui */
/* Demangled: glProgramUniform3ui */
int glProgramUniform3ui(void);

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: egl_color_buffer_get_line_stride */
/* Demangled: egl_color_buffer_get_line_stride */
int egl_color_buffer_get_line_stride(void);

/* Symbol: osup_spinlock_lock */
/* Demangled: osup_spinlock_lock */
int osup_spinlock_lock(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: clCreateContext */
/* Demangled: clCreateContext */
int clCreateContext(void);

/* Symbol: clGetExtensionFunctionAddressForPlatform */
/* Demangled: clGetExtensionFunctionAddressForPlatform */
int clGetExtensionFunctionAddressForPlatform(void);

/* Symbol: clGetKernelArgInfo */
/* Demangled: clGetKernelArgInfo */
int clGetKernelArgInfo(void);

/* Symbol: clReleaseDevice */
/* Demangled: clReleaseDevice */
int clReleaseDevice(void);

/* Symbol: mali_egl_image_get_buffer_size */
/* Demangled: mali_egl_image_get_buffer_size */
int mali_egl_image_get_buffer_size(void);

/* Symbol: glGenRenderbuffers */
/* Demangled: glGenRenderbuffers */
int glGenRenderbuffers(void);

/* Symbol: glBindVertexArrayOES */
/* Demangled: glBindVertexArrayOES */
int glBindVertexArrayOES(void);

/* Symbol: glRenderbufferStorageMultisampleEXT */
/* Demangled: glRenderbufferStorageMultisampleEXT */
int glRenderbufferStorageMultisampleEXT(void);

/* Symbol: glBlendEquationOES */
/* Demangled: glBlendEquationOES */
int glBlendEquationOES(void);

/* Symbol: glFramebufferTexture3DOES */
/* Demangled: glFramebufferTexture3DOES */
int glFramebufferTexture3DOES(void);

/* Symbol: glGetActiveUniformBlockName */
/* Demangled: glGetActiveUniformBlockName */
int glGetActiveUniformBlockName(void);

/* Symbol: glVertexAttribIPointer */
/* Demangled: glVertexAttribIPointer */
int glVertexAttribIPointer(void);

/* Symbol: glObjectLabelKHR */
/* Demangled: glObjectLabelKHR */
int glObjectLabelKHR(void);

/* Symbol: egl_color_buffer_map */
/* Demangled: egl_color_buffer_map */
int egl_color_buffer_map(void);

/* Symbol: glGetFragDataLocation */
/* Demangled: glGetFragDataLocation */
int glGetFragDataLocation(void);

/* Symbol: prof_buffer_exclude_switch_time */
/* Demangled: prof_buffer_exclude_switch_time */
extern void* prof_buffer_exclude_switch_time;

/* Symbol: osup_sem_init */
/* Demangled: osup_sem_init */
int osup_sem_init(void);

/* Symbol: eglSurfaceAttrib */
/* Demangled: eglSurfaceAttrib */
int eglSurfaceAttrib(void);

/* Symbol: glGetClipPlanef */
/* Demangled: glGetClipPlanef */
int glGetClipPlanef(void);

/* Symbol: glScalef */
/* Demangled: glScalef */
int glScalef(void);

/* Symbol: clSVMAlloc */
/* Demangled: clSVMAlloc */
int clSVMAlloc(void);

/* Symbol: egl_color_buffer_flush_mapping_to_gpu */
/* Demangled: egl_color_buffer_flush_mapping_to_gpu */
int egl_color_buffer_flush_mapping_to_gpu(void);

/* Symbol: glDrawTexsOES */
/* Demangled: glDrawTexsOES */
int glDrawTexsOES(void);

/* Symbol: glEnableClientState */
/* Demangled: glEnableClientState */
int glEnableClientState(void);

/* Symbol: glTexGeniOES */
/* Demangled: glTexGeniOES */
int glTexGeniOES(void);

/* Symbol: glBlendEquationiOES */
/* Demangled: glBlendEquationiOES */
int glBlendEquationiOES(void);

/* Symbol: glUniform3f */
/* Demangled: glUniform3f */
int glUniform3f(void);

/* Symbol: mtk_get_status2 */
/* Demangled: mtk_get_status2 */
int mtk_get_status2(void);

/* Symbol: eglWaitSyncKHR */
/* Demangled: eglWaitSyncKHR */
int eglWaitSyncKHR(void);

/* Symbol: glGetUniformfv */
/* Demangled: glGetUniformfv */
int glGetUniformfv(void);

/* Symbol: glGetnUniformivEXT */
/* Demangled: glGetnUniformivEXT */
int glGetnUniformivEXT(void);

/* Symbol: glUniformMatrix3x4fv */
/* Demangled: glUniformMatrix3x4fv */
int glUniformMatrix3x4fv(void);

/* Symbol: clCreateKernel */
/* Demangled: clCreateKernel */
int clCreateKernel(void);

/* Symbol: clGetExtensionFunctionAddress */
/* Demangled: clGetExtensionFunctionAddress */
int clGetExtensionFunctionAddress(void);

/* Symbol: glFramebufferTexture2DOES */
/* Demangled: glFramebufferTexture2DOES */
int glFramebufferTexture2DOES(void);

/* Symbol: glFramebufferParameteri */
/* Demangled: glFramebufferParameteri */
int glFramebufferParameteri(void);

/* Symbol: glProgramUniformMatrix2fv */
/* Demangled: glProgramUniformMatrix2fv */
int glProgramUniformMatrix2fv(void);

/* Symbol: glUniform3i */
/* Demangled: glUniform3i */
int glUniform3i(void);

/* Symbol: glDebugMessageControlKHR */
/* Demangled: glDebugMessageControlKHR */
int glDebugMessageControlKHR(void);

/* Symbol: glStencilFunc */
/* Demangled: glStencilFunc */
int glStencilFunc(void);

/* Symbol: egl_color_buffer_get_y_inversion */
/* Demangled: egl_color_buffer_get_y_inversion */
int egl_color_buffer_get_y_inversion(void);

/* Symbol: glVertexAttribI4uiv */
/* Demangled: glVertexAttribI4uiv */
int glVertexAttribI4uiv(void);

/* Symbol: osup_deregister_unload_callback */
/* Demangled: osup_deregister_unload_callback */
int osup_deregister_unload_callback(void);

/* Symbol: clEnqueueSVMFree */
/* Demangled: clEnqueueSVMFree */
int clEnqueueSVMFree(void);

/* Symbol: glVertexAttrib4fv */
/* Demangled: glVertexAttrib4fv */
int glVertexAttrib4fv(void);

/* Symbol: glTexStorage3D */
/* Demangled: glTexStorage3D */
int glTexStorage3D(void);

/* Symbol: glUniformMatrix2x4fv */
/* Demangled: glUniformMatrix2x4fv */
int glUniformMatrix2x4fv(void);

/* Symbol: g_counting_index_ex */
/* Demangled: g_counting_index_ex */
extern void* g_counting_index_ex;

/* Symbol: glMaterialxOES */
/* Demangled: glMaterialxOES */
int glMaterialxOES(void);

/* Symbol: glCopyImageSubDataEXT */
/* Demangled: glCopyImageSubDataEXT */
int glCopyImageSubDataEXT(void);

/* Symbol: glDrawElementsBaseVertexEXT */
/* Demangled: glDrawElementsBaseVertexEXT */
int glDrawElementsBaseVertexEXT(void);

/* Symbol: glSamplerParameterIiv */
/* Demangled: glSamplerParameterIiv */
int glSamplerParameterIiv(void);

/* Symbol: clEnqueueNativeKernel */
/* Demangled: clEnqueueNativeKernel */
int clEnqueueNativeKernel(void);

/* Symbol: eglReleaseTexImage */
/* Demangled: eglReleaseTexImage */
int eglReleaseTexImage(void);

/* Symbol: glNormal3f */
/* Demangled: glNormal3f */
int glNormal3f(void);

/* Symbol: glGetIntegeri_v */
/* Demangled: glGetIntegeri_v */
int glGetIntegeri_v(void);

/* Symbol: glInvalidateSubFramebuffer */
/* Demangled: glInvalidateSubFramebuffer */
int glInvalidateSubFramebuffer(void);

/* Symbol: glPatchParameteri */
/* Demangled: glPatchParameteri */
int glPatchParameteri(void);

/* Symbol: glGetIntegerv */
/* Demangled: glGetIntegerv */
int glGetIntegerv(void);

/* Symbol: glPopDebugGroupKHR */
/* Demangled: glPopDebugGroupKHR */
int glPopDebugGroupKHR(void);

/* Symbol: osup_sem_wait */
/* Demangled: osup_sem_wait */
int osup_sem_wait(void);

/* Symbol: clEnqueueMarkerWithWaitList */
/* Demangled: clEnqueueMarkerWithWaitList */
int clEnqueueMarkerWithWaitList(void);

/* Symbol: glQueryCounterEXT */
/* Demangled: glQueryCounterEXT */
int glQueryCounterEXT(void);

/* Symbol: egl_color_buffer_get_private_data */
/* Demangled: egl_color_buffer_get_private_data */
int egl_color_buffer_get_private_data(void);

/* Symbol: glDeleteRenderbuffers */
/* Demangled: glDeleteRenderbuffers */
int glDeleteRenderbuffers(void);

/* Symbol: glMaterialf */
/* Demangled: glMaterialf */
int glMaterialf(void);

/* Symbol: glIsFramebuffer */
/* Demangled: glIsFramebuffer */
int glIsFramebuffer(void);

/* Symbol: clEnqueueBarrierWithWaitList */
/* Demangled: clEnqueueBarrierWithWaitList */
int clEnqueueBarrierWithWaitList(void);

/* Symbol: glPointParameterxvOES */
/* Demangled: glPointParameterxvOES */
int glPointParameterxvOES(void);

/* Symbol: glViewport */
/* Demangled: glViewport */
int glViewport(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: glDrawTexsvOES */
/* Demangled: glDrawTexsvOES */
int glDrawTexsvOES(void);

/* Symbol: glDrawElementsInstancedBaseVertex */
/* Demangled: glDrawElementsInstancedBaseVertex */
int glDrawElementsInstancedBaseVertex(void);

/* Symbol: osup_dlopen */
/* Demangled: osup_dlopen */
int osup_dlopen(void);

/* Symbol: glGetnUniformfvEXT */
/* Demangled: glGetnUniformfvEXT */
int glGetnUniformfvEXT(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: glGetClipPlanex */
/* Demangled: glGetClipPlanex */
int glGetClipPlanex(void);

/* Symbol: glScalex */
/* Demangled: glScalex */
int glScalex(void);

/* Symbol: glDeleteQueriesEXT */
/* Demangled: glDeleteQueriesEXT */
int glDeleteQueriesEXT(void);

/* Symbol: glFramebufferTextureMultisampleMultiviewOVR */
/* Demangled: glFramebufferTextureMultisampleMultiviewOVR */
int glFramebufferTextureMultisampleMultiviewOVR(void);

/* Symbol: glGetBufferPointervOES */
/* Demangled: glGetBufferPointervOES */
int glGetBufferPointervOES(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: clEnqueueWaitForEvents */
/* Demangled: clEnqueueWaitForEvents */
int clEnqueueWaitForEvents(void);

/* Symbol: eglWaitNative */
/* Demangled: eglWaitNative */
int eglWaitNative(void);

/* Symbol: glIsRenderbufferOES */
/* Demangled: glIsRenderbufferOES */
int glIsRenderbufferOES(void);

/* Symbol: glUniform3fv */
/* Demangled: glUniform3fv */
int glUniform3fv(void);

/* Symbol: glVertexAttrib1f */
/* Demangled: glVertexAttrib1f */
int glVertexAttrib1f(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGLES_MALI_H */
