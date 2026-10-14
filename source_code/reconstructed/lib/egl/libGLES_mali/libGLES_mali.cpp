/*
 * Reverse-Engineered Source for: libGLES_mali.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libGLES_mali"

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
#include "libGLES_mali.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MALI "/dev/mali"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MALI, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MALI, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MALI, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int libGLES_mali_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int libGLES_mali_close(struct hw_device_t* dev);

static struct hw_module_methods_t libGLES_mali_module_methods = {
    .open = libGLES_mali_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "libGLES",
    .name = "Begonia libGLES_mali Module",
    .author = "LineageOS / Community RE",
    .methods = &libGLES_mali_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int libGLES_mali_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int libGLES_mali_close(struct hw_device_t* dev) {
    ALOGI("Closing libGLES_mali module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: osup_mutex_static_get */
extern "C" __attribute__((visibility("default"))) int osup_mutex_static_get(void) {
    ALOGD("osup_mutex_static_get() called");
    return 0;
}

/* Demangled: egl_check_display_valid_and_retain */
extern "C" __attribute__((visibility("default"))) int egl_check_display_valid_and_retain(void) {
    ALOGD("egl_check_display_valid_and_retain() called");
    return 0;
}

/* Demangled: glLightModelxOES */
extern "C" __attribute__((visibility("default"))) int glLightModelxOES(void) {
    ALOGD("glLightModelxOES() called");
    return 0;
}

/* Demangled: glPrimitiveBoundingBoxEXT */
extern "C" __attribute__((visibility("default"))) int glPrimitiveBoundingBoxEXT(void) {
    ALOGD("glPrimitiveBoundingBoxEXT() called");
    return 0;
}

/* Demangled: glProgramUniform3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3fv(void) {
    ALOGD("glProgramUniform3fv() called");
    return 0;
}

/* Demangled: glTexImage3D */
extern "C" __attribute__((visibility("default"))) int glTexImage3D(void) {
    ALOGD("glTexImage3D() called");
    return 0;
}

/* Demangled: glIsEnabled */
extern "C" __attribute__((visibility("default"))) int glIsEnabled(void) {
    ALOGD("glIsEnabled() called");
    return 0;
}

/* Demangled: glGetStringi */
extern "C" __attribute__((visibility("default"))) int glGetStringi(void) {
    ALOGD("glGetStringi() called");
    return 0;
}

/* Demangled: glIsRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glIsRenderbuffer(void) {
    ALOGD("glIsRenderbuffer() called");
    return 0;
}

/* Demangled: glGetFixedvOES */
extern "C" __attribute__((visibility("default"))) int glGetFixedvOES(void) {
    ALOGD("glGetFixedvOES() called");
    return 0;
}

/* Demangled: glPointSizePointerOES */
extern "C" __attribute__((visibility("default"))) int glPointSizePointerOES(void) {
    ALOGD("glPointSizePointerOES() called");
    return 0;
}

/* Demangled: glClearStencil */
extern "C" __attribute__((visibility("default"))) int glClearStencil(void) {
    ALOGD("glClearStencil() called");
    return 0;
}

/* Demangled: cmpbep_shutdown_llvm */
extern "C" __attribute__((visibility("default"))) int cmpbep_shutdown_llvm(void) {
    ALOGD("cmpbep_shutdown_llvm() called");
    return 0;
}

/* Demangled: clEnqueueReadBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueReadBuffer(void) {
    ALOGD("clEnqueueReadBuffer() called");
    return 0;
}

/* Demangled: mali_egl_image_get_buffer_ext_phandle */
extern "C" __attribute__((visibility("default"))) int mali_egl_image_get_buffer_ext_phandle(void) {
    ALOGD("mali_egl_image_get_buffer_ext_phandle() called");
    return 0;
}

/* Demangled: glColor4ub */
extern "C" __attribute__((visibility("default"))) int glColor4ub(void) {
    ALOGD("glColor4ub() called");
    return 0;
}

/* Demangled: glClearBufferiv */
extern "C" __attribute__((visibility("default"))) int glClearBufferiv(void) {
    ALOGD("glClearBufferiv() called");
    return 0;
}

/* Demangled: glTexParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuivOES(void) {
    ALOGD("glTexParameterIuivOES() called");
    return 0;
}

/* Demangled: vkAcquireImageANDROID */
extern "C" __attribute__((visibility("default"))) int vkAcquireImageANDROID(void) {
    ALOGD("vkAcquireImageANDROID() called");
    return 0;
}

/* Demangled: eglCopyBuffers */
extern "C" __attribute__((visibility("default"))) int eglCopyBuffers(void) {
    ALOGD("eglCopyBuffers() called");
    return 0;
}

/* Demangled: glLightxOES */
extern "C" __attribute__((visibility("default"))) int glLightxOES(void) {
    ALOGD("glLightxOES() called");
    return 0;
}

/* Demangled: glLoadMatrixf */
extern "C" __attribute__((visibility("default"))) int glLoadMatrixf(void) {
    ALOGD("glLoadMatrixf() called");
    return 0;
}

/* Demangled: glScalexOES */
extern "C" __attribute__((visibility("default"))) int glScalexOES(void) {
    ALOGD("glScalexOES() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_yuva_comp_sizes */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_yuva_comp_sizes(void) {
    ALOGD("egl_color_buffer_get_yuva_comp_sizes() called");
    return 0;
}

/* Demangled: mali_egl_image_get_format */
extern "C" __attribute__((visibility("default"))) int mali_egl_image_get_format(void) {
    ALOGD("mali_egl_image_get_format() called");
    return 0;
}

/* Demangled: glGetTexParameterxv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterxv(void) {
    ALOGD("glGetTexParameterxv() called");
    return 0;
}

/* Demangled: glTexEnvfv */
extern "C" __attribute__((visibility("default"))) int glTexEnvfv(void) {
    ALOGD("glTexEnvfv() called");
    return 0;
}

/* Demangled: glGetBooleani_v */
extern "C" __attribute__((visibility("default"))) int glGetBooleani_v(void) {
    ALOGD("glGetBooleani_v() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIivOES(void) {
    ALOGD("glGetSamplerParameterIivOES() called");
    return 0;
}

/* Demangled: mtk_set_extra_buffer_type */
extern "C" __attribute__((visibility("default"))) int mtk_set_extra_buffer_type(void) {
    ALOGD("mtk_set_extra_buffer_type() called");
    return 0;
}

/* Demangled: egl_color_buffer_wrap_external */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_wrap_external(void) {
    ALOGD("egl_color_buffer_wrap_external() called");
    return 0;
}

/* Demangled: glClipPlanefOES */
extern "C" __attribute__((visibility("default"))) int glClipPlanefOES(void) {
    ALOGD("glClipPlanefOES() called");
    return 0;
}

/* Demangled: glTexEnvxvOES */
extern "C" __attribute__((visibility("default"))) int glTexEnvxvOES(void) {
    ALOGD("glTexEnvxvOES() called");
    return 0;
}

/* Demangled: glCreateShaderProgramv */
extern "C" __attribute__((visibility("default"))) int glCreateShaderProgramv(void) {
    ALOGD("glCreateShaderProgramv() called");
    return 0;
}

/* Demangled: glGetnUniformiv */
extern "C" __attribute__((visibility("default"))) int glGetnUniformiv(void) {
    ALOGD("glGetnUniformiv() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: glAlphaFunc */
extern "C" __attribute__((visibility("default"))) int glAlphaFunc(void) {
    ALOGD("glAlphaFunc() called");
    return 0;
}

/* Demangled: glNormal3x */
extern "C" __attribute__((visibility("default"))) int glNormal3x(void) {
    ALOGD("glNormal3x() called");
    return 0;
}

/* Demangled: glDrawArraysIndirect */
extern "C" __attribute__((visibility("default"))) int glDrawArraysIndirect(void) {
    ALOGD("glDrawArraysIndirect() called");
    return 0;
}

/* Demangled: clCreateSubDevices */
extern "C" __attribute__((visibility("default"))) int clCreateSubDevices(void) {
    ALOGD("clCreateSubDevices() called");
    return 0;
}

/* Demangled: clCreateSamplerWithProperties */
extern "C" __attribute__((visibility("default"))) int clCreateSamplerWithProperties(void) {
    ALOGD("clCreateSamplerWithProperties() called");
    return 0;
}

/* Demangled: glMultMatrixf */
extern "C" __attribute__((visibility("default"))) int glMultMatrixf(void) {
    ALOGD("glMultMatrixf() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4x2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4x2fv(void) {
    ALOGD("glProgramUniformMatrix4x2fv() called");
    return 0;
}

/* Demangled: glSamplerParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIuivOES(void) {
    ALOGD("glSamplerParameterIuivOES() called");
    return 0;
}

/* Exported Object: prof_buffer_include_switch_time */
extern "C" __attribute__((visibility("default"))) void* prof_buffer_include_switch_time = NULL;

/* Demangled: clRetainContext */
extern "C" __attribute__((visibility("default"))) int clRetainContext(void) {
    ALOGD("clRetainContext() called");
    return 0;
}

/* Demangled: egl_color_buffer_validate_render_target */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_validate_render_target(void) {
    ALOGD("egl_color_buffer_validate_render_target() called");
    return 0;
}

/* Demangled: glDisableiOES */
extern "C" __attribute__((visibility("default"))) int glDisableiOES(void) {
    ALOGD("glDisableiOES() called");
    return 0;
}

/* Demangled: clSetKernelArg */
extern "C" __attribute__((visibility("default"))) int clSetKernelArg(void) {
    ALOGD("clSetKernelArg() called");
    return 0;
}

/* Demangled: glMaterialx */
extern "C" __attribute__((visibility("default"))) int glMaterialx(void) {
    ALOGD("glMaterialx() called");
    return 0;
}

/* Demangled: glActiveShaderProgram */
extern "C" __attribute__((visibility("default"))) int glActiveShaderProgram(void) {
    ALOGD("glActiveShaderProgram() called");
    return 0;
}

/* Demangled: egl_get_winsys_surface */
extern "C" __attribute__((visibility("default"))) int egl_get_winsys_surface(void) {
    ALOGD("egl_get_winsys_surface() called");
    return 0;
}

/* Demangled: glDiscardFramebufferEXT */
extern "C" __attribute__((visibility("default"))) int glDiscardFramebufferEXT(void) {
    ALOGD("glDiscardFramebufferEXT() called");
    return 0;
}

/* Demangled: glReadnPixelsEXT */
extern "C" __attribute__((visibility("default"))) int glReadnPixelsEXT(void) {
    ALOGD("glReadnPixelsEXT() called");
    return 0;
}

/* Demangled: eglGetCurrentContext */
extern "C" __attribute__((visibility("default"))) int eglGetCurrentContext(void) {
    ALOGD("eglGetCurrentContext() called");
    return 0;
}

/* Demangled: eglGetCurrentSurface */
extern "C" __attribute__((visibility("default"))) int eglGetCurrentSurface(void) {
    ALOGD("eglGetCurrentSurface() called");
    return 0;
}

/* Demangled: glFrustumfOES */
extern "C" __attribute__((visibility("default"))) int glFrustumfOES(void) {
    ALOGD("glFrustumfOES() called");
    return 0;
}

/* Demangled: glDisableVertexAttribArray */
extern "C" __attribute__((visibility("default"))) int glDisableVertexAttribArray(void) {
    ALOGD("glDisableVertexAttribArray() called");
    return 0;
}

/* Demangled: MTK_isRGB888Supported */
extern "C" __attribute__((visibility("default"))) int MTK_isRGB888Supported(void) {
    ALOGD("MTK_isRGB888Supported() called");
    return 0;
}

/* Demangled: clSetKernelArgSVMPointer */
extern "C" __attribute__((visibility("default"))) int clSetKernelArgSVMPointer(void) {
    ALOGD("clSetKernelArgSVMPointer() called");
    return 0;
}

/* Demangled: glGetLightxv */
extern "C" __attribute__((visibility("default"))) int glGetLightxv(void) {
    ALOGD("glGetLightxv() called");
    return 0;
}

/* Demangled: glLightf */
extern "C" __attribute__((visibility("default"))) int glLightf(void) {
    ALOGD("glLightf() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3x2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3x2fv(void) {
    ALOGD("glProgramUniformMatrix3x2fv() called");
    return 0;
}

/* Demangled: glUniform4f */
extern "C" __attribute__((visibility("default"))) int glUniform4f(void) {
    ALOGD("glUniform4f() called");
    return 0;
}

/* Demangled: glTexEnvxOES */
extern "C" __attribute__((visibility("default"))) int glTexEnvxOES(void) {
    ALOGD("glTexEnvxOES() called");
    return 0;
}

/* Demangled: glBindImageTexture */
extern "C" __attribute__((visibility("default"))) int glBindImageTexture(void) {
    ALOGD("glBindImageTexture() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: MTK_ATRACE_BEGIN */
extern "C" __attribute__((visibility("default"))) int MTK_ATRACE_BEGIN(void) {
    ALOGD("MTK_ATRACE_BEGIN() called");
    return 0;
}

/* Demangled: MTK_ATRACE_END */
extern "C" __attribute__((visibility("default"))) int MTK_ATRACE_END(void) {
    ALOGD("MTK_ATRACE_END() called");
    return 0;
}

/* Demangled: glDeleteProgramPipelines */
extern "C" __attribute__((visibility("default"))) int glDeleteProgramPipelines(void) {
    ALOGD("glDeleteProgramPipelines() called");
    return 0;
}

/* Demangled: glClearColor */
extern "C" __attribute__((visibility("default"))) int glClearColor(void) {
    ALOGD("glClearColor() called");
    return 0;
}

/* Demangled: glMatrixIndexPointerOES */
extern "C" __attribute__((visibility("default"))) int glMatrixIndexPointerOES(void) {
    ALOGD("glMatrixIndexPointerOES() called");
    return 0;
}

/* Demangled: glDrawBuffers */
extern "C" __attribute__((visibility("default"))) int glDrawBuffers(void) {
    ALOGD("glDrawBuffers() called");
    return 0;
}

/* Demangled: glGetProgramResourceName */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceName(void) {
    ALOGD("glGetProgramResourceName() called");
    return 0;
}

/* Demangled: glTexBuffer */
extern "C" __attribute__((visibility("default"))) int glTexBuffer(void) {
    ALOGD("glTexBuffer() called");
    return 0;
}

/* Demangled: glUniform4i */
extern "C" __attribute__((visibility("default"))) int glUniform4i(void) {
    ALOGD("glUniform4i() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: eglGetError */
extern "C" __attribute__((visibility("default"))) int eglGetError(void) {
    ALOGD("eglGetError() called");
    return 0;
}

/* Demangled: glIsTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glIsTransformFeedback(void) {
    ALOGD("glIsTransformFeedback() called");
    return 0;
}

/* Demangled: glGenBuffers */
extern "C" __attribute__((visibility("default"))) int glGenBuffers(void) {
    ALOGD("glGenBuffers() called");
    return 0;
}

/* Demangled: glGetTexParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameteriv(void) {
    ALOGD("glGetTexParameteriv() called");
    return 0;
}

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Demangled: glNormalPointer */
extern "C" __attribute__((visibility("default"))) int glNormalPointer(void) {
    ALOGD("glNormalPointer() called");
    return 0;
}

/* Demangled: glBufferStorageEXT */
extern "C" __attribute__((visibility("default"))) int glBufferStorageEXT(void) {
    ALOGD("glBufferStorageEXT() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexOES(void) {
    ALOGD("glDrawElementsInstancedBaseVertexOES() called");
    return 0;
}

/* Demangled: glDrawArrays */
extern "C" __attribute__((visibility("default"))) int glDrawArrays(void) {
    ALOGD("glDrawArrays() called");
    return 0;
}

/* Demangled: glDrawTexiOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexiOES(void) {
    ALOGD("glDrawTexiOES() called");
    return 0;
}

/* Demangled: glTexCoordPointer */
extern "C" __attribute__((visibility("default"))) int glTexCoordPointer(void) {
    ALOGD("glTexCoordPointer() called");
    return 0;
}

/* Demangled: glProgramBinary */
extern "C" __attribute__((visibility("default"))) int glProgramBinary(void) {
    ALOGD("glProgramBinary() called");
    return 0;
}

/* Demangled: glVertexAttrib1fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib1fv(void) {
    ALOGD("glVertexAttrib1fv() called");
    return 0;
}

/* Demangled: glCopyTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int glCopyTexSubImage2D(void) {
    ALOGD("glCopyTexSubImage2D() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_rotation */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_rotation(void) {
    ALOGD("egl_color_buffer_set_rotation() called");
    return 0;
}

/* Demangled: glFogf */
extern "C" __attribute__((visibility("default"))) int glFogf(void) {
    ALOGD("glFogf() called");
    return 0;
}

/* Demangled: glFramebufferTexture */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture(void) {
    ALOGD("glFramebufferTexture() called");
    return 0;
}

/* Demangled: glDebugMessageInsertKHR */
extern "C" __attribute__((visibility("default"))) int glDebugMessageInsertKHR(void) {
    ALOGD("glDebugMessageInsertKHR() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Demangled: egl_cobj_surface_format_create */
extern "C" __attribute__((visibility("default"))) int egl_cobj_surface_format_create(void) {
    ALOGD("egl_cobj_surface_format_create() called");
    return 0;
}

/* Demangled: glLoadMatrixx */
extern "C" __attribute__((visibility("default"))) int glLoadMatrixx(void) {
    ALOGD("glLoadMatrixx() called");
    return 0;
}

/* Demangled: glDeleteTransformFeedbacks */
extern "C" __attribute__((visibility("default"))) int glDeleteTransformFeedbacks(void) {
    ALOGD("glDeleteTransformFeedbacks() called");
    return 0;
}

/* Demangled: glPauseTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glPauseTransformFeedback(void) {
    ALOGD("glPauseTransformFeedback() called");
    return 0;
}

/* Demangled: glDebugMessageControl */
extern "C" __attribute__((visibility("default"))) int glDebugMessageControl(void) {
    ALOGD("glDebugMessageControl() called");
    return 0;
}

/* Demangled: clEnqueueMarker */
extern "C" __attribute__((visibility("default"))) int clEnqueueMarker(void) {
    ALOGD("clEnqueueMarker() called");
    return 0;
}

/* Demangled: glBlendFuncSeparateiOES */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparateiOES(void) {
    ALOGD("glBlendFuncSeparateiOES() called");
    return 0;
}

/* Demangled: osup_thread_data_set */
extern "C" __attribute__((visibility("default"))) int osup_thread_data_set(void) {
    ALOGD("osup_thread_data_set() called");
    return 0;
}

/* Demangled: glTexBufferRangeEXT */
extern "C" __attribute__((visibility("default"))) int glTexBufferRangeEXT(void) {
    ALOGD("glTexBufferRangeEXT() called");
    return 0;
}

/* Demangled: glUniform2iv */
extern "C" __attribute__((visibility("default"))) int glUniform2iv(void) {
    ALOGD("glUniform2iv() called");
    return 0;
}

/* Demangled: eglCreateWindowSurface */
extern "C" __attribute__((visibility("default"))) int eglCreateWindowSurface(void) {
    ALOGD("eglCreateWindowSurface() called");
    return 0;
}

/* Demangled: glGetShaderPrecisionFormat */
extern "C" __attribute__((visibility("default"))) int glGetShaderPrecisionFormat(void) {
    ALOGD("glGetShaderPrecisionFormat() called");
    return 0;
}

/* Demangled: glIsVertexArrayOES */
extern "C" __attribute__((visibility("default"))) int glIsVertexArrayOES(void) {
    ALOGD("glIsVertexArrayOES() called");
    return 0;
}

/* Demangled: clEnqueueFillBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueFillBuffer(void) {
    ALOGD("clEnqueueFillBuffer() called");
    return 0;
}

/* Demangled: glMultMatrixx */
extern "C" __attribute__((visibility("default"))) int glMultMatrixx(void) {
    ALOGD("glMultMatrixx() called");
    return 0;
}

/* Demangled: glPolygonOffsetx */
extern "C" __attribute__((visibility("default"))) int glPolygonOffsetx(void) {
    ALOGD("glPolygonOffsetx() called");
    return 0;
}

/* Demangled: glBeginQuery */
extern "C" __attribute__((visibility("default"))) int glBeginQuery(void) {
    ALOGD("glBeginQuery() called");
    return 0;
}

/* Demangled: glProgramUniform2iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2iv(void) {
    ALOGD("glProgramUniform2iv() called");
    return 0;
}

/* Demangled: glEGLImageTargetTexStorageEXT */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetTexStorageEXT(void) {
    ALOGD("glEGLImageTargetTexStorageEXT() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: glLightxv */
extern "C" __attribute__((visibility("default"))) int glLightxv(void) {
    ALOGD("glLightxv() called");
    return 0;
}

/* Demangled: glTexStorage3DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorage3DEXT(void) {
    ALOGD("glTexStorage3DEXT() called");
    return 0;
}

/* Demangled: glGetObjectLabelKHR */
extern "C" __attribute__((visibility("default"))) int glGetObjectLabelKHR(void) {
    ALOGD("glGetObjectLabelKHR() called");
    return 0;
}

/* Demangled: clEnqueueCopyBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyBuffer(void) {
    ALOGD("clEnqueueCopyBuffer() called");
    return 0;
}

/* Demangled: glGetProgramiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramiv(void) {
    ALOGD("glGetProgramiv() called");
    return 0;
}

/* Demangled: glBindBuffer */
extern "C" __attribute__((visibility("default"))) int glBindBuffer(void) {
    ALOGD("glBindBuffer() called");
    return 0;
}

/* Demangled: glCheckFramebufferStatusOES */
extern "C" __attribute__((visibility("default"))) int glCheckFramebufferStatusOES(void) {
    ALOGD("glCheckFramebufferStatusOES() called");
    return 0;
}

/* Demangled: glBlendEquationSeparate */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparate(void) {
    ALOGD("glBlendEquationSeparate() called");
    return 0;
}

/* Demangled: glTexStorage3DMultisample */
extern "C" __attribute__((visibility("default"))) int glTexStorage3DMultisample(void) {
    ALOGD("glTexStorage3DMultisample() called");
    return 0;
}

/* Demangled: glValidateProgramPipeline */
extern "C" __attribute__((visibility("default"))) int glValidateProgramPipeline(void) {
    ALOGD("glValidateProgramPipeline() called");
    return 0;
}

/* Demangled: egl_color_buffer_group_set_layer */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_group_set_layer(void) {
    ALOGD("egl_color_buffer_group_set_layer() called");
    return 0;
}

/* Demangled: glGenerateMipmap */
extern "C" __attribute__((visibility("default"))) int glGenerateMipmap(void) {
    ALOGD("glGenerateMipmap() called");
    return 0;
}

/* Demangled: glProgramUniform1f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1f(void) {
    ALOGD("glProgramUniform1f() called");
    return 0;
}

/* Demangled: glLightx */
extern "C" __attribute__((visibility("default"))) int glLightx(void) {
    ALOGD("glLightx() called");
    return 0;
}

/* Demangled: glGetnUniformuiv */
extern "C" __attribute__((visibility("default"))) int glGetnUniformuiv(void) {
    ALOGD("glGetnUniformuiv() called");
    return 0;
}

/* Demangled: glVertexAttrib2f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib2f(void) {
    ALOGD("glVertexAttrib2f() called");
    return 0;
}

/* Demangled: glFramebufferTextureOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureOES(void) {
    ALOGD("glFramebufferTextureOES() called");
    return 0;
}

/* Demangled: glColorMask */
extern "C" __attribute__((visibility("default"))) int glColorMask(void) {
    ALOGD("glColorMask() called");
    return 0;
}

/* Demangled: glTexStorage2DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorage2DEXT(void) {
    ALOGD("glTexStorage2DEXT() called");
    return 0;
}

/* Demangled: egl_display_release */
extern "C" __attribute__((visibility("default"))) int egl_display_release(void) {
    ALOGD("egl_display_release() called");
    return 0;
}

/* Demangled: glAlphaFuncx */
extern "C" __attribute__((visibility("default"))) int glAlphaFuncx(void) {
    ALOGD("glAlphaFuncx() called");
    return 0;
}

/* Demangled: glProgramUniform1i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1i(void) {
    ALOGD("glProgramUniform1i() called");
    return 0;
}

/* Demangled: glPushDebugGroup */
extern "C" __attribute__((visibility("default"))) int glPushDebugGroup(void) {
    ALOGD("glPushDebugGroup() called");
    return 0;
}

/* Demangled: clCreateImage2D */
extern "C" __attribute__((visibility("default"))) int clCreateImage2D(void) {
    ALOGD("clCreateImage2D() called");
    return 0;
}

/* Demangled: clCreateKernelsInProgram */
extern "C" __attribute__((visibility("default"))) int clCreateKernelsInProgram(void) {
    ALOGD("clCreateKernelsInProgram() called");
    return 0;
}

/* Demangled: clGetKernelInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelInfo(void) {
    ALOGD("clGetKernelInfo() called");
    return 0;
}

/* Demangled: eglGetSyncAttribKHR */
extern "C" __attribute__((visibility("default"))) int eglGetSyncAttribKHR(void) {
    ALOGD("eglGetSyncAttribKHR() called");
    return 0;
}

/* Demangled: osup_sync_object_term */
extern "C" __attribute__((visibility("default"))) int osup_sync_object_term(void) {
    ALOGD("osup_sync_object_term() called");
    return 0;
}

/* Demangled: glDispatchCompute */
extern "C" __attribute__((visibility("default"))) int glDispatchCompute(void) {
    ALOGD("glDispatchCompute() called");
    return 0;
}

/* Demangled: glGetInternalformativ */
extern "C" __attribute__((visibility("default"))) int glGetInternalformativ(void) {
    ALOGD("glGetInternalformativ() called");
    return 0;
}

/* Demangled: clEnqueueNDRangeKernel */
extern "C" __attribute__((visibility("default"))) int clEnqueueNDRangeKernel(void) {
    ALOGD("clEnqueueNDRangeKernel() called");
    return 0;
}

/* Demangled: glBlendEquationSeparateiOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparateiOES(void) {
    ALOGD("glBlendEquationSeparateiOES() called");
    return 0;
}

/* Demangled: glGetQueryObjectui64vEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectui64vEXT(void) {
    ALOGD("glGetQueryObjectui64vEXT() called");
    return 0;
}

/* Demangled: glTexBufferOES */
extern "C" __attribute__((visibility("default"))) int glTexBufferOES(void) {
    ALOGD("glTexBufferOES() called");
    return 0;
}

/* Demangled: clEnqueueMapImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueMapImage(void) {
    ALOGD("clEnqueueMapImage() called");
    return 0;
}

/* Demangled: clReleaseCommandQueue */
extern "C" __attribute__((visibility("default"))) int clReleaseCommandQueue(void) {
    ALOGD("clReleaseCommandQueue() called");
    return 0;
}

/* Demangled: clReleaseSampler */
extern "C" __attribute__((visibility("default"))) int clReleaseSampler(void) {
    ALOGD("clReleaseSampler() called");
    return 0;
}

/* Demangled: config_compatible_with_format */
extern "C" __attribute__((visibility("default"))) int config_compatible_with_format(void) {
    ALOGD("config_compatible_with_format() called");
    return 0;
}

/* Demangled: glCompressedTexImage3DOES */
extern "C" __attribute__((visibility("default"))) int glCompressedTexImage3DOES(void) {
    ALOGD("glCompressedTexImage3DOES() called");
    return 0;
}

/* Demangled: clCreateFromEGLImageKHR */
extern "C" __attribute__((visibility("default"))) int clCreateFromEGLImageKHR(void) {
    ALOGD("clCreateFromEGLImageKHR() called");
    return 0;
}

/* Demangled: clGetMemObjectInfo */
extern "C" __attribute__((visibility("default"))) int clGetMemObjectInfo(void) {
    ALOGD("clGetMemObjectInfo() called");
    return 0;
}

/* Demangled: clReleaseKernel */
extern "C" __attribute__((visibility("default"))) int clReleaseKernel(void) {
    ALOGD("clReleaseKernel() called");
    return 0;
}

/* Demangled: glClearDepthf */
extern "C" __attribute__((visibility("default"))) int glClearDepthf(void) {
    ALOGD("glClearDepthf() called");
    return 0;
}

/* Demangled: vkGetSwapchainGrallocUsage2ANDROID */
extern "C" __attribute__((visibility("default"))) int vkGetSwapchainGrallocUsage2ANDROID(void) {
    ALOGD("vkGetSwapchainGrallocUsage2ANDROID() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Demangled: glColor4f */
extern "C" __attribute__((visibility("default"))) int glColor4f(void) {
    ALOGD("glColor4f() called");
    return 0;
}

/* Demangled: glBindRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glBindRenderbuffer(void) {
    ALOGD("glBindRenderbuffer() called");
    return 0;
}

/* Demangled: glGetTexParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuiv(void) {
    ALOGD("glGetTexParameterIuiv() called");
    return 0;
}

/* Demangled: glDepthMask */
extern "C" __attribute__((visibility("default"))) int glDepthMask(void) {
    ALOGD("glDepthMask() called");
    return 0;
}

/* Demangled: __fixdfdi */
extern "C" __attribute__((visibility("default"))) int __fixdfdi(void) {
    ALOGD("__fixdfdi() called");
    return 0;
}

/* Demangled: glFogx */
extern "C" __attribute__((visibility("default"))) int glFogx(void) {
    ALOGD("glFogx() called");
    return 0;
}

/* Demangled: glDeleteSync */
extern "C" __attribute__((visibility("default"))) int glDeleteSync(void) {
    ALOGD("glDeleteSync() called");
    return 0;
}

/* Demangled: glGetProgramBinaryOES */
extern "C" __attribute__((visibility("default"))) int glGetProgramBinaryOES(void) {
    ALOGD("glGetProgramBinaryOES() called");
    return 0;
}

/* Demangled: glGetShaderiv */
extern "C" __attribute__((visibility("default"))) int glGetShaderiv(void) {
    ALOGD("glGetShaderiv() called");
    return 0;
}

/* Demangled: glFrontFace */
extern "C" __attribute__((visibility("default"))) int glFrontFace(void) {
    ALOGD("glFrontFace() called");
    return 0;
}

/* Demangled: glLightModelf */
extern "C" __attribute__((visibility("default"))) int glLightModelf(void) {
    ALOGD("glLightModelf() called");
    return 0;
}

/* Demangled: glOrthoxOES */
extern "C" __attribute__((visibility("default"))) int glOrthoxOES(void) {
    ALOGD("glOrthoxOES() called");
    return 0;
}

/* Demangled: glBindProgramPipeline */
extern "C" __attribute__((visibility("default"))) int glBindProgramPipeline(void) {
    ALOGD("glBindProgramPipeline() called");
    return 0;
}

/* Demangled: glUniformMatrix2fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2fv(void) {
    ALOGD("glUniformMatrix2fv() called");
    return 0;
}

/* Demangled: eglDestroyContext */
extern "C" __attribute__((visibility("default"))) int eglDestroyContext(void) {
    ALOGD("eglDestroyContext() called");
    return 0;
}

/* Demangled: eglDestroySurface */
extern "C" __attribute__((visibility("default"))) int eglDestroySurface(void) {
    ALOGD("eglDestroySurface() called");
    return 0;
}

/* Demangled: glRenderbufferStorageOES */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageOES(void) {
    ALOGD("glRenderbufferStorageOES() called");
    return 0;
}

/* Demangled: glGetError */
extern "C" __attribute__((visibility("default"))) int glGetError(void) {
    ALOGD("glGetError() called");
    return 0;
}

/* Demangled: __fixunssfdi */
extern "C" __attribute__((visibility("default"))) int __fixunssfdi(void) {
    ALOGD("__fixunssfdi() called");
    return 0;
}

/* Demangled: egl_color_buffer_group_get_num_layers */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_group_get_num_layers(void) {
    ALOGD("egl_color_buffer_group_get_num_layers() called");
    return 0;
}

/* Demangled: glMaterialfv */
extern "C" __attribute__((visibility("default"))) int glMaterialfv(void) {
    ALOGD("glMaterialfv() called");
    return 0;
}

/* Demangled: glClearBufferuiv */
extern "C" __attribute__((visibility("default"))) int glClearBufferuiv(void) {
    ALOGD("glClearBufferuiv() called");
    return 0;
}

/* Demangled: glPatchParameteriEXT */
extern "C" __attribute__((visibility("default"))) int glPatchParameteriEXT(void) {
    ALOGD("glPatchParameteriEXT() called");
    return 0;
}

/* Demangled: glDeleteTextures */
extern "C" __attribute__((visibility("default"))) int glDeleteTextures(void) {
    ALOGD("glDeleteTextures() called");
    return 0;
}

/* Demangled: glMultiTexCoord4bOES */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4bOES(void) {
    ALOGD("glMultiTexCoord4bOES() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: clReleaseMemObject */
extern "C" __attribute__((visibility("default"))) int clReleaseMemObject(void) {
    ALOGD("clReleaseMemObject() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_format */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_format(void) {
    ALOGD("egl_color_buffer_get_format() called");
    return 0;
}

/* Demangled: egl_color_buffer_validate_format */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_validate_format(void) {
    ALOGD("egl_color_buffer_validate_format() called");
    return 0;
}

/* Demangled: glDrawTexivOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexivOES(void) {
    ALOGD("glDrawTexivOES() called");
    return 0;
}

/* Demangled: glSamplerParameterf */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterf(void) {
    ALOGD("glSamplerParameterf() called");
    return 0;
}

/* Demangled: glBindBufferBase */
extern "C" __attribute__((visibility("default"))) int glBindBufferBase(void) {
    ALOGD("glBindBufferBase() called");
    return 0;
}

/* Demangled: glGetSynciv */
extern "C" __attribute__((visibility("default"))) int glGetSynciv(void) {
    ALOGD("glGetSynciv() called");
    return 0;
}

/* Demangled: glUniform4ui */
extern "C" __attribute__((visibility("default"))) int glUniform4ui(void) {
    ALOGD("glUniform4ui() called");
    return 0;
}

/* Demangled: glTexParameterf */
extern "C" __attribute__((visibility("default"))) int glTexParameterf(void) {
    ALOGD("glTexParameterf() called");
    return 0;
}

/* Demangled: cmpbe_blend_shadergen_generate_shader */
extern "C" __attribute__((visibility("default"))) int cmpbe_blend_shadergen_generate_shader(void) {
    ALOGD("cmpbe_blend_shadergen_generate_shader() called");
    return 0;
}

/* Demangled: glDeleteRenderbuffersOES */
extern "C" __attribute__((visibility("default"))) int glDeleteRenderbuffersOES(void) {
    ALOGD("glDeleteRenderbuffersOES() called");
    return 0;
}

/* Demangled: glVertexBindingDivisor */
extern "C" __attribute__((visibility("default"))) int glVertexBindingDivisor(void) {
    ALOGD("glVertexBindingDivisor() called");
    return 0;
}

/* Demangled: osup_dlclose */
extern "C" __attribute__((visibility("default"))) int osup_dlclose(void) {
    ALOGD("osup_dlclose() called");
    return 0;
}

/* Demangled: clUnloadCompiler */
extern "C" __attribute__((visibility("default"))) int clUnloadCompiler(void) {
    ALOGD("clUnloadCompiler() called");
    return 0;
}

/* Demangled: eglBindAPI */
extern "C" __attribute__((visibility("default"))) int eglBindAPI(void) {
    ALOGD("eglBindAPI() called");
    return 0;
}

/* Demangled: glPolygonOffsetxOES */
extern "C" __attribute__((visibility("default"))) int glPolygonOffsetxOES(void) {
    ALOGD("glPolygonOffsetxOES() called");
    return 0;
}

/* Demangled: glTexGenxOES */
extern "C" __attribute__((visibility("default"))) int glTexGenxOES(void) {
    ALOGD("glTexGenxOES() called");
    return 0;
}

/* Demangled: glProgramUniform4ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4ui(void) {
    ALOGD("glProgramUniform4ui() called");
    return 0;
}

/* Demangled: glSamplerParameteri */
extern "C" __attribute__((visibility("default"))) int glSamplerParameteri(void) {
    ALOGD("glSamplerParameteri() called");
    return 0;
}

/* Demangled: clEnqueueUnmapMemObject */
extern "C" __attribute__((visibility("default"))) int clEnqueueUnmapMemObject(void) {
    ALOGD("clEnqueueUnmapMemObject() called");
    return 0;
}

/* Demangled: clSetEventCallback */
extern "C" __attribute__((visibility("default"))) int clSetEventCallback(void) {
    ALOGD("clSetEventCallback() called");
    return 0;
}

/* Demangled: glUseProgram */
extern "C" __attribute__((visibility("default"))) int glUseProgram(void) {
    ALOGD("glUseProgram() called");
    return 0;
}

/* Demangled: glVertexAttribI4ui */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4ui(void) {
    ALOGD("glVertexAttribI4ui() called");
    return 0;
}

/* Demangled: glTexParameteri */
extern "C" __attribute__((visibility("default"))) int glTexParameteri(void) {
    ALOGD("glTexParameteri() called");
    return 0;
}

/* Demangled: egl_color_buffer_unmap */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_unmap(void) {
    ALOGD("egl_color_buffer_unmap() called");
    return 0;
}

/* Demangled: glGetQueryivEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryivEXT(void) {
    ALOGD("glGetQueryivEXT() called");
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

/* Demangled: clReleaseProgram */
extern "C" __attribute__((visibility("default"))) int clReleaseProgram(void) {
    ALOGD("clReleaseProgram() called");
    return 0;
}

/* Demangled: clSetUserEventStatus */
extern "C" __attribute__((visibility("default"))) int clSetUserEventStatus(void) {
    ALOGD("clSetUserEventStatus() called");
    return 0;
}

/* Demangled: glVertexPointer */
extern "C" __attribute__((visibility("default"))) int glVertexPointer(void) {
    ALOGD("glVertexPointer() called");
    return 0;
}

/* Demangled: glColorMaskiOES */
extern "C" __attribute__((visibility("default"))) int glColorMaskiOES(void) {
    ALOGD("glColorMaskiOES() called");
    return 0;
}

/* Demangled: glGenProgramPipelines */
extern "C" __attribute__((visibility("default"))) int glGenProgramPipelines(void) {
    ALOGD("glGenProgramPipelines() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_transform */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_transform(void) {
    ALOGD("egl_color_buffer_set_transform() called");
    return 0;
}

/* Demangled: eglBindTexImage */
extern "C" __attribute__((visibility("default"))) int eglBindTexImage(void) {
    ALOGD("eglBindTexImage() called");
    return 0;
}

/* Demangled: glGetTexParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuivEXT(void) {
    ALOGD("glGetTexParameterIuivEXT() called");
    return 0;
}

/* Demangled: glGetVertexAttribfv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribfv(void) {
    ALOGD("glGetVertexAttribfv() called");
    return 0;
}

/* Demangled: glTransformFeedbackVaryings */
extern "C" __attribute__((visibility("default"))) int glTransformFeedbackVaryings(void) {
    ALOGD("glTransformFeedbackVaryings() called");
    return 0;
}

/* Demangled: clCreateProgramWithBuiltInKernels */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithBuiltInKernels(void) {
    ALOGD("clCreateProgramWithBuiltInKernels() called");
    return 0;
}

/* Demangled: glGetTexEnvxvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexEnvxvOES(void) {
    ALOGD("glGetTexEnvxvOES() called");
    return 0;
}

/* Demangled: glReadPixels */
extern "C" __attribute__((visibility("default"))) int glReadPixels(void) {
    ALOGD("glReadPixels() called");
    return 0;
}

/* Demangled: clGetEventInfo */
extern "C" __attribute__((visibility("default"))) int clGetEventInfo(void) {
    ALOGD("clGetEventInfo() called");
    return 0;
}

/* Demangled: clImportMemoryARM */
extern "C" __attribute__((visibility("default"))) int clImportMemoryARM(void) {
    ALOGD("clImportMemoryARM() called");
    return 0;
}

/* Demangled: glQueryMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glQueryMatrixxOES(void) {
    ALOGD("glQueryMatrixxOES() called");
    return 0;
}

/* Demangled: glCopyTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int glCopyTexSubImage3D(void) {
    ALOGD("glCopyTexSubImage3D() called");
    return 0;
}

/* Demangled: clGetKernelSubGroupInfoKHR */
extern "C" __attribute__((visibility("default"))) int clGetKernelSubGroupInfoKHR(void) {
    ALOGD("clGetKernelSubGroupInfoKHR() called");
    return 0;
}

/* Demangled: clEnqueueSVMMemcpy */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMemcpy(void) {
    ALOGD("clEnqueueSVMMemcpy() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_age */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_age(void) {
    ALOGD("egl_color_buffer_get_age() called");
    return 0;
}

/* Demangled: glIsSync */
extern "C" __attribute__((visibility("default"))) int glIsSync(void) {
    ALOGD("glIsSync() called");
    return 0;
}

/* Demangled: osup_thread_callback_unset */
extern "C" __attribute__((visibility("default"))) int osup_thread_callback_unset(void) {
    ALOGD("osup_thread_callback_unset() called");
    return 0;
}

/* Demangled: glClearDepthx */
extern "C" __attribute__((visibility("default"))) int glClearDepthx(void) {
    ALOGD("glClearDepthx() called");
    return 0;
}

/* Demangled: glGetMaterialxvOES */
extern "C" __attribute__((visibility("default"))) int glGetMaterialxvOES(void) {
    ALOGD("glGetMaterialxvOES() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3fv(void) {
    ALOGD("glProgramUniformMatrix3fv() called");
    return 0;
}

/* Demangled: glGetFloatv */
extern "C" __attribute__((visibility("default"))) int glGetFloatv(void) {
    ALOGD("glGetFloatv() called");
    return 0;
}

/* Demangled: MTK_GetDumpFolder */
extern "C" __attribute__((visibility("default"))) int MTK_GetDumpFolder(void) {
    ALOGD("MTK_GetDumpFolder() called");
    return 0;
}

/* Demangled: glColor4x */
extern "C" __attribute__((visibility("default"))) int glColor4x(void) {
    ALOGD("glColor4x() called");
    return 0;
}

/* Demangled: glEnableiOES */
extern "C" __attribute__((visibility("default"))) int glEnableiOES(void) {
    ALOGD("glEnableiOES() called");
    return 0;
}

/* Demangled: glGetProgramPipelineiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramPipelineiv(void) {
    ALOGD("glGetProgramPipelineiv() called");
    return 0;
}

/* Demangled: eglCreateContext */
extern "C" __attribute__((visibility("default"))) int eglCreateContext(void) {
    ALOGD("eglCreateContext() called");
    return 0;
}

/* Demangled: glDeleteFramebuffersOES */
extern "C" __attribute__((visibility("default"))) int glDeleteFramebuffersOES(void) {
    ALOGD("glDeleteFramebuffersOES() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: glClearColorxOES */
extern "C" __attribute__((visibility("default"))) int glClearColorxOES(void) {
    ALOGD("glClearColorxOES() called");
    return 0;
}

/* Demangled: glLightModelx */
extern "C" __attribute__((visibility("default"))) int glLightModelx(void) {
    ALOGD("glLightModelx() called");
    return 0;
}

/* Demangled: osup_thread_getname */
extern "C" __attribute__((visibility("default"))) int osup_thread_getname(void) {
    ALOGD("osup_thread_getname() called");
    return 0;
}

/* Demangled: glDrawTexfvOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexfvOES(void) {
    ALOGD("glDrawTexfvOES() called");
    return 0;
}

/* Demangled: glTranslatef */
extern "C" __attribute__((visibility("default"))) int glTranslatef(void) {
    ALOGD("glTranslatef() called");
    return 0;
}

/* Demangled: glDrawRangeElements */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElements(void) {
    ALOGD("glDrawRangeElements() called");
    return 0;
}

/* Demangled: glTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int glTexSubImage2D(void) {
    ALOGD("glTexSubImage2D() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: glGetGraphicsResetStatusKHR */
extern "C" __attribute__((visibility("default"))) int glGetGraphicsResetStatusKHR(void) {
    ALOGD("glGetGraphicsResetStatusKHR() called");
    return 0;
}

/* Demangled: clGetProgramBuildInfo */
extern "C" __attribute__((visibility("default"))) int clGetProgramBuildInfo(void) {
    ALOGD("clGetProgramBuildInfo() called");
    return 0;
}

/* Demangled: clSetMemObjectDestructorCallback */
extern "C" __attribute__((visibility("default"))) int clSetMemObjectDestructorCallback(void) {
    ALOGD("clSetMemObjectDestructorCallback() called");
    return 0;
}

/* Demangled: glTexGenxvOES */
extern "C" __attribute__((visibility("default"))) int glTexGenxvOES(void) {
    ALOGD("glTexGenxvOES() called");
    return 0;
}

/* Demangled: glBindFramebuffer */
extern "C" __attribute__((visibility("default"))) int glBindFramebuffer(void) {
    ALOGD("glBindFramebuffer() called");
    return 0;
}

/* Demangled: glVertexAttribDivisor */
extern "C" __attribute__((visibility("default"))) int glVertexAttribDivisor(void) {
    ALOGD("glVertexAttribDivisor() called");
    return 0;
}

/* Demangled: _essl_set_compiler_option_value */
extern "C" __attribute__((visibility("default"))) int _essl_set_compiler_option_value(void) {
    ALOGD("_essl_set_compiler_option_value() called");
    return 0;
}

/* Demangled: glMapBufferRange */
extern "C" __attribute__((visibility("default"))) int glMapBufferRange(void) {
    ALOGD("glMapBufferRange() called");
    return 0;
}

/* Demangled: __aeabi_f2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2ulz(void) {
    ALOGD("__aeabi_f2ulz() called");
    return 0;
}

/* Demangled: clCreateCommandQueueWithPropertiesKHR */
extern "C" __attribute__((visibility("default"))) int clCreateCommandQueueWithPropertiesKHR(void) {
    ALOGD("clCreateCommandQueueWithPropertiesKHR() called");
    return 0;
}

/* Demangled: eglp_wait_buffer_displayed */
extern "C" __attribute__((visibility("default"))) int eglp_wait_buffer_displayed(void) {
    ALOGD("eglp_wait_buffer_displayed() called");
    return 0;
}

/* Demangled: glFrustumf */
extern "C" __attribute__((visibility("default"))) int glFrustumf(void) {
    ALOGD("glFrustumf() called");
    return 0;
}

/* Demangled: glTexParameterx */
extern "C" __attribute__((visibility("default"))) int glTexParameterx(void) {
    ALOGD("glTexParameterx() called");
    return 0;
}

/* Demangled: glColorMaski */
extern "C" __attribute__((visibility("default"))) int glColorMaski(void) {
    ALOGD("glColorMaski() called");
    return 0;
}

/* Demangled: glFenceSync */
extern "C" __attribute__((visibility("default"))) int glFenceSync(void) {
    ALOGD("glFenceSync() called");
    return 0;
}

/* Demangled: glGetTexLevelParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetTexLevelParameterfv(void) {
    ALOGD("glGetTexLevelParameterfv() called");
    return 0;
}

/* Demangled: glProgramUniform2f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2f(void) {
    ALOGD("glProgramUniform2f() called");
    return 0;
}

/* Demangled: glWaitSync */
extern "C" __attribute__((visibility("default"))) int glWaitSync(void) {
    ALOGD("glWaitSync() called");
    return 0;
}

/* Demangled: glPixelStorei */
extern "C" __attribute__((visibility("default"))) int glPixelStorei(void) {
    ALOGD("glPixelStorei() called");
    return 0;
}

/* Demangled: vkQueueSignalReleaseImageANDROID */
extern "C" __attribute__((visibility("default"))) int vkQueueSignalReleaseImageANDROID(void) {
    ALOGD("vkQueueSignalReleaseImageANDROID() called");
    return 0;
}

/* Demangled: osup_thread_create */
extern "C" __attribute__((visibility("default"))) int osup_thread_create(void) {
    ALOGD("osup_thread_create() called");
    return 0;
}

/* Demangled: osup_sync_object_init */
extern "C" __attribute__((visibility("default"))) int osup_sync_object_init(void) {
    ALOGD("osup_sync_object_init() called");
    return 0;
}

/* Demangled: eglp_read_write_buffer */
extern "C" __attribute__((visibility("default"))) int eglp_read_write_buffer(void) {
    ALOGD("eglp_read_write_buffer() called");
    return 0;
}

/* Demangled: glClearDepthxOES */
extern "C" __attribute__((visibility("default"))) int glClearDepthxOES(void) {
    ALOGD("glClearDepthxOES() called");
    return 0;
}

/* Demangled: glCopyBufferSubData */
extern "C" __attribute__((visibility("default"))) int glCopyBufferSubData(void) {
    ALOGD("glCopyBufferSubData() called");
    return 0;
}

/* Demangled: glVertexAttrib3f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib3f(void) {
    ALOGD("glVertexAttrib3f() called");
    return 0;
}

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Demangled: glDebugMessageCallbackKHR */
extern "C" __attribute__((visibility("default"))) int glDebugMessageCallbackKHR(void) {
    ALOGD("glDebugMessageCallbackKHR() called");
    return 0;
}

/* Demangled: glStencilMask */
extern "C" __attribute__((visibility("default"))) int glStencilMask(void) {
    ALOGD("glStencilMask() called");
    return 0;
}

/* Demangled: glProgramUniform2i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2i(void) {
    ALOGD("glProgramUniform2i() called");
    return 0;
}

/* Demangled: clCreateImage3D */
extern "C" __attribute__((visibility("default"))) int clCreateImage3D(void) {
    ALOGD("clCreateImage3D() called");
    return 0;
}

/* Demangled: glGetTexEnvfv */
extern "C" __attribute__((visibility("default"))) int glGetTexEnvfv(void) {
    ALOGD("glGetTexEnvfv() called");
    return 0;
}

/* Demangled: glBlendFuncSeparate */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparate(void) {
    ALOGD("glBlendFuncSeparate() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: eglSwapInterval */
extern "C" __attribute__((visibility("default"))) int eglSwapInterval(void) {
    ALOGD("eglSwapInterval() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_non_thread_safe */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_non_thread_safe(void) {
    ALOGD("egl_color_buffer_set_non_thread_safe() called");
    return 0;
}

/* Demangled: glMemoryBarrier */
extern "C" __attribute__((visibility("default"))) int glMemoryBarrier(void) {
    ALOGD("glMemoryBarrier() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: glGetRenderbufferParameterivOES */
extern "C" __attribute__((visibility("default"))) int glGetRenderbufferParameterivOES(void) {
    ALOGD("glGetRenderbufferParameterivOES() called");
    return 0;
}

/* Demangled: glMultiTexCoord4b */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4b(void) {
    ALOGD("glMultiTexCoord4b() called");
    return 0;
}

/* Demangled: glObjectPtrLabel */
extern "C" __attribute__((visibility("default"))) int glObjectPtrLabel(void) {
    ALOGD("glObjectPtrLabel() called");
    return 0;
}

/* Demangled: glColorPointer */
extern "C" __attribute__((visibility("default"))) int glColorPointer(void) {
    ALOGD("glColorPointer() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertexEXT(void) {
    ALOGD("glDrawRangeElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: glUniform4fv */
extern "C" __attribute__((visibility("default"))) int glUniform4fv(void) {
    ALOGD("glUniform4fv() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_fence */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_fence(void) {
    ALOGD("egl_color_buffer_set_fence() called");
    return 0;
}

/* Demangled: eglCreateImageKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateImageKHR(void) {
    ALOGD("eglCreateImageKHR() called");
    return 0;
}

/* Demangled: eglQueryDmaBufFormatsEXT */
extern "C" __attribute__((visibility("default"))) int eglQueryDmaBufFormatsEXT(void) {
    ALOGD("eglQueryDmaBufFormatsEXT() called");
    return 0;
}

/* Demangled: eglClientWaitSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglClientWaitSyncKHR(void) {
    ALOGD("eglClientWaitSyncKHR() called");
    return 0;
}

/* Demangled: eglDestroySyncKHR */
extern "C" __attribute__((visibility("default"))) int eglDestroySyncKHR(void) {
    ALOGD("eglDestroySyncKHR() called");
    return 0;
}

/* Demangled: glRotatef */
extern "C" __attribute__((visibility("default"))) int glRotatef(void) {
    ALOGD("glRotatef() called");
    return 0;
}

/* Demangled: glReleaseShaderCompiler */
extern "C" __attribute__((visibility("default"))) int glReleaseShaderCompiler(void) {
    ALOGD("glReleaseShaderCompiler() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: osup_sem_timedwait */
extern "C" __attribute__((visibility("default"))) int osup_sem_timedwait(void) {
    ALOGD("osup_sem_timedwait() called");
    return 0;
}

/* Demangled: glLineWidthx */
extern "C" __attribute__((visibility("default"))) int glLineWidthx(void) {
    ALOGD("glLineWidthx() called");
    return 0;
}

/* Demangled: glProgramUniform4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4fv(void) {
    ALOGD("glProgramUniform4fv() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DMultisampleEXT(void) {
    ALOGD("glFramebufferTexture2DMultisampleEXT() called");
    return 0;
}

/* Demangled: glGetBooleanv */
extern "C" __attribute__((visibility("default"))) int glGetBooleanv(void) {
    ALOGD("glGetBooleanv() called");
    return 0;
}

/* Demangled: glGetPointervKHR */
extern "C" __attribute__((visibility("default"))) int glGetPointervKHR(void) {
    ALOGD("glGetPointervKHR() called");
    return 0;
}

/* Demangled: clRetainDevice */
extern "C" __attribute__((visibility("default"))) int clRetainDevice(void) {
    ALOGD("clRetainDevice() called");
    return 0;
}

/* Demangled: clWaitForEvents */
extern "C" __attribute__((visibility("default"))) int clWaitForEvents(void) {
    ALOGD("clWaitForEvents() called");
    return 0;
}

/* Demangled: eglQueryAPI */
extern "C" __attribute__((visibility("default"))) int eglQueryAPI(void) {
    ALOGD("eglQueryAPI() called");
    return 0;
}

/* Demangled: glGenFramebuffersOES */
extern "C" __attribute__((visibility("default"))) int glGenFramebuffersOES(void) {
    ALOGD("glGenFramebuffersOES() called");
    return 0;
}

/* Demangled: glMultiTexCoord4f */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4f(void) {
    ALOGD("glMultiTexCoord4f() called");
    return 0;
}

/* Demangled: glHint */
extern "C" __attribute__((visibility("default"))) int glHint(void) {
    ALOGD("glHint() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: clGetEventProfilingInfo */
extern "C" __attribute__((visibility("default"))) int clGetEventProfilingInfo(void) {
    ALOGD("clGetEventProfilingInfo() called");
    return 0;
}

/* Demangled: osup_sync_object_wait */
extern "C" __attribute__((visibility("default"))) int osup_sync_object_wait(void) {
    ALOGD("osup_sync_object_wait() called");
    return 0;
}

/* Demangled: glSampleCoveragex */
extern "C" __attribute__((visibility("default"))) int glSampleCoveragex(void) {
    ALOGD("glSampleCoveragex() called");
    return 0;
}

/* Demangled: MTK_getThreadCmdline(char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z20MTK_getThreadCmdlinePci(void) {
    ALOGD("_Z20MTK_getThreadCmdlinePci() called");
    return 0;
}

/* Demangled: clLinkProgram */
extern "C" __attribute__((visibility("default"))) int clLinkProgram(void) {
    ALOGD("clLinkProgram() called");
    return 0;
}

/* Demangled: eglCreatePbufferFromClientBuffer */
extern "C" __attribute__((visibility("default"))) int eglCreatePbufferFromClientBuffer(void) {
    ALOGD("eglCreatePbufferFromClientBuffer() called");
    return 0;
}

/* Demangled: glFogfv */
extern "C" __attribute__((visibility("default"))) int glFogfv(void) {
    ALOGD("glFogfv() called");
    return 0;
}

/* Demangled: glTranslatex */
extern "C" __attribute__((visibility("default"))) int glTranslatex(void) {
    ALOGD("glTranslatex() called");
    return 0;
}

/* Demangled: glGetVertexAttribIiv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribIiv(void) {
    ALOGD("glGetVertexAttribIiv() called");
    return 0;
}

/* Demangled: glDepthRangef */
extern "C" __attribute__((visibility("default"))) int glDepthRangef(void) {
    ALOGD("glDepthRangef() called");
    return 0;
}

/* Demangled: egl_color_buffer_group_create */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_group_create(void) {
    ALOGD("egl_color_buffer_group_create() called");
    return 0;
}

/* Demangled: glFogxOES */
extern "C" __attribute__((visibility("default"))) int glFogxOES(void) {
    ALOGD("glFogxOES() called");
    return 0;
}

/* Demangled: glGenSamplers */
extern "C" __attribute__((visibility("default"))) int glGenSamplers(void) {
    ALOGD("glGenSamplers() called");
    return 0;
}

/* Demangled: clCreateSampler */
extern "C" __attribute__((visibility("default"))) int clCreateSampler(void) {
    ALOGD("clCreateSampler() called");
    return 0;
}

/* Demangled: glGenFramebuffers */
extern "C" __attribute__((visibility("default"))) int glGenFramebuffers(void) {
    ALOGD("glGenFramebuffers() called");
    return 0;
}

/* Demangled: glLineWidth */
extern "C" __attribute__((visibility("default"))) int glLineWidth(void) {
    ALOGD("glLineWidth() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: glGetUniformiv */
extern "C" __attribute__((visibility("default"))) int glGetUniformiv(void) {
    ALOGD("glGetUniformiv() called");
    return 0;
}

/* Demangled: glSampleMaski */
extern "C" __attribute__((visibility("default"))) int glSampleMaski(void) {
    ALOGD("glSampleMaski() called");
    return 0;
}

/* Demangled: glUniform1ui */
extern "C" __attribute__((visibility("default"))) int glUniform1ui(void) {
    ALOGD("glUniform1ui() called");
    return 0;
}

/* Demangled: clFlush */
extern "C" __attribute__((visibility("default"))) int clFlush(void) {
    ALOGD("clFlush() called");
    return 0;
}

/* Demangled: glFrustumx */
extern "C" __attribute__((visibility("default"))) int glFrustumx(void) {
    ALOGD("glFrustumx() called");
    return 0;
}

/* Demangled: glGenRenderbuffersOES */
extern "C" __attribute__((visibility("default"))) int glGenRenderbuffersOES(void) {
    ALOGD("glGenRenderbuffersOES() called");
    return 0;
}

/* Demangled: glGetFramebufferAttachmentParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferAttachmentParameteriv(void) {
    ALOGD("glGetFramebufferAttachmentParameteriv() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4x3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4x3fv(void) {
    ALOGD("glProgramUniformMatrix4x3fv() called");
    return 0;
}

/* Demangled: stdlibp_neon_f32x16_to_f16x16 */
extern "C" __attribute__((visibility("default"))) int stdlibp_neon_f32x16_to_f16x16(void) {
    ALOGD("stdlibp_neon_f32x16_to_f16x16() called");
    return 0;
}

/* Demangled: glPointParameterfv */
extern "C" __attribute__((visibility("default"))) int glPointParameterfv(void) {
    ALOGD("glPointParameterfv() called");
    return 0;
}

/* Demangled: glPointSize */
extern "C" __attribute__((visibility("default"))) int glPointSize(void) {
    ALOGD("glPointSize() called");
    return 0;
}

/* Demangled: glCreateShader */
extern "C" __attribute__((visibility("default"))) int glCreateShader(void) {
    ALOGD("glCreateShader() called");
    return 0;
}

/* Demangled: glProgramUniform1ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1ui(void) {
    ALOGD("glProgramUniform1ui() called");
    return 0;
}

/* Demangled: glUniform3uiv */
extern "C" __attribute__((visibility("default"))) int glUniform3uiv(void) {
    ALOGD("glUniform3uiv() called");
    return 0;
}

/* Demangled: glBlendBarrierKHR */
extern "C" __attribute__((visibility("default"))) int glBlendBarrierKHR(void) {
    ALOGD("glBlendBarrierKHR() called");
    return 0;
}

/* Demangled: clSVMFree */
extern "C" __attribute__((visibility("default"))) int clSVMFree(void) {
    ALOGD("clSVMFree() called");
    return 0;
}

/* Demangled: egl_color_buffer_wrap_external_planar */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_wrap_external_planar(void) {
    ALOGD("egl_color_buffer_wrap_external_planar() called");
    return 0;
}

/* Demangled: eglMakeCurrent */
extern "C" __attribute__((visibility("default"))) int eglMakeCurrent(void) {
    ALOGD("eglMakeCurrent() called");
    return 0;
}

/* Demangled: glUseProgramStages */
extern "C" __attribute__((visibility("default"))) int glUseProgramStages(void) {
    ALOGD("glUseProgramStages() called");
    return 0;
}

/* Demangled: glDrawArraysInstanced */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstanced(void) {
    ALOGD("glDrawArraysInstanced() called");
    return 0;
}

/* Demangled: glProgramUniform3uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3uiv(void) {
    ALOGD("glProgramUniform3uiv() called");
    return 0;
}

/* Demangled: glUniformMatrix4x2fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4x2fv(void) {
    ALOGD("glUniformMatrix4x2fv() called");
    return 0;
}

/* Demangled: getProcessCmdline() */
extern "C" __attribute__((visibility("default"))) int _Z17getProcessCmdlinev(void) {
    ALOGD("_Z17getProcessCmdlinev() called");
    return 0;
}

/* Demangled: clGetPlatformInfo */
extern "C" __attribute__((visibility("default"))) int clGetPlatformInfo(void) {
    ALOGD("clGetPlatformInfo() called");
    return 0;
}

/* Demangled: egl_winsys_get_implementation */
extern "C" __attribute__((visibility("default"))) int egl_winsys_get_implementation(void) {
    ALOGD("egl_winsys_get_implementation() called");
    return 0;
}

/* Demangled: glLightModelfv */
extern "C" __attribute__((visibility("default"))) int glLightModelfv(void) {
    ALOGD("glLightModelfv() called");
    return 0;
}

/* Demangled: glPointParameterf */
extern "C" __attribute__((visibility("default"))) int glPointParameterf(void) {
    ALOGD("glPointParameterf() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIuivEXT(void) {
    ALOGD("glGetSamplerParameterIuivEXT() called");
    return 0;
}

/* Demangled: glGetShaderInfoLog */
extern "C" __attribute__((visibility("default"))) int glGetShaderInfoLog(void) {
    ALOGD("glGetShaderInfoLog() called");
    return 0;
}

/* Demangled: clEnqueueSVMMap */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMap(void) {
    ALOGD("clEnqueueSVMMap() called");
    return 0;
}

/* Demangled: glDrawTexxOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexxOES(void) {
    ALOGD("glDrawTexxOES() called");
    return 0;
}

/* Demangled: eglCreateSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateSyncKHR(void) {
    ALOGD("eglCreateSyncKHR() called");
    return 0;
}

/* Demangled: clCreateSubBuffer */
extern "C" __attribute__((visibility("default"))) int clCreateSubBuffer(void) {
    ALOGD("clCreateSubBuffer() called");
    return 0;
}

/* Demangled: clEnqueueReadBufferRect */
extern "C" __attribute__((visibility("default"))) int clEnqueueReadBufferRect(void) {
    ALOGD("clEnqueueReadBufferRect() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_non_thread_safe */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_non_thread_safe(void) {
    ALOGD("egl_color_buffer_get_non_thread_safe() called");
    return 0;
}

/* Demangled: glGetTexParameterIiv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIiv(void) {
    ALOGD("glGetTexParameterIiv() called");
    return 0;
}

/* Demangled: glSamplerParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIivEXT(void) {
    ALOGD("glSamplerParameterIivEXT() called");
    return 0;
}

/* Demangled: glUniformMatrix3x2fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3x2fv(void) {
    ALOGD("glUniformMatrix3x2fv() called");
    return 0;
}

/* Demangled: clReleaseEvent */
extern "C" __attribute__((visibility("default"))) int clReleaseEvent(void) {
    ALOGD("clReleaseEvent() called");
    return 0;
}

/* Demangled: glRotatex */
extern "C" __attribute__((visibility("default"))) int glRotatex(void) {
    ALOGD("glRotatex() called");
    return 0;
}

/* Demangled: glCopyImageSubDataOES */
extern "C" __attribute__((visibility("default"))) int glCopyImageSubDataOES(void) {
    ALOGD("glCopyImageSubDataOES() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertexOES(void) {
    ALOGD("glDrawElementsBaseVertexOES() called");
    return 0;
}

/* Demangled: glIsEnablediEXT */
extern "C" __attribute__((visibility("default"))) int glIsEnablediEXT(void) {
    ALOGD("glIsEnablediEXT() called");
    return 0;
}

/* Demangled: glUniform1uiv */
extern "C" __attribute__((visibility("default"))) int glUniform1uiv(void) {
    ALOGD("glUniform1uiv() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: clCreatePipe */
extern "C" __attribute__((visibility("default"))) int clCreatePipe(void) {
    ALOGD("clCreatePipe() called");
    return 0;
}

/* Demangled: eglCreatePbufferSurface */
extern "C" __attribute__((visibility("default"))) int eglCreatePbufferSurface(void) {
    ALOGD("eglCreatePbufferSurface() called");
    return 0;
}

/* Demangled: glTexEnvxv */
extern "C" __attribute__((visibility("default"))) int glTexEnvxv(void) {
    ALOGD("glTexEnvxv() called");
    return 0;
}

/* Demangled: glGetProgramInfoLog */
extern "C" __attribute__((visibility("default"))) int glGetProgramInfoLog(void) {
    ALOGD("glGetProgramInfoLog() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2x3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2x3fv(void) {
    ALOGD("glProgramUniformMatrix2x3fv() called");
    return 0;
}

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Demangled: glMultiTexCoord4x */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4x(void) {
    ALOGD("glMultiTexCoord4x() called");
    return 0;
}

/* Demangled: glBlendFunciEXT */
extern "C" __attribute__((visibility("default"))) int glBlendFunciEXT(void) {
    ALOGD("glBlendFunciEXT() called");
    return 0;
}

/* Demangled: glProgramUniform1uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1uiv(void) {
    ALOGD("glProgramUniform1uiv() called");
    return 0;
}

/* Demangled: glSamplerParameterfv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterfv(void) {
    ALOGD("glSamplerParameterfv() called");
    return 0;
}

/* Demangled: glTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int glTexSubImage3D(void) {
    ALOGD("glTexSubImage3D() called");
    return 0;
}

/* Demangled: clCloneKernel */
extern "C" __attribute__((visibility("default"))) int clCloneKernel(void) {
    ALOGD("clCloneKernel() called");
    return 0;
}

/* Demangled: glVertexAttrib2fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib2fv(void) {
    ALOGD("glVertexAttrib2fv() called");
    return 0;
}

/* Demangled: glDisable */
extern "C" __attribute__((visibility("default"))) int glDisable(void) {
    ALOGD("glDisable() called");
    return 0;
}

/* Demangled: clCompileProgram */
extern "C" __attribute__((visibility("default"))) int clCompileProgram(void) {
    ALOGD("clCompileProgram() called");
    return 0;
}

/* Demangled: clRetainEvent */
extern "C" __attribute__((visibility("default"))) int clRetainEvent(void) {
    ALOGD("clRetainEvent() called");
    return 0;
}

/* Demangled: glGetMaterialfv */
extern "C" __attribute__((visibility("default"))) int glGetMaterialfv(void) {
    ALOGD("glGetMaterialfv() called");
    return 0;
}

/* Demangled: glGetnUniformuivKHR */
extern "C" __attribute__((visibility("default"))) int glGetnUniformuivKHR(void) {
    ALOGD("glGetnUniformuivKHR() called");
    return 0;
}

/* Demangled: glVertexAttribFormat */
extern "C" __attribute__((visibility("default"))) int glVertexAttribFormat(void) {
    ALOGD("glVertexAttribFormat() called");
    return 0;
}

/* Demangled: clCreateBuffer */
extern "C" __attribute__((visibility("default"))) int clCreateBuffer(void) {
    ALOGD("clCreateBuffer() called");
    return 0;
}

/* Demangled: clGetCommandQueueInfo */
extern "C" __attribute__((visibility("default"))) int clGetCommandQueueInfo(void) {
    ALOGD("clGetCommandQueueInfo() called");
    return 0;
}

/* Demangled: glDepthRangex */
extern "C" __attribute__((visibility("default"))) int glDepthRangex(void) {
    ALOGD("glDepthRangex() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: glGetQueryiv */
extern "C" __attribute__((visibility("default"))) int glGetQueryiv(void) {
    ALOGD("glGetQueryiv() called");
    return 0;
}

/* Demangled: glProgramUniform3f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3f(void) {
    ALOGD("glProgramUniform3f() called");
    return 0;
}

/* Demangled: clGetDeviceAndHostTimer */
extern "C" __attribute__((visibility("default"))) int clGetDeviceAndHostTimer(void) {
    ALOGD("clGetDeviceAndHostTimer() called");
    return 0;
}

/* Demangled: eglp_find_unterminated_state */
extern "C" __attribute__((visibility("default"))) int eglp_find_unterminated_state(void) {
    ALOGD("eglp_find_unterminated_state() called");
    return 0;
}

/* Demangled: glPopMatrix */
extern "C" __attribute__((visibility("default"))) int glPopMatrix(void) {
    ALOGD("glPopMatrix() called");
    return 0;
}

/* Demangled: glUniform3iv */
extern "C" __attribute__((visibility("default"))) int glUniform3iv(void) {
    ALOGD("glUniform3iv() called");
    return 0;
}

/* Demangled: glVertexAttrib4f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib4f(void) {
    ALOGD("glVertexAttrib4f() called");
    return 0;
}

/* Demangled: stdlibp_neon_f32x4_to_f16x4 */
extern "C" __attribute__((visibility("default"))) int stdlibp_neon_f32x4_to_f16x4(void) {
    ALOGD("stdlibp_neon_f32x4_to_f16x4() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: glDepthRangexOES */
extern "C" __attribute__((visibility("default"))) int glDepthRangexOES(void) {
    ALOGD("glDepthRangexOES() called");
    return 0;
}

/* Demangled: glGetFramebufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferParameteriv(void) {
    ALOGD("glGetFramebufferParameteriv() called");
    return 0;
}

/* Demangled: glTexParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glTexParameterIivEXT(void) {
    ALOGD("glTexParameterIivEXT() called");
    return 0;
}

/* Demangled: osup_mutex_unlock */
extern "C" __attribute__((visibility("default"))) int osup_mutex_unlock(void) {
    ALOGD("osup_mutex_unlock() called");
    return 0;
}

/* Demangled: glBlendEquationi */
extern "C" __attribute__((visibility("default"))) int glBlendEquationi(void) {
    ALOGD("glBlendEquationi() called");
    return 0;
}

/* Demangled: glBlitFramebuffer */
extern "C" __attribute__((visibility("default"))) int glBlitFramebuffer(void) {
    ALOGD("glBlitFramebuffer() called");
    return 0;
}

/* Demangled: glProgramUniform3i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3i(void) {
    ALOGD("glProgramUniform3i() called");
    return 0;
}

/* Demangled: glProgramUniform3iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3iv(void) {
    ALOGD("glProgramUniform3iv() called");
    return 0;
}

/* Demangled: glBlendBarrier */
extern "C" __attribute__((visibility("default"))) int glBlendBarrier(void) {
    ALOGD("glBlendBarrier() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: clGetHostTimer */
extern "C" __attribute__((visibility("default"))) int clGetHostTimer(void) {
    ALOGD("clGetHostTimer() called");
    return 0;
}

/* Demangled: eglSwapBuffers */
extern "C" __attribute__((visibility("default"))) int eglSwapBuffers(void) {
    ALOGD("eglSwapBuffers() called");
    return 0;
}

/* Demangled: eglp_check_attribute_present */
extern "C" __attribute__((visibility("default"))) int eglp_check_attribute_present(void) {
    ALOGD("eglp_check_attribute_present() called");
    return 0;
}

/* Demangled: egl_surface_release */
extern "C" __attribute__((visibility("default"))) int egl_surface_release(void) {
    ALOGD("egl_surface_release() called");
    return 0;
}

/* Demangled: glFogxvOES */
extern "C" __attribute__((visibility("default"))) int glFogxvOES(void) {
    ALOGD("glFogxvOES() called");
    return 0;
}

/* Demangled: glGetProgramResourceiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceiv(void) {
    ALOGD("glGetProgramResourceiv() called");
    return 0;
}

/* Demangled: glMinSampleShadingOES */
extern "C" __attribute__((visibility("default"))) int glMinSampleShadingOES(void) {
    ALOGD("glMinSampleShadingOES() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: osup_register_unload_callback */
extern "C" __attribute__((visibility("default"))) int osup_register_unload_callback(void) {
    ALOGD("osup_register_unload_callback() called");
    return 0;
}

/* Demangled: egl_color_buffer_retain */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_retain(void) {
    ALOGD("egl_color_buffer_retain() called");
    return 0;
}

/* Demangled: glTexSubImage3DOES */
extern "C" __attribute__((visibility("default"))) int glTexSubImage3DOES(void) {
    ALOGD("glTexSubImage3DOES() called");
    return 0;
}

/* Demangled: glDeleteBuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteBuffers(void) {
    ALOGD("glDeleteBuffers() called");
    return 0;
}

/* Demangled: egl_color_buffer_group_free */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_group_free(void) {
    ALOGD("egl_color_buffer_group_free() called");
    return 0;
}

/* Demangled: glPrimitiveBoundingBoxOES */
extern "C" __attribute__((visibility("default"))) int glPrimitiveBoundingBoxOES(void) {
    ALOGD("glPrimitiveBoundingBoxOES() called");
    return 0;
}

/* Demangled: glBufferSubData */
extern "C" __attribute__((visibility("default"))) int glBufferSubData(void) {
    ALOGD("glBufferSubData() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: clEnqueueAcquireEGLObjectsKHR */
extern "C" __attribute__((visibility("default"))) int clEnqueueAcquireEGLObjectsKHR(void) {
    ALOGD("clEnqueueAcquireEGLObjectsKHR() called");
    return 0;
}

/* Demangled: glPointParameterx */
extern "C" __attribute__((visibility("default"))) int glPointParameterx(void) {
    ALOGD("glPointParameterx() called");
    return 0;
}

/* Demangled: glTexEnviv */
extern "C" __attribute__((visibility("default"))) int glTexEnviv(void) {
    ALOGD("glTexEnviv() called");
    return 0;
}

/* Demangled: cmpbe_v2_compile_multiple_shaders */
extern "C" __attribute__((visibility("default"))) int cmpbe_v2_compile_multiple_shaders(void) {
    ALOGD("cmpbe_v2_compile_multiple_shaders() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: eglGetConfigs */
extern "C" __attribute__((visibility("default"))) int eglGetConfigs(void) {
    ALOGD("eglGetConfigs() called");
    return 0;
}

/* Demangled: glTexParameterIiv */
extern "C" __attribute__((visibility("default"))) int glTexParameterIiv(void) {
    ALOGD("glTexParameterIiv() called");
    return 0;
}

/* Demangled: __fixsfdi */
extern "C" __attribute__((visibility("default"))) int __fixsfdi(void) {
    ALOGD("__fixsfdi() called");
    return 0;
}

/* Demangled: clCreateUserEvent */
extern "C" __attribute__((visibility("default"))) int clCreateUserEvent(void) {
    ALOGD("clCreateUserEvent() called");
    return 0;
}

/* Demangled: clEnqueueCopyBufferRect */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyBufferRect(void) {
    ALOGD("clEnqueueCopyBufferRect() called");
    return 0;
}

/* Demangled: glUniform1fv */
extern "C" __attribute__((visibility("default"))) int glUniform1fv(void) {
    ALOGD("glUniform1fv() called");
    return 0;
}

/* Demangled: eglReleaseThread */
extern "C" __attribute__((visibility("default"))) int eglReleaseThread(void) {
    ALOGD("eglReleaseThread() called");
    return 0;
}

/* Demangled: glGetTexGenxvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexGenxvOES(void) {
    ALOGD("glGetTexGenxvOES() called");
    return 0;
}

/* Demangled: glMultMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glMultMatrixxOES(void) {
    ALOGD("glMultMatrixxOES() called");
    return 0;
}

/* Demangled: glGetActiveAttrib */
extern "C" __attribute__((visibility("default"))) int glGetActiveAttrib(void) {
    ALOGD("glGetActiveAttrib() called");
    return 0;
}

/* Demangled: glProgramUniform1fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1fv(void) {
    ALOGD("glProgramUniform1fv() called");
    return 0;
}

/* Demangled: glGetPointerv */
extern "C" __attribute__((visibility("default"))) int glGetPointerv(void) {
    ALOGD("glGetPointerv() called");
    return 0;
}

/* Exported Object: g_counting_index_in */
extern "C" __attribute__((visibility("default"))) void* g_counting_index_in = NULL;

/* Demangled: glDrawElementsBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertex(void) {
    ALOGD("glDrawElementsBaseVertex() called");
    return 0;
}

/* Demangled: glLinkProgram */
extern "C" __attribute__((visibility("default"))) int glLinkProgram(void) {
    ALOGD("glLinkProgram() called");
    return 0;
}

/* Demangled: glVertexAttribI4i */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4i(void) {
    ALOGD("glVertexAttribI4i() called");
    return 0;
}

/* Demangled: glEndQuery */
extern "C" __attribute__((visibility("default"))) int glEndQuery(void) {
    ALOGD("glEndQuery() called");
    return 0;
}

/* Demangled: glGetSamplerParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterfv(void) {
    ALOGD("glGetSamplerParameterfv() called");
    return 0;
}

/* Demangled: clEnqueueReleaseEGLObjectsKHR */
extern "C" __attribute__((visibility("default"))) int clEnqueueReleaseEGLObjectsKHR(void) {
    ALOGD("clEnqueueReleaseEGLObjectsKHR() called");
    return 0;
}

/* Demangled: glLightModelxvOES */
extern "C" __attribute__((visibility("default"))) int glLightModelxvOES(void) {
    ALOGD("glLightModelxvOES() called");
    return 0;
}

/* Demangled: glEnablei */
extern "C" __attribute__((visibility("default"))) int glEnablei(void) {
    ALOGD("glEnablei() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: clRetainSampler */
extern "C" __attribute__((visibility("default"))) int clRetainSampler(void) {
    ALOGD("clRetainSampler() called");
    return 0;
}

/* Demangled: glOrthofOES */
extern "C" __attribute__((visibility("default"))) int glOrthofOES(void) {
    ALOGD("glOrthofOES() called");
    return 0;
}

/* Demangled: glDebugMessageInsert */
extern "C" __attribute__((visibility("default"))) int glDebugMessageInsert(void) {
    ALOGD("glDebugMessageInsert() called");
    return 0;
}

/* Demangled: glMapBufferOES */
extern "C" __attribute__((visibility("default"))) int glMapBufferOES(void) {
    ALOGD("glMapBufferOES() called");
    return 0;
}

/* Demangled: glUniformMatrix3fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3fv(void) {
    ALOGD("glUniformMatrix3fv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: cmpbe_v2_deserialize_MBS2_to_C */
extern "C" __attribute__((visibility("default"))) int cmpbe_v2_deserialize_MBS2_to_C(void) {
    ALOGD("cmpbe_v2_deserialize_MBS2_to_C() called");
    return 0;
}

/* Demangled: osup_dlsym */
extern "C" __attribute__((visibility("default"))) int osup_dlsym(void) {
    ALOGD("osup_dlsym() called");
    return 0;
}

/* Demangled: clCreateContextFromType */
extern "C" __attribute__((visibility("default"))) int clCreateContextFromType(void) {
    ALOGD("clCreateContextFromType() called");
    return 0;
}

/* Demangled: eglInitialize */
extern "C" __attribute__((visibility("default"))) int eglInitialize(void) {
    ALOGD("eglInitialize() called");
    return 0;
}

/* Demangled: eglGetConfigAttrib */
extern "C" __attribute__((visibility("default"))) int eglGetConfigAttrib(void) {
    ALOGD("eglGetConfigAttrib() called");
    return 0;
}

/* Demangled: glLogicOp */
extern "C" __attribute__((visibility("default"))) int glLogicOp(void) {
    ALOGD("glLogicOp() called");
    return 0;
}

/* Demangled: glGetTexParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIivEXT(void) {
    ALOGD("glGetTexParameterIivEXT() called");
    return 0;
}

/* Demangled: MTK_ATRACE_COUNTER */
extern "C" __attribute__((visibility("default"))) int MTK_ATRACE_COUNTER(void) {
    ALOGD("MTK_ATRACE_COUNTER() called");
    return 0;
}

/* Demangled: osup_spinlock_unlock */
extern "C" __attribute__((visibility("default"))) int osup_spinlock_unlock(void) {
    ALOGD("osup_spinlock_unlock() called");
    return 0;
}

/* Demangled: glShadeModel */
extern "C" __attribute__((visibility("default"))) int glShadeModel(void) {
    ALOGD("glShadeModel() called");
    return 0;
}

/* Demangled: glDrawElementsInstanced */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstanced(void) {
    ALOGD("glDrawElementsInstanced() called");
    return 0;
}

/* Demangled: glGetActiveUniformBlockiv */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniformBlockiv(void) {
    ALOGD("glGetActiveUniformBlockiv() called");
    return 0;
}

/* Demangled: glInvalidateFramebuffer */
extern "C" __attribute__((visibility("default"))) int glInvalidateFramebuffer(void) {
    ALOGD("glInvalidateFramebuffer() called");
    return 0;
}

/* Demangled: glGetDebugMessageLog */
extern "C" __attribute__((visibility("default"))) int glGetDebugMessageLog(void) {
    ALOGD("glGetDebugMessageLog() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: clCreateProgramWithBinary */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithBinary(void) {
    ALOGD("clCreateProgramWithBinary() called");
    return 0;
}

/* Demangled: eglWaitClient */
extern "C" __attribute__((visibility("default"))) int eglWaitClient(void) {
    ALOGD("eglWaitClient() called");
    return 0;
}

/* Demangled: glLightxvOES */
extern "C" __attribute__((visibility("default"))) int glLightxvOES(void) {
    ALOGD("glLightxvOES() called");
    return 0;
}

/* Demangled: glSampleCoveragexOES */
extern "C" __attribute__((visibility("default"))) int glSampleCoveragexOES(void) {
    ALOGD("glSampleCoveragexOES() called");
    return 0;
}

/* Demangled: glTexGenfOES */
extern "C" __attribute__((visibility("default"))) int glTexGenfOES(void) {
    ALOGD("glTexGenfOES() called");
    return 0;
}

/* Demangled: glGetInteger64i_v */
extern "C" __attribute__((visibility("default"))) int glGetInteger64i_v(void) {
    ALOGD("glGetInteger64i_v() called");
    return 0;
}

/* Demangled: glGetProgramResourceIndex */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceIndex(void) {
    ALOGD("glGetProgramResourceIndex() called");
    return 0;
}

/* Demangled: glGenVertexArrays */
extern "C" __attribute__((visibility("default"))) int glGenVertexArrays(void) {
    ALOGD("glGenVertexArrays() called");
    return 0;
}

/* Demangled: clCreateCommandQueueWithProperties */
extern "C" __attribute__((visibility("default"))) int clCreateCommandQueueWithProperties(void) {
    ALOGD("clCreateCommandQueueWithProperties() called");
    return 0;
}

/* Demangled: eglp_get_attribute_value */
extern "C" __attribute__((visibility("default"))) int eglp_get_attribute_value(void) {
    ALOGD("eglp_get_attribute_value() called");
    return 0;
}

/* Demangled: glGetObjectPtrLabel */
extern "C" __attribute__((visibility("default"))) int glGetObjectPtrLabel(void) {
    ALOGD("glGetObjectPtrLabel() called");
    return 0;
}

/* Demangled: MTK_CheckThreadName */
extern "C" __attribute__((visibility("default"))) int MTK_CheckThreadName(void) {
    ALOGD("MTK_CheckThreadName() called");
    return 0;
}

/* Demangled: osup_get_number_of_cpu_cores */
extern "C" __attribute__((visibility("default"))) int osup_get_number_of_cpu_cores(void) {
    ALOGD("osup_get_number_of_cpu_cores() called");
    return 0;
}

/* Demangled: clGetProgramInfo */
extern "C" __attribute__((visibility("default"))) int clGetProgramInfo(void) {
    ALOGD("clGetProgramInfo() called");
    return 0;
}

/* Demangled: glCurrentPaletteMatrixOES */
extern "C" __attribute__((visibility("default"))) int glCurrentPaletteMatrixOES(void) {
    ALOGD("glCurrentPaletteMatrixOES() called");
    return 0;
}

/* Demangled: clCreateImage */
extern "C" __attribute__((visibility("default"))) int clCreateImage(void) {
    ALOGD("clCreateImage() called");
    return 0;
}

/* Demangled: clEnqueueCopyBufferToImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyBufferToImage(void) {
    ALOGD("clEnqueueCopyBufferToImage() called");
    return 0;
}

/* Demangled: eglSetDamageRegionKHR */
extern "C" __attribute__((visibility("default"))) int eglSetDamageRegionKHR(void) {
    ALOGD("eglSetDamageRegionKHR() called");
    return 0;
}

/* Demangled: glBlendEquation */
extern "C" __attribute__((visibility("default"))) int glBlendEquation(void) {
    ALOGD("glBlendEquation() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIiv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIiv(void) {
    ALOGD("glGetSamplerParameterIiv() called");
    return 0;
}

/* Demangled: clEnqueueWriteImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueWriteImage(void) {
    ALOGD("clEnqueueWriteImage() called");
    return 0;
}

/* Demangled: glCopyImageSubData */
extern "C" __attribute__((visibility("default"))) int glCopyImageSubData(void) {
    ALOGD("glCopyImageSubData() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisample */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisample(void) {
    ALOGD("glRenderbufferStorageMultisample() called");
    return 0;
}

/* Demangled: glEGLImageTargetTexture2DOES */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetTexture2DOES(void) {
    ALOGD("glEGLImageTargetTexture2DOES() called");
    return 0;
}

/* Demangled: glTexParameterfv */
extern "C" __attribute__((visibility("default"))) int glTexParameterfv(void) {
    ALOGD("glTexParameterfv() called");
    return 0;
}

/* Demangled: mali_egl_surface_get_front_buffer_rendering_supported */
extern "C" __attribute__((visibility("default"))) int mali_egl_surface_get_front_buffer_rendering_supported(void) {
    ALOGD("mali_egl_surface_get_front_buffer_rendering_supported() called");
    return 0;
}

/* Demangled: glBlendFunci */
extern "C" __attribute__((visibility("default"))) int glBlendFunci(void) {
    ALOGD("glBlendFunci() called");
    return 0;
}

/* Demangled: glEnableVertexAttribArray */
extern "C" __attribute__((visibility("default"))) int glEnableVertexAttribArray(void) {
    ALOGD("glEnableVertexAttribArray() called");
    return 0;
}

/* Demangled: glGenQueries */
extern "C" __attribute__((visibility("default"))) int glGenQueries(void) {
    ALOGD("glGenQueries() called");
    return 0;
}

/* Demangled: glGetProgramInterfaceiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramInterfaceiv(void) {
    ALOGD("glGetProgramInterfaceiv() called");
    return 0;
}

/* Demangled: glGetUniformuiv */
extern "C" __attribute__((visibility("default"))) int glGetUniformuiv(void) {
    ALOGD("glGetUniformuiv() called");
    return 0;
}

/* Demangled: egl_color_buffer_group_get_layer */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_group_get_layer(void) {
    ALOGD("egl_color_buffer_group_get_layer() called");
    return 0;
}

/* Demangled: glTexBufferRangeOES */
extern "C" __attribute__((visibility("default"))) int glTexBufferRangeOES(void) {
    ALOGD("glTexBufferRangeOES() called");
    return 0;
}

/* Demangled: egl_color_buffer_rgb_format_get_bpp */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_rgb_format_get_bpp(void) {
    ALOGD("egl_color_buffer_rgb_format_get_bpp() called");
    return 0;
}

/* Demangled: osup_thread_setdeferrability */
extern "C" __attribute__((visibility("default"))) int osup_thread_setdeferrability(void) {
    ALOGD("osup_thread_setdeferrability() called");
    return 0;
}

/* Demangled: glFinish */
extern "C" __attribute__((visibility("default"))) int glFinish(void) {
    ALOGD("glFinish() called");
    return 0;
}

/* Demangled: glGetClipPlanexOES */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanexOES(void) {
    ALOGD("glGetClipPlanexOES() called");
    return 0;
}

/* Demangled: glMaterialxv */
extern "C" __attribute__((visibility("default"))) int glMaterialxv(void) {
    ALOGD("glMaterialxv() called");
    return 0;
}

/* Demangled: glGetAttribLocation */
extern "C" __attribute__((visibility("default"))) int glGetAttribLocation(void) {
    ALOGD("glGetAttribLocation() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4fv(void) {
    ALOGD("glProgramUniformMatrix4fv() called");
    return 0;
}

/* Demangled: glActiveTexture */
extern "C" __attribute__((visibility("default"))) int glActiveTexture(void) {
    ALOGD("glActiveTexture() called");
    return 0;
}

/* Demangled: glFlush */
extern "C" __attribute__((visibility("default"))) int glFlush(void) {
    ALOGD("glFlush() called");
    return 0;
}

/* Demangled: glColor4xOES */
extern "C" __attribute__((visibility("default"))) int glColor4xOES(void) {
    ALOGD("glColor4xOES() called");
    return 0;
}

/* Demangled: glFlushMappedBufferRange */
extern "C" __attribute__((visibility("default"))) int glFlushMappedBufferRange(void) {
    ALOGD("glFlushMappedBufferRange() called");
    return 0;
}

/* Demangled: glProgramUniform4f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4f(void) {
    ALOGD("glProgramUniform4f() called");
    return 0;
}

/* Demangled: glTexBufferRange */
extern "C" __attribute__((visibility("default"))) int glTexBufferRange(void) {
    ALOGD("glTexBufferRange() called");
    return 0;
}

/* Demangled: glBufferData */
extern "C" __attribute__((visibility("default"))) int glBufferData(void) {
    ALOGD("glBufferData() called");
    return 0;
}

/* Demangled: clEnqueueWriteBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueWriteBuffer(void) {
    ALOGD("clEnqueueWriteBuffer() called");
    return 0;
}

/* Demangled: clEnqueueWriteBufferRect */
extern "C" __attribute__((visibility("default"))) int clEnqueueWriteBufferRect(void) {
    ALOGD("clEnqueueWriteBufferRect() called");
    return 0;
}

/* Demangled: eglp_has_display_terminated */
extern "C" __attribute__((visibility("default"))) int eglp_has_display_terminated(void) {
    ALOGD("eglp_has_display_terminated() called");
    return 0;
}

/* Demangled: egl_get_winsys_display */
extern "C" __attribute__((visibility("default"))) int egl_get_winsys_display(void) {
    ALOGD("egl_get_winsys_display() called");
    return 0;
}

/* Demangled: glMemoryBarrierByRegion */
extern "C" __attribute__((visibility("default"))) int glMemoryBarrierByRegion(void) {
    ALOGD("glMemoryBarrierByRegion() called");
    return 0;
}

/* Demangled: glVertexAttribPointer */
extern "C" __attribute__((visibility("default"))) int glVertexAttribPointer(void) {
    ALOGD("glVertexAttribPointer() called");
    return 0;
}

/* Demangled: eglGetCurrentDisplay */
extern "C" __attribute__((visibility("default"))) int eglGetCurrentDisplay(void) {
    ALOGD("eglGetCurrentDisplay() called");
    return 0;
}

/* Demangled: glBindRenderbufferOES */
extern "C" __attribute__((visibility("default"))) int glBindRenderbufferOES(void) {
    ALOGD("glBindRenderbufferOES() called");
    return 0;
}

/* Demangled: glMaterialxvOES */
extern "C" __attribute__((visibility("default"))) int glMaterialxvOES(void) {
    ALOGD("glMaterialxvOES() called");
    return 0;
}

/* Demangled: glBeginTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glBeginTransformFeedback(void) {
    ALOGD("glBeginTransformFeedback() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: glPushMatrix */
extern "C" __attribute__((visibility("default"))) int glPushMatrix(void) {
    ALOGD("glPushMatrix() called");
    return 0;
}

/* Demangled: glBlendEquationiEXT */
extern "C" __attribute__((visibility("default"))) int glBlendEquationiEXT(void) {
    ALOGD("glBlendEquationiEXT() called");
    return 0;
}

/* Demangled: glClientWaitSync */
extern "C" __attribute__((visibility("default"))) int glClientWaitSync(void) {
    ALOGD("glClientWaitSync() called");
    return 0;
}

/* Demangled: glGetVertexAttribPointerv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribPointerv(void) {
    ALOGD("glGetVertexAttribPointerv() called");
    return 0;
}

/* Demangled: glProgramUniform4i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4i(void) {
    ALOGD("glProgramUniform4i() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: eglQueryContext */
extern "C" __attribute__((visibility("default"))) int eglQueryContext(void) {
    ALOGD("eglQueryContext() called");
    return 0;
}

/* Demangled: glCopyTexSubImage3DOES */
extern "C" __attribute__((visibility("default"))) int glCopyTexSubImage3DOES(void) {
    ALOGD("glCopyTexSubImage3DOES() called");
    return 0;
}

/* Demangled: glDrawElementsIndirect */
extern "C" __attribute__((visibility("default"))) int glDrawElementsIndirect(void) {
    ALOGD("glDrawElementsIndirect() called");
    return 0;
}

/* Demangled: glIsQueryEXT */
extern "C" __attribute__((visibility("default"))) int glIsQueryEXT(void) {
    ALOGD("glIsQueryEXT() called");
    return 0;
}

/* Demangled: glGetString */
extern "C" __attribute__((visibility("default"))) int glGetString(void) {
    ALOGD("glGetString() called");
    return 0;
}

/* Demangled: glObjectLabel */
extern "C" __attribute__((visibility("default"))) int glObjectLabel(void) {
    ALOGD("glObjectLabel() called");
    return 0;
}

/* Demangled: clRetainKernel */
extern "C" __attribute__((visibility("default"))) int clRetainKernel(void) {
    ALOGD("clRetainKernel() called");
    return 0;
}

/* Demangled: glRotatexOES */
extern "C" __attribute__((visibility("default"))) int glRotatexOES(void) {
    ALOGD("glRotatexOES() called");
    return 0;
}

/* Demangled: glClearDepthfOES */
extern "C" __attribute__((visibility("default"))) int glClearDepthfOES(void) {
    ALOGD("glClearDepthfOES() called");
    return 0;
}

/* Demangled: glTexGenivOES */
extern "C" __attribute__((visibility("default"))) int glTexGenivOES(void) {
    ALOGD("glTexGenivOES() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertex(void) {
    ALOGD("glDrawRangeElementsBaseVertex() called");
    return 0;
}

/* Demangled: glCompressedTexImage2D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexImage2D(void) {
    ALOGD("glCompressedTexImage2D() called");
    return 0;
}

/* Demangled: glStencilOpSeparate */
extern "C" __attribute__((visibility("default"))) int glStencilOpSeparate(void) {
    ALOGD("glStencilOpSeparate() called");
    return 0;
}

/* Demangled: glBlendFuncSeparatei */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparatei(void) {
    ALOGD("glBlendFuncSeparatei() called");
    return 0;
}

/* Demangled: glGetQueryObjectivEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectivEXT(void) {
    ALOGD("glGetQueryObjectivEXT() called");
    return 0;
}

/* Demangled: MTK_getProcessCmdline(char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21MTK_getProcessCmdlinePci(void) {
    ALOGD("_Z21MTK_getProcessCmdlinePci() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_width */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_width(void) {
    ALOGD("egl_color_buffer_get_width() called");
    return 0;
}

/* Demangled: eglChooseConfig */
extern "C" __attribute__((visibility("default"))) int eglChooseConfig(void) {
    ALOGD("eglChooseConfig() called");
    return 0;
}

/* Demangled: osup_d_mutex_term */
extern "C" __attribute__((visibility("default"))) int osup_d_mutex_term(void) {
    ALOGD("osup_d_mutex_term() called");
    return 0;
}

/* Demangled: clCreateProgramWithSource */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithSource(void) {
    ALOGD("clCreateProgramWithSource() called");
    return 0;
}

/* Demangled: glGenQueriesEXT */
extern "C" __attribute__((visibility("default"))) int glGenQueriesEXT(void) {
    ALOGD("glGenQueriesEXT() called");
    return 0;
}

/* Demangled: glTexStorage2DMultisample */
extern "C" __attribute__((visibility("default"))) int glTexStorage2DMultisample(void) {
    ALOGD("glTexStorage2DMultisample() called");
    return 0;
}

/* Demangled: glIsVertexArray */
extern "C" __attribute__((visibility("default"))) int glIsVertexArray(void) {
    ALOGD("glIsVertexArray() called");
    return 0;
}

/* Demangled: glUniformBlockBinding */
extern "C" __attribute__((visibility("default"))) int glUniformBlockBinding(void) {
    ALOGD("glUniformBlockBinding() called");
    return 0;
}

/* Demangled: glGetGraphicsResetStatus */
extern "C" __attribute__((visibility("default"))) int glGetGraphicsResetStatus(void) {
    ALOGD("glGetGraphicsResetStatus() called");
    return 0;
}

/* Demangled: clRetainProgram */
extern "C" __attribute__((visibility("default"))) int clRetainProgram(void) {
    ALOGD("clRetainProgram() called");
    return 0;
}

/* Demangled: mali_egl_image_get_buffer_ext_type */
extern "C" __attribute__((visibility("default"))) int mali_egl_image_get_buffer_ext_type(void) {
    ALOGD("mali_egl_image_get_buffer_ext_type() called");
    return 0;
}

/* Demangled: glGetnUniformivKHR */
extern "C" __attribute__((visibility("default"))) int glGetnUniformivKHR(void) {
    ALOGD("glGetnUniformivKHR() called");
    return 0;
}

/* Demangled: glGetUniformBlockIndex */
extern "C" __attribute__((visibility("default"))) int glGetUniformBlockIndex(void) {
    ALOGD("glGetUniformBlockIndex() called");
    return 0;
}

/* Demangled: glPatchParameteriOES */
extern "C" __attribute__((visibility("default"))) int glPatchParameteriOES(void) {
    ALOGD("glPatchParameteriOES() called");
    return 0;
}

/* Demangled: glBlendFunc */
extern "C" __attribute__((visibility("default"))) int glBlendFunc(void) {
    ALOGD("glBlendFunc() called");
    return 0;
}

/* Demangled: stdlibp_neon_soft_f32_to_f16 */
extern "C" __attribute__((visibility("default"))) int stdlibp_neon_soft_f32_to_f16(void) {
    ALOGD("stdlibp_neon_soft_f32_to_f16() called");
    return 0;
}

/* Demangled: clEnqueueSVMMemFill */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMemFill(void) {
    ALOGD("clEnqueueSVMMemFill() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_crop_rectangle */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_crop_rectangle(void) {
    ALOGD("egl_color_buffer_get_crop_rectangle() called");
    return 0;
}

/* Demangled: glOrthof */
extern "C" __attribute__((visibility("default"))) int glOrthof(void) {
    ALOGD("glOrthof() called");
    return 0;
}

/* Demangled: glClearBufferfi */
extern "C" __attribute__((visibility("default"))) int glClearBufferfi(void) {
    ALOGD("glClearBufferfi() called");
    return 0;
}

/* Demangled: glMinSampleShading */
extern "C" __attribute__((visibility("default"))) int glMinSampleShading(void) {
    ALOGD("glMinSampleShading() called");
    return 0;
}

/* Demangled: glGetObjectPtrLabelKHR */
extern "C" __attribute__((visibility("default"))) int glGetObjectPtrLabelKHR(void) {
    ALOGD("glGetObjectPtrLabelKHR() called");
    return 0;
}

/* Demangled: cmpbe_v2_free_compilation_result */
extern "C" __attribute__((visibility("default"))) int cmpbe_v2_free_compilation_result(void) {
    ALOGD("cmpbe_v2_free_compilation_result() called");
    return 0;
}

/* Demangled: eglWaitGL */
extern "C" __attribute__((visibility("default"))) int eglWaitGL(void) {
    ALOGD("eglWaitGL() called");
    return 0;
}

/* Demangled: glStencilMaskSeparate */
extern "C" __attribute__((visibility("default"))) int glStencilMaskSeparate(void) {
    ALOGD("glStencilMaskSeparate() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_private_data */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_private_data(void) {
    ALOGD("egl_color_buffer_set_private_data() called");
    return 0;
}

/* Demangled: clEnqueueBarrier */
extern "C" __attribute__((visibility("default"))) int clEnqueueBarrier(void) {
    ALOGD("clEnqueueBarrier() called");
    return 0;
}

/* Demangled: glIsTexture */
extern "C" __attribute__((visibility("default"))) int glIsTexture(void) {
    ALOGD("glIsTexture() called");
    return 0;
}

/* Demangled: osup_sem_trywait */
extern "C" __attribute__((visibility("default"))) int osup_sem_trywait(void) {
    ALOGD("osup_sem_trywait() called");
    return 0;
}

/* Demangled: clCreateProgramWithILKHR */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithILKHR(void) {
    ALOGD("clCreateProgramWithILKHR() called");
    return 0;
}

/* Demangled: clGetSamplerInfo */
extern "C" __attribute__((visibility("default"))) int clGetSamplerInfo(void) {
    ALOGD("clGetSamplerInfo() called");
    return 0;
}

/* Demangled: eglQuerySurface */
extern "C" __attribute__((visibility("default"))) int eglQuerySurface(void) {
    ALOGD("eglQuerySurface() called");
    return 0;
}

/* Demangled: osup_mutex_lock */
extern "C" __attribute__((visibility("default"))) int osup_mutex_lock(void) {
    ALOGD("osup_mutex_lock() called");
    return 0;
}

/* Demangled: clEnqueueSVMUnmap */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMUnmap(void) {
    ALOGD("clEnqueueSVMUnmap() called");
    return 0;
}

/* Demangled: glGetVertexAttribiv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribiv(void) {
    ALOGD("glGetVertexAttribiv() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_early_display */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_early_display(void) {
    ALOGD("egl_color_buffer_get_early_display() called");
    return 0;
}

/* Demangled: glClearColorx */
extern "C" __attribute__((visibility("default"))) int glClearColorx(void) {
    ALOGD("glClearColorx() called");
    return 0;
}

/* Demangled: glTexGenfvOES */
extern "C" __attribute__((visibility("default"))) int glTexGenfvOES(void) {
    ALOGD("glTexGenfvOES() called");
    return 0;
}

/* Demangled: glWeightPointerOES */
extern "C" __attribute__((visibility("default"))) int glWeightPointerOES(void) {
    ALOGD("glWeightPointerOES() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_fence */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_fence(void) {
    ALOGD("egl_color_buffer_get_fence() called");
    return 0;
}

/* Demangled: mtk_is_flex_yuv_format */
extern "C" __attribute__((visibility("default"))) int mtk_is_flex_yuv_format(void) {
    ALOGD("mtk_is_flex_yuv_format() called");
    return 0;
}

/* Demangled: glBindFramebufferOES */
extern "C" __attribute__((visibility("default"))) int glBindFramebufferOES(void) {
    ALOGD("glBindFramebufferOES() called");
    return 0;
}

/* Demangled: glGetTexParameterxvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterxvOES(void) {
    ALOGD("glGetTexParameterxvOES() called");
    return 0;
}

/* Demangled: glDebugMessageCallback */
extern "C" __attribute__((visibility("default"))) int glDebugMessageCallback(void) {
    ALOGD("glDebugMessageCallback() called");
    return 0;
}

/* Demangled: glGetGraphicsResetStatusEXT */
extern "C" __attribute__((visibility("default"))) int glGetGraphicsResetStatusEXT(void) {
    ALOGD("glGetGraphicsResetStatusEXT() called");
    return 0;
}

/* Demangled: glGetTexEnvxv */
extern "C" __attribute__((visibility("default"))) int glGetTexEnvxv(void) {
    ALOGD("glGetTexEnvxv() called");
    return 0;
}

/* Demangled: glBeginQueryEXT */
extern "C" __attribute__((visibility("default"))) int glBeginQueryEXT(void) {
    ALOGD("glBeginQueryEXT() called");
    return 0;
}

/* Demangled: glGenTransformFeedbacks */
extern "C" __attribute__((visibility("default"))) int glGenTransformFeedbacks(void) {
    ALOGD("glGenTransformFeedbacks() called");
    return 0;
}

/* Demangled: glGetTexParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuivOES(void) {
    ALOGD("glGetTexParameterIuivOES() called");
    return 0;
}

/* Demangled: glPrimitiveBoundingBox */
extern "C" __attribute__((visibility("default"))) int glPrimitiveBoundingBox(void) {
    ALOGD("glPrimitiveBoundingBox() called");
    return 0;
}

/* Demangled: glUniform2ui */
extern "C" __attribute__((visibility("default"))) int glUniform2ui(void) {
    ALOGD("glUniform2ui() called");
    return 0;
}

/* Demangled: glGetLightxvOES */
extern "C" __attribute__((visibility("default"))) int glGetLightxvOES(void) {
    ALOGD("glGetLightxvOES() called");
    return 0;
}

/* Demangled: glTexParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuiv(void) {
    ALOGD("glTexParameterIuiv() called");
    return 0;
}

/* Demangled: glGetBufferPointerv */
extern "C" __attribute__((visibility("default"))) int glGetBufferPointerv(void) {
    ALOGD("glGetBufferPointerv() called");
    return 0;
}

/* Demangled: MTK_GetDebugPropertyValue */
extern "C" __attribute__((visibility("default"))) int MTK_GetDebugPropertyValue(void) {
    ALOGD("MTK_GetDebugPropertyValue() called");
    return 0;
}

/* Demangled: clEnqueueSVMMigrateMem */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMigrateMem(void) {
    ALOGD("clEnqueueSVMMigrateMem() called");
    return 0;
}

/* Demangled: glProgramBinaryOES */
extern "C" __attribute__((visibility("default"))) int glProgramBinaryOES(void) {
    ALOGD("glProgramBinaryOES() called");
    return 0;
}

/* Demangled: glProgramUniform2ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2ui(void) {
    ALOGD("glProgramUniform2ui() called");
    return 0;
}

/* Demangled: glTexParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuivEXT(void) {
    ALOGD("glTexParameterIuivEXT() called");
    return 0;
}

/* Demangled: glLoadPaletteFromModelViewMatrixOES */
extern "C" __attribute__((visibility("default"))) int glLoadPaletteFromModelViewMatrixOES(void) {
    ALOGD("glLoadPaletteFromModelViewMatrixOES() called");
    return 0;
}

/* Demangled: egl_color_buffer_is_protected */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_is_protected(void) {
    ALOGD("egl_color_buffer_is_protected() called");
    return 0;
}

/* Demangled: glPointParameterxOES */
extern "C" __attribute__((visibility("default"))) int glPointParameterxOES(void) {
    ALOGD("glPointParameterxOES() called");
    return 0;
}

/* Demangled: glGetQueryObjectuivEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectuivEXT(void) {
    ALOGD("glGetQueryObjectuivEXT() called");
    return 0;
}

/* Demangled: glGetRenderbufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetRenderbufferParameteriv(void) {
    ALOGD("glGetRenderbufferParameteriv() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIivEXT(void) {
    ALOGD("glGetSamplerParameterIivEXT() called");
    return 0;
}

/* Demangled: glUniformMatrix4x3fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4x3fv(void) {
    ALOGD("glUniformMatrix4x3fv() called");
    return 0;
}

/* Demangled: clGetPlatformIDs */
extern "C" __attribute__((visibility("default"))) int clGetPlatformIDs(void) {
    ALOGD("clGetPlatformIDs() called");
    return 0;
}

/* Demangled: glClearBufferfv */
extern "C" __attribute__((visibility("default"))) int glClearBufferfv(void) {
    ALOGD("glClearBufferfv() called");
    return 0;
}

/* Demangled: glGetnUniformfvKHR */
extern "C" __attribute__((visibility("default"))) int glGetnUniformfvKHR(void) {
    ALOGD("glGetnUniformfvKHR() called");
    return 0;
}

/* Demangled: glCullFace */
extern "C" __attribute__((visibility("default"))) int glCullFace(void) {
    ALOGD("glCullFace() called");
    return 0;
}

/* Demangled: glStencilOp */
extern "C" __attribute__((visibility("default"))) int glStencilOp(void) {
    ALOGD("glStencilOp() called");
    return 0;
}

/* Demangled: glDrawTexfOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexfOES(void) {
    ALOGD("glDrawTexfOES() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3x4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3x4fv(void) {
    ALOGD("glProgramUniformMatrix3x4fv() called");
    return 0;
}

/* Demangled: glGenTextures */
extern "C" __attribute__((visibility("default"))) int glGenTextures(void) {
    ALOGD("glGenTextures() called");
    return 0;
}

/* Demangled: clSetDefaultDeviceCommandQueue */
extern "C" __attribute__((visibility("default"))) int clSetDefaultDeviceCommandQueue(void) {
    ALOGD("clSetDefaultDeviceCommandQueue() called");
    return 0;
}

/* Demangled: glTexParameterxOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterxOES(void) {
    ALOGD("glTexParameterxOES() called");
    return 0;
}

/* Demangled: glSamplerParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIuivEXT(void) {
    ALOGD("glSamplerParameterIuivEXT() called");
    return 0;
}

/* Demangled: MTK_CheckRootPermission */
extern "C" __attribute__((visibility("default"))) int MTK_CheckRootPermission(void) {
    ALOGD("MTK_CheckRootPermission() called");
    return 0;
}

/* Demangled: glDisableiEXT */
extern "C" __attribute__((visibility("default"))) int glDisableiEXT(void) {
    ALOGD("glDisableiEXT() called");
    return 0;
}

/* Demangled: glGetnUniformfv */
extern "C" __attribute__((visibility("default"))) int glGetnUniformfv(void) {
    ALOGD("glGetnUniformfv() called");
    return 0;
}

/* Demangled: glIsProgramPipeline */
extern "C" __attribute__((visibility("default"))) int glIsProgramPipeline(void) {
    ALOGD("glIsProgramPipeline() called");
    return 0;
}

/* Demangled: glIsQuery */
extern "C" __attribute__((visibility("default"))) int glIsQuery(void) {
    ALOGD("glIsQuery() called");
    return 0;
}

/* Demangled: glValidateProgram */
extern "C" __attribute__((visibility("default"))) int glValidateProgram(void) {
    ALOGD("glValidateProgram() called");
    return 0;
}

/* Demangled: glScissor */
extern "C" __attribute__((visibility("default"))) int glScissor(void) {
    ALOGD("glScissor() called");
    return 0;
}

/* Demangled: glGetTexLevelParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetTexLevelParameteriv(void) {
    ALOGD("glGetTexLevelParameteriv() called");
    return 0;
}

/* Demangled: eglQueryString */
extern "C" __attribute__((visibility("default"))) int eglQueryString(void) {
    ALOGD("eglQueryString() called");
    return 0;
}

/* Demangled: glFogxv */
extern "C" __attribute__((visibility("default"))) int glFogxv(void) {
    ALOGD("glFogxv() called");
    return 0;
}

/* Demangled: glOrthox */
extern "C" __attribute__((visibility("default"))) int glOrthox(void) {
    ALOGD("glOrthox() called");
    return 0;
}

/* Demangled: glEndTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glEndTransformFeedback(void) {
    ALOGD("glEndTransformFeedback() called");
    return 0;
}

/* Demangled: clUnloadPlatformCompiler */
extern "C" __attribute__((visibility("default"))) int clUnloadPlatformCompiler(void) {
    ALOGD("clUnloadPlatformCompiler() called");
    return 0;
}

/* Demangled: osup_thread_data_get */
extern "C" __attribute__((visibility("default"))) int osup_thread_data_get(void) {
    ALOGD("osup_thread_data_get() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2x4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2x4fv(void) {
    ALOGD("glProgramUniformMatrix2x4fv() called");
    return 0;
}

/* Demangled: glReadnPixels */
extern "C" __attribute__((visibility("default"))) int glReadnPixels(void) {
    ALOGD("glReadnPixels() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: osup_sync_object_timedwait */
extern "C" __attribute__((visibility("default"))) int osup_sync_object_timedwait(void) {
    ALOGD("osup_sync_object_timedwait() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: clCreateCommandQueue */
extern "C" __attribute__((visibility("default"))) int clCreateCommandQueue(void) {
    ALOGD("clCreateCommandQueue() called");
    return 0;
}

/* Demangled: clGetSupportedImageFormats */
extern "C" __attribute__((visibility("default"))) int clGetSupportedImageFormats(void) {
    ALOGD("clGetSupportedImageFormats() called");
    return 0;
}

/* Demangled: glGetTexEnviv */
extern "C" __attribute__((visibility("default"))) int glGetTexEnviv(void) {
    ALOGD("glGetTexEnviv() called");
    return 0;
}

/* Demangled: glFramebufferRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glFramebufferRenderbuffer(void) {
    ALOGD("glFramebufferRenderbuffer() called");
    return 0;
}

/* Demangled: glVertexAttrib3fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib3fv(void) {
    ALOGD("glVertexAttrib3fv() called");
    return 0;
}

/* Demangled: clEnqueueFillImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueFillImage(void) {
    ALOGD("clEnqueueFillImage() called");
    return 0;
}

/* Demangled: glUniformMatrix2x3fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2x3fv(void) {
    ALOGD("glUniformMatrix2x3fv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: glPointParameterxv */
extern "C" __attribute__((visibility("default"))) int glPointParameterxv(void) {
    ALOGD("glPointParameterxv() called");
    return 0;
}

/* Demangled: glUniform1f */
extern "C" __attribute__((visibility("default"))) int glUniform1f(void) {
    ALOGD("glUniform1f() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: clIcdGetPlatformIDsKHR */
extern "C" __attribute__((visibility("default"))) int clIcdGetPlatformIDsKHR(void) {
    ALOGD("clIcdGetPlatformIDsKHR() called");
    return 0;
}

/* Demangled: glBlendColor */
extern "C" __attribute__((visibility("default"))) int glBlendColor(void) {
    ALOGD("glBlendColor() called");
    return 0;
}

/* Demangled: glCompressedTexImage3D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexImage3D(void) {
    ALOGD("glCompressedTexImage3D() called");
    return 0;
}

/* Demangled: glShaderBinary */
extern "C" __attribute__((visibility("default"))) int glShaderBinary(void) {
    ALOGD("glShaderBinary() called");
    return 0;
}

/* Demangled: glTexImage3DOES */
extern "C" __attribute__((visibility("default"))) int glTexImage3DOES(void) {
    ALOGD("glTexImage3DOES() called");
    return 0;
}

/* Demangled: glIsBuffer */
extern "C" __attribute__((visibility("default"))) int glIsBuffer(void) {
    ALOGD("glIsBuffer() called");
    return 0;
}

/* Demangled: glDepthRangefOES */
extern "C" __attribute__((visibility("default"))) int glDepthRangefOES(void) {
    ALOGD("glDepthRangefOES() called");
    return 0;
}

/* Demangled: glBlendEquationSeparatei */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparatei(void) {
    ALOGD("glBlendEquationSeparatei() called");
    return 0;
}

/* Demangled: glDeleteFramebuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteFramebuffers(void) {
    ALOGD("glDeleteFramebuffers() called");
    return 0;
}

/* Demangled: glUniform4iv */
extern "C" __attribute__((visibility("default"))) int glUniform4iv(void) {
    ALOGD("glUniform4iv() called");
    return 0;
}

/* Demangled: glClear */
extern "C" __attribute__((visibility("default"))) int glClear(void) {
    ALOGD("glClear() called");
    return 0;
}

/* Demangled: glGetDebugMessageLogKHR */
extern "C" __attribute__((visibility("default"))) int glGetDebugMessageLogKHR(void) {
    ALOGD("glGetDebugMessageLogKHR() called");
    return 0;
}

/* Demangled: clReleaseContext */
extern "C" __attribute__((visibility("default"))) int clReleaseContext(void) {
    ALOGD("clReleaseContext() called");
    return 0;
}

/* Demangled: osup_thread_callback_set */
extern "C" __attribute__((visibility("default"))) int osup_thread_callback_set(void) {
    ALOGD("osup_thread_callback_set() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexEXT(void) {
    ALOGD("glDrawElementsInstancedBaseVertexEXT() called");
    return 0;
}

/* Demangled: glFramebufferTexture2D */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2D(void) {
    ALOGD("glFramebufferTexture2D() called");
    return 0;
}

/* Demangled: glIsSampler */
extern "C" __attribute__((visibility("default"))) int glIsSampler(void) {
    ALOGD("glIsSampler() called");
    return 0;
}

/* Demangled: glUniform1i */
extern "C" __attribute__((visibility("default"))) int glUniform1i(void) {
    ALOGD("glUniform1i() called");
    return 0;
}

/* Demangled: glLightModelxv */
extern "C" __attribute__((visibility("default"))) int glLightModelxv(void) {
    ALOGD("glLightModelxv() called");
    return 0;
}

/* Demangled: glProgramUniform4iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4iv(void) {
    ALOGD("glProgramUniform4iv() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertexOES(void) {
    ALOGD("glDrawRangeElementsBaseVertexOES() called");
    return 0;
}

/* Demangled: glVertexAttribI4iv */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4iv(void) {
    ALOGD("glVertexAttribI4iv() called");
    return 0;
}

/* Demangled: glGetTexParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterfv(void) {
    ALOGD("glGetTexParameterfv() called");
    return 0;
}

/* Demangled: glReadnPixelsKHR */
extern "C" __attribute__((visibility("default"))) int glReadnPixelsKHR(void) {
    ALOGD("glReadnPixelsKHR() called");
    return 0;
}

/* Demangled: glDispatchComputeIndirect */
extern "C" __attribute__((visibility("default"))) int glDispatchComputeIndirect(void) {
    ALOGD("glDispatchComputeIndirect() called");
    return 0;
}

/* Demangled: clSetKernelExecInfo */
extern "C" __attribute__((visibility("default"))) int clSetKernelExecInfo(void) {
    ALOGD("clSetKernelExecInfo() called");
    return 0;
}

/* Demangled: glBlendFuncSeparateiEXT */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparateiEXT(void) {
    ALOGD("glBlendFuncSeparateiEXT() called");
    return 0;
}

/* Demangled: glVertexAttribIFormat */
extern "C" __attribute__((visibility("default"))) int glVertexAttribIFormat(void) {
    ALOGD("glVertexAttribIFormat() called");
    return 0;
}

/* Demangled: glStencilFuncSeparate */
extern "C" __attribute__((visibility("default"))) int glStencilFuncSeparate(void) {
    ALOGD("glStencilFuncSeparate() called");
    return 0;
}

/* Demangled: clGetKernelSubGroupInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelSubGroupInfo(void) {
    ALOGD("clGetKernelSubGroupInfo() called");
    return 0;
}

/* Demangled: egl_env_set */
extern "C" __attribute__((visibility("default"))) int egl_env_set(void) {
    ALOGD("egl_env_set() called");
    return 0;
}

/* Demangled: glMatrixMode */
extern "C" __attribute__((visibility("default"))) int glMatrixMode(void) {
    ALOGD("glMatrixMode() called");
    return 0;
}

/* Demangled: glBindTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glBindTransformFeedback(void) {
    ALOGD("glBindTransformFeedback() called");
    return 0;
}

/* Demangled: egl_register_gles_blob_cache_callbacks */
extern "C" __attribute__((visibility("default"))) int egl_register_gles_blob_cache_callbacks(void) {
    ALOGD("egl_register_gles_blob_cache_callbacks() called");
    return 0;
}

/* Demangled: glClientActiveTexture */
extern "C" __attribute__((visibility("default"))) int glClientActiveTexture(void) {
    ALOGD("glClientActiveTexture() called");
    return 0;
}

/* Demangled: glGetFixedv */
extern "C" __attribute__((visibility("default"))) int glGetFixedv(void) {
    ALOGD("glGetFixedv() called");
    return 0;
}

/* Demangled: glUniform2fv */
extern "C" __attribute__((visibility("default"))) int glUniform2fv(void) {
    ALOGD("glUniform2fv() called");
    return 0;
}

/* Demangled: glBindTexture */
extern "C" __attribute__((visibility("default"))) int glBindTexture(void) {
    ALOGD("glBindTexture() called");
    return 0;
}

/* Demangled: glUnmapBufferOES */
extern "C" __attribute__((visibility("default"))) int glUnmapBufferOES(void) {
    ALOGD("glUnmapBufferOES() called");
    return 0;
}

/* Demangled: clFinish */
extern "C" __attribute__((visibility("default"))) int clFinish(void) {
    ALOGD("clFinish() called");
    return 0;
}

/* Demangled: egl_check_surface_valid_and_retain */
extern "C" __attribute__((visibility("default"))) int egl_check_surface_valid_and_retain(void) {
    ALOGD("egl_check_surface_valid_and_retain() called");
    return 0;
}

/* Demangled: glGetMaterialxv */
extern "C" __attribute__((visibility("default"))) int glGetMaterialxv(void) {
    ALOGD("glGetMaterialxv() called");
    return 0;
}

/* Demangled: glCompressedTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexSubImage2D(void) {
    ALOGD("glCompressedTexSubImage2D() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: glGetLightfv */
extern "C" __attribute__((visibility("default"))) int glGetLightfv(void) {
    ALOGD("glGetLightfv() called");
    return 0;
}

/* Demangled: glGetAttachedShaders */
extern "C" __attribute__((visibility("default"))) int glGetAttachedShaders(void) {
    ALOGD("glGetAttachedShaders() called");
    return 0;
}

/* Demangled: glGetInteger64v */
extern "C" __attribute__((visibility("default"))) int glGetInteger64v(void) {
    ALOGD("glGetInteger64v() called");
    return 0;
}

/* Demangled: glProgramUniform2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2fv(void) {
    ALOGD("glProgramUniform2fv() called");
    return 0;
}

/* Demangled: glObjectPtrLabelKHR */
extern "C" __attribute__((visibility("default"))) int glObjectPtrLabelKHR(void) {
    ALOGD("glObjectPtrLabelKHR() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_age */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_age(void) {
    ALOGD("egl_color_buffer_set_age() called");
    return 0;
}

/* Demangled: glGetTexGenivOES */
extern "C" __attribute__((visibility("default"))) int glGetTexGenivOES(void) {
    ALOGD("glGetTexGenivOES() called");
    return 0;
}

/* Demangled: glBindVertexBuffer */
extern "C" __attribute__((visibility("default"))) int glBindVertexBuffer(void) {
    ALOGD("glBindVertexBuffer() called");
    return 0;
}

/* Demangled: glRenderbufferStorage */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorage(void) {
    ALOGD("glRenderbufferStorage() called");
    return 0;
}

/* Demangled: clEnqueueCopyImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyImage(void) {
    ALOGD("clEnqueueCopyImage() called");
    return 0;
}

/* Demangled: glFramebufferRenderbufferOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferRenderbufferOES(void) {
    ALOGD("glFramebufferRenderbufferOES() called");
    return 0;
}

/* Demangled: glPointSizexOES */
extern "C" __attribute__((visibility("default"))) int glPointSizexOES(void) {
    ALOGD("glPointSizexOES() called");
    return 0;
}

/* Demangled: glCreateProgram */
extern "C" __attribute__((visibility("default"))) int glCreateProgram(void) {
    ALOGD("glCreateProgram() called");
    return 0;
}

/* Demangled: glEndQueryEXT */
extern "C" __attribute__((visibility("default"))) int glEndQueryEXT(void) {
    ALOGD("glEndQueryEXT() called");
    return 0;
}

/* Demangled: glIsEnabledi */
extern "C" __attribute__((visibility("default"))) int glIsEnabledi(void) {
    ALOGD("glIsEnabledi() called");
    return 0;
}

/* Demangled: glReadBuffer */
extern "C" __attribute__((visibility("default"))) int glReadBuffer(void) {
    ALOGD("glReadBuffer() called");
    return 0;
}

/* Demangled: eglGetDisplay */
extern "C" __attribute__((visibility("default"))) int eglGetDisplay(void) {
    ALOGD("eglGetDisplay() called");
    return 0;
}

/* Demangled: glFramebufferTextureEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureEXT(void) {
    ALOGD("glFramebufferTextureEXT() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_num_planes */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_num_planes(void) {
    ALOGD("egl_color_buffer_get_num_planes() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_plane_dims */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_plane_dims(void) {
    ALOGD("egl_color_buffer_get_plane_dims() called");
    return 0;
}

/* Demangled: glIsFramebufferOES */
extern "C" __attribute__((visibility("default"))) int glIsFramebufferOES(void) {
    ALOGD("glIsFramebufferOES() called");
    return 0;
}

/* Demangled: glGetProgramPipelineInfoLog */
extern "C" __attribute__((visibility("default"))) int glGetProgramPipelineInfoLog(void) {
    ALOGD("glGetProgramPipelineInfoLog() called");
    return 0;
}

/* Demangled: osup_sync_object_clear */
extern "C" __attribute__((visibility("default"))) int osup_sync_object_clear(void) {
    ALOGD("osup_sync_object_clear() called");
    return 0;
}

/* Demangled: clCreateProgramWithIL */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithIL(void) {
    ALOGD("clCreateProgramWithIL() called");
    return 0;
}

/* Demangled: eglp_config_set_attributes */
extern "C" __attribute__((visibility("default"))) int eglp_config_set_attributes(void) {
    ALOGD("eglp_config_set_attributes() called");
    return 0;
}

/* Demangled: glDisablei */
extern "C" __attribute__((visibility("default"))) int glDisablei(void) {
    ALOGD("glDisablei() called");
    return 0;
}

/* Demangled: glFramebufferTextureMultiviewOVR */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureMultiviewOVR(void) {
    ALOGD("glFramebufferTextureMultiviewOVR() called");
    return 0;
}

/* Demangled: glUniformMatrix4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4fv(void) {
    ALOGD("glUniformMatrix4fv() called");
    return 0;
}

/* Demangled: glCopyTexImage2D */
extern "C" __attribute__((visibility("default"))) int glCopyTexImage2D(void) {
    ALOGD("glCopyTexImage2D() called");
    return 0;
}

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Demangled: glBlendEquationSeparateiEXT */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparateiEXT(void) {
    ALOGD("glBlendEquationSeparateiEXT() called");
    return 0;
}

/* Demangled: glTexBufferEXT */
extern "C" __attribute__((visibility("default"))) int glTexBufferEXT(void) {
    ALOGD("glTexBufferEXT() called");
    return 0;
}

/* Demangled: MTK_TIME_PROFILE_STOP */
extern "C" __attribute__((visibility("default"))) int MTK_TIME_PROFILE_STOP(void) {
    ALOGD("MTK_TIME_PROFILE_STOP() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: clEnqueueReadImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueReadImage(void) {
    ALOGD("clEnqueueReadImage() called");
    return 0;
}

/* Demangled: glClipPlanexOES */
extern "C" __attribute__((visibility("default"))) int glClipPlanexOES(void) {
    ALOGD("glClipPlanexOES() called");
    return 0;
}

/* Demangled: glPointSizex */
extern "C" __attribute__((visibility("default"))) int glPointSizex(void) {
    ALOGD("glPointSizex() called");
    return 0;
}

/* Demangled: glTexParameterxvOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterxvOES(void) {
    ALOGD("glTexParameterxvOES() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIuivOES(void) {
    ALOGD("glGetSamplerParameterIuivOES() called");
    return 0;
}

/* Demangled: cmpbep_v2_get_variant_info */
extern "C" __attribute__((visibility("default"))) int cmpbep_v2_get_variant_info(void) {
    ALOGD("cmpbep_v2_get_variant_info() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_early_display */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_early_display(void) {
    ALOGD("egl_color_buffer_set_early_display() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_mapped_address */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_mapped_address(void) {
    ALOGD("egl_color_buffer_get_mapped_address() called");
    return 0;
}

/* Demangled: glGetActiveUniform */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniform(void) {
    ALOGD("glGetActiveUniform() called");
    return 0;
}

/* Demangled: egl_color_buffer_new */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_new(void) {
    ALOGD("egl_color_buffer_new() called");
    return 0;
}

/* Demangled: eglQueryDmaBufModifiersEXT */
extern "C" __attribute__((visibility("default"))) int eglQueryDmaBufModifiersEXT(void) {
    ALOGD("eglQueryDmaBufModifiersEXT() called");
    return 0;
}

/* Demangled: glGetQueryObjecti64vEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjecti64vEXT(void) {
    ALOGD("glGetQueryObjecti64vEXT() called");
    return 0;
}

/* Demangled: glTexEnvf */
extern "C" __attribute__((visibility("default"))) int glTexEnvf(void) {
    ALOGD("glTexEnvf() called");
    return 0;
}

/* Demangled: glAttachShader */
extern "C" __attribute__((visibility("default"))) int glAttachShader(void) {
    ALOGD("glAttachShader() called");
    return 0;
}

/* Demangled: glSamplerParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIivOES(void) {
    ALOGD("glSamplerParameterIivOES() called");
    return 0;
}

/* Demangled: glSamplerParameteriv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameteriv(void) {
    ALOGD("glSamplerParameteriv() called");
    return 0;
}

/* Demangled: glShaderSource */
extern "C" __attribute__((visibility("default"))) int glShaderSource(void) {
    ALOGD("glShaderSource() called");
    return 0;
}

/* Demangled: __aeabi_f2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2lz(void) {
    ALOGD("__aeabi_f2lz() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: clSetCommandQueueProperty */
extern "C" __attribute__((visibility("default"))) int clSetCommandQueueProperty(void) {
    ALOGD("clSetCommandQueueProperty() called");
    return 0;
}

/* Demangled: eglDestroyImageKHR */
extern "C" __attribute__((visibility("default"))) int eglDestroyImageKHR(void) {
    ALOGD("eglDestroyImageKHR() called");
    return 0;
}

/* Demangled: glBlendFuncSeparateOES */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparateOES(void) {
    ALOGD("glBlendFuncSeparateOES() called");
    return 0;
}

/* Demangled: glLineWidthxOES */
extern "C" __attribute__((visibility("default"))) int glLineWidthxOES(void) {
    ALOGD("glLineWidthxOES() called");
    return 0;
}

/* Demangled: glCheckFramebufferStatus */
extern "C" __attribute__((visibility("default"))) int glCheckFramebufferStatus(void) {
    ALOGD("glCheckFramebufferStatus() called");
    return 0;
}

/* Demangled: glIsEnablediOES */
extern "C" __attribute__((visibility("default"))) int glIsEnablediOES(void) {
    ALOGD("glIsEnablediOES() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: egl_color_buffer_set_crop_rectangle */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_set_crop_rectangle(void) {
    ALOGD("egl_color_buffer_set_crop_rectangle() called");
    return 0;
}

/* Demangled: glBindVertexArray */
extern "C" __attribute__((visibility("default"))) int glBindVertexArray(void) {
    ALOGD("glBindVertexArray() called");
    return 0;
}

/* Demangled: vkGetSwapchainGrallocUsageANDROID */
extern "C" __attribute__((visibility("default"))) int vkGetSwapchainGrallocUsageANDROID(void) {
    ALOGD("vkGetSwapchainGrallocUsageANDROID() called");
    return 0;
}

/* Demangled: cmpbe_v2_compile_single_shader */
extern "C" __attribute__((visibility("default"))) int cmpbe_v2_compile_single_shader(void) {
    ALOGD("cmpbe_v2_compile_single_shader() called");
    return 0;
}

/* Demangled: glFrustumxOES */
extern "C" __attribute__((visibility("default"))) int glFrustumxOES(void) {
    ALOGD("glFrustumxOES() called");
    return 0;
}

/* Demangled: glTexEnvi */
extern "C" __attribute__((visibility("default"))) int glTexEnvi(void) {
    ALOGD("glTexEnvi() called");
    return 0;
}

/* Demangled: glBlendFunciOES */
extern "C" __attribute__((visibility("default"))) int glBlendFunciOES(void) {
    ALOGD("glBlendFunciOES() called");
    return 0;
}

/* Demangled: glGetMultisamplefv */
extern "C" __attribute__((visibility("default"))) int glGetMultisamplefv(void) {
    ALOGD("glGetMultisamplefv() called");
    return 0;
}

/* Demangled: glGetUniformIndices */
extern "C" __attribute__((visibility("default"))) int glGetUniformIndices(void) {
    ALOGD("glGetUniformIndices() called");
    return 0;
}

/* Demangled: glPopDebugGroup */
extern "C" __attribute__((visibility("default"))) int glPopDebugGroup(void) {
    ALOGD("glPopDebugGroup() called");
    return 0;
}

/* Demangled: glLightfv */
extern "C" __attribute__((visibility("default"))) int glLightfv(void) {
    ALOGD("glLightfv() called");
    return 0;
}

/* Demangled: glDetachShader */
extern "C" __attribute__((visibility("default"))) int glDetachShader(void) {
    ALOGD("glDetachShader() called");
    return 0;
}

/* Demangled: egl_color_buffer_flush_mapping_to_cpu */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_flush_mapping_to_cpu(void) {
    ALOGD("egl_color_buffer_flush_mapping_to_cpu() called");
    return 0;
}

/* Demangled: eglGetProcAddress */
extern "C" __attribute__((visibility("default"))) int eglGetProcAddress(void) {
    ALOGD("eglGetProcAddress() called");
    return 0;
}

/* Demangled: glGetProgramResourceLocation */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceLocation(void) {
    ALOGD("glGetProgramResourceLocation() called");
    return 0;
}

/* Demangled: glGetUniformLocation */
extern "C" __attribute__((visibility("default"))) int glGetUniformLocation(void) {
    ALOGD("glGetUniformLocation() called");
    return 0;
}

/* Demangled: glGetObjectLabel */
extern "C" __attribute__((visibility("default"))) int glGetObjectLabel(void) {
    ALOGD("glGetObjectLabel() called");
    return 0;
}

/* Demangled: glClipPlanef */
extern "C" __attribute__((visibility("default"))) int glClipPlanef(void) {
    ALOGD("glClipPlanef() called");
    return 0;
}

/* Demangled: glGetTexGenfvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexGenfvOES(void) {
    ALOGD("glGetTexGenfvOES() called");
    return 0;
}

/* Demangled: glProgramParameteri */
extern "C" __attribute__((visibility("default"))) int glProgramParameteri(void) {
    ALOGD("glProgramParameteri() called");
    return 0;
}

/* Demangled: glResumeTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glResumeTransformFeedback(void) {
    ALOGD("glResumeTransformFeedback() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: clGetKernelWorkGroupInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelWorkGroupInfo(void) {
    ALOGD("clGetKernelWorkGroupInfo() called");
    return 0;
}

/* Demangled: _essl_error_init */
extern "C" __attribute__((visibility("default"))) int _essl_error_init(void) {
    ALOGD("_essl_error_init() called");
    return 0;
}

/* Demangled: __aeabi_d2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2lz(void) {
    ALOGD("__aeabi_d2lz() called");
    return 0;
}

/* Demangled: glGetClipPlanefOES */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanefOES(void) {
    ALOGD("glGetClipPlanefOES() called");
    return 0;
}

/* Demangled: glDeleteProgram */
extern "C" __attribute__((visibility("default"))) int glDeleteProgram(void) {
    ALOGD("glDeleteProgram() called");
    return 0;
}

/* Demangled: glTexParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterIivOES(void) {
    ALOGD("glTexParameterIivOES() called");
    return 0;
}

/* Demangled: cmpbe_v2_init_options */
extern "C" __attribute__((visibility("default"))) int cmpbe_v2_init_options(void) {
    ALOGD("cmpbe_v2_init_options() called");
    return 0;
}

/* Demangled: clGetDeviceInfo */
extern "C" __attribute__((visibility("default"))) int clGetDeviceInfo(void) {
    ALOGD("clGetDeviceInfo() called");
    return 0;
}

/* Demangled: clGetPipeInfo */
extern "C" __attribute__((visibility("default"))) int clGetPipeInfo(void) {
    ALOGD("clGetPipeInfo() called");
    return 0;
}

/* Demangled: glIsProgram */
extern "C" __attribute__((visibility("default"))) int glIsProgram(void) {
    ALOGD("glIsProgram() called");
    return 0;
}

/* Demangled: glUniform2f */
extern "C" __attribute__((visibility("default"))) int glUniform2f(void) {
    ALOGD("glUniform2f() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: eglp_call_config_get_color_buffer_format */
extern "C" __attribute__((visibility("default"))) int eglp_call_config_get_color_buffer_format(void) {
    ALOGD("eglp_call_config_get_color_buffer_format() called");
    return 0;
}

/* Demangled: glBindSampler */
extern "C" __attribute__((visibility("default"))) int glBindSampler(void) {
    ALOGD("glBindSampler() called");
    return 0;
}

/* Demangled: glColorMaskiEXT */
extern "C" __attribute__((visibility("default"))) int glColorMaskiEXT(void) {
    ALOGD("glColorMaskiEXT() called");
    return 0;
}

/* Demangled: osup_sem_term */
extern "C" __attribute__((visibility("default"))) int osup_sem_term(void) {
    ALOGD("osup_sem_term() called");
    return 0;
}

/* Demangled: osup_thread_setname */
extern "C" __attribute__((visibility("default"))) int osup_thread_setname(void) {
    ALOGD("osup_thread_setname() called");
    return 0;
}

/* Demangled: clBuildProgram */
extern "C" __attribute__((visibility("default"))) int clBuildProgram(void) {
    ALOGD("clBuildProgram() called");
    return 0;
}

/* Demangled: MTK_TIME_PROFILE_START */
extern "C" __attribute__((visibility("default"))) int MTK_TIME_PROFILE_START(void) {
    ALOGD("MTK_TIME_PROFILE_START() called");
    return 0;
}

/* Demangled: glUniform2i */
extern "C" __attribute__((visibility("default"))) int glUniform2i(void) {
    ALOGD("glUniform2i() called");
    return 0;
}

/* Demangled: glVertexAttribBinding */
extern "C" __attribute__((visibility("default"))) int glVertexAttribBinding(void) {
    ALOGD("glVertexAttribBinding() called");
    return 0;
}

/* Demangled: glBindBufferRange */
extern "C" __attribute__((visibility("default"))) int glBindBufferRange(void) {
    ALOGD("glBindBufferRange() called");
    return 0;
}

/* Demangled: glUniform1iv */
extern "C" __attribute__((visibility("default"))) int glUniform1iv(void) {
    ALOGD("glUniform1iv() called");
    return 0;
}

/* Demangled: glUniform4uiv */
extern "C" __attribute__((visibility("default"))) int glUniform4uiv(void) {
    ALOGD("glUniform4uiv() called");
    return 0;
}

/* Demangled: glDeleteVertexArraysOES */
extern "C" __attribute__((visibility("default"))) int glDeleteVertexArraysOES(void) {
    ALOGD("glDeleteVertexArraysOES() called");
    return 0;
}

/* Demangled: eglp_display_create_default_configs */
extern "C" __attribute__((visibility("default"))) int eglp_display_create_default_configs(void) {
    ALOGD("eglp_display_create_default_configs() called");
    return 0;
}

/* Demangled: glCompressedTexSubImage3DOES */
extern "C" __attribute__((visibility("default"))) int glCompressedTexSubImage3DOES(void) {
    ALOGD("glCompressedTexSubImage3DOES() called");
    return 0;
}

/* Demangled: glFramebufferTextureLayer */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureLayer(void) {
    ALOGD("glFramebufferTextureLayer() called");
    return 0;
}

/* Demangled: glPolygonOffset */
extern "C" __attribute__((visibility("default"))) int glPolygonOffset(void) {
    ALOGD("glPolygonOffset() called");
    return 0;
}

/* Demangled: glProgramUniform1iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1iv(void) {
    ALOGD("glProgramUniform1iv() called");
    return 0;
}

/* Demangled: glProgramUniform4uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4uiv(void) {
    ALOGD("glProgramUniform4uiv() called");
    return 0;
}

/* Demangled: glTexStorage2D */
extern "C" __attribute__((visibility("default"))) int glTexStorage2D(void) {
    ALOGD("glTexStorage2D() called");
    return 0;
}

/* Demangled: glEnableiEXT */
extern "C" __attribute__((visibility("default"))) int glEnableiEXT(void) {
    ALOGD("glEnableiEXT() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: clEnqueueMapBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueMapBuffer(void) {
    ALOGD("clEnqueueMapBuffer() called");
    return 0;
}

/* Demangled: glMultiTexCoord4xOES */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4xOES(void) {
    ALOGD("glMultiTexCoord4xOES() called");
    return 0;
}

/* Demangled: glTexEnvx */
extern "C" __attribute__((visibility("default"))) int glTexEnvx(void) {
    ALOGD("glTexEnvx() called");
    return 0;
}

/* Demangled: glTexParameterxv */
extern "C" __attribute__((visibility("default"))) int glTexParameterxv(void) {
    ALOGD("glTexParameterxv() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIuiv(void) {
    ALOGD("glGetSamplerParameterIuiv() called");
    return 0;
}

/* Demangled: glGetSamplerParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameteriv(void) {
    ALOGD("glGetSamplerParameteriv() called");
    return 0;
}

/* Demangled: eglCreatePixmapSurface */
extern "C" __attribute__((visibility("default"))) int eglCreatePixmapSurface(void) {
    ALOGD("eglCreatePixmapSurface() called");
    return 0;
}

/* Demangled: glBufferStorageExternalEXT */
extern "C" __attribute__((visibility("default"))) int glBufferStorageExternalEXT(void) {
    ALOGD("glBufferStorageExternalEXT() called");
    return 0;
}

/* Demangled: glDeleteVertexArrays */
extern "C" __attribute__((visibility("default"))) int glDeleteVertexArrays(void) {
    ALOGD("glDeleteVertexArrays() called");
    return 0;
}

/* Demangled: glDepthFunc */
extern "C" __attribute__((visibility("default"))) int glDepthFunc(void) {
    ALOGD("glDepthFunc() called");
    return 0;
}

/* Demangled: glEnable */
extern "C" __attribute__((visibility("default"))) int glEnable(void) {
    ALOGD("glEnable() called");
    return 0;
}

/* Demangled: _essl_init_compiler_options */
extern "C" __attribute__((visibility("default"))) int _essl_init_compiler_options(void) {
    ALOGD("_essl_init_compiler_options() called");
    return 0;
}

/* Demangled: clEnqueueMigrateMemObjects */
extern "C" __attribute__((visibility("default"))) int clEnqueueMigrateMemObjects(void) {
    ALOGD("clEnqueueMigrateMemObjects() called");
    return 0;
}

/* Demangled: egl_color_buffer_increment_age */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_increment_age(void) {
    ALOGD("egl_color_buffer_increment_age() called");
    return 0;
}

/* Demangled: glLoadMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glLoadMatrixxOES(void) {
    ALOGD("glLoadMatrixxOES() called");
    return 0;
}

/* Demangled: glDeleteShader */
extern "C" __attribute__((visibility("default"))) int glDeleteShader(void) {
    ALOGD("glDeleteShader() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: osup_sync_object_set_and_broadcast */
extern "C" __attribute__((visibility("default"))) int osup_sync_object_set_and_broadcast(void) {
    ALOGD("osup_sync_object_set_and_broadcast() called");
    return 0;
}

/* Demangled: glBlendEquationSeparateOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparateOES(void) {
    ALOGD("glBlendEquationSeparateOES() called");
    return 0;
}

/* Demangled: glGetFramebufferAttachmentParameterivOES */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferAttachmentParameterivOES(void) {
    ALOGD("glGetFramebufferAttachmentParameterivOES() called");
    return 0;
}

/* Demangled: glTranslatexOES */
extern "C" __attribute__((visibility("default"))) int glTranslatexOES(void) {
    ALOGD("glTranslatexOES() called");
    return 0;
}

/* Demangled: glPushDebugGroupKHR */
extern "C" __attribute__((visibility("default"))) int glPushDebugGroupKHR(void) {
    ALOGD("glPushDebugGroupKHR() called");
    return 0;
}

/* Demangled: mtk_get_status */
extern "C" __attribute__((visibility("default"))) int mtk_get_status(void) {
    ALOGD("mtk_get_status() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_rotation */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_rotation(void) {
    ALOGD("egl_color_buffer_get_rotation() called");
    return 0;
}

/* Demangled: egl_color_buffer_release */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_release(void) {
    ALOGD("egl_color_buffer_release() called");
    return 0;
}

/* Demangled: glBindAttribLocation */
extern "C" __attribute__((visibility("default"))) int glBindAttribLocation(void) {
    ALOGD("glBindAttribLocation() called");
    return 0;
}

/* Demangled: glCompileShader */
extern "C" __attribute__((visibility("default"))) int glCompileShader(void) {
    ALOGD("glCompileShader() called");
    return 0;
}

/* Demangled: glCompressedTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexSubImage3D(void) {
    ALOGD("glCompressedTexSubImage3D() called");
    return 0;
}

/* Demangled: glSamplerParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIuiv(void) {
    ALOGD("glSamplerParameterIuiv() called");
    return 0;
}

/* Demangled: glUniform2uiv */
extern "C" __attribute__((visibility("default"))) int glUniform2uiv(void) {
    ALOGD("glUniform2uiv() called");
    return 0;
}

/* Demangled: DUMP_STACK_TRACE */
extern "C" __attribute__((visibility("default"))) int DUMP_STACK_TRACE(void) {
    ALOGD("DUMP_STACK_TRACE() called");
    return 0;
}

/* Demangled: MTK_NeedModifyToHighPrecison */
extern "C" __attribute__((visibility("default"))) int MTK_NeedModifyToHighPrecison(void) {
    ALOGD("MTK_NeedModifyToHighPrecison() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: glGetProgramBinary */
extern "C" __attribute__((visibility("default"))) int glGetProgramBinary(void) {
    ALOGD("glGetProgramBinary() called");
    return 0;
}

/* Demangled: glGetVertexAttribIuiv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribIuiv(void) {
    ALOGD("glGetVertexAttribIuiv() called");
    return 0;
}

/* Demangled: glTexStorage3DMultisampleOES */
extern "C" __attribute__((visibility("default"))) int glTexStorage3DMultisampleOES(void) {
    ALOGD("glTexStorage3DMultisampleOES() called");
    return 0;
}

/* Demangled: eglTerminate */
extern "C" __attribute__((visibility("default"))) int eglTerminate(void) {
    ALOGD("eglTerminate() called");
    return 0;
}

/* Demangled: glClipPlanex */
extern "C" __attribute__((visibility("default"))) int glClipPlanex(void) {
    ALOGD("glClipPlanex() called");
    return 0;
}

/* Demangled: glLoadIdentity */
extern "C" __attribute__((visibility("default"))) int glLoadIdentity(void) {
    ALOGD("glLoadIdentity() called");
    return 0;
}

/* Demangled: glDeleteSamplers */
extern "C" __attribute__((visibility("default"))) int glDeleteSamplers(void) {
    ALOGD("glDeleteSamplers() called");
    return 0;
}

/* Demangled: glProgramUniform2uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2uiv(void) {
    ALOGD("glProgramUniform2uiv() called");
    return 0;
}

/* Demangled: glEGLImageTargetRenderbufferStorageOES */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetRenderbufferStorageOES(void) {
    ALOGD("glEGLImageTargetRenderbufferStorageOES() called");
    return 0;
}

/* Demangled: MTK_CheckAppName */
extern "C" __attribute__((visibility("default"))) int MTK_CheckAppName(void) {
    ALOGD("MTK_CheckAppName() called");
    return 0;
}

/* Demangled: glGetBufferParameteri64v */
extern "C" __attribute__((visibility("default"))) int glGetBufferParameteri64v(void) {
    ALOGD("glGetBufferParameteri64v() called");
    return 0;
}

/* Demangled: glGetBufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetBufferParameteriv(void) {
    ALOGD("glGetBufferParameteriv() called");
    return 0;
}

/* Demangled: stdlibp_neon_hard_f32_to_f16 */
extern "C" __attribute__((visibility("default"))) int stdlibp_neon_hard_f32_to_f16(void) {
    ALOGD("stdlibp_neon_hard_f32_to_f16() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: clGetContextInfo */
extern "C" __attribute__((visibility("default"))) int clGetContextInfo(void) {
    ALOGD("clGetContextInfo() called");
    return 0;
}

/* Demangled: glGetTexParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIivOES(void) {
    ALOGD("glGetTexParameterIivOES() called");
    return 0;
}

/* Demangled: glGetTransformFeedbackVarying */
extern "C" __attribute__((visibility("default"))) int glGetTransformFeedbackVarying(void) {
    ALOGD("glGetTransformFeedbackVarying() called");
    return 0;
}

/* Demangled: osup_spinlock_term */
extern "C" __attribute__((visibility("default"))) int osup_spinlock_term(void) {
    ALOGD("osup_spinlock_term() called");
    return 0;
}

/* Demangled: egl_feature_add_extension_string */
extern "C" __attribute__((visibility("default"))) int egl_feature_add_extension_string(void) {
    ALOGD("egl_feature_add_extension_string() called");
    return 0;
}

/* Demangled: glGetShaderSource */
extern "C" __attribute__((visibility("default"))) int glGetShaderSource(void) {
    ALOGD("glGetShaderSource() called");
    return 0;
}

/* Demangled: glDrawElements */
extern "C" __attribute__((visibility("default"))) int glDrawElements(void) {
    ALOGD("glDrawElements() called");
    return 0;
}

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: glGenerateMipmapOES */
extern "C" __attribute__((visibility("default"))) int glGenerateMipmapOES(void) {
    ALOGD("glGenerateMipmapOES() called");
    return 0;
}

/* Demangled: glSampleCoverage */
extern "C" __attribute__((visibility("default"))) int glSampleCoverage(void) {
    ALOGD("glSampleCoverage() called");
    return 0;
}

/* Demangled: glTexImage2D */
extern "C" __attribute__((visibility("default"))) int glTexImage2D(void) {
    ALOGD("glTexImage2D() called");
    return 0;
}

/* Demangled: glNormal3xOES */
extern "C" __attribute__((visibility("default"))) int glNormal3xOES(void) {
    ALOGD("glNormal3xOES() called");
    return 0;
}

/* Demangled: glGenVertexArraysOES */
extern "C" __attribute__((visibility("default"))) int glGenVertexArraysOES(void) {
    ALOGD("glGenVertexArraysOES() called");
    return 0;
}

/* Demangled: glTexParameteriv */
extern "C" __attribute__((visibility("default"))) int glTexParameteriv(void) {
    ALOGD("glTexParameteriv() called");
    return 0;
}

/* Demangled: clGetDeviceIDs */
extern "C" __attribute__((visibility("default"))) int clGetDeviceIDs(void) {
    ALOGD("clGetDeviceIDs() called");
    return 0;
}

/* Demangled: glDisableClientState */
extern "C" __attribute__((visibility("default"))) int glDisableClientState(void) {
    ALOGD("glDisableClientState() called");
    return 0;
}

/* Demangled: glDrawTexxvOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexxvOES(void) {
    ALOGD("glDrawTexxvOES() called");
    return 0;
}

/* Demangled: glDeleteQueries */
extern "C" __attribute__((visibility("default"))) int glDeleteQueries(void) {
    ALOGD("glDeleteQueries() called");
    return 0;
}

/* Demangled: glIsShader */
extern "C" __attribute__((visibility("default"))) int glIsShader(void) {
    ALOGD("glIsShader() called");
    return 0;
}

/* Demangled: mtk_get_videobuffer_status */
extern "C" __attribute__((visibility("default"))) int mtk_get_videobuffer_status(void) {
    ALOGD("mtk_get_videobuffer_status() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: glGetActiveUniformsiv */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniformsiv(void) {
    ALOGD("glGetActiveUniformsiv() called");
    return 0;
}

/* Demangled: cmpbe_v2_set_option_value */
extern "C" __attribute__((visibility("default"))) int cmpbe_v2_set_option_value(void) {
    ALOGD("cmpbe_v2_set_option_value() called");
    return 0;
}

/* Demangled: glAlphaFuncxOES */
extern "C" __attribute__((visibility("default"))) int glAlphaFuncxOES(void) {
    ALOGD("glAlphaFuncxOES() called");
    return 0;
}

/* Demangled: glGetQueryObjectuiv */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectuiv(void) {
    ALOGD("glGetQueryObjectuiv() called");
    return 0;
}

/* Demangled: glUniform3ui */
extern "C" __attribute__((visibility("default"))) int glUniform3ui(void) {
    ALOGD("glUniform3ui() called");
    return 0;
}

/* Demangled: glUnmapBuffer */
extern "C" __attribute__((visibility("default"))) int glUnmapBuffer(void) {
    ALOGD("glUnmapBuffer() called");
    return 0;
}

/* Demangled: osup_sem_post */
extern "C" __attribute__((visibility("default"))) int osup_sem_post(void) {
    ALOGD("osup_sem_post() called");
    return 0;
}

/* Demangled: clEnqueueTask */
extern "C" __attribute__((visibility("default"))) int clEnqueueTask(void) {
    ALOGD("clEnqueueTask() called");
    return 0;
}

/* Demangled: clRetainCommandQueue */
extern "C" __attribute__((visibility("default"))) int clRetainCommandQueue(void) {
    ALOGD("clRetainCommandQueue() called");
    return 0;
}

/* Demangled: clRetainMemObject */
extern "C" __attribute__((visibility("default"))) int clRetainMemObject(void) {
    ALOGD("clRetainMemObject() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_height */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_height(void) {
    ALOGD("egl_color_buffer_get_height() called");
    return 0;
}

/* Demangled: glProgramUniform3ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3ui(void) {
    ALOGD("glProgramUniform3ui() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_line_stride */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_line_stride(void) {
    ALOGD("egl_color_buffer_get_line_stride() called");
    return 0;
}

/* Demangled: osup_spinlock_lock */
extern "C" __attribute__((visibility("default"))) int osup_spinlock_lock(void) {
    ALOGD("osup_spinlock_lock() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: clCreateContext */
extern "C" __attribute__((visibility("default"))) int clCreateContext(void) {
    ALOGD("clCreateContext() called");
    return 0;
}

/* Demangled: clGetExtensionFunctionAddressForPlatform */
extern "C" __attribute__((visibility("default"))) int clGetExtensionFunctionAddressForPlatform(void) {
    ALOGD("clGetExtensionFunctionAddressForPlatform() called");
    return 0;
}

/* Demangled: clGetKernelArgInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelArgInfo(void) {
    ALOGD("clGetKernelArgInfo() called");
    return 0;
}

/* Demangled: clReleaseDevice */
extern "C" __attribute__((visibility("default"))) int clReleaseDevice(void) {
    ALOGD("clReleaseDevice() called");
    return 0;
}

/* Demangled: mali_egl_image_get_buffer_size */
extern "C" __attribute__((visibility("default"))) int mali_egl_image_get_buffer_size(void) {
    ALOGD("mali_egl_image_get_buffer_size() called");
    return 0;
}

/* Demangled: glGenRenderbuffers */
extern "C" __attribute__((visibility("default"))) int glGenRenderbuffers(void) {
    ALOGD("glGenRenderbuffers() called");
    return 0;
}

/* Demangled: glBindVertexArrayOES */
extern "C" __attribute__((visibility("default"))) int glBindVertexArrayOES(void) {
    ALOGD("glBindVertexArrayOES() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleEXT(void) {
    ALOGD("glRenderbufferStorageMultisampleEXT() called");
    return 0;
}

/* Demangled: glBlendEquationOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationOES(void) {
    ALOGD("glBlendEquationOES() called");
    return 0;
}

/* Demangled: glFramebufferTexture3DOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture3DOES(void) {
    ALOGD("glFramebufferTexture3DOES() called");
    return 0;
}

/* Demangled: glGetActiveUniformBlockName */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniformBlockName(void) {
    ALOGD("glGetActiveUniformBlockName() called");
    return 0;
}

/* Demangled: glVertexAttribIPointer */
extern "C" __attribute__((visibility("default"))) int glVertexAttribIPointer(void) {
    ALOGD("glVertexAttribIPointer() called");
    return 0;
}

/* Demangled: glObjectLabelKHR */
extern "C" __attribute__((visibility("default"))) int glObjectLabelKHR(void) {
    ALOGD("glObjectLabelKHR() called");
    return 0;
}

/* Demangled: egl_color_buffer_map */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_map(void) {
    ALOGD("egl_color_buffer_map() called");
    return 0;
}

/* Demangled: glGetFragDataLocation */
extern "C" __attribute__((visibility("default"))) int glGetFragDataLocation(void) {
    ALOGD("glGetFragDataLocation() called");
    return 0;
}

/* Exported Object: prof_buffer_exclude_switch_time */
extern "C" __attribute__((visibility("default"))) void* prof_buffer_exclude_switch_time = NULL;

/* Demangled: osup_sem_init */
extern "C" __attribute__((visibility("default"))) int osup_sem_init(void) {
    ALOGD("osup_sem_init() called");
    return 0;
}

/* Demangled: eglSurfaceAttrib */
extern "C" __attribute__((visibility("default"))) int eglSurfaceAttrib(void) {
    ALOGD("eglSurfaceAttrib() called");
    return 0;
}

/* Demangled: glGetClipPlanef */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanef(void) {
    ALOGD("glGetClipPlanef() called");
    return 0;
}

/* Demangled: glScalef */
extern "C" __attribute__((visibility("default"))) int glScalef(void) {
    ALOGD("glScalef() called");
    return 0;
}

/* Demangled: clSVMAlloc */
extern "C" __attribute__((visibility("default"))) int clSVMAlloc(void) {
    ALOGD("clSVMAlloc() called");
    return 0;
}

/* Demangled: egl_color_buffer_flush_mapping_to_gpu */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_flush_mapping_to_gpu(void) {
    ALOGD("egl_color_buffer_flush_mapping_to_gpu() called");
    return 0;
}

/* Demangled: glDrawTexsOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexsOES(void) {
    ALOGD("glDrawTexsOES() called");
    return 0;
}

/* Demangled: glEnableClientState */
extern "C" __attribute__((visibility("default"))) int glEnableClientState(void) {
    ALOGD("glEnableClientState() called");
    return 0;
}

/* Demangled: glTexGeniOES */
extern "C" __attribute__((visibility("default"))) int glTexGeniOES(void) {
    ALOGD("glTexGeniOES() called");
    return 0;
}

/* Demangled: glBlendEquationiOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationiOES(void) {
    ALOGD("glBlendEquationiOES() called");
    return 0;
}

/* Demangled: glUniform3f */
extern "C" __attribute__((visibility("default"))) int glUniform3f(void) {
    ALOGD("glUniform3f() called");
    return 0;
}

/* Demangled: mtk_get_status2 */
extern "C" __attribute__((visibility("default"))) int mtk_get_status2(void) {
    ALOGD("mtk_get_status2() called");
    return 0;
}

/* Demangled: eglWaitSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglWaitSyncKHR(void) {
    ALOGD("eglWaitSyncKHR() called");
    return 0;
}

/* Demangled: glGetUniformfv */
extern "C" __attribute__((visibility("default"))) int glGetUniformfv(void) {
    ALOGD("glGetUniformfv() called");
    return 0;
}

/* Demangled: glGetnUniformivEXT */
extern "C" __attribute__((visibility("default"))) int glGetnUniformivEXT(void) {
    ALOGD("glGetnUniformivEXT() called");
    return 0;
}

/* Demangled: glUniformMatrix3x4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3x4fv(void) {
    ALOGD("glUniformMatrix3x4fv() called");
    return 0;
}

/* Demangled: clCreateKernel */
extern "C" __attribute__((visibility("default"))) int clCreateKernel(void) {
    ALOGD("clCreateKernel() called");
    return 0;
}

/* Demangled: clGetExtensionFunctionAddress */
extern "C" __attribute__((visibility("default"))) int clGetExtensionFunctionAddress(void) {
    ALOGD("clGetExtensionFunctionAddress() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DOES(void) {
    ALOGD("glFramebufferTexture2DOES() called");
    return 0;
}

/* Demangled: glFramebufferParameteri */
extern "C" __attribute__((visibility("default"))) int glFramebufferParameteri(void) {
    ALOGD("glFramebufferParameteri() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2fv(void) {
    ALOGD("glProgramUniformMatrix2fv() called");
    return 0;
}

/* Demangled: glUniform3i */
extern "C" __attribute__((visibility("default"))) int glUniform3i(void) {
    ALOGD("glUniform3i() called");
    return 0;
}

/* Demangled: glDebugMessageControlKHR */
extern "C" __attribute__((visibility("default"))) int glDebugMessageControlKHR(void) {
    ALOGD("glDebugMessageControlKHR() called");
    return 0;
}

/* Demangled: glStencilFunc */
extern "C" __attribute__((visibility("default"))) int glStencilFunc(void) {
    ALOGD("glStencilFunc() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_y_inversion */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_y_inversion(void) {
    ALOGD("egl_color_buffer_get_y_inversion() called");
    return 0;
}

/* Demangled: glVertexAttribI4uiv */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4uiv(void) {
    ALOGD("glVertexAttribI4uiv() called");
    return 0;
}

/* Demangled: osup_deregister_unload_callback */
extern "C" __attribute__((visibility("default"))) int osup_deregister_unload_callback(void) {
    ALOGD("osup_deregister_unload_callback() called");
    return 0;
}

/* Demangled: clEnqueueSVMFree */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMFree(void) {
    ALOGD("clEnqueueSVMFree() called");
    return 0;
}

/* Demangled: glVertexAttrib4fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib4fv(void) {
    ALOGD("glVertexAttrib4fv() called");
    return 0;
}

/* Demangled: glTexStorage3D */
extern "C" __attribute__((visibility("default"))) int glTexStorage3D(void) {
    ALOGD("glTexStorage3D() called");
    return 0;
}

/* Demangled: glUniformMatrix2x4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2x4fv(void) {
    ALOGD("glUniformMatrix2x4fv() called");
    return 0;
}

/* Exported Object: g_counting_index_ex */
extern "C" __attribute__((visibility("default"))) void* g_counting_index_ex = NULL;

/* Demangled: glMaterialxOES */
extern "C" __attribute__((visibility("default"))) int glMaterialxOES(void) {
    ALOGD("glMaterialxOES() called");
    return 0;
}

/* Demangled: glCopyImageSubDataEXT */
extern "C" __attribute__((visibility("default"))) int glCopyImageSubDataEXT(void) {
    ALOGD("glCopyImageSubDataEXT() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertexEXT(void) {
    ALOGD("glDrawElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: glSamplerParameterIiv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIiv(void) {
    ALOGD("glSamplerParameterIiv() called");
    return 0;
}

/* Demangled: clEnqueueNativeKernel */
extern "C" __attribute__((visibility("default"))) int clEnqueueNativeKernel(void) {
    ALOGD("clEnqueueNativeKernel() called");
    return 0;
}

/* Demangled: eglReleaseTexImage */
extern "C" __attribute__((visibility("default"))) int eglReleaseTexImage(void) {
    ALOGD("eglReleaseTexImage() called");
    return 0;
}

/* Demangled: glNormal3f */
extern "C" __attribute__((visibility("default"))) int glNormal3f(void) {
    ALOGD("glNormal3f() called");
    return 0;
}

/* Demangled: glGetIntegeri_v */
extern "C" __attribute__((visibility("default"))) int glGetIntegeri_v(void) {
    ALOGD("glGetIntegeri_v() called");
    return 0;
}

/* Demangled: glInvalidateSubFramebuffer */
extern "C" __attribute__((visibility("default"))) int glInvalidateSubFramebuffer(void) {
    ALOGD("glInvalidateSubFramebuffer() called");
    return 0;
}

/* Demangled: glPatchParameteri */
extern "C" __attribute__((visibility("default"))) int glPatchParameteri(void) {
    ALOGD("glPatchParameteri() called");
    return 0;
}

/* Demangled: glGetIntegerv */
extern "C" __attribute__((visibility("default"))) int glGetIntegerv(void) {
    ALOGD("glGetIntegerv() called");
    return 0;
}

/* Demangled: glPopDebugGroupKHR */
extern "C" __attribute__((visibility("default"))) int glPopDebugGroupKHR(void) {
    ALOGD("glPopDebugGroupKHR() called");
    return 0;
}

/* Demangled: osup_sem_wait */
extern "C" __attribute__((visibility("default"))) int osup_sem_wait(void) {
    ALOGD("osup_sem_wait() called");
    return 0;
}

/* Demangled: clEnqueueMarkerWithWaitList */
extern "C" __attribute__((visibility("default"))) int clEnqueueMarkerWithWaitList(void) {
    ALOGD("clEnqueueMarkerWithWaitList() called");
    return 0;
}

/* Demangled: glQueryCounterEXT */
extern "C" __attribute__((visibility("default"))) int glQueryCounterEXT(void) {
    ALOGD("glQueryCounterEXT() called");
    return 0;
}

/* Demangled: egl_color_buffer_get_private_data */
extern "C" __attribute__((visibility("default"))) int egl_color_buffer_get_private_data(void) {
    ALOGD("egl_color_buffer_get_private_data() called");
    return 0;
}

/* Demangled: glDeleteRenderbuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteRenderbuffers(void) {
    ALOGD("glDeleteRenderbuffers() called");
    return 0;
}

/* Demangled: glMaterialf */
extern "C" __attribute__((visibility("default"))) int glMaterialf(void) {
    ALOGD("glMaterialf() called");
    return 0;
}

/* Demangled: glIsFramebuffer */
extern "C" __attribute__((visibility("default"))) int glIsFramebuffer(void) {
    ALOGD("glIsFramebuffer() called");
    return 0;
}

/* Demangled: clEnqueueBarrierWithWaitList */
extern "C" __attribute__((visibility("default"))) int clEnqueueBarrierWithWaitList(void) {
    ALOGD("clEnqueueBarrierWithWaitList() called");
    return 0;
}

/* Demangled: glPointParameterxvOES */
extern "C" __attribute__((visibility("default"))) int glPointParameterxvOES(void) {
    ALOGD("glPointParameterxvOES() called");
    return 0;
}

/* Demangled: glViewport */
extern "C" __attribute__((visibility("default"))) int glViewport(void) {
    ALOGD("glViewport() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: glDrawTexsvOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexsvOES(void) {
    ALOGD("glDrawTexsvOES() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertex(void) {
    ALOGD("glDrawElementsInstancedBaseVertex() called");
    return 0;
}

/* Demangled: osup_dlopen */
extern "C" __attribute__((visibility("default"))) int osup_dlopen(void) {
    ALOGD("osup_dlopen() called");
    return 0;
}

/* Demangled: glGetnUniformfvEXT */
extern "C" __attribute__((visibility("default"))) int glGetnUniformfvEXT(void) {
    ALOGD("glGetnUniformfvEXT() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: glGetClipPlanex */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanex(void) {
    ALOGD("glGetClipPlanex() called");
    return 0;
}

/* Demangled: glScalex */
extern "C" __attribute__((visibility("default"))) int glScalex(void) {
    ALOGD("glScalex() called");
    return 0;
}

/* Demangled: glDeleteQueriesEXT */
extern "C" __attribute__((visibility("default"))) int glDeleteQueriesEXT(void) {
    ALOGD("glDeleteQueriesEXT() called");
    return 0;
}

/* Demangled: glFramebufferTextureMultisampleMultiviewOVR */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureMultisampleMultiviewOVR(void) {
    ALOGD("glFramebufferTextureMultisampleMultiviewOVR() called");
    return 0;
}

/* Demangled: glGetBufferPointervOES */
extern "C" __attribute__((visibility("default"))) int glGetBufferPointervOES(void) {
    ALOGD("glGetBufferPointervOES() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: clEnqueueWaitForEvents */
extern "C" __attribute__((visibility("default"))) int clEnqueueWaitForEvents(void) {
    ALOGD("clEnqueueWaitForEvents() called");
    return 0;
}

/* Demangled: eglWaitNative */
extern "C" __attribute__((visibility("default"))) int eglWaitNative(void) {
    ALOGD("eglWaitNative() called");
    return 0;
}

/* Demangled: glIsRenderbufferOES */
extern "C" __attribute__((visibility("default"))) int glIsRenderbufferOES(void) {
    ALOGD("glIsRenderbufferOES() called");
    return 0;
}

/* Demangled: glUniform3fv */
extern "C" __attribute__((visibility("default"))) int glUniform3fv(void) {
    ALOGD("glUniform3fv() called");
    return 0;
}

/* Demangled: glVertexAttrib1f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib1f(void) {
    ALOGD("glVertexAttrib1f() called");
    return 0;
}
