/*
 * Reverse-Engineered Source for: libMEOW_trace.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMEOW_trace"

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
#include "libMEOW_trace.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: glDrawArraysInstancedANGLE */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedANGLE(void) {
    ALOGD("glDrawArraysInstancedANGLE() called");
    return 0;
}

/* Demangled: glGetnUniformfvKHR */
extern "C" __attribute__((visibility("default"))) int glGetnUniformfvKHR(void) {
    ALOGD("glGetnUniformfvKHR() called");
    return 0;
}

/* Demangled: glLineWidthxOES */
extern "C" __attribute__((visibility("default"))) int glLineWidthxOES(void) {
    ALOGD("glLineWidthxOES() called");
    return 0;
}

/* Demangled: glBlendFuncSeparateiOES */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparateiOES(void) {
    ALOGD("glBlendFuncSeparateiOES() called");
    return 0;
}

/* Demangled: glGenPathsNV */
extern "C" __attribute__((visibility("default"))) int glGenPathsNV(void) {
    ALOGD("glGenPathsNV() called");
    return 0;
}

/* Demangled: glGenVertexArraysOES */
extern "C" __attribute__((visibility("default"))) int glGenVertexArraysOES(void) {
    ALOGD("glGenVertexArraysOES() called");
    return 0;
}

/* Demangled: glGetBufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetBufferParameteriv(void) {
    ALOGD("glGetBufferParameteriv() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIuivEXT(void) {
    ALOGD("glGetSamplerParameterIuivEXT() called");
    return 0;
}

/* Demangled: glPathParameterfvNV */
extern "C" __attribute__((visibility("default"))) int glPathParameterfvNV(void) {
    ALOGD("glPathParameterfvNV() called");
    return 0;
}

/* Demangled: glTextureStorageMem2DEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorageMem2DEXT(void) {
    ALOGD("glTextureStorageMem2DEXT() called");
    return 0;
}

/* Demangled: eglGetPlatformDisplay */
extern "C" __attribute__((visibility("default"))) int eglGetPlatformDisplay(void) {
    ALOGD("eglGetPlatformDisplay() called");
    return 0;
}

/* Demangled: glProgramUniform3iEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3iEXT(void) {
    ALOGD("glProgramUniform3iEXT() called");
    return 0;
}

/* Demangled: glBlendFunci */
extern "C" __attribute__((visibility("default"))) int glBlendFunci(void) {
    ALOGD("glBlendFunci() called");
    return 0;
}

/* Demangled: glGetProgramResourcefvNV */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourcefvNV(void) {
    ALOGD("glGetProgramResourcefvNV() called");
    return 0;
}

/* Demangled: glGetTexParameterxvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterxvOES(void) {
    ALOGD("glGetTexParameterxvOES() called");
    return 0;
}

/* Demangled: glLoadPaletteFromModelViewMatrixOES */
extern "C" __attribute__((visibility("default"))) int glLoadPaletteFromModelViewMatrixOES(void) {
    ALOGD("glLoadPaletteFromModelViewMatrixOES() called");
    return 0;
}

/* Demangled: glVertexAttribIFormat */
extern "C" __attribute__((visibility("default"))) int glVertexAttribIFormat(void) {
    ALOGD("glVertexAttribIFormat() called");
    return 0;
}

/* Demangled: eglDupNativeFenceFDANDROID */
extern "C" __attribute__((visibility("default"))) int eglDupNativeFenceFDANDROID(void) {
    ALOGD("eglDupNativeFenceFDANDROID() called");
    return 0;
}

/* Demangled: glDrawTexfOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexfOES(void) {
    ALOGD("glDrawTexfOES() called");
    return 0;
}

/* Demangled: glObjectPtrLabel */
extern "C" __attribute__((visibility("default"))) int glObjectPtrLabel(void) {
    ALOGD("glObjectPtrLabel() called");
    return 0;
}

/* Demangled: glReadnPixelsEXT */
extern "C" __attribute__((visibility("default"))) int glReadnPixelsEXT(void) {
    ALOGD("glReadnPixelsEXT() called");
    return 0;
}

/* Demangled: glTexEnvxv */
extern "C" __attribute__((visibility("default"))) int glTexEnvxv(void) {
    ALOGD("glTexEnvxv() called");
    return 0;
}

/* Demangled: glUniform1i64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform1i64vNV(void) {
    ALOGD("glUniform1i64vNV() called");
    return 0;
}

/* Demangled: eglChooseConfig */
extern "C" __attribute__((visibility("default"))) int eglChooseConfig(void) {
    ALOGD("eglChooseConfig() called");
    return 0;
}

/* Demangled: glColorPointer */
extern "C" __attribute__((visibility("default"))) int glColorPointer(void) {
    ALOGD("glColorPointer() called");
    return 0;
}

/* Demangled: glPathCoverDepthFuncNV */
extern "C" __attribute__((visibility("default"))) int glPathCoverDepthFuncNV(void) {
    ALOGD("glPathCoverDepthFuncNV() called");
    return 0;
}

/* Demangled: glTexGenfOES */
extern "C" __attribute__((visibility("default"))) int glTexGenfOES(void) {
    ALOGD("glTexGenfOES() called");
    return 0;
}

/* Demangled: glUniform2iv */
extern "C" __attribute__((visibility("default"))) int glUniform2iv(void) {
    ALOGD("glUniform2iv() called");
    return 0;
}

/* Demangled: glViewportIndexedfNV */
extern "C" __attribute__((visibility("default"))) int glViewportIndexedfNV(void) {
    ALOGD("glViewportIndexedfNV() called");
    return 0;
}

/* Demangled: glBufferStorageExternalEXT */
extern "C" __attribute__((visibility("default"))) int glBufferStorageExternalEXT(void) {
    ALOGD("glBufferStorageExternalEXT() called");
    return 0;
}

/* Demangled: glTexStorageMem3DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorageMem3DEXT(void) {
    ALOGD("glTexStorageMem3DEXT() called");
    return 0;
}

/* Demangled: eglDestroyContext */
extern "C" __attribute__((visibility("default"))) int eglDestroyContext(void) {
    ALOGD("eglDestroyContext() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4fvEXT(void) {
    ALOGD("glProgramUniformMatrix4fvEXT() called");
    return 0;
}

/* Demangled: glSamplerParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIuivOES(void) {
    ALOGD("glSamplerParameterIuivOES() called");
    return 0;
}

/* Demangled: eglSetBlobCacheFuncsANDROID */
extern "C" __attribute__((visibility("default"))) int eglSetBlobCacheFuncsANDROID(void) {
    ALOGD("eglSetBlobCacheFuncsANDROID() called");
    return 0;
}

/* Demangled: glClipPlanefOES */
extern "C" __attribute__((visibility("default"))) int glClipPlanefOES(void) {
    ALOGD("glClipPlanefOES() called");
    return 0;
}

/* Demangled: glIsFenceNV */
extern "C" __attribute__((visibility("default"))) int glIsFenceNV(void) {
    ALOGD("glIsFenceNV() called");
    return 0;
}

/* Demangled: glSamplerParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIivOES(void) {
    ALOGD("glSamplerParameterIivOES() called");
    return 0;
}

/* Demangled: glUnmapBuffer */
extern "C" __attribute__((visibility("default"))) int glUnmapBuffer(void) {
    ALOGD("glUnmapBuffer() called");
    return 0;
}

/* Demangled: glGetFramebufferAttachmentParameterivOES */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferAttachmentParameterivOES(void) {
    ALOGD("glGetFramebufferAttachmentParameterivOES() called");
    return 0;
}

/* Demangled: glStencilStrokePathNV */
extern "C" __attribute__((visibility("default"))) int glStencilStrokePathNV(void) {
    ALOGD("glStencilStrokePathNV() called");
    return 0;
}

/* Demangled: glUniform2i64NV */
extern "C" __attribute__((visibility("default"))) int glUniform2i64NV(void) {
    ALOGD("glUniform2i64NV() called");
    return 0;
}

/* Demangled: glWeightPointerOES */
extern "C" __attribute__((visibility("default"))) int glWeightPointerOES(void) {
    ALOGD("glWeightPointerOES() called");
    return 0;
}

/* Exported Object: trace_tls_id */
extern "C" __attribute__((visibility("default"))) void* trace_tls_id = NULL;

/* Demangled: glGetIntegeri_vEXT */
extern "C" __attribute__((visibility("default"))) int glGetIntegeri_vEXT(void) {
    ALOGD("glGetIntegeri_vEXT() called");
    return 0;
}

/* Demangled: glPointSizexOES */
extern "C" __attribute__((visibility("default"))) int glPointSizexOES(void) {
    ALOGD("glPointSizexOES() called");
    return 0;
}

/* Demangled: glTexParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterIivOES(void) {
    ALOGD("glTexParameterIivOES() called");
    return 0;
}

/* Demangled: glDeleteTransformFeedbacks */
extern "C" __attribute__((visibility("default"))) int glDeleteTransformFeedbacks(void) {
    ALOGD("glDeleteTransformFeedbacks() called");
    return 0;
}

/* Demangled: glMatrixIndexPointerOES */
extern "C" __attribute__((visibility("default"))) int glMatrixIndexPointerOES(void) {
    ALOGD("glMatrixIndexPointerOES() called");
    return 0;
}

/* Demangled: glScissorArrayvOES */
extern "C" __attribute__((visibility("default"))) int glScissorArrayvOES(void) {
    ALOGD("glScissorArrayvOES() called");
    return 0;
}

/* Demangled: glColorMaski */
extern "C" __attribute__((visibility("default"))) int glColorMaski(void) {
    ALOGD("glColorMaski() called");
    return 0;
}

/* Demangled: glProgramUniform2ui64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2ui64NV(void) {
    ALOGD("glProgramUniform2ui64NV() called");
    return 0;
}

/* Demangled: glTexParameterxOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterxOES(void) {
    ALOGD("glTexParameterxOES() called");
    return 0;
}

/* Demangled: glTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int glTexSubImage3D(void) {
    ALOGD("glTexSubImage3D() called");
    return 0;
}

/* Demangled: glUniformBlockBinding */
extern "C" __attribute__((visibility("default"))) int glUniformBlockBinding(void) {
    ALOGD("glUniformBlockBinding() called");
    return 0;
}

/* Demangled: glUniformMatrix4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4fv(void) {
    ALOGD("glUniformMatrix4fv() called");
    return 0;
}

/* Demangled: eglMakeCurrent */
extern "C" __attribute__((visibility("default"))) int eglMakeCurrent(void) {
    ALOGD("eglMakeCurrent() called");
    return 0;
}

/* Demangled: glColor4f */
extern "C" __attribute__((visibility("default"))) int glColor4f(void) {
    ALOGD("glColor4f() called");
    return 0;
}

/* Demangled: glCopyBufferSubDataNV */
extern "C" __attribute__((visibility("default"))) int glCopyBufferSubDataNV(void) {
    ALOGD("glCopyBufferSubDataNV() called");
    return 0;
}

/* Demangled: glCopyPathNV */
extern "C" __attribute__((visibility("default"))) int glCopyPathNV(void) {
    ALOGD("glCopyPathNV() called");
    return 0;
}

/* Demangled: glEnableClientState */
extern "C" __attribute__((visibility("default"))) int glEnableClientState(void) {
    ALOGD("glEnableClientState() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4fv(void) {
    ALOGD("glProgramUniformMatrix4fv() called");
    return 0;
}

/* Demangled: glStencilOpSeparate */
extern "C" __attribute__((visibility("default"))) int glStencilOpSeparate(void) {
    ALOGD("glStencilOpSeparate() called");
    return 0;
}

/* Demangled: glClipControlEXT */
extern "C" __attribute__((visibility("default"))) int glClipControlEXT(void) {
    ALOGD("glClipControlEXT() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexBaseInstanceEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexBaseInstanceEXT(void) {
    ALOGD("glDrawElementsInstancedBaseVertexBaseInstanceEXT() called");
    return 0;
}

/* Demangled: glGetPathCommandsNV */
extern "C" __attribute__((visibility("default"))) int glGetPathCommandsNV(void) {
    ALOGD("glGetPathCommandsNV() called");
    return 0;
}

/* Demangled: glMaterialf */
extern "C" __attribute__((visibility("default"))) int glMaterialf(void) {
    ALOGD("glMaterialf() called");
    return 0;
}

/* Demangled: glProgramUniform1f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1f(void) {
    ALOGD("glProgramUniform1f() called");
    return 0;
}

/* Demangled: glProgramUniform3fEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3fEXT(void) {
    ALOGD("glProgramUniform3fEXT() called");
    return 0;
}

/* Demangled: glReadPixels */
extern "C" __attribute__((visibility("default"))) int glReadPixels(void) {
    ALOGD("glReadPixels() called");
    return 0;
}

/* Demangled: glGetPathParameterivNV */
extern "C" __attribute__((visibility("default"))) int glGetPathParameterivNV(void) {
    ALOGD("glGetPathParameterivNV() called");
    return 0;
}

/* Demangled: glLightModelx */
extern "C" __attribute__((visibility("default"))) int glLightModelx(void) {
    ALOGD("glLightModelx() called");
    return 0;
}

/* Demangled: glMakeTextureHandleNonResidentNV */
extern "C" __attribute__((visibility("default"))) int glMakeTextureHandleNonResidentNV(void) {
    ALOGD("glMakeTextureHandleNonResidentNV() called");
    return 0;
}

/* Demangled: glPathSubCoordsNV */
extern "C" __attribute__((visibility("default"))) int glPathSubCoordsNV(void) {
    ALOGD("glPathSubCoordsNV() called");
    return 0;
}

/* Demangled: glStencilThenCoverStrokePathNV */
extern "C" __attribute__((visibility("default"))) int glStencilThenCoverStrokePathNV(void) {
    ALOGD("glStencilThenCoverStrokePathNV() called");
    return 0;
}

/* Demangled: glGetActiveUniform */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniform(void) {
    ALOGD("glGetActiveUniform() called");
    return 0;
}

/* Demangled: glGenProgramPipelines */
extern "C" __attribute__((visibility("default"))) int glGenProgramPipelines(void) {
    ALOGD("glGenProgramPipelines() called");
    return 0;
}

/* Demangled: glMinSampleShading */
extern "C" __attribute__((visibility("default"))) int glMinSampleShading(void) {
    ALOGD("glMinSampleShading() called");
    return 0;
}

/* Demangled: glProgramUniform1i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1i(void) {
    ALOGD("glProgramUniform1i() called");
    return 0;
}

/* Demangled: glReadnPixels */
extern "C" __attribute__((visibility("default"))) int glReadnPixels(void) {
    ALOGD("glReadnPixels() called");
    return 0;
}

/* Demangled: glVertexAttribIPointer */
extern "C" __attribute__((visibility("default"))) int glVertexAttribIPointer(void) {
    ALOGD("glVertexAttribIPointer() called");
    return 0;
}

/* Demangled: eglCreateStreamKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateStreamKHR(void) {
    ALOGD("eglCreateStreamKHR() called");
    return 0;
}

/* Demangled: eglDestroySyncKHR */
extern "C" __attribute__((visibility("default"))) int eglDestroySyncKHR(void) {
    ALOGD("eglDestroySyncKHR() called");
    return 0;
}

/* Demangled: glClearDepthfOES */
extern "C" __attribute__((visibility("default"))) int glClearDepthfOES(void) {
    ALOGD("glClearDepthfOES() called");
    return 0;
}

/* Demangled: glGetCoverageModulationTableNV */
extern "C" __attribute__((visibility("default"))) int glGetCoverageModulationTableNV(void) {
    ALOGD("glGetCoverageModulationTableNV() called");
    return 0;
}

/* Demangled: glGetPerfMonitorCounterInfoAMD */
extern "C" __attribute__((visibility("default"))) int glGetPerfMonitorCounterInfoAMD(void) {
    ALOGD("glGetPerfMonitorCounterInfoAMD() called");
    return 0;
}

/* Demangled: glMultiDrawArraysIndirectEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawArraysIndirectEXT(void) {
    ALOGD("glMultiDrawArraysIndirectEXT() called");
    return 0;
}

/* Demangled: glBlendBarrierKHR */
extern "C" __attribute__((visibility("default"))) int glBlendBarrierKHR(void) {
    ALOGD("glBlendBarrierKHR() called");
    return 0;
}

/* Demangled: glGetPathCoordsNV */
extern "C" __attribute__((visibility("default"))) int glGetPathCoordsNV(void) {
    ALOGD("glGetPathCoordsNV() called");
    return 0;
}

/* Demangled: glImportMemoryFdEXT */
extern "C" __attribute__((visibility("default"))) int glImportMemoryFdEXT(void) {
    ALOGD("glImportMemoryFdEXT() called");
    return 0;
}

/* Demangled: glUniform4ui */
extern "C" __attribute__((visibility("default"))) int glUniform4ui(void) {
    ALOGD("glUniform4ui() called");
    return 0;
}

/* Demangled: eglQueryContext */
extern "C" __attribute__((visibility("default"))) int eglQueryContext(void) {
    ALOGD("eglQueryContext() called");
    return 0;
}

/* Demangled: glCreateMemoryObjectsEXT */
extern "C" __attribute__((visibility("default"))) int glCreateMemoryObjectsEXT(void) {
    ALOGD("glCreateMemoryObjectsEXT() called");
    return 0;
}

/* Demangled: glGetMaterialfv */
extern "C" __attribute__((visibility("default"))) int glGetMaterialfv(void) {
    ALOGD("glGetMaterialfv() called");
    return 0;
}

/* Demangled: glUniform2i64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform2i64vNV(void) {
    ALOGD("glUniform2i64vNV() called");
    return 0;
}

/* Demangled: glUniformMatrix4x2fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4x2fv(void) {
    ALOGD("glUniformMatrix4x2fv() called");
    return 0;
}

/* Demangled: glAlphaFuncxOES */
extern "C" __attribute__((visibility("default"))) int glAlphaFuncxOES(void) {
    ALOGD("glAlphaFuncxOES() called");
    return 0;
}

/* Demangled: glEndQueryEXT */
extern "C" __attribute__((visibility("default"))) int glEndQueryEXT(void) {
    ALOGD("glEndQueryEXT() called");
    return 0;
}

/* Demangled: glProgramUniform2i64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2i64NV(void) {
    ALOGD("glProgramUniform2i64NV() called");
    return 0;
}

/* Demangled: glTexBufferEXT */
extern "C" __attribute__((visibility("default"))) int glTexBufferEXT(void) {
    ALOGD("glTexBufferEXT() called");
    return 0;
}

/* Demangled: glVertexAttrib2f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib2f(void) {
    ALOGD("glVertexAttrib2f() called");
    return 0;
}

/* Demangled: glVertexAttribFormat */
extern "C" __attribute__((visibility("default"))) int glVertexAttribFormat(void) {
    ALOGD("glVertexAttribFormat() called");
    return 0;
}

/* Demangled: glVertexAttribI4i */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4i(void) {
    ALOGD("glVertexAttribI4i() called");
    return 0;
}

/* Demangled: glSampleCoverageOES(int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z19glSampleCoverageOESih(void) {
    ALOGD("_Z19glSampleCoverageOESih() called");
    return 0;
}

/* Demangled: glBufferStorageEXT */
extern "C" __attribute__((visibility("default"))) int glBufferStorageEXT(void) {
    ALOGD("glBufferStorageEXT() called");
    return 0;
}

/* Exported Object: MEOW_PLUGIN_T_SYM */
extern "C" __attribute__((visibility("default"))) void* MEOW_PLUGIN_T_SYM = NULL;

/* Demangled: glDepthMask */
extern "C" __attribute__((visibility("default"))) int glDepthMask(void) {
    ALOGD("glDepthMask() called");
    return 0;
}

/* Demangled: glExtGetTexLevelParameterivQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetTexLevelParameterivQCOM(void) {
    ALOGD("glExtGetTexLevelParameterivQCOM() called");
    return 0;
}

/* Demangled: glRenderbufferStorage */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorage(void) {
    ALOGD("glRenderbufferStorage() called");
    return 0;
}

/* Demangled: glColorMaskiEXT */
extern "C" __attribute__((visibility("default"))) int glColorMaskiEXT(void) {
    ALOGD("glColorMaskiEXT() called");
    return 0;
}

/* Demangled: glLightxOES */
extern "C" __attribute__((visibility("default"))) int glLightxOES(void) {
    ALOGD("glLightxOES() called");
    return 0;
}

/* Demangled: glMultiTexCoord3bvOES(unsigned int, signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21glMultiTexCoord3bvOESjPKa(void) {
    ALOGD("_Z21glMultiTexCoord3bvOESjPKa() called");
    return 0;
}

/* Demangled: glCoverageModulationTableNV */
extern "C" __attribute__((visibility("default"))) int glCoverageModulationTableNV(void) {
    ALOGD("glCoverageModulationTableNV() called");
    return 0;
}

/* Demangled: glGenPerfMonitorsAMD */
extern "C" __attribute__((visibility("default"))) int glGenPerfMonitorsAMD(void) {
    ALOGD("glGenPerfMonitorsAMD() called");
    return 0;
}

/* Demangled: glNamedBufferStorageMemEXT */
extern "C" __attribute__((visibility("default"))) int glNamedBufferStorageMemEXT(void) {
    ALOGD("glNamedBufferStorageMemEXT() called");
    return 0;
}

/* Demangled: glPathParameterfNV */
extern "C" __attribute__((visibility("default"))) int glPathParameterfNV(void) {
    ALOGD("glPathParameterfNV() called");
    return 0;
}

/* Demangled: glUseProgramStagesEXT */
extern "C" __attribute__((visibility("default"))) int glUseProgramStagesEXT(void) {
    ALOGD("glUseProgramStagesEXT() called");
    return 0;
}

/* Demangled: eglSetDamageRegionKHR */
extern "C" __attribute__((visibility("default"))) int eglSetDamageRegionKHR(void) {
    ALOGD("eglSetDamageRegionKHR() called");
    return 0;
}

/* Demangled: glBeginConditionalRenderNV */
extern "C" __attribute__((visibility("default"))) int glBeginConditionalRenderNV(void) {
    ALOGD("glBeginConditionalRenderNV() called");
    return 0;
}

/* Demangled: glCoverageMaskNV */
extern "C" __attribute__((visibility("default"))) int glCoverageMaskNV(void) {
    ALOGD("glCoverageMaskNV() called");
    return 0;
}

/* Demangled: glFenceSync */
extern "C" __attribute__((visibility("default"))) int glFenceSync(void) {
    ALOGD("glFenceSync() called");
    return 0;
}

/* Demangled: glPatchParameteriEXT */
extern "C" __attribute__((visibility("default"))) int glPatchParameteriEXT(void) {
    ALOGD("glPatchParameteriEXT() called");
    return 0;
}

/* Demangled: eglCreatePbufferFromClientBuffer */
extern "C" __attribute__((visibility("default"))) int eglCreatePbufferFromClientBuffer(void) {
    ALOGD("eglCreatePbufferFromClientBuffer() called");
    return 0;
}

/* Demangled: glDepthRangeIndexedfNV */
extern "C" __attribute__((visibility("default"))) int glDepthRangeIndexedfNV(void) {
    ALOGD("glDepthRangeIndexedfNV() called");
    return 0;
}

/* Demangled: glGetIntegeri_v */
extern "C" __attribute__((visibility("default"))) int glGetIntegeri_v(void) {
    ALOGD("glGetIntegeri_v() called");
    return 0;
}

/* Demangled: glGetMultisamplefv */
extern "C" __attribute__((visibility("default"))) int glGetMultisamplefv(void) {
    ALOGD("glGetMultisamplefv() called");
    return 0;
}

/* Demangled: glGetPathParameterfvNV */
extern "C" __attribute__((visibility("default"))) int glGetPathParameterfvNV(void) {
    ALOGD("glGetPathParameterfvNV() called");
    return 0;
}

/* Demangled: glGetUnsignedBytei_vEXT */
extern "C" __attribute__((visibility("default"))) int glGetUnsignedBytei_vEXT(void) {
    ALOGD("glGetUnsignedBytei_vEXT() called");
    return 0;
}

/* Demangled: glMapBufferRange */
extern "C" __attribute__((visibility("default"))) int glMapBufferRange(void) {
    ALOGD("glMapBufferRange() called");
    return 0;
}

/* Demangled: glTexCoord2bOES(signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z15glTexCoord2bOESaa(void) {
    ALOGD("_Z15glTexCoord2bOESaa() called");
    return 0;
}

/* Demangled: glStencilOp */
extern "C" __attribute__((visibility("default"))) int glStencilOp(void) {
    ALOGD("glStencilOp() called");
    return 0;
}

/* Demangled: glTexStorage2DMultisample */
extern "C" __attribute__((visibility("default"))) int glTexStorage2DMultisample(void) {
    ALOGD("glTexStorage2DMultisample() called");
    return 0;
}

/* Demangled: glTextureStorageMem3DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorageMem3DMultisampleEXT(void) {
    ALOGD("glTextureStorageMem3DMultisampleEXT() called");
    return 0;
}

/* Demangled: eglQueryString */
extern "C" __attribute__((visibility("default"))) int eglQueryString(void) {
    ALOGD("eglQueryString() called");
    return 0;
}

/* Demangled: glBlendFuncSeparateOES */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparateOES(void) {
    ALOGD("glBlendFuncSeparateOES() called");
    return 0;
}

/* Demangled: glDrawArraysInstanced */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstanced(void) {
    ALOGD("glDrawArraysInstanced() called");
    return 0;
}

/* Demangled: glGetTexEnvxvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexEnvxvOES(void) {
    ALOGD("glGetTexEnvxvOES() called");
    return 0;
}

/* Demangled: glSignalVkFenceNV */
extern "C" __attribute__((visibility("default"))) int glSignalVkFenceNV(void) {
    ALOGD("glSignalVkFenceNV() called");
    return 0;
}

/* Demangled: glTexParameterIiv */
extern "C" __attribute__((visibility("default"))) int glTexParameterIiv(void) {
    ALOGD("glTexParameterIiv() called");
    return 0;
}

/* Demangled: eglDestroyStreamKHR */
extern "C" __attribute__((visibility("default"))) int eglDestroyStreamKHR(void) {
    ALOGD("eglDestroyStreamKHR() called");
    return 0;
}

/* Demangled: glColor4x */
extern "C" __attribute__((visibility("default"))) int glColor4x(void) {
    ALOGD("glColor4x() called");
    return 0;
}

/* Demangled: glPointParameterfv */
extern "C" __attribute__((visibility("default"))) int glPointParameterfv(void) {
    ALOGD("glPointParameterfv() called");
    return 0;
}

/* Demangled: glTranslatexOES */
extern "C" __attribute__((visibility("default"))) int glTranslatexOES(void) {
    ALOGD("glTranslatexOES() called");
    return 0;
}

/* Demangled: glCoverFillPathNV */
extern "C" __attribute__((visibility("default"))) int glCoverFillPathNV(void) {
    ALOGD("glCoverFillPathNV() called");
    return 0;
}

/* Demangled: glDepthRangexOES */
extern "C" __attribute__((visibility("default"))) int glDepthRangexOES(void) {
    ALOGD("glDepthRangexOES() called");
    return 0;
}

/* Demangled: glGetDriverControlsQCOM */
extern "C" __attribute__((visibility("default"))) int glGetDriverControlsQCOM(void) {
    ALOGD("glGetDriverControlsQCOM() called");
    return 0;
}

/* Demangled: glGetObjectLabelKHR */
extern "C" __attribute__((visibility("default"))) int glGetObjectLabelKHR(void) {
    ALOGD("glGetObjectLabelKHR() called");
    return 0;
}

/* Demangled: glMaterialx */
extern "C" __attribute__((visibility("default"))) int glMaterialx(void) {
    ALOGD("glMaterialx() called");
    return 0;
}

/* Demangled: glScalexOES */
extern "C" __attribute__((visibility("default"))) int glScalexOES(void) {
    ALOGD("glScalexOES() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertexOES(void) {
    ALOGD("glDrawRangeElementsBaseVertexOES() called");
    return 0;
}

/* Demangled: glTexStorageMem3DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorageMem3DMultisampleEXT(void) {
    ALOGD("glTexStorageMem3DMultisampleEXT() called");
    return 0;
}

/* Demangled: glFramebufferTexture */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture(void) {
    ALOGD("glFramebufferTexture() called");
    return 0;
}

/* Demangled: glOrthoxOES */
extern "C" __attribute__((visibility("default"))) int glOrthoxOES(void) {
    ALOGD("glOrthoxOES() called");
    return 0;
}

/* Demangled: glViewportIndexedfOES */
extern "C" __attribute__((visibility("default"))) int glViewportIndexedfOES(void) {
    ALOGD("glViewportIndexedfOES() called");
    return 0;
}

/* Demangled: eglBindAPI */
extern "C" __attribute__((visibility("default"))) int eglBindAPI(void) {
    ALOGD("eglBindAPI() called");
    return 0;
}

/* Demangled: eglCreatePlatformWindowSurfaceEXT */
extern "C" __attribute__((visibility("default"))) int eglCreatePlatformWindowSurfaceEXT(void) {
    ALOGD("eglCreatePlatformWindowSurfaceEXT() called");
    return 0;
}

/* Demangled: eglDestroyImage */
extern "C" __attribute__((visibility("default"))) int eglDestroyImage(void) {
    ALOGD("eglDestroyImage() called");
    return 0;
}

/* Demangled: glExtGetProgramBinarySourceQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetProgramBinarySourceQCOM(void) {
    ALOGD("glExtGetProgramBinarySourceQCOM() called");
    return 0;
}

/* Demangled: glFlushMappedBufferRange */
extern "C" __attribute__((visibility("default"))) int glFlushMappedBufferRange(void) {
    ALOGD("glFlushMappedBufferRange() called");
    return 0;
}

/* Demangled: glGetInternalformativ */
extern "C" __attribute__((visibility("default"))) int glGetInternalformativ(void) {
    ALOGD("glGetInternalformativ() called");
    return 0;
}

/* Demangled: glUniformMatrix2x3fvNV */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2x3fvNV(void) {
    ALOGD("glUniformMatrix2x3fvNV() called");
    return 0;
}

/* Demangled: glVertexAttribDivisorNV */
extern "C" __attribute__((visibility("default"))) int glVertexAttribDivisorNV(void) {
    ALOGD("glVertexAttribDivisorNV() called");
    return 0;
}

/* Demangled: glBlendEquationi */
extern "C" __attribute__((visibility("default"))) int glBlendEquationi(void) {
    ALOGD("glBlendEquationi() called");
    return 0;
}

/* Demangled: glDeleteQueries */
extern "C" __attribute__((visibility("default"))) int glDeleteQueries(void) {
    ALOGD("glDeleteQueries() called");
    return 0;
}

/* Demangled: glDetachShader */
extern "C" __attribute__((visibility("default"))) int glDetachShader(void) {
    ALOGD("glDetachShader() called");
    return 0;
}

/* Demangled: glDisableiNV */
extern "C" __attribute__((visibility("default"))) int glDisableiNV(void) {
    ALOGD("glDisableiNV() called");
    return 0;
}

/* Demangled: glGetPathMetricRangeNV */
extern "C" __attribute__((visibility("default"))) int glGetPathMetricRangeNV(void) {
    ALOGD("glGetPathMetricRangeNV() called");
    return 0;
}

/* Demangled: glProgramUniform2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2fv(void) {
    ALOGD("glProgramUniform2fv() called");
    return 0;
}

/* Demangled: glBeginPerfQueryINTEL */
extern "C" __attribute__((visibility("default"))) int glBeginPerfQueryINTEL(void) {
    ALOGD("glBeginPerfQueryINTEL() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4x2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4x2fv(void) {
    ALOGD("glProgramUniformMatrix4x2fv() called");
    return 0;
}

/* Demangled: glTexCoord2bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16glTexCoord2bvOESPKa(void) {
    ALOGD("_Z16glTexCoord2bvOESPKa() called");
    return 0;
}

/* Demangled: eglGetProcAddress */
extern "C" __attribute__((visibility("default"))) int eglGetProcAddress(void) {
    ALOGD("eglGetProcAddress() called");
    return 0;
}

/* Demangled: glProgramUniformHandleui64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniformHandleui64vNV(void) {
    ALOGD("glProgramUniformHandleui64vNV() called");
    return 0;
}

/* Demangled: glApplyFramebufferAttachmentCMAAINTEL */
extern "C" __attribute__((visibility("default"))) int glApplyFramebufferAttachmentCMAAINTEL(void) {
    ALOGD("glApplyFramebufferAttachmentCMAAINTEL() called");
    return 0;
}

/* Demangled: glBlendParameteriNV */
extern "C" __attribute__((visibility("default"))) int glBlendParameteriNV(void) {
    ALOGD("glBlendParameteriNV() called");
    return 0;
}

/* Demangled: glDeleteSync */
extern "C" __attribute__((visibility("default"))) int glDeleteSync(void) {
    ALOGD("glDeleteSync() called");
    return 0;
}

/* Demangled: glProgramUniform1ivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1ivEXT(void) {
    ALOGD("glProgramUniform1ivEXT() called");
    return 0;
}

/* Demangled: glResolveMultisampleFramebufferAPPLE */
extern "C" __attribute__((visibility("default"))) int glResolveMultisampleFramebufferAPPLE(void) {
    ALOGD("glResolveMultisampleFramebufferAPPLE() called");
    return 0;
}

/* Demangled: glTexCoord4bOES(signed char, signed char, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z15glTexCoord4bOESaaaa(void) {
    ALOGD("_Z15glTexCoord4bOESaaaa() called");
    return 0;
}

/* Demangled: glCopyTextureLevelsAPPLE */
extern "C" __attribute__((visibility("default"))) int glCopyTextureLevelsAPPLE(void) {
    ALOGD("glCopyTextureLevelsAPPLE() called");
    return 0;
}

/* Demangled: glDeleteSyncAPPLE */
extern "C" __attribute__((visibility("default"))) int glDeleteSyncAPPLE(void) {
    ALOGD("glDeleteSyncAPPLE() called");
    return 0;
}

/* Demangled: glGetUniformi64vNV */
extern "C" __attribute__((visibility("default"))) int glGetUniformi64vNV(void) {
    ALOGD("glGetUniformi64vNV() called");
    return 0;
}

/* Demangled: glVertexAttrib4fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib4fv(void) {
    ALOGD("glVertexAttrib4fv() called");
    return 0;
}

/* Demangled: glBlitFramebufferANGLE */
extern "C" __attribute__((visibility("default"))) int glBlitFramebufferANGLE(void) {
    ALOGD("glBlitFramebufferANGLE() called");
    return 0;
}

/* Demangled: glGetTexLevelParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetTexLevelParameteriv(void) {
    ALOGD("glGetTexLevelParameteriv() called");
    return 0;
}

/* Demangled: glIsBuffer */
extern "C" __attribute__((visibility("default"))) int glIsBuffer(void) {
    ALOGD("glIsBuffer() called");
    return 0;
}

/* Demangled: glIsTextureHandleResidentNV */
extern "C" __attribute__((visibility("default"))) int glIsTextureHandleResidentNV(void) {
    ALOGD("glIsTextureHandleResidentNV() called");
    return 0;
}

/* Demangled: glProgramUniform2fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2fvEXT(void) {
    ALOGD("glProgramUniform2fvEXT() called");
    return 0;
}

/* Demangled: glClearColorxOES */
extern "C" __attribute__((visibility("default"))) int glClearColorxOES(void) {
    ALOGD("glClearColorxOES() called");
    return 0;
}

/* Demangled: glFrustumfOES */
extern "C" __attribute__((visibility("default"))) int glFrustumfOES(void) {
    ALOGD("glFrustumfOES() called");
    return 0;
}

/* Demangled: glViewportArrayvNV */
extern "C" __attribute__((visibility("default"))) int glViewportArrayvNV(void) {
    ALOGD("glViewportArrayvNV() called");
    return 0;
}

/* Demangled: glNormal3f */
extern "C" __attribute__((visibility("default"))) int glNormal3f(void) {
    ALOGD("glNormal3f() called");
    return 0;
}

/* Demangled: glBindBuffer */
extern "C" __attribute__((visibility("default"))) int glBindBuffer(void) {
    ALOGD("glBindBuffer() called");
    return 0;
}

/* Demangled: glFramebufferPixelLocalStorageSizeEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferPixelLocalStorageSizeEXT(void) {
    ALOGD("glFramebufferPixelLocalStorageSizeEXT() called");
    return 0;
}

/* Demangled: glTexParameteriv */
extern "C" __attribute__((visibility("default"))) int glTexParameteriv(void) {
    ALOGD("glTexParameteriv() called");
    return 0;
}

/* Demangled: glMatrixScalefEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixScalefEXT(void) {
    ALOGD("glMatrixScalefEXT() called");
    return 0;
}

/* Demangled: glSampleCoverage */
extern "C" __attribute__((visibility("default"))) int glSampleCoverage(void) {
    ALOGD("glSampleCoverage() called");
    return 0;
}

/* Demangled: glScissorIndexedOES */
extern "C" __attribute__((visibility("default"))) int glScissorIndexedOES(void) {
    ALOGD("glScissorIndexedOES() called");
    return 0;
}

/* Demangled: glBindTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glBindTransformFeedback(void) {
    ALOGD("glBindTransformFeedback() called");
    return 0;
}

/* Demangled: glBlendEquationSeparateiEXT */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparateiEXT(void) {
    ALOGD("glBlendEquationSeparateiEXT() called");
    return 0;
}

/* Demangled: glPopGroupMarkerEXT */
extern "C" __attribute__((visibility("default"))) int glPopGroupMarkerEXT(void) {
    ALOGD("glPopGroupMarkerEXT() called");
    return 0;
}

/* Demangled: glPushDebugGroupKHR */
extern "C" __attribute__((visibility("default"))) int glPushDebugGroupKHR(void) {
    ALOGD("glPushDebugGroupKHR() called");
    return 0;
}

/* Demangled: glBlitFramebuffer */
extern "C" __attribute__((visibility("default"))) int glBlitFramebuffer(void) {
    ALOGD("glBlitFramebuffer() called");
    return 0;
}

/* Demangled: glProgramUniform2f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2f(void) {
    ALOGD("glProgramUniform2f() called");
    return 0;
}

/* Demangled: glDepthRangeIndexedfOES */
extern "C" __attribute__((visibility("default"))) int glDepthRangeIndexedfOES(void) {
    ALOGD("glDepthRangeIndexedfOES() called");
    return 0;
}

/* Demangled: glGetMaterialxv */
extern "C" __attribute__((visibility("default"))) int glGetMaterialxv(void) {
    ALOGD("glGetMaterialxv() called");
    return 0;
}

/* Demangled: glGetnUniformuivKHR */
extern "C" __attribute__((visibility("default"))) int glGetnUniformuivKHR(void) {
    ALOGD("glGetnUniformuivKHR() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleEXT(void) {
    ALOGD("glRenderbufferStorageMultisampleEXT() called");
    return 0;
}

/* Demangled: glUniform1iv */
extern "C" __attribute__((visibility("default"))) int glUniform1iv(void) {
    ALOGD("glUniform1iv() called");
    return 0;
}

/* Demangled: glDeleteVertexArraysOES */
extern "C" __attribute__((visibility("default"))) int glDeleteVertexArraysOES(void) {
    ALOGD("glDeleteVertexArraysOES() called");
    return 0;
}

/* Demangled: glDepthRangeArrayfvNV */
extern "C" __attribute__((visibility("default"))) int glDepthRangeArrayfvNV(void) {
    ALOGD("glDepthRangeArrayfvNV() called");
    return 0;
}

/* Demangled: glGetClipPlanef */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanef(void) {
    ALOGD("glGetClipPlanef() called");
    return 0;
}

/* Demangled: glProgramUniform4iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4iv(void) {
    ALOGD("glProgramUniform4iv() called");
    return 0;
}

/* Demangled: glScalef */
extern "C" __attribute__((visibility("default"))) int glScalef(void) {
    ALOGD("glScalef() called");
    return 0;
}

/* Demangled: eglGetSystemTimeFrequencyNV */
extern "C" __attribute__((visibility("default"))) int eglGetSystemTimeFrequencyNV(void) {
    ALOGD("eglGetSystemTimeFrequencyNV() called");
    return 0;
}

/* Demangled: glClearBufferuiv */
extern "C" __attribute__((visibility("default"))) int glClearBufferuiv(void) {
    ALOGD("glClearBufferuiv() called");
    return 0;
}

/* Demangled: glDeleteSemaphoresEXT */
extern "C" __attribute__((visibility("default"))) int glDeleteSemaphoresEXT(void) {
    ALOGD("glDeleteSemaphoresEXT() called");
    return 0;
}

/* Demangled: glProgramUniform2i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2i(void) {
    ALOGD("glProgramUniform2i() called");
    return 0;
}

/* Demangled: glAlphaFuncx */
extern "C" __attribute__((visibility("default"))) int glAlphaFuncx(void) {
    ALOGD("glAlphaFuncx() called");
    return 0;
}

/* Demangled: glBeginPerfMonitorAMD */
extern "C" __attribute__((visibility("default"))) int glBeginPerfMonitorAMD(void) {
    ALOGD("glBeginPerfMonitorAMD() called");
    return 0;
}

/* Demangled: glBlendEquationOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationOES(void) {
    ALOGD("glBlendEquationOES() called");
    return 0;
}

/* Demangled: glDrawBuffersEXT */
extern "C" __attribute__((visibility("default"))) int glDrawBuffersEXT(void) {
    ALOGD("glDrawBuffersEXT() called");
    return 0;
}

/* Demangled: glGetSemaphoreParameterui64vEXT */
extern "C" __attribute__((visibility("default"))) int glGetSemaphoreParameterui64vEXT(void) {
    ALOGD("glGetSemaphoreParameterui64vEXT() called");
    return 0;
}

/* Demangled: glIsEnabledi */
extern "C" __attribute__((visibility("default"))) int glIsEnabledi(void) {
    ALOGD("glIsEnabledi() called");
    return 0;
}

/* Demangled: glReleaseShaderCompiler */
extern "C" __attribute__((visibility("default"))) int glReleaseShaderCompiler(void) {
    ALOGD("glReleaseShaderCompiler() called");
    return 0;
}

/* Demangled: eglCreatePlatformPixmapSurface */
extern "C" __attribute__((visibility("default"))) int eglCreatePlatformPixmapSurface(void) {
    ALOGD("eglCreatePlatformPixmapSurface() called");
    return 0;
}

/* Demangled: glBlendEquationiOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationiOES(void) {
    ALOGD("glBlendEquationiOES() called");
    return 0;
}

/* Demangled: glGetDriverControlStringQCOM */
extern "C" __attribute__((visibility("default"))) int glGetDriverControlStringQCOM(void) {
    ALOGD("glGetDriverControlStringQCOM() called");
    return 0;
}

/* Demangled: glLightxvOES */
extern "C" __attribute__((visibility("default"))) int glLightxvOES(void) {
    ALOGD("glLightxvOES() called");
    return 0;
}

/* Demangled: glIsEnabled */
extern "C" __attribute__((visibility("default"))) int glIsEnabled(void) {
    ALOGD("glIsEnabled() called");
    return 0;
}

/* Demangled: glMatrixScaledEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixScaledEXT(void) {
    ALOGD("glMatrixScaledEXT() called");
    return 0;
}

/* Demangled: glTexBufferRangeOES */
extern "C" __attribute__((visibility("default"))) int glTexBufferRangeOES(void) {
    ALOGD("glTexBufferRangeOES() called");
    return 0;
}

/* Demangled: glGetProgramBinary */
extern "C" __attribute__((visibility("default"))) int glGetProgramBinary(void) {
    ALOGD("glGetProgramBinary() called");
    return 0;
}

/* Demangled: glPixelStorei */
extern "C" __attribute__((visibility("default"))) int glPixelStorei(void) {
    ALOGD("glPixelStorei() called");
    return 0;
}

/* Demangled: glVertexAttrib3f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib3f(void) {
    ALOGD("glVertexAttrib3f() called");
    return 0;
}

/* Demangled: eglCreateSync */
extern "C" __attribute__((visibility("default"))) int eglCreateSync(void) {
    ALOGD("eglCreateSync() called");
    return 0;
}

/* Demangled: glGenRenderbuffers */
extern "C" __attribute__((visibility("default"))) int glGenRenderbuffers(void) {
    ALOGD("glGenRenderbuffers() called");
    return 0;
}

/* Demangled: glUniformMatrix3fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3fv(void) {
    ALOGD("glUniformMatrix3fv() called");
    return 0;
}

/* Demangled: eglDestroyImageKHR */
extern "C" __attribute__((visibility("default"))) int eglDestroyImageKHR(void) {
    ALOGD("eglDestroyImageKHR() called");
    return 0;
}

/* Demangled: glPathStringNV */
extern "C" __attribute__((visibility("default"))) int glPathStringNV(void) {
    ALOGD("glPathStringNV() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3fv(void) {
    ALOGD("glProgramUniformMatrix3fv() called");
    return 0;
}

/* Demangled: glTextureViewOES */
extern "C" __attribute__((visibility("default"))) int glTextureViewOES(void) {
    ALOGD("glTextureViewOES() called");
    return 0;
}

/* Demangled: glIsTexture */
extern "C" __attribute__((visibility("default"))) int glIsTexture(void) {
    ALOGD("glIsTexture() called");
    return 0;
}

/* Demangled: glMakeTextureHandleResidentNV */
extern "C" __attribute__((visibility("default"))) int glMakeTextureHandleResidentNV(void) {
    ALOGD("glMakeTextureHandleResidentNV() called");
    return 0;
}

/* Demangled: eglWaitSync */
extern "C" __attribute__((visibility("default"))) int eglWaitSync(void) {
    ALOGD("eglWaitSync() called");
    return 0;
}

/* Demangled: glPathDashArrayNV */
extern "C" __attribute__((visibility("default"))) int glPathDashArrayNV(void) {
    ALOGD("glPathDashArrayNV() called");
    return 0;
}

/* Demangled: glPointParameterf */
extern "C" __attribute__((visibility("default"))) int glPointParameterf(void) {
    ALOGD("glPointParameterf() called");
    return 0;
}

/* Demangled: glGetProgramResourceName */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceName(void) {
    ALOGD("glGetProgramResourceName() called");
    return 0;
}

/* Demangled: glPointParameterxv */
extern "C" __attribute__((visibility("default"))) int glPointParameterxv(void) {
    ALOGD("glPointParameterxv() called");
    return 0;
}

/* Demangled: glFramebufferTextureEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureEXT(void) {
    ALOGD("glFramebufferTextureEXT() called");
    return 0;
}

/* Demangled: glGetUniformIndices */
extern "C" __attribute__((visibility("default"))) int glGetUniformIndices(void) {
    ALOGD("glGetUniformIndices() called");
    return 0;
}

/* Demangled: glReadBufferIndexedEXT */
extern "C" __attribute__((visibility("default"))) int glReadBufferIndexedEXT(void) {
    ALOGD("glReadBufferIndexedEXT() called");
    return 0;
}

/* Demangled: glDeleteRenderbuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteRenderbuffers(void) {
    ALOGD("glDeleteRenderbuffers() called");
    return 0;
}

/* Demangled: glFramebufferParameteri */
extern "C" __attribute__((visibility("default"))) int glFramebufferParameteri(void) {
    ALOGD("glFramebufferParameteri() called");
    return 0;
}

/* Demangled: glNormal3x */
extern "C" __attribute__((visibility("default"))) int glNormal3x(void) {
    ALOGD("glNormal3x() called");
    return 0;
}

/* Demangled: glProgramUniform3ui64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3ui64NV(void) {
    ALOGD("glProgramUniform3ui64NV() called");
    return 0;
}

/* Demangled: eglCreateStreamFromFileDescriptorKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateStreamFromFileDescriptorKHR(void) {
    ALOGD("eglCreateStreamFromFileDescriptorKHR() called");
    return 0;
}

/* Demangled: glLineWidthx */
extern "C" __attribute__((visibility("default"))) int glLineWidthx(void) {
    ALOGD("glLineWidthx() called");
    return 0;
}

/* Demangled: glTexGenivOES */
extern "C" __attribute__((visibility("default"))) int glTexGenivOES(void) {
    ALOGD("glTexGenivOES() called");
    return 0;
}

/* Demangled: glUniform3ui */
extern "C" __attribute__((visibility("default"))) int glUniform3ui(void) {
    ALOGD("glUniform3ui() called");
    return 0;
}

/* Demangled: glVertex4bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14glVertex4bvOESPKa(void) {
    ALOGD("_Z14glVertex4bvOESPKa() called");
    return 0;
}

/* Demangled: glFogxvOES */
extern "C" __attribute__((visibility("default"))) int glFogxvOES(void) {
    ALOGD("glFogxvOES() called");
    return 0;
}

/* Demangled: glTexGenxvOES */
extern "C" __attribute__((visibility("default"))) int glTexGenxvOES(void) {
    ALOGD("glTexGenxvOES() called");
    return 0;
}

/* Demangled: glDrawRangeElements */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElements(void) {
    ALOGD("glDrawRangeElements() called");
    return 0;
}

/* Demangled: glGetBooleani_v */
extern "C" __attribute__((visibility("default"))) int glGetBooleani_v(void) {
    ALOGD("glGetBooleani_v() called");
    return 0;
}

/* Demangled: glMatrixMult3x3fNV */
extern "C" __attribute__((visibility("default"))) int glMatrixMult3x3fNV(void) {
    ALOGD("glMatrixMult3x3fNV() called");
    return 0;
}

/* Demangled: glPopDebugGroup */
extern "C" __attribute__((visibility("default"))) int glPopDebugGroup(void) {
    ALOGD("glPopDebugGroup() called");
    return 0;
}

/* Demangled: glPrimitiveBoundingBox */
extern "C" __attribute__((visibility("default"))) int glPrimitiveBoundingBox(void) {
    ALOGD("glPrimitiveBoundingBox() called");
    return 0;
}

/* Demangled: glReadBuffer */
extern "C" __attribute__((visibility("default"))) int glReadBuffer(void) {
    ALOGD("glReadBuffer() called");
    return 0;
}

/* Demangled: eglDestroySync */
extern "C" __attribute__((visibility("default"))) int eglDestroySync(void) {
    ALOGD("eglDestroySync() called");
    return 0;
}

/* Demangled: eglWaitSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglWaitSyncKHR(void) {
    ALOGD("eglWaitSyncKHR() called");
    return 0;
}

/* Demangled: glBlendColor */
extern "C" __attribute__((visibility("default"))) int glBlendColor(void) {
    ALOGD("glBlendColor() called");
    return 0;
}

/* Demangled: glClientWaitSyncAPPLE */
extern "C" __attribute__((visibility("default"))) int glClientWaitSyncAPPLE(void) {
    ALOGD("glClientWaitSyncAPPLE() called");
    return 0;
}

/* Demangled: glGetActiveUniformBlockName */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniformBlockName(void) {
    ALOGD("glGetActiveUniformBlockName() called");
    return 0;
}

/* Demangled: glLightModelxOES */
extern "C" __attribute__((visibility("default"))) int glLightModelxOES(void) {
    ALOGD("glLightModelxOES() called");
    return 0;
}

/* Demangled: glReadnPixelsKHR */
extern "C" __attribute__((visibility("default"))) int glReadnPixelsKHR(void) {
    ALOGD("glReadnPixelsKHR() called");
    return 0;
}

/* Demangled: glBlitFramebufferNV */
extern "C" __attribute__((visibility("default"))) int glBlitFramebufferNV(void) {
    ALOGD("glBlitFramebufferNV() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexOES(void) {
    ALOGD("glDrawElementsInstancedBaseVertexOES() called");
    return 0;
}

/* Demangled: glGetBufferPointerv */
extern "C" __attribute__((visibility("default"))) int glGetBufferPointerv(void) {
    ALOGD("glGetBufferPointerv() called");
    return 0;
}

/* Demangled: glIsVertexArray */
extern "C" __attribute__((visibility("default"))) int glIsVertexArray(void) {
    ALOGD("glIsVertexArray() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleIMG */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleIMG(void) {
    ALOGD("glRenderbufferStorageMultisampleIMG() called");
    return 0;
}

/* Demangled: glUniformMatrix3x4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3x4fv(void) {
    ALOGD("glUniformMatrix3x4fv() called");
    return 0;
}

/* Demangled: glCreateShaderProgramvEXT */
extern "C" __attribute__((visibility("default"))) int glCreateShaderProgramvEXT(void) {
    ALOGD("glCreateShaderProgramvEXT() called");
    return 0;
}

/* Demangled: glGetClipPlanex */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanex(void) {
    ALOGD("glGetClipPlanex() called");
    return 0;
}

/* Demangled: glMatrixLoad3x3fNV */
extern "C" __attribute__((visibility("default"))) int glMatrixLoad3x3fNV(void) {
    ALOGD("glMatrixLoad3x3fNV() called");
    return 0;
}

/* Demangled: glPrimitiveBoundingBoxEXT */
extern "C" __attribute__((visibility("default"))) int glPrimitiveBoundingBoxEXT(void) {
    ALOGD("glPrimitiveBoundingBoxEXT() called");
    return 0;
}

/* Demangled: glScalex */
extern "C" __attribute__((visibility("default"))) int glScalex(void) {
    ALOGD("glScalex() called");
    return 0;
}

/* Demangled: glUniformMatrix4x3fvNV */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4x3fvNV(void) {
    ALOGD("glUniformMatrix4x3fvNV() called");
    return 0;
}

/* Demangled: glWaitSyncAPPLE */
extern "C" __attribute__((visibility("default"))) int glWaitSyncAPPLE(void) {
    ALOGD("glWaitSyncAPPLE() called");
    return 0;
}

/* Demangled: glCopyBufferSubData */
extern "C" __attribute__((visibility("default"))) int glCopyBufferSubData(void) {
    ALOGD("glCopyBufferSubData() called");
    return 0;
}

/* Demangled: glGetPerfMonitorGroupsAMD */
extern "C" __attribute__((visibility("default"))) int glGetPerfMonitorGroupsAMD(void) {
    ALOGD("glGetPerfMonitorGroupsAMD() called");
    return 0;
}

/* Demangled: glGetTransformFeedbackVarying */
extern "C" __attribute__((visibility("default"))) int glGetTransformFeedbackVarying(void) {
    ALOGD("glGetTransformFeedbackVarying() called");
    return 0;
}

/* Demangled: glMatrixMult3x2fNV */
extern "C" __attribute__((visibility("default"))) int glMatrixMult3x2fNV(void) {
    ALOGD("glMatrixMult3x2fNV() called");
    return 0;
}

/* Demangled: glTexCoordPointer */
extern "C" __attribute__((visibility("default"))) int glTexCoordPointer(void) {
    ALOGD("glTexCoordPointer() called");
    return 0;
}

/* Demangled: glVertexAttribDivisorEXT */
extern "C" __attribute__((visibility("default"))) int glVertexAttribDivisorEXT(void) {
    ALOGD("glVertexAttribDivisorEXT() called");
    return 0;
}

/* Demangled: glGetNextPerfQueryIdINTEL */
extern "C" __attribute__((visibility("default"))) int glGetNextPerfQueryIdINTEL(void) {
    ALOGD("glGetNextPerfQueryIdINTEL() called");
    return 0;
}

/* Demangled: glUniform3i64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform3i64vNV(void) {
    ALOGD("glUniform3i64vNV() called");
    return 0;
}

/* Demangled: glBindVertexBuffer */
extern "C" __attribute__((visibility("default"))) int glBindVertexBuffer(void) {
    ALOGD("glBindVertexBuffer() called");
    return 0;
}

/* Demangled: glGetUnsignedBytevEXT */
extern "C" __attribute__((visibility("default"))) int glGetUnsignedBytevEXT(void) {
    ALOGD("glGetUnsignedBytevEXT() called");
    return 0;
}

/* Demangled: glIsQueryEXT */
extern "C" __attribute__((visibility("default"))) int glIsQueryEXT(void) {
    ALOGD("glIsQueryEXT() called");
    return 0;
}

/* Demangled: glSemaphoreParameterui64vEXT */
extern "C" __attribute__((visibility("default"))) int glSemaphoreParameterui64vEXT(void) {
    ALOGD("glSemaphoreParameterui64vEXT() called");
    return 0;
}

/* Demangled: glUniform4i64NV */
extern "C" __attribute__((visibility("default"))) int glUniform4i64NV(void) {
    ALOGD("glUniform4i64NV() called");
    return 0;
}

/* Demangled: glMultiTexCoord2bvOES(unsigned int, signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21glMultiTexCoord2bvOESjPKa(void) {
    ALOGD("_Z21glMultiTexCoord2bvOESjPKa() called");
    return 0;
}

/* Demangled: eglCopyBuffers */
extern "C" __attribute__((visibility("default"))) int eglCopyBuffers(void) {
    ALOGD("eglCopyBuffers() called");
    return 0;
}

/* Demangled: eglGetCurrentDisplay */
extern "C" __attribute__((visibility("default"))) int eglGetCurrentDisplay(void) {
    ALOGD("eglGetCurrentDisplay() called");
    return 0;
}

/* Demangled: glBindBufferBase */
extern "C" __attribute__((visibility("default"))) int glBindBufferBase(void) {
    ALOGD("glBindBufferBase() called");
    return 0;
}

/* Demangled: glFogfv */
extern "C" __attribute__((visibility("default"))) int glFogfv(void) {
    ALOGD("glFogfv() called");
    return 0;
}

/* Demangled: glMatrixLoad3x2fNV */
extern "C" __attribute__((visibility("default"))) int glMatrixLoad3x2fNV(void) {
    ALOGD("glMatrixLoad3x2fNV() called");
    return 0;
}

/* Demangled: glOrthof */
extern "C" __attribute__((visibility("default"))) int glOrthof(void) {
    ALOGD("glOrthof() called");
    return 0;
}

/* Demangled: glStencilMaskSeparate */
extern "C" __attribute__((visibility("default"))) int glStencilMaskSeparate(void) {
    ALOGD("glStencilMaskSeparate() called");
    return 0;
}

/* Demangled: glDrawTransformFeedbackEXT */
extern "C" __attribute__((visibility("default"))) int glDrawTransformFeedbackEXT(void) {
    ALOGD("glDrawTransformFeedbackEXT() called");
    return 0;
}

/* Demangled: glGenFramebuffers */
extern "C" __attribute__((visibility("default"))) int glGenFramebuffers(void) {
    ALOGD("glGenFramebuffers() called");
    return 0;
}

/* Demangled: glTexParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuiv(void) {
    ALOGD("glTexParameterIuiv() called");
    return 0;
}

/* Demangled: glViewportIndexedfvNV */
extern "C" __attribute__((visibility("default"))) int glViewportIndexedfvNV(void) {
    ALOGD("glViewportIndexedfvNV() called");
    return 0;
}

/* Demangled: glDeletePerfMonitorsAMD */
extern "C" __attribute__((visibility("default"))) int glDeletePerfMonitorsAMD(void) {
    ALOGD("glDeletePerfMonitorsAMD() called");
    return 0;
}

/* Demangled: glGetFragDataLocation */
extern "C" __attribute__((visibility("default"))) int glGetFragDataLocation(void) {
    ALOGD("glGetFragDataLocation() called");
    return 0;
}

/* Demangled: glRotatexOES */
extern "C" __attribute__((visibility("default"))) int glRotatexOES(void) {
    ALOGD("glRotatexOES() called");
    return 0;
}

/* Demangled: glBindBufferRange */
extern "C" __attribute__((visibility("default"))) int glBindBufferRange(void) {
    ALOGD("glBindBufferRange() called");
    return 0;
}

/* Demangled: glDrawElements */
extern "C" __attribute__((visibility("default"))) int glDrawElements(void) {
    ALOGD("glDrawElements() called");
    return 0;
}

/* Demangled: glGetFramebufferPixelLocalStorageSizeEXT */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferPixelLocalStorageSizeEXT(void) {
    ALOGD("glGetFramebufferPixelLocalStorageSizeEXT() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIuivOES(void) {
    ALOGD("glGetSamplerParameterIuivOES() called");
    return 0;
}

/* Demangled: glTexEnviv */
extern "C" __attribute__((visibility("default"))) int glTexEnviv(void) {
    ALOGD("glTexEnviv() called");
    return 0;
}

/* Demangled: glGenFencesNV */
extern "C" __attribute__((visibility("default"))) int glGenFencesNV(void) {
    ALOGD("glGenFencesNV() called");
    return 0;
}

/* Demangled: glIsVertexArrayOES */
extern "C" __attribute__((visibility("default"))) int glIsVertexArrayOES(void) {
    ALOGD("glIsVertexArrayOES() called");
    return 0;
}

/* Demangled: glLoadMatrixf */
extern "C" __attribute__((visibility("default"))) int glLoadMatrixf(void) {
    ALOGD("glLoadMatrixf() called");
    return 0;
}

/* Demangled: glPointParameterx */
extern "C" __attribute__((visibility("default"))) int glPointParameterx(void) {
    ALOGD("glPointParameterx() called");
    return 0;
}

/* Demangled: glProgramParameteri */
extern "C" __attribute__((visibility("default"))) int glProgramParameteri(void) {
    ALOGD("glProgramParameteri() called");
    return 0;
}

/* Demangled: glBindVertexArray */
extern "C" __attribute__((visibility("default"))) int glBindVertexArray(void) {
    ALOGD("glBindVertexArray() called");
    return 0;
}

/* Demangled: glGenSemaphoresEXT */
extern "C" __attribute__((visibility("default"))) int glGenSemaphoresEXT(void) {
    ALOGD("glGenSemaphoresEXT() called");
    return 0;
}

/* Demangled: glGetTexParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIivEXT(void) {
    ALOGD("glGetTexParameterIivEXT() called");
    return 0;
}

/* Demangled: glLightfv */
extern "C" __attribute__((visibility("default"))) int glLightfv(void) {
    ALOGD("glLightfv() called");
    return 0;
}

/* Demangled: glPathGlyphIndexArrayNV */
extern "C" __attribute__((visibility("default"))) int glPathGlyphIndexArrayNV(void) {
    ALOGD("glPathGlyphIndexArrayNV() called");
    return 0;
}

/* Demangled: glProgramUniform4ui64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4ui64NV(void) {
    ALOGD("glProgramUniform4ui64NV() called");
    return 0;
}

/* Demangled: glTransformFeedbackVaryings */
extern "C" __attribute__((visibility("default"))) int glTransformFeedbackVaryings(void) {
    ALOGD("glTransformFeedbackVaryings() called");
    return 0;
}

/* Demangled: glValidateProgram */
extern "C" __attribute__((visibility("default"))) int glValidateProgram(void) {
    ALOGD("glValidateProgram() called");
    return 0;
}

/* Demangled: glGetUniformfv */
extern "C" __attribute__((visibility("default"))) int glGetUniformfv(void) {
    ALOGD("glGetUniformfv() called");
    return 0;
}

/* Demangled: glSelectPerfMonitorCountersAMD */
extern "C" __attribute__((visibility("default"))) int glSelectPerfMonitorCountersAMD(void) {
    ALOGD("glSelectPerfMonitorCountersAMD() called");
    return 0;
}

/* Demangled: eglCreateContext */
extern "C" __attribute__((visibility("default"))) int eglCreateContext(void) {
    ALOGD("eglCreateContext() called");
    return 0;
}

/* Demangled: glProgramUniform1fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1fv(void) {
    ALOGD("glProgramUniform1fv() called");
    return 0;
}

/* Demangled: eglSetSwapRectangleANDROID(void*, void*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z26eglSetSwapRectangleANDROIDPvS_iiii(void) {
    ALOGD("_Z26eglSetSwapRectangleANDROIDPvS_iiii() called");
    return 0;
}

/* Demangled: eglTerminate */
extern "C" __attribute__((visibility("default"))) int eglTerminate(void) {
    ALOGD("eglTerminate() called");
    return 0;
}

/* Demangled: glIsEnablediEXT */
extern "C" __attribute__((visibility("default"))) int glIsEnablediEXT(void) {
    ALOGD("glIsEnablediEXT() called");
    return 0;
}

/* Demangled: glMatrixRotatefEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixRotatefEXT(void) {
    ALOGD("glMatrixRotatefEXT() called");
    return 0;
}

/* Demangled: glProgramUniform3f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3f(void) {
    ALOGD("glProgramUniform3f() called");
    return 0;
}

/* Demangled: glViewportIndexedfvOES */
extern "C" __attribute__((visibility("default"))) int glViewportIndexedfvOES(void) {
    ALOGD("glViewportIndexedfvOES() called");
    return 0;
}

/* Demangled: eglStreamAttribKHR */
extern "C" __attribute__((visibility("default"))) int eglStreamAttribKHR(void) {
    ALOGD("eglStreamAttribKHR() called");
    return 0;
}

/* Demangled: glDrawTexivOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexivOES(void) {
    ALOGD("glDrawTexivOES() called");
    return 0;
}

/* Demangled: glGetPerfMonitorCountersAMD */
extern "C" __attribute__((visibility("default"))) int glGetPerfMonitorCountersAMD(void) {
    ALOGD("glGetPerfMonitorCountersAMD() called");
    return 0;
}

/* Demangled: glIsProgramPipelineEXT */
extern "C" __attribute__((visibility("default"))) int glIsProgramPipelineEXT(void) {
    ALOGD("glIsProgramPipelineEXT() called");
    return 0;
}

/* Demangled: glProgramUniformHandleui64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniformHandleui64NV(void) {
    ALOGD("glProgramUniformHandleui64NV() called");
    return 0;
}

/* Demangled: glReadBufferNV */
extern "C" __attribute__((visibility("default"))) int glReadBufferNV(void) {
    ALOGD("glReadBufferNV() called");
    return 0;
}

/* Demangled: glColor4ub */
extern "C" __attribute__((visibility("default"))) int glColor4ub(void) {
    ALOGD("glColor4ub() called");
    return 0;
}

/* Demangled: glDrawTexxvOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexxvOES(void) {
    ALOGD("glDrawTexxvOES() called");
    return 0;
}

/* Demangled: glGetFixedv */
extern "C" __attribute__((visibility("default"))) int glGetFixedv(void) {
    ALOGD("glGetFixedv() called");
    return 0;
}

/* Demangled: glGetFixedvOES */
extern "C" __attribute__((visibility("default"))) int glGetFixedvOES(void) {
    ALOGD("glGetFixedvOES() called");
    return 0;
}

/* Demangled: glGetPathLengthNV */
extern "C" __attribute__((visibility("default"))) int glGetPathLengthNV(void) {
    ALOGD("glGetPathLengthNV() called");
    return 0;
}

/* Demangled: glMatrixLoadTransposefEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixLoadTransposefEXT(void) {
    ALOGD("glMatrixLoadTransposefEXT() called");
    return 0;
}

/* Demangled: glPointSizePointerOES */
extern "C" __attribute__((visibility("default"))) int glPointSizePointerOES(void) {
    ALOGD("glPointSizePointerOES() called");
    return 0;
}

/* Demangled: glProgramUniform4i64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4i64NV(void) {
    ALOGD("glProgramUniform4i64NV() called");
    return 0;
}

/* Demangled: glDeleteVertexArrays */
extern "C" __attribute__((visibility("default"))) int glDeleteVertexArrays(void) {
    ALOGD("glDeleteVertexArrays() called");
    return 0;
}

/* Demangled: glMemoryBarrierByRegion */
extern "C" __attribute__((visibility("default"))) int glMemoryBarrierByRegion(void) {
    ALOGD("glMemoryBarrierByRegion() called");
    return 0;
}

/* Demangled: glProgramUniform3i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3i(void) {
    ALOGD("glProgramUniform3i() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3x4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3x4fv(void) {
    ALOGD("glProgramUniformMatrix3x4fv() called");
    return 0;
}

/* Demangled: glScissorIndexedvNV */
extern "C" __attribute__((visibility("default"))) int glScissorIndexedvNV(void) {
    ALOGD("glScissorIndexedvNV() called");
    return 0;
}

/* Demangled: glVertexAttrib3fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib3fv(void) {
    ALOGD("glVertexAttrib3fv() called");
    return 0;
}

/* Demangled: glMultiTexCoord4bOES(unsigned int, signed char, signed char, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z20glMultiTexCoord4bOESjaaaa(void) {
    ALOGD("_Z20glMultiTexCoord4bOESjaaaa() called");
    return 0;
}

/* Demangled: glGetUniformuiv */
extern "C" __attribute__((visibility("default"))) int glGetUniformuiv(void) {
    ALOGD("glGetUniformuiv() called");
    return 0;
}

/* Demangled: glUseProgram */
extern "C" __attribute__((visibility("default"))) int glUseProgram(void) {
    ALOGD("glUseProgram() called");
    return 0;
}

/* Demangled: glWaitVkSemaphoreNV */
extern "C" __attribute__((visibility("default"))) int glWaitVkSemaphoreNV(void) {
    ALOGD("glWaitVkSemaphoreNV() called");
    return 0;
}

/* Demangled: eglGetSystemTimeNV */
extern "C" __attribute__((visibility("default"))) int eglGetSystemTimeNV(void) {
    ALOGD("eglGetSystemTimeNV() called");
    return 0;
}

/* Demangled: glUniform4i64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform4i64vNV(void) {
    ALOGD("glUniform4i64vNV() called");
    return 0;
}

/* Demangled: trace_thread_deinit() */
extern "C" __attribute__((visibility("default"))) int _Z19trace_thread_deinitv(void) {
    ALOGD("_Z19trace_thread_deinitv() called");
    return 0;
}

/* Demangled: glDiscardFramebufferEXT */
extern "C" __attribute__((visibility("default"))) int glDiscardFramebufferEXT(void) {
    ALOGD("glDiscardFramebufferEXT() called");
    return 0;
}

/* Demangled: glPathGlyphIndexRangeNV */
extern "C" __attribute__((visibility("default"))) int glPathGlyphIndexRangeNV(void) {
    ALOGD("glPathGlyphIndexRangeNV() called");
    return 0;
}

/* Demangled: glGetProgramInterfaceiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramInterfaceiv(void) {
    ALOGD("glGetProgramInterfaceiv() called");
    return 0;
}

/* Demangled: glMultMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glMultMatrixxOES(void) {
    ALOGD("glMultMatrixxOES() called");
    return 0;
}

/* Demangled: glPushDebugGroup */
extern "C" __attribute__((visibility("default"))) int glPushDebugGroup(void) {
    ALOGD("glPushDebugGroup() called");
    return 0;
}

/* Demangled: glVertexAttrib4f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib4f(void) {
    ALOGD("glVertexAttrib4f() called");
    return 0;
}

/* Demangled: glGetProgramPipelineiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramPipelineiv(void) {
    ALOGD("glGetProgramPipelineiv() called");
    return 0;
}

/* Demangled: glIsMemoryObjectEXT */
extern "C" __attribute__((visibility("default"))) int glIsMemoryObjectEXT(void) {
    ALOGD("glIsMemoryObjectEXT() called");
    return 0;
}

/* Demangled: glMatrixRotatedEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixRotatedEXT(void) {
    ALOGD("glMatrixRotatedEXT() called");
    return 0;
}

/* Demangled: glMemoryObjectParameterivEXT */
extern "C" __attribute__((visibility("default"))) int glMemoryObjectParameterivEXT(void) {
    ALOGD("glMemoryObjectParameterivEXT() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2x3fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2x3fvEXT(void) {
    ALOGD("glProgramUniformMatrix2x3fvEXT() called");
    return 0;
}

/* Demangled: glStencilFillPathNV */
extern "C" __attribute__((visibility("default"))) int glStencilFillPathNV(void) {
    ALOGD("glStencilFillPathNV() called");
    return 0;
}

/* Demangled: glVertexBindingDivisor */
extern "C" __attribute__((visibility("default"))) int glVertexBindingDivisor(void) {
    ALOGD("glVertexBindingDivisor() called");
    return 0;
}

/* Demangled: eglCreatePlatformPixmapSurfaceEXT */
extern "C" __attribute__((visibility("default"))) int eglCreatePlatformPixmapSurfaceEXT(void) {
    ALOGD("eglCreatePlatformPixmapSurfaceEXT() called");
    return 0;
}

/* Demangled: eglQueryStreamKHR */
extern "C" __attribute__((visibility("default"))) int eglQueryStreamKHR(void) {
    ALOGD("eglQueryStreamKHR() called");
    return 0;
}

/* Demangled: glEndConditionalRenderNV */
extern "C" __attribute__((visibility("default"))) int glEndConditionalRenderNV(void) {
    ALOGD("glEndConditionalRenderNV() called");
    return 0;
}

/* Demangled: glGetPerfMonitorCounterDataAMD */
extern "C" __attribute__((visibility("default"))) int glGetPerfMonitorCounterDataAMD(void) {
    ALOGD("glGetPerfMonitorCounterDataAMD() called");
    return 0;
}

/* Demangled: glMatrixMultTranspose3x3fNV */
extern "C" __attribute__((visibility("default"))) int glMatrixMultTranspose3x3fNV(void) {
    ALOGD("glMatrixMultTranspose3x3fNV() called");
    return 0;
}

/* Demangled: glOrthox */
extern "C" __attribute__((visibility("default"))) int glOrthox(void) {
    ALOGD("glOrthox() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleAPPLE */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleAPPLE(void) {
    ALOGD("glRenderbufferStorageMultisampleAPPLE() called");
    return 0;
}

/* Demangled: glVertexAttribI4ui */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4ui(void) {
    ALOGD("glVertexAttribI4ui() called");
    return 0;
}

/* Demangled: glTexCoord1bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16glTexCoord1bvOESPKa(void) {
    ALOGD("_Z16glTexCoord1bvOESPKa() called");
    return 0;
}

/* Demangled: eglCreateSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateSyncKHR(void) {
    ALOGD("eglCreateSyncKHR() called");
    return 0;
}

/* Demangled: glDeleteSamplers */
extern "C" __attribute__((visibility("default"))) int glDeleteSamplers(void) {
    ALOGD("glDeleteSamplers() called");
    return 0;
}

/* Demangled: glDispatchCompute */
extern "C" __attribute__((visibility("default"))) int glDispatchCompute(void) {
    ALOGD("glDispatchCompute() called");
    return 0;
}

/* Demangled: glGetFramebufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferParameteriv(void) {
    ALOGD("glGetFramebufferParameteriv() called");
    return 0;
}

/* Demangled: glGetGraphicsResetStatus */
extern "C" __attribute__((visibility("default"))) int glGetGraphicsResetStatus(void) {
    ALOGD("glGetGraphicsResetStatus() called");
    return 0;
}

/* Demangled: glMatrixLoadTransposedEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixLoadTransposedEXT(void) {
    ALOGD("glMatrixLoadTransposedEXT() called");
    return 0;
}

/* Demangled: glGetTexParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuivEXT(void) {
    ALOGD("glGetTexParameterIuivEXT() called");
    return 0;
}

/* Demangled: glUniformHandleui64vNV */
extern "C" __attribute__((visibility("default"))) int glUniformHandleui64vNV(void) {
    ALOGD("glUniformHandleui64vNV() called");
    return 0;
}

/* Demangled: glValidateProgramPipeline */
extern "C" __attribute__((visibility("default"))) int glValidateProgramPipeline(void) {
    ALOGD("glValidateProgramPipeline() called");
    return 0;
}

/* Demangled: eglGetNativeClientBufferANDROID */
extern "C" __attribute__((visibility("default"))) int eglGetNativeClientBufferANDROID(void) {
    ALOGD("eglGetNativeClientBufferANDROID() called");
    return 0;
}

/* Demangled: glClientWaitSync */
extern "C" __attribute__((visibility("default"))) int glClientWaitSync(void) {
    ALOGD("glClientWaitSync() called");
    return 0;
}

/* Demangled: glGetTexParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterfv(void) {
    ALOGD("glGetTexParameterfv() called");
    return 0;
}

/* Demangled: glProgramUniform3iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3iv(void) {
    ALOGD("glProgramUniform3iv() called");
    return 0;
}

/* Demangled: glBindRenderbufferOES */
extern "C" __attribute__((visibility("default"))) int glBindRenderbufferOES(void) {
    ALOGD("glBindRenderbufferOES() called");
    return 0;
}

/* Demangled: glBufferSubData */
extern "C" __attribute__((visibility("default"))) int glBufferSubData(void) {
    ALOGD("glBufferSubData() called");
    return 0;
}

/* Demangled: glConservativeRasterParameteriNV */
extern "C" __attribute__((visibility("default"))) int glConservativeRasterParameteriNV(void) {
    ALOGD("glConservativeRasterParameteriNV() called");
    return 0;
}

/* Demangled: glEnableiEXT */
extern "C" __attribute__((visibility("default"))) int glEnableiEXT(void) {
    ALOGD("glEnableiEXT() called");
    return 0;
}

/* Demangled: eglGetDisplay */
extern "C" __attribute__((visibility("default"))) int eglGetDisplay(void) {
    ALOGD("eglGetDisplay() called");
    return 0;
}

/* Demangled: glBindSampler */
extern "C" __attribute__((visibility("default"))) int glBindSampler(void) {
    ALOGD("glBindSampler() called");
    return 0;
}

/* Demangled: glLoadIdentity */
extern "C" __attribute__((visibility("default"))) int glLoadIdentity(void) {
    ALOGD("glLoadIdentity() called");
    return 0;
}

/* Demangled: glLoadMatrixx */
extern "C" __attribute__((visibility("default"))) int glLoadMatrixx(void) {
    ALOGD("glLoadMatrixx() called");
    return 0;
}

/* Demangled: glProgramUniform2uiEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2uiEXT(void) {
    ALOGD("glProgramUniform2uiEXT() called");
    return 0;
}

/* Demangled: glTextureStorage2DEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorage2DEXT(void) {
    ALOGD("glTextureStorage2DEXT() called");
    return 0;
}

/* Demangled: glFrustumf */
extern "C" __attribute__((visibility("default"))) int glFrustumf(void) {
    ALOGD("glFrustumf() called");
    return 0;
}

/* Demangled: glGetSamplerParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameteriv(void) {
    ALOGD("glGetSamplerParameteriv() called");
    return 0;
}

/* Demangled: glTexBufferOES */
extern "C" __attribute__((visibility("default"))) int glTexBufferOES(void) {
    ALOGD("glTexBufferOES() called");
    return 0;
}

/* Demangled: glColor4xOES */
extern "C" __attribute__((visibility("default"))) int glColor4xOES(void) {
    ALOGD("glColor4xOES() called");
    return 0;
}

/* Demangled: glGetPointervKHR */
extern "C" __attribute__((visibility("default"))) int glGetPointervKHR(void) {
    ALOGD("glGetPointervKHR() called");
    return 0;
}

/* Demangled: glInsertEventMarkerEXT */
extern "C" __attribute__((visibility("default"))) int glInsertEventMarkerEXT(void) {
    ALOGD("glInsertEventMarkerEXT() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIivEXT(void) {
    ALOGD("glGetSamplerParameterIivEXT() called");
    return 0;
}

/* Demangled: glLinkProgram */
extern "C" __attribute__((visibility("default"))) int glLinkProgram(void) {
    ALOGD("glLinkProgram() called");
    return 0;
}

/* Demangled: eglSignalSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglSignalSyncKHR(void) {
    ALOGD("eglSignalSyncKHR() called");
    return 0;
}

/* Demangled: glBindProgramPipeline */
extern "C" __attribute__((visibility("default"))) int glBindProgramPipeline(void) {
    ALOGD("glBindProgramPipeline() called");
    return 0;
}

/* Demangled: glColorMaskiOES */
extern "C" __attribute__((visibility("default"))) int glColorMaskiOES(void) {
    ALOGD("glColorMaskiOES() called");
    return 0;
}

/* Demangled: glDisable */
extern "C" __attribute__((visibility("default"))) int glDisable(void) {
    ALOGD("glDisable() called");
    return 0;
}

/* Demangled: glSamplerParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIuiv(void) {
    ALOGD("glSamplerParameterIuiv() called");
    return 0;
}

/* Demangled: glTexParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuivEXT(void) {
    ALOGD("glTexParameterIuivEXT() called");
    return 0;
}

/* Demangled: glUniformMatrix2fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2fv(void) {
    ALOGD("glUniformMatrix2fv() called");
    return 0;
}

/* Demangled: glVertexPointer */
extern "C" __attribute__((visibility("default"))) int glVertexPointer(void) {
    ALOGD("glVertexPointer() called");
    return 0;
}

/* Demangled: glCompressedTexImage3DOES */
extern "C" __attribute__((visibility("default"))) int glCompressedTexImage3DOES(void) {
    ALOGD("glCompressedTexImage3DOES() called");
    return 0;
}

/* Demangled: glFogxv */
extern "C" __attribute__((visibility("default"))) int glFogxv(void) {
    ALOGD("glFogxv() called");
    return 0;
}

/* Demangled: glNamedFramebufferSampleLocationsfvNV */
extern "C" __attribute__((visibility("default"))) int glNamedFramebufferSampleLocationsfvNV(void) {
    ALOGD("glNamedFramebufferSampleLocationsfvNV() called");
    return 0;
}

/* Demangled: glProgramBinaryOES */
extern "C" __attribute__((visibility("default"))) int glProgramBinaryOES(void) {
    ALOGD("glProgramBinaryOES() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2fv(void) {
    ALOGD("glProgramUniformMatrix2fv() called");
    return 0;
}

/* Demangled: glDrawVkImageNV */
extern "C" __attribute__((visibility("default"))) int glDrawVkImageNV(void) {
    ALOGD("glDrawVkImageNV() called");
    return 0;
}

/* Demangled: glGetPerfQueryDataINTEL */
extern "C" __attribute__((visibility("default"))) int glGetPerfQueryDataINTEL(void) {
    ALOGD("glGetPerfQueryDataINTEL() called");
    return 0;
}

/* Demangled: glMakeImageHandleNonResidentNV */
extern "C" __attribute__((visibility("default"))) int glMakeImageHandleNonResidentNV(void) {
    ALOGD("glMakeImageHandleNonResidentNV() called");
    return 0;
}

/* Demangled: glPatchParameteriOES */
extern "C" __attribute__((visibility("default"))) int glPatchParameteriOES(void) {
    ALOGD("glPatchParameteriOES() called");
    return 0;
}

/* Demangled: glProgramUniform3ivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3ivEXT(void) {
    ALOGD("glProgramUniform3ivEXT() called");
    return 0;
}

/* Demangled: glRotatef */
extern "C" __attribute__((visibility("default"))) int glRotatef(void) {
    ALOGD("glRotatef() called");
    return 0;
}

/* Demangled: glScissor */
extern "C" __attribute__((visibility("default"))) int glScissor(void) {
    ALOGD("glScissor() called");
    return 0;
}

/* Demangled: glTexParameterf */
extern "C" __attribute__((visibility("default"))) int glTexParameterf(void) {
    ALOGD("glTexParameterf() called");
    return 0;
}

/* Demangled: glFramebufferTexture3DOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture3DOES(void) {
    ALOGD("glFramebufferTexture3DOES() called");
    return 0;
}

/* Demangled: glGetFloati_vOES */
extern "C" __attribute__((visibility("default"))) int glGetFloati_vOES(void) {
    ALOGD("glGetFloati_vOES() called");
    return 0;
}

/* Demangled: trace_thread_init() */
extern "C" __attribute__((visibility("default"))) int _Z17trace_thread_initv(void) {
    ALOGD("_Z17trace_thread_initv() called");
    return 0;
}

/* Demangled: eglHibernateProcessIMG() */
extern "C" __attribute__((visibility("default"))) int _Z22eglHibernateProcessIMGv(void) {
    ALOGD("_Z22eglHibernateProcessIMGv() called");
    return 0;
}

/* Demangled: glGetMemoryObjectParameterivEXT */
extern "C" __attribute__((visibility("default"))) int glGetMemoryObjectParameterivEXT(void) {
    ALOGD("glGetMemoryObjectParameterivEXT() called");
    return 0;
}

/* Demangled: glProgramUniform4fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4fvEXT(void) {
    ALOGD("glProgramUniform4fvEXT() called");
    return 0;
}

/* Demangled: glClearBufferfi */
extern "C" __attribute__((visibility("default"))) int glClearBufferfi(void) {
    ALOGD("glClearBufferfi() called");
    return 0;
}

/* Demangled: glFramebufferFetchBarrierQCOM */
extern "C" __attribute__((visibility("default"))) int glFramebufferFetchBarrierQCOM(void) {
    ALOGD("glFramebufferFetchBarrierQCOM() called");
    return 0;
}

/* Demangled: glFramebufferFoveationParametersQCOM */
extern "C" __attribute__((visibility("default"))) int glFramebufferFoveationParametersQCOM(void) {
    ALOGD("glFramebufferFoveationParametersQCOM() called");
    return 0;
}

/* Demangled: glGetInteger64vAPPLE */
extern "C" __attribute__((visibility("default"))) int glGetInteger64vAPPLE(void) {
    ALOGD("glGetInteger64vAPPLE() called");
    return 0;
}

/* Demangled: glResolveDepthValuesNV */
extern "C" __attribute__((visibility("default"))) int glResolveDepthValuesNV(void) {
    ALOGD("glResolveDepthValuesNV() called");
    return 0;
}

/* Demangled: glTexParameteri */
extern "C" __attribute__((visibility("default"))) int glTexParameteri(void) {
    ALOGD("glTexParameteri() called");
    return 0;
}

/* Demangled: glUniform4fv */
extern "C" __attribute__((visibility("default"))) int glUniform4fv(void) {
    ALOGD("glUniform4fv() called");
    return 0;
}

/* Demangled: eglAwakenProcessIMG() */
extern "C" __attribute__((visibility("default"))) int _Z19eglAwakenProcessIMGv(void) {
    ALOGD("_Z19eglAwakenProcessIMGv() called");
    return 0;
}

/* Demangled: glBlendFunc */
extern "C" __attribute__((visibility("default"))) int glBlendFunc(void) {
    ALOGD("glBlendFunc() called");
    return 0;
}

/* Demangled: glDepthRangefOES */
extern "C" __attribute__((visibility("default"))) int glDepthRangefOES(void) {
    ALOGD("glDepthRangefOES() called");
    return 0;
}

/* Demangled: glGetTextureHandleNV */
extern "C" __attribute__((visibility("default"))) int glGetTextureHandleNV(void) {
    ALOGD("glGetTextureHandleNV() called");
    return 0;
}

/* Demangled: glBlendEquationSeparate */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparate(void) {
    ALOGD("glBlendEquationSeparate() called");
    return 0;
}

/* Demangled: glCheckFramebufferStatus */
extern "C" __attribute__((visibility("default"))) int glCheckFramebufferStatus(void) {
    ALOGD("glCheckFramebufferStatus() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DMultisampleEXT(void) {
    ALOGD("glFramebufferTexture2DMultisampleEXT() called");
    return 0;
}

/* Demangled: glGetFragDataIndexEXT */
extern "C" __attribute__((visibility("default"))) int glGetFragDataIndexEXT(void) {
    ALOGD("glGetFragDataIndexEXT() called");
    return 0;
}

/* Demangled: glLightxv */
extern "C" __attribute__((visibility("default"))) int glLightxv(void) {
    ALOGD("glLightxv() called");
    return 0;
}

/* Demangled: glUniform2ui */
extern "C" __attribute__((visibility("default"))) int glUniform2ui(void) {
    ALOGD("glUniform2ui() called");
    return 0;
}

/* Demangled: glClearColor */
extern "C" __attribute__((visibility("default"))) int glClearColor(void) {
    ALOGD("glClearColor() called");
    return 0;
}

/* Demangled: glCompressedTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexSubImage2D(void) {
    ALOGD("glCompressedTexSubImage2D() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertex(void) {
    ALOGD("glDrawElementsInstancedBaseVertex() called");
    return 0;
}

/* Demangled: glOrthofOES */
extern "C" __attribute__((visibility("default"))) int glOrthofOES(void) {
    ALOGD("glOrthofOES() called");
    return 0;
}

/* Demangled: glPolygonOffsetx */
extern "C" __attribute__((visibility("default"))) int glPolygonOffsetx(void) {
    ALOGD("glPolygonOffsetx() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4x3fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4x3fvEXT(void) {
    ALOGD("glProgramUniformMatrix4x3fvEXT() called");
    return 0;
}

/* Demangled: glShaderBinary */
extern "C" __attribute__((visibility("default"))) int glShaderBinary(void) {
    ALOGD("glShaderBinary() called");
    return 0;
}

/* Demangled: glMultiDrawElementsIndirectEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawElementsIndirectEXT(void) {
    ALOGD("glMultiDrawElementsIndirectEXT() called");
    return 0;
}

/* Demangled: glTexStorage2DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorage2DEXT(void) {
    ALOGD("glTexStorage2DEXT() called");
    return 0;
}

/* Demangled: glGetTextureSamplerHandleIMG */
extern "C" __attribute__((visibility("default"))) int glGetTextureSamplerHandleIMG(void) {
    ALOGD("glGetTextureSamplerHandleIMG() called");
    return 0;
}

/* Demangled: glGetnUniformivEXT */
extern "C" __attribute__((visibility("default"))) int glGetnUniformivEXT(void) {
    ALOGD("glGetnUniformivEXT() called");
    return 0;
}

/* Demangled: glFinish */
extern "C" __attribute__((visibility("default"))) int glFinish(void) {
    ALOGD("glFinish() called");
    return 0;
}

/* Demangled: glHint */
extern "C" __attribute__((visibility("default"))) int glHint(void) {
    ALOGD("glHint() called");
    return 0;
}

/* Demangled: glTexEnvxOES */
extern "C" __attribute__((visibility("default"))) int glTexEnvxOES(void) {
    ALOGD("glTexEnvxOES() called");
    return 0;
}

/* Demangled: glAlphaFunc */
extern "C" __attribute__((visibility("default"))) int glAlphaFunc(void) {
    ALOGD("glAlphaFunc() called");
    return 0;
}

/* Demangled: glDepthRangef */
extern "C" __attribute__((visibility("default"))) int glDepthRangef(void) {
    ALOGD("glDepthRangef() called");
    return 0;
}

/* Demangled: glGetProgramResourceiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceiv(void) {
    ALOGD("glGetProgramResourceiv() called");
    return 0;
}

/* Demangled: glLightf */
extern "C" __attribute__((visibility("default"))) int glLightf(void) {
    ALOGD("glLightf() called");
    return 0;
}

/* Demangled: eglSwapInterval */
extern "C" __attribute__((visibility("default"))) int eglSwapInterval(void) {
    ALOGD("eglSwapInterval() called");
    return 0;
}

/* Demangled: glBeginTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glBeginTransformFeedback(void) {
    ALOGD("glBeginTransformFeedback() called");
    return 0;
}

/* Demangled: glStencilThenCoverStrokePathInstancedNV */
extern "C" __attribute__((visibility("default"))) int glStencilThenCoverStrokePathInstancedNV(void) {
    ALOGD("glStencilThenCoverStrokePathInstancedNV() called");
    return 0;
}

/* Demangled: eglBindTexImage */
extern "C" __attribute__((visibility("default"))) int eglBindTexImage(void) {
    ALOGD("eglBindTexImage() called");
    return 0;
}

/* Demangled: eglQueryStreamTimeKHR */
extern "C" __attribute__((visibility("default"))) int eglQueryStreamTimeKHR(void) {
    ALOGD("eglQueryStreamTimeKHR() called");
    return 0;
}

/* Demangled: glClear */
extern "C" __attribute__((visibility("default"))) int glClear(void) {
    ALOGD("glClear() called");
    return 0;
}

/* Demangled: glEGLImageTargetTexStorageEXT */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetTexStorageEXT(void) {
    ALOGD("glEGLImageTargetTexStorageEXT() called");
    return 0;
}

/* Demangled: glFrustumx */
extern "C" __attribute__((visibility("default"))) int glFrustumx(void) {
    ALOGD("glFrustumx() called");
    return 0;
}

/* Demangled: glProgramUniform4f */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4f(void) {
    ALOGD("glProgramUniform4f() called");
    return 0;
}

/* Demangled: eglCreateStreamProducerSurfaceKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateStreamProducerSurfaceKHR(void) {
    ALOGD("eglCreateStreamProducerSurfaceKHR() called");
    return 0;
}

/* Demangled: eglReleaseThread */
extern "C" __attribute__((visibility("default"))) int eglReleaseThread(void) {
    ALOGD("eglReleaseThread() called");
    return 0;
}

/* Demangled: glBlendFuncSeparatei */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparatei(void) {
    ALOGD("glBlendFuncSeparatei() called");
    return 0;
}

/* Demangled: glCoverStrokePathInstancedNV */
extern "C" __attribute__((visibility("default"))) int glCoverStrokePathInstancedNV(void) {
    ALOGD("glCoverStrokePathInstancedNV() called");
    return 0;
}

/* Demangled: glVertex3bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14glVertex3bvOESPKa(void) {
    ALOGD("_Z14glVertex3bvOESPKa() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseInstanceEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseInstanceEXT(void) {
    ALOGD("glDrawElementsInstancedBaseInstanceEXT() called");
    return 0;
}

/* Demangled: glGetPathSpacingNV */
extern "C" __attribute__((visibility("default"))) int glGetPathSpacingNV(void) {
    ALOGD("glGetPathSpacingNV() called");
    return 0;
}

/* Demangled: glShaderSource */
extern "C" __attribute__((visibility("default"))) int glShaderSource(void) {
    ALOGD("glShaderSource() called");
    return 0;
}

/* Demangled: glVertexAttribI4uiv */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4uiv(void) {
    ALOGD("glVertexAttribI4uiv() called");
    return 0;
}

/* Demangled: eglGetSyncAttribKHR */
extern "C" __attribute__((visibility("default"))) int eglGetSyncAttribKHR(void) {
    ALOGD("eglGetSyncAttribKHR() called");
    return 0;
}

/* Demangled: glClearBufferfv */
extern "C" __attribute__((visibility("default"))) int glClearBufferfv(void) {
    ALOGD("glClearBufferfv() called");
    return 0;
}

/* Demangled: glDisablei */
extern "C" __attribute__((visibility("default"))) int glDisablei(void) {
    ALOGD("glDisablei() called");
    return 0;
}

/* Demangled: glDispatchComputeIndirect */
extern "C" __attribute__((visibility("default"))) int glDispatchComputeIndirect(void) {
    ALOGD("glDispatchComputeIndirect() called");
    return 0;
}

/* Demangled: glProgramUniform4i */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4i(void) {
    ALOGD("glProgramUniform4i() called");
    return 0;
}

/* Demangled: glVertex3bOES(signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z13glVertex3bOESaa(void) {
    ALOGD("_Z13glVertex3bOESaa() called");
    return 0;
}

/* Demangled: glMultiTexCoord1bvOES(unsigned int, signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21glMultiTexCoord1bvOESjPKa(void) {
    ALOGD("_Z21glMultiTexCoord1bvOESjPKa() called");
    return 0;
}

/* Demangled: glBlendEquation */
extern "C" __attribute__((visibility("default"))) int glBlendEquation(void) {
    ALOGD("glBlendEquation() called");
    return 0;
}

/* Demangled: glGetQueryObjectuivEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectuivEXT(void) {
    ALOGD("glGetQueryObjectuivEXT() called");
    return 0;
}

/* Demangled: glMatrixLoadTranspose3x3fNV */
extern "C" __attribute__((visibility("default"))) int glMatrixLoadTranspose3x3fNV(void) {
    ALOGD("glMatrixLoadTranspose3x3fNV() called");
    return 0;
}

/* Demangled: glProgramBinary */
extern "C" __attribute__((visibility("default"))) int glProgramBinary(void) {
    ALOGD("glProgramBinary() called");
    return 0;
}

/* Demangled: glMultiTexCoord1bOES(unsigned int, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z20glMultiTexCoord1bOESja(void) {
    ALOGD("_Z20glMultiTexCoord1bOESja() called");
    return 0;
}

/* Demangled: eglGetCurrentSurface */
extern "C" __attribute__((visibility("default"))) int eglGetCurrentSurface(void) {
    ALOGD("eglGetCurrentSurface() called");
    return 0;
}

/* Demangled: glGetTextureHandleIMG */
extern "C" __attribute__((visibility("default"))) int glGetTextureHandleIMG(void) {
    ALOGD("glGetTextureHandleIMG() called");
    return 0;
}

/* Demangled: glPolygonOffsetClampEXT */
extern "C" __attribute__((visibility("default"))) int glPolygonOffsetClampEXT(void) {
    ALOGD("glPolygonOffsetClampEXT() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3fvEXT(void) {
    ALOGD("glProgramUniformMatrix3fvEXT() called");
    return 0;
}

/* Demangled: glRotatex */
extern "C" __attribute__((visibility("default"))) int glRotatex(void) {
    ALOGD("glRotatex() called");
    return 0;
}

/* Demangled: glTexParameterx */
extern "C" __attribute__((visibility("default"))) int glTexParameterx(void) {
    ALOGD("glTexParameterx() called");
    return 0;
}

/* Demangled: glClearPixelLocalStorageuiEXT */
extern "C" __attribute__((visibility("default"))) int glClearPixelLocalStorageuiEXT(void) {
    ALOGD("glClearPixelLocalStorageuiEXT() called");
    return 0;
}

/* Demangled: glColorMask */
extern "C" __attribute__((visibility("default"))) int glColorMask(void) {
    ALOGD("glColorMask() called");
    return 0;
}

/* Demangled: glCoverageOperationNV */
extern "C" __attribute__((visibility("default"))) int glCoverageOperationNV(void) {
    ALOGD("glCoverageOperationNV() called");
    return 0;
}

/* Demangled: glWaitSync */
extern "C" __attribute__((visibility("default"))) int glWaitSync(void) {
    ALOGD("glWaitSync() called");
    return 0;
}

/* Demangled: eglCreateWindowSurface */
extern "C" __attribute__((visibility("default"))) int eglCreateWindowSurface(void) {
    ALOGD("eglCreateWindowSurface() called");
    return 0;
}

/* Demangled: glBlendEquationSeparateiOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparateiOES(void) {
    ALOGD("glBlendEquationSeparateiOES() called");
    return 0;
}

/* Demangled: glGetTexParameterxv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterxv(void) {
    ALOGD("glGetTexParameterxv() called");
    return 0;
}

/* Demangled: glMatrixPushEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixPushEXT(void) {
    ALOGD("glMatrixPushEXT() called");
    return 0;
}

/* Demangled: glUniform1i64NV */
extern "C" __attribute__((visibility("default"))) int glUniform1i64NV(void) {
    ALOGD("glUniform1i64NV() called");
    return 0;
}

/* Demangled: glEndPerfQueryINTEL */
extern "C" __attribute__((visibility("default"))) int glEndPerfQueryINTEL(void) {
    ALOGD("glEndPerfQueryINTEL() called");
    return 0;
}

/* Demangled: glBeginQuery */
extern "C" __attribute__((visibility("default"))) int glBeginQuery(void) {
    ALOGD("glBeginQuery() called");
    return 0;
}

/* Demangled: glExtGetBufferPointervQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetBufferPointervQCOM(void) {
    ALOGD("glExtGetBufferPointervQCOM() called");
    return 0;
}

/* Demangled: glGetTexParameterIiv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIiv(void) {
    ALOGD("glGetTexParameterIiv() called");
    return 0;
}

/* Demangled: glGetTranslatedShaderSourceANGLE */
extern "C" __attribute__((visibility("default"))) int glGetTranslatedShaderSourceANGLE(void) {
    ALOGD("glGetTranslatedShaderSourceANGLE() called");
    return 0;
}

/* Demangled: glPathStencilFuncNV */
extern "C" __attribute__((visibility("default"))) int glPathStencilFuncNV(void) {
    ALOGD("glPathStencilFuncNV() called");
    return 0;
}

/* Demangled: glDeleteRenderbuffersOES */
extern "C" __attribute__((visibility("default"))) int glDeleteRenderbuffersOES(void) {
    ALOGD("glDeleteRenderbuffersOES() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DMultisampleIMG */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DMultisampleIMG(void) {
    ALOGD("glFramebufferTexture2DMultisampleIMG() called");
    return 0;
}

/* Demangled: glGetBufferParameteri64v */
extern "C" __attribute__((visibility("default"))) int glGetBufferParameteri64v(void) {
    ALOGD("glGetBufferParameteri64v() called");
    return 0;
}

/* Demangled: glStencilMask */
extern "C" __attribute__((visibility("default"))) int glStencilMask(void) {
    ALOGD("glStencilMask() called");
    return 0;
}

/* Demangled: glBindFragDataLocationIndexedEXT */
extern "C" __attribute__((visibility("default"))) int glBindFragDataLocationIndexedEXT(void) {
    ALOGD("glBindFragDataLocationIndexedEXT() called");
    return 0;
}

/* Demangled: glFramebufferTextureMultiviewOVR */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureMultiviewOVR(void) {
    ALOGD("glFramebufferTextureMultiviewOVR() called");
    return 0;
}

/* Demangled: glGetRenderbufferParameterivOES */
extern "C" __attribute__((visibility("default"))) int glGetRenderbufferParameterivOES(void) {
    ALOGD("glGetRenderbufferParameterivOES() called");
    return 0;
}

/* Demangled: glGetUniformLocation */
extern "C" __attribute__((visibility("default"))) int glGetUniformLocation(void) {
    ALOGD("glGetUniformLocation() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleNV */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleNV(void) {
    ALOGD("glRenderbufferStorageMultisampleNV() called");
    return 0;
}

/* Demangled: glExtGetProgramsQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetProgramsQCOM(void) {
    ALOGD("glExtGetProgramsQCOM() called");
    return 0;
}

/* Demangled: glGetShaderiv */
extern "C" __attribute__((visibility("default"))) int glGetShaderiv(void) {
    ALOGD("glGetShaderiv() called");
    return 0;
}

/* Demangled: glGetTexGenivOES */
extern "C" __attribute__((visibility("default"))) int glGetTexGenivOES(void) {
    ALOGD("glGetTexGenivOES() called");
    return 0;
}

/* Demangled: glIsTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glIsTransformFeedback(void) {
    ALOGD("glIsTransformFeedback() called");
    return 0;
}

/* Demangled: glMaterialxOES */
extern "C" __attribute__((visibility("default"))) int glMaterialxOES(void) {
    ALOGD("glMaterialxOES() called");
    return 0;
}

/* Demangled: glVertexAttrib2fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib2fv(void) {
    ALOGD("glVertexAttrib2fv() called");
    return 0;
}

/* Demangled: glGetTexGenxvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexGenxvOES(void) {
    ALOGD("glGetTexGenxvOES() called");
    return 0;
}

/* Demangled: glBindImageTexture */
extern "C" __attribute__((visibility("default"))) int glBindImageTexture(void) {
    ALOGD("glBindImageTexture() called");
    return 0;
}

/* Demangled: glBlendFunciEXT */
extern "C" __attribute__((visibility("default"))) int glBlendFunciEXT(void) {
    ALOGD("glBlendFunciEXT() called");
    return 0;
}

/* Demangled: glDrawBuffersIndexedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawBuffersIndexedEXT(void) {
    ALOGD("glDrawBuffersIndexedEXT() called");
    return 0;
}

/* Demangled: glGenQueriesEXT */
extern "C" __attribute__((visibility("default"))) int glGenQueriesEXT(void) {
    ALOGD("glGenQueriesEXT() called");
    return 0;
}

/* Demangled: eglSurfaceAttrib */
extern "C" __attribute__((visibility("default"))) int eglSurfaceAttrib(void) {
    ALOGD("eglSurfaceAttrib() called");
    return 0;
}

/* Demangled: glDepthRangex */
extern "C" __attribute__((visibility("default"))) int glDepthRangex(void) {
    ALOGD("glDepthRangex() called");
    return 0;
}

/* Demangled: glGenTextures */
extern "C" __attribute__((visibility("default"))) int glGenTextures(void) {
    ALOGD("glGenTextures() called");
    return 0;
}

/* Demangled: glLightx */
extern "C" __attribute__((visibility("default"))) int glLightx(void) {
    ALOGD("glLightx() called");
    return 0;
}

/* Demangled: glNormal3xOES */
extern "C" __attribute__((visibility("default"))) int glNormal3xOES(void) {
    ALOGD("glNormal3xOES() called");
    return 0;
}

/* Demangled: glProgramUniform1ui64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1ui64vNV(void) {
    ALOGD("glProgramUniform1ui64vNV() called");
    return 0;
}

/* Demangled: eglCreateNativeClientBufferANDROID */
extern "C" __attribute__((visibility("default"))) int eglCreateNativeClientBufferANDROID(void) {
    ALOGD("eglCreateNativeClientBufferANDROID() called");
    return 0;
}

/* Demangled: glVertexAttribDivisor */
extern "C" __attribute__((visibility("default"))) int glVertexAttribDivisor(void) {
    ALOGD("glVertexAttribDivisor() called");
    return 0;
}

/* Demangled: eglReleaseTexImage */
extern "C" __attribute__((visibility("default"))) int eglReleaseTexImage(void) {
    ALOGD("eglReleaseTexImage() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIuiv(void) {
    ALOGD("glGetSamplerParameterIuiv() called");
    return 0;
}

/* Demangled: glImportSemaphoreFdEXT */
extern "C" __attribute__((visibility("default"))) int glImportSemaphoreFdEXT(void) {
    ALOGD("glImportSemaphoreFdEXT() called");
    return 0;
}

/* Demangled: glSampleMaski */
extern "C" __attribute__((visibility("default"))) int glSampleMaski(void) {
    ALOGD("glSampleMaski() called");
    return 0;
}

/* Demangled: eglQueryStreamu64KHR */
extern "C" __attribute__((visibility("default"))) int eglQueryStreamu64KHR(void) {
    ALOGD("eglQueryStreamu64KHR() called");
    return 0;
}

/* Demangled: glDebugMessageControl */
extern "C" __attribute__((visibility("default"))) int glDebugMessageControl(void) {
    ALOGD("glDebugMessageControl() called");
    return 0;
}

/* Demangled: glProgramUniform1i64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1i64NV(void) {
    ALOGD("glProgramUniform1i64NV() called");
    return 0;
}

/* Demangled: glDebugMessageCallbackKHR */
extern "C" __attribute__((visibility("default"))) int glDebugMessageCallbackKHR(void) {
    ALOGD("glDebugMessageCallbackKHR() called");
    return 0;
}

/* Demangled: glIsFramebufferOES */
extern "C" __attribute__((visibility("default"))) int glIsFramebufferOES(void) {
    ALOGD("glIsFramebufferOES() called");
    return 0;
}

/* Demangled: trace_deinit() */
extern "C" __attribute__((visibility("default"))) int _Z12trace_deinitv(void) {
    ALOGD("_Z12trace_deinitv() called");
    return 0;
}

/* Demangled: glCoverFillPathInstancedNV */
extern "C" __attribute__((visibility("default"))) int glCoverFillPathInstancedNV(void) {
    ALOGD("glCoverFillPathInstancedNV() called");
    return 0;
}

/* Demangled: glDeleteProgramPipelinesEXT */
extern "C" __attribute__((visibility("default"))) int glDeleteProgramPipelinesEXT(void) {
    ALOGD("glDeleteProgramPipelinesEXT() called");
    return 0;
}

/* Demangled: glExtGetTexturesQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetTexturesQCOM(void) {
    ALOGD("glExtGetTexturesQCOM() called");
    return 0;
}

/* Demangled: glFramebufferTextureOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureOES(void) {
    ALOGD("glFramebufferTextureOES() called");
    return 0;
}

/* Demangled: glNamedBufferStorageExternalEXT */
extern "C" __attribute__((visibility("default"))) int glNamedBufferStorageExternalEXT(void) {
    ALOGD("glNamedBufferStorageExternalEXT() called");
    return 0;
}

/* Demangled: glProgramUniform2iEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2iEXT(void) {
    ALOGD("glProgramUniform2iEXT() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedNV */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedNV(void) {
    ALOGD("glDrawElementsInstancedNV() called");
    return 0;
}

/* Demangled: glEndPerfMonitorAMD */
extern "C" __attribute__((visibility("default"))) int glEndPerfMonitorAMD(void) {
    ALOGD("glEndPerfMonitorAMD() called");
    return 0;
}

/* Demangled: glGetFirstPerfQueryIdINTEL */
extern "C" __attribute__((visibility("default"))) int glGetFirstPerfQueryIdINTEL(void) {
    ALOGD("glGetFirstPerfQueryIdINTEL() called");
    return 0;
}

/* Demangled: glGetPerfQueryIdByNameINTEL */
extern "C" __attribute__((visibility("default"))) int glGetPerfQueryIdByNameINTEL(void) {
    ALOGD("glGetPerfQueryIdByNameINTEL() called");
    return 0;
}

/* Demangled: glProgramUniform2iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2iv(void) {
    ALOGD("glProgramUniform2iv() called");
    return 0;
}

/* Demangled: glRenderbufferStorageOES */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageOES(void) {
    ALOGD("glRenderbufferStorageOES() called");
    return 0;
}

/* Demangled: glTexCoord1bOES(signed char) */
extern "C" __attribute__((visibility("default"))) int _Z15glTexCoord1bOESa(void) {
    ALOGD("_Z15glTexCoord1bOESa() called");
    return 0;
}

/* Demangled: glDeleteShader */
extern "C" __attribute__((visibility("default"))) int glDeleteShader(void) {
    ALOGD("glDeleteShader() called");
    return 0;
}

/* Demangled: glProgramUniform1i64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1i64vNV(void) {
    ALOGD("glProgramUniform1i64vNV() called");
    return 0;
}

/* Demangled: glShadeModel */
extern "C" __attribute__((visibility("default"))) int glShadeModel(void) {
    ALOGD("glShadeModel() called");
    return 0;
}

/* Demangled: glEGLImageTargetRenderbufferStorageOES */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetRenderbufferStorageOES(void) {
    ALOGD("glEGLImageTargetRenderbufferStorageOES() called");
    return 0;
}

/* Demangled: glGenFramebuffersOES */
extern "C" __attribute__((visibility("default"))) int glGenFramebuffersOES(void) {
    ALOGD("glGenFramebuffersOES() called");
    return 0;
}

/* Demangled: glGetTextureSamplerHandleNV */
extern "C" __attribute__((visibility("default"))) int glGetTextureSamplerHandleNV(void) {
    ALOGD("glGetTextureSamplerHandleNV() called");
    return 0;
}

/* Demangled: glPointSizex */
extern "C" __attribute__((visibility("default"))) int glPointSizex(void) {
    ALOGD("glPointSizex() called");
    return 0;
}

/* Demangled: glProgramUniform2ui64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2ui64vNV(void) {
    ALOGD("glProgramUniform2ui64vNV() called");
    return 0;
}

/* Demangled: glSamplerParameterfv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterfv(void) {
    ALOGD("glSamplerParameterfv() called");
    return 0;
}

/* Demangled: glTexStorage3DMultisampleOES */
extern "C" __attribute__((visibility("default"))) int glTexStorage3DMultisampleOES(void) {
    ALOGD("glTexStorage3DMultisampleOES() called");
    return 0;
}

/* Demangled: glTexStorageMem2DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorageMem2DEXT(void) {
    ALOGD("glTexStorageMem2DEXT() called");
    return 0;
}

/* Demangled: glCompressedTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexSubImage3D(void) {
    ALOGD("glCompressedTexSubImage3D() called");
    return 0;
}

/* Demangled: glGenQueries */
extern "C" __attribute__((visibility("default"))) int glGenQueries(void) {
    ALOGD("glGenQueries() called");
    return 0;
}

/* Demangled: glGetFloatv */
extern "C" __attribute__((visibility("default"))) int glGetFloatv(void) {
    ALOGD("glGetFloatv() called");
    return 0;
}

/* Demangled: glSamplerParameterf */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterf(void) {
    ALOGD("glSamplerParameterf() called");
    return 0;
}

/* Demangled: glClientActiveTexture */
extern "C" __attribute__((visibility("default"))) int glClientActiveTexture(void) {
    ALOGD("glClientActiveTexture() called");
    return 0;
}

/* Demangled: glDeleteQueriesEXT */
extern "C" __attribute__((visibility("default"))) int glDeleteQueriesEXT(void) {
    ALOGD("glDeleteQueriesEXT() called");
    return 0;
}

/* Demangled: glGetUniformBlockIndex */
extern "C" __attribute__((visibility("default"))) int glGetUniformBlockIndex(void) {
    ALOGD("glGetUniformBlockIndex() called");
    return 0;
}

/* Demangled: glInvalidateSubFramebuffer */
extern "C" __attribute__((visibility("default"))) int glInvalidateSubFramebuffer(void) {
    ALOGD("glInvalidateSubFramebuffer() called");
    return 0;
}

/* Demangled: glMatrixLoadIdentityEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixLoadIdentityEXT(void) {
    ALOGD("glMatrixLoadIdentityEXT() called");
    return 0;
}

/* Demangled: glBlendBarrierNV */
extern "C" __attribute__((visibility("default"))) int glBlendBarrierNV(void) {
    ALOGD("glBlendBarrierNV() called");
    return 0;
}

/* Demangled: glPathGlyphsNV */
extern "C" __attribute__((visibility("default"))) int glPathGlyphsNV(void) {
    ALOGD("glPathGlyphsNV() called");
    return 0;
}

/* Demangled: glPrimitiveBoundingBoxOES */
extern "C" __attribute__((visibility("default"))) int glPrimitiveBoundingBoxOES(void) {
    ALOGD("glPrimitiveBoundingBoxOES() called");
    return 0;
}

/* Demangled: glActiveTexture */
extern "C" __attribute__((visibility("default"))) int glActiveTexture(void) {
    ALOGD("glActiveTexture() called");
    return 0;
}

/* Demangled: glSamplerParameteri */
extern "C" __attribute__((visibility("default"))) int glSamplerParameteri(void) {
    ALOGD("glSamplerParameteri() called");
    return 0;
}

/* Demangled: glViewportArrayvOES */
extern "C" __attribute__((visibility("default"))) int glViewportArrayvOES(void) {
    ALOGD("glViewportArrayvOES() called");
    return 0;
}

/* Demangled: glMatrixPopEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixPopEXT(void) {
    ALOGD("glMatrixPopEXT() called");
    return 0;
}

/* Demangled: eglCreateImage */
extern "C" __attribute__((visibility("default"))) int eglCreateImage(void) {
    ALOGD("eglCreateImage() called");
    return 0;
}

/* Demangled: glExtTexObjectStateOverrideiQCOM */
extern "C" __attribute__((visibility("default"))) int glExtTexObjectStateOverrideiQCOM(void) {
    ALOGD("glExtTexObjectStateOverrideiQCOM() called");
    return 0;
}

/* Demangled: glGetInternalformatSampleivNV */
extern "C" __attribute__((visibility("default"))) int glGetInternalformatSampleivNV(void) {
    ALOGD("glGetInternalformatSampleivNV() called");
    return 0;
}

/* Demangled: glGetnUniformuiv */
extern "C" __attribute__((visibility("default"))) int glGetnUniformuiv(void) {
    ALOGD("glGetnUniformuiv() called");
    return 0;
}

/* Demangled: glClearColorx */
extern "C" __attribute__((visibility("default"))) int glClearColorx(void) {
    ALOGD("glClearColorx() called");
    return 0;
}

/* Demangled: glFramebufferFetchBarrierEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferFetchBarrierEXT(void) {
    ALOGD("glFramebufferFetchBarrierEXT() called");
    return 0;
}

/* Demangled: glGetnUniformfv */
extern "C" __attribute__((visibility("default"))) int glGetnUniformfv(void) {
    ALOGD("glGetnUniformfv() called");
    return 0;
}

/* Demangled: glObjectPtrLabelKHR */
extern "C" __attribute__((visibility("default"))) int glObjectPtrLabelKHR(void) {
    ALOGD("glObjectPtrLabelKHR() called");
    return 0;
}

/* Demangled: glVertexAttribBinding */
extern "C" __attribute__((visibility("default"))) int glVertexAttribBinding(void) {
    ALOGD("glVertexAttribBinding() called");
    return 0;
}

/* Demangled: glProgramUniform2fEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2fEXT(void) {
    ALOGD("glProgramUniform2fEXT() called");
    return 0;
}

/* Demangled: glSampleCoveragex */
extern "C" __attribute__((visibility("default"))) int glSampleCoveragex(void) {
    ALOGD("glSampleCoveragex() called");
    return 0;
}

/* Demangled: glUniform3fv */
extern "C" __attribute__((visibility("default"))) int glUniform3fv(void) {
    ALOGD("glUniform3fv() called");
    return 0;
}

/* Demangled: glIsImageHandleResidentNV */
extern "C" __attribute__((visibility("default"))) int glIsImageHandleResidentNV(void) {
    ALOGD("glIsImageHandleResidentNV() called");
    return 0;
}

/* Demangled: glIsRenderbufferOES */
extern "C" __attribute__((visibility("default"))) int glIsRenderbufferOES(void) {
    ALOGD("glIsRenderbufferOES() called");
    return 0;
}

/* Demangled: glProgramUniform3ui64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3ui64vNV(void) {
    ALOGD("glProgramUniform3ui64vNV() called");
    return 0;
}

/* Demangled: glUniform1ui64NV */
extern "C" __attribute__((visibility("default"))) int glUniform1ui64NV(void) {
    ALOGD("glUniform1ui64NV() called");
    return 0;
}

/* Demangled: eglLockSurfaceKHR */
extern "C" __attribute__((visibility("default"))) int eglLockSurfaceKHR(void) {
    ALOGD("eglLockSurfaceKHR() called");
    return 0;
}

/* Demangled: glUniform1ui */
extern "C" __attribute__((visibility("default"))) int glUniform1ui(void) {
    ALOGD("glUniform1ui() called");
    return 0;
}

/* Demangled: eglQuerySurface */
extern "C" __attribute__((visibility("default"))) int eglQuerySurface(void) {
    ALOGD("eglQuerySurface() called");
    return 0;
}

/* Demangled: glProgramUniform4ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4ui(void) {
    ALOGD("glProgramUniform4ui() called");
    return 0;
}

/* Demangled: eglGetConfigs */
extern "C" __attribute__((visibility("default"))) int eglGetConfigs(void) {
    ALOGD("eglGetConfigs() called");
    return 0;
}

/* Demangled: glDepthFunc */
extern "C" __attribute__((visibility("default"))) int glDepthFunc(void) {
    ALOGD("glDepthFunc() called");
    return 0;
}

/* Demangled: glFramebufferTexture2D */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2D(void) {
    ALOGD("glFramebufferTexture2D() called");
    return 0;
}

/* Demangled: glPathCommandsNV */
extern "C" __attribute__((visibility("default"))) int glPathCommandsNV(void) {
    ALOGD("glPathCommandsNV() called");
    return 0;
}

/* Demangled: glTexCoord4bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16glTexCoord4bvOESPKa(void) {
    ALOGD("_Z16glTexCoord4bvOESPKa() called");
    return 0;
}

/* Demangled: glGetObjectPtrLabel */
extern "C" __attribute__((visibility("default"))) int glGetObjectPtrLabel(void) {
    ALOGD("glGetObjectPtrLabel() called");
    return 0;
}

/* Demangled: glGetTexParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIivOES(void) {
    ALOGD("glGetTexParameterIivOES() called");
    return 0;
}

/* Demangled: glExtGetFramebuffersQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetFramebuffersQCOM(void) {
    ALOGD("glExtGetFramebuffersQCOM() called");
    return 0;
}

/* Demangled: glGetLightfv */
extern "C" __attribute__((visibility("default"))) int glGetLightfv(void) {
    ALOGD("glGetLightfv() called");
    return 0;
}

/* Demangled: glIsProgramPipeline */
extern "C" __attribute__((visibility("default"))) int glIsProgramPipeline(void) {
    ALOGD("glIsProgramPipeline() called");
    return 0;
}

/* Demangled: glProgramUniform1fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1fvEXT(void) {
    ALOGD("glProgramUniform1fvEXT() called");
    return 0;
}

/* Demangled: glProgramUniform2i64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2i64vNV(void) {
    ALOGD("glProgramUniform2i64vNV() called");
    return 0;
}

/* Demangled: glProgramUniform4uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4uiv(void) {
    ALOGD("glProgramUniform4uiv() called");
    return 0;
}

/* Demangled: glTextureStorageMem3DEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorageMem3DEXT(void) {
    ALOGD("glTextureStorageMem3DEXT() called");
    return 0;
}

/* Demangled: glUniformMatrix3x2fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3x2fv(void) {
    ALOGD("glUniformMatrix3x2fv() called");
    return 0;
}

/* Demangled: glUnmapBufferOES */
extern "C" __attribute__((visibility("default"))) int glUnmapBufferOES(void) {
    ALOGD("glUnmapBufferOES() called");
    return 0;
}

/* Demangled: glProgramUniform4iEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4iEXT(void) {
    ALOGD("glProgramUniform4iEXT() called");
    return 0;
}

/* Demangled: glGetTexEnvfv */
extern "C" __attribute__((visibility("default"))) int glGetTexEnvfv(void) {
    ALOGD("glGetTexEnvfv() called");
    return 0;
}

/* Demangled: glIsEnablediOES */
extern "C" __attribute__((visibility("default"))) int glIsEnablediOES(void) {
    ALOGD("glIsEnablediOES() called");
    return 0;
}

/* Demangled: glBlendBarrier */
extern "C" __attribute__((visibility("default"))) int glBlendBarrier(void) {
    ALOGD("glBlendBarrier() called");
    return 0;
}

/* Demangled: glProgramUniform4uiEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4uiEXT(void) {
    ALOGD("glProgramUniform4uiEXT() called");
    return 0;
}

/* Demangled: glTexImage2D */
extern "C" __attribute__((visibility("default"))) int glTexImage2D(void) {
    ALOGD("glTexImage2D() called");
    return 0;
}

/* Demangled: glDrawBuffers */
extern "C" __attribute__((visibility("default"))) int glDrawBuffers(void) {
    ALOGD("glDrawBuffers() called");
    return 0;
}

/* Demangled: glEGLImageTargetTexture2DOES */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetTexture2DOES(void) {
    ALOGD("glEGLImageTargetTexture2DOES() called");
    return 0;
}

/* Demangled: glEndTilingQCOM */
extern "C" __attribute__((visibility("default"))) int glEndTilingQCOM(void) {
    ALOGD("glEndTilingQCOM() called");
    return 0;
}

/* Demangled: glGetClipPlanexOES */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanexOES(void) {
    ALOGD("glGetClipPlanexOES() called");
    return 0;
}

/* Demangled: glGetQueryivEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryivEXT(void) {
    ALOGD("glGetQueryivEXT() called");
    return 0;
}

/* Demangled: glProgramUniform3uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3uiv(void) {
    ALOGD("glProgramUniform3uiv() called");
    return 0;
}

/* Demangled: glProgramUniform4ui64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4ui64vNV(void) {
    ALOGD("glProgramUniform4ui64vNV() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertex(void) {
    ALOGD("glDrawElementsBaseVertex() called");
    return 0;
}

/* Demangled: glEndQuery */
extern "C" __attribute__((visibility("default"))) int glEndQuery(void) {
    ALOGD("glEndQuery() called");
    return 0;
}

/* Demangled: glBindFragDataLocationEXT */
extern "C" __attribute__((visibility("default"))) int glBindFragDataLocationEXT(void) {
    ALOGD("glBindFragDataLocationEXT() called");
    return 0;
}

/* Demangled: eglGetSyncAttrib */
extern "C" __attribute__((visibility("default"))) int eglGetSyncAttrib(void) {
    ALOGD("eglGetSyncAttrib() called");
    return 0;
}

/* Demangled: glExtGetTexSubImageQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetTexSubImageQCOM(void) {
    ALOGD("glExtGetTexSubImageQCOM() called");
    return 0;
}

/* Demangled: glSamplerParameterIiv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIiv(void) {
    ALOGD("glSamplerParameterIiv() called");
    return 0;
}

/* Demangled: glDeletePerfQueryINTEL */
extern "C" __attribute__((visibility("default"))) int glDeletePerfQueryINTEL(void) {
    ALOGD("glDeletePerfQueryINTEL() called");
    return 0;
}

/* Demangled: glProgramUniform2uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2uiv(void) {
    ALOGD("glProgramUniform2uiv() called");
    return 0;
}

/* Demangled: glRasterSamplesEXT */
extern "C" __attribute__((visibility("default"))) int glRasterSamplesEXT(void) {
    ALOGD("glRasterSamplesEXT() called");
    return 0;
}

/* Demangled: glAttachShader */
extern "C" __attribute__((visibility("default"))) int glAttachShader(void) {
    ALOGD("glAttachShader() called");
    return 0;
}

/* Demangled: glPopMatrix */
extern "C" __attribute__((visibility("default"))) int glPopMatrix(void) {
    ALOGD("glPopMatrix() called");
    return 0;
}

/* Demangled: eglWaitNative */
extern "C" __attribute__((visibility("default"))) int eglWaitNative(void) {
    ALOGD("eglWaitNative() called");
    return 0;
}

/* Demangled: glClipPlanexIMG */
extern "C" __attribute__((visibility("default"))) int glClipPlanexIMG(void) {
    ALOGD("glClipPlanexIMG() called");
    return 0;
}

/* Demangled: glGenProgramPipelinesEXT */
extern "C" __attribute__((visibility("default"))) int glGenProgramPipelinesEXT(void) {
    ALOGD("glGenProgramPipelinesEXT() called");
    return 0;
}

/* Demangled: glGetProgramPipelineInfoLogEXT */
extern "C" __attribute__((visibility("default"))) int glGetProgramPipelineInfoLogEXT(void) {
    ALOGD("glGetProgramPipelineInfoLogEXT() called");
    return 0;
}

/* Demangled: glUniform2ui64NV */
extern "C" __attribute__((visibility("default"))) int glUniform2ui64NV(void) {
    ALOGD("glUniform2ui64NV() called");
    return 0;
}

/* Demangled: eglSwapBuffers */
extern "C" __attribute__((visibility("default"))) int eglSwapBuffers(void) {
    ALOGD("eglSwapBuffers() called");
    return 0;
}

/* Demangled: glGetBufferPointervOES */
extern "C" __attribute__((visibility("default"))) int glGetBufferPointervOES(void) {
    ALOGD("glGetBufferPointervOES() called");
    return 0;
}

/* Demangled: glGetPerfMonitorGroupStringAMD */
extern "C" __attribute__((visibility("default"))) int glGetPerfMonitorGroupStringAMD(void) {
    ALOGD("glGetPerfMonitorGroupStringAMD() called");
    return 0;
}

/* Demangled: glProgramUniform1uiv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1uiv(void) {
    ALOGD("glProgramUniform1uiv() called");
    return 0;
}

/* Demangled: glGetTexParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuivOES(void) {
    ALOGD("glGetTexParameterIuivOES() called");
    return 0;
}

/* Demangled: glProgramUniform4fEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4fEXT(void) {
    ALOGD("glProgramUniform4fEXT() called");
    return 0;
}

/* Demangled: glDisableClientState */
extern "C" __attribute__((visibility("default"))) int glDisableClientState(void) {
    ALOGD("glDisableClientState() called");
    return 0;
}

/* Demangled: glGetDebugMessageLog */
extern "C" __attribute__((visibility("default"))) int glGetDebugMessageLog(void) {
    ALOGD("glGetDebugMessageLog() called");
    return 0;
}

/* Demangled: glMaxShaderCompilerThreadsKHR */
extern "C" __attribute__((visibility("default"))) int glMaxShaderCompilerThreadsKHR(void) {
    ALOGD("glMaxShaderCompilerThreadsKHR() called");
    return 0;
}

/* Demangled: glEnableiOES */
extern "C" __attribute__((visibility("default"))) int glEnableiOES(void) {
    ALOGD("glEnableiOES() called");
    return 0;
}

/* Demangled: glQueryMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glQueryMatrixxOES(void) {
    ALOGD("glQueryMatrixxOES() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisample */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisample(void) {
    ALOGD("glRenderbufferStorageMultisample() called");
    return 0;
}

/* Demangled: glStartTilingQCOM */
extern "C" __attribute__((visibility("default"))) int glStartTilingQCOM(void) {
    ALOGD("glStartTilingQCOM() called");
    return 0;
}

/* Demangled: glAlphaFuncQCOM */
extern "C" __attribute__((visibility("default"))) int glAlphaFuncQCOM(void) {
    ALOGD("glAlphaFuncQCOM() called");
    return 0;
}

/* Demangled: glGetBooleanv */
extern "C" __attribute__((visibility("default"))) int glGetBooleanv(void) {
    ALOGD("glGetBooleanv() called");
    return 0;
}

/* Demangled: glObjectLabelKHR */
extern "C" __attribute__((visibility("default"))) int glObjectLabelKHR(void) {
    ALOGD("glObjectLabelKHR() called");
    return 0;
}

/* Demangled: glPolygonOffsetxOES */
extern "C" __attribute__((visibility("default"))) int glPolygonOffsetxOES(void) {
    ALOGD("glPolygonOffsetxOES() called");
    return 0;
}

/* Demangled: glProgramUniform3i64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3i64vNV(void) {
    ALOGD("glProgramUniform3i64vNV() called");
    return 0;
}

/* Demangled: eglDestroySurface */
extern "C" __attribute__((visibility("default"))) int eglDestroySurface(void) {
    ALOGD("eglDestroySurface() called");
    return 0;
}

/* Demangled: glDrawArraysInstancedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedEXT(void) {
    ALOGD("glDrawArraysInstancedEXT() called");
    return 0;
}

/* Demangled: glGetVertexAttribfv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribfv(void) {
    ALOGD("glGetVertexAttribfv() called");
    return 0;
}

/* Demangled: glGetnUniformivKHR */
extern "C" __attribute__((visibility("default"))) int glGetnUniformivKHR(void) {
    ALOGD("glGetnUniformivKHR() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3x2fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3x2fv(void) {
    ALOGD("glProgramUniformMatrix3x2fv() called");
    return 0;
}

/* Demangled: glVertexAttrib1fv */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib1fv(void) {
    ALOGD("glVertexAttrib1fv() called");
    return 0;
}

/* Demangled: glIsSyncAPPLE */
extern "C" __attribute__((visibility("default"))) int glIsSyncAPPLE(void) {
    ALOGD("glIsSyncAPPLE() called");
    return 0;
}

/* Demangled: eglSwapBuffersWithDamageKHR */
extern "C" __attribute__((visibility("default"))) int eglSwapBuffersWithDamageKHR(void) {
    ALOGD("eglSwapBuffersWithDamageKHR() called");
    return 0;
}

/* Demangled: glGetObjectPtrLabelKHR */
extern "C" __attribute__((visibility("default"))) int glGetObjectPtrLabelKHR(void) {
    ALOGD("glGetObjectPtrLabelKHR() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIivOES */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIivOES(void) {
    ALOGD("glGetSamplerParameterIivOES() called");
    return 0;
}

/* Demangled: glTexBuffer */
extern "C" __attribute__((visibility("default"))) int glTexBuffer(void) {
    ALOGD("glTexBuffer() called");
    return 0;
}

/* Demangled: glCoverageModulationNV */
extern "C" __attribute__((visibility("default"))) int glCoverageModulationNV(void) {
    ALOGD("glCoverageModulationNV() called");
    return 0;
}

/* Demangled: glDisableiEXT */
extern "C" __attribute__((visibility("default"))) int glDisableiEXT(void) {
    ALOGD("glDisableiEXT() called");
    return 0;
}

/* Demangled: glGetProgramResourceLocationIndexEXT */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceLocationIndexEXT(void) {
    ALOGD("glGetProgramResourceLocationIndexEXT() called");
    return 0;
}

/* Demangled: glTexParameterIuivOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuivOES(void) {
    ALOGD("glTexParameterIuivOES() called");
    return 0;
}

/* Demangled: glTranslatef */
extern "C" __attribute__((visibility("default"))) int glTranslatef(void) {
    ALOGD("glTranslatef() called");
    return 0;
}

/* Demangled: glGetQueryiv */
extern "C" __attribute__((visibility("default"))) int glGetQueryiv(void) {
    ALOGD("glGetQueryiv() called");
    return 0;
}

/* Demangled: glPathStencilDepthOffsetNV */
extern "C" __attribute__((visibility("default"))) int glPathStencilDepthOffsetNV(void) {
    ALOGD("glPathStencilDepthOffsetNV() called");
    return 0;
}

/* Demangled: glUniform1f */
extern "C" __attribute__((visibility("default"))) int glUniform1f(void) {
    ALOGD("glUniform1f() called");
    return 0;
}

/* Demangled: glDepthRangeArrayfvOES */
extern "C" __attribute__((visibility("default"))) int glDepthRangeArrayfvOES(void) {
    ALOGD("glDepthRangeArrayfvOES() called");
    return 0;
}

/* Demangled: glEnablei */
extern "C" __attribute__((visibility("default"))) int glEnablei(void) {
    ALOGD("glEnablei() called");
    return 0;
}

/* Demangled: glTexGenfvOES */
extern "C" __attribute__((visibility("default"))) int glTexGenfvOES(void) {
    ALOGD("glTexGenfvOES() called");
    return 0;
}

/* Demangled: glViewportPositionWScaleNV */
extern "C" __attribute__((visibility("default"))) int glViewportPositionWScaleNV(void) {
    ALOGD("glViewportPositionWScaleNV() called");
    return 0;
}

/* Demangled: eglCreatePbufferSurface */
extern "C" __attribute__((visibility("default"))) int eglCreatePbufferSurface(void) {
    ALOGD("eglCreatePbufferSurface() called");
    return 0;
}

/* Demangled: glDrawTexsvOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexsvOES(void) {
    ALOGD("glDrawTexsvOES() called");
    return 0;
}

/* Demangled: glFenceSyncAPPLE */
extern "C" __attribute__((visibility("default"))) int glFenceSyncAPPLE(void) {
    ALOGD("glFenceSyncAPPLE() called");
    return 0;
}

/* Demangled: glTextureFoveationParametersQCOM */
extern "C" __attribute__((visibility("default"))) int glTextureFoveationParametersQCOM(void) {
    ALOGD("glTextureFoveationParametersQCOM() called");
    return 0;
}

/* Demangled: glGetUniformiv */
extern "C" __attribute__((visibility("default"))) int glGetUniformiv(void) {
    ALOGD("glGetUniformiv() called");
    return 0;
}

/* Demangled: glGetVertexAttribIiv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribIiv(void) {
    ALOGD("glGetVertexAttribIiv() called");
    return 0;
}

/* Demangled: glUniform1i */
extern "C" __attribute__((visibility("default"))) int glUniform1i(void) {
    ALOGD("glUniform1i() called");
    return 0;
}

/* Demangled: glVertex4bOES(signed char, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z13glVertex4bOESaaa(void) {
    ALOGD("_Z13glVertex4bOESaaa() called");
    return 0;
}

/* Demangled: glGetVertexAttribIuiv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribIuiv(void) {
    ALOGD("glGetVertexAttribIuiv() called");
    return 0;
}

/* Demangled: glProgramUniform1iv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1iv(void) {
    ALOGD("glProgramUniform1iv() called");
    return 0;
}

/* Demangled: glFlush */
extern "C" __attribute__((visibility("default"))) int glFlush(void) {
    ALOGD("glFlush() called");
    return 0;
}

/* Demangled: glIsEnablediNV */
extern "C" __attribute__((visibility("default"))) int glIsEnablediNV(void) {
    ALOGD("glIsEnablediNV() called");
    return 0;
}

/* Demangled: glPathParameteriNV */
extern "C" __attribute__((visibility("default"))) int glPathParameteriNV(void) {
    ALOGD("glPathParameteriNV() called");
    return 0;
}

/* Demangled: glPopDebugGroupKHR */
extern "C" __attribute__((visibility("default"))) int glPopDebugGroupKHR(void) {
    ALOGD("glPopDebugGroupKHR() called");
    return 0;
}

/* Demangled: eglInitialize */
extern "C" __attribute__((visibility("default"))) int eglInitialize(void) {
    ALOGD("eglInitialize() called");
    return 0;
}

/* Demangled: glFogf */
extern "C" __attribute__((visibility("default"))) int glFogf(void) {
    ALOGD("glFogf() called");
    return 0;
}

/* Demangled: glGetGraphicsResetStatusEXT */
extern "C" __attribute__((visibility("default"))) int glGetGraphicsResetStatusEXT(void) {
    ALOGD("glGetGraphicsResetStatusEXT() called");
    return 0;
}

/* Demangled: glGetLightxv */
extern "C" __attribute__((visibility("default"))) int glGetLightxv(void) {
    ALOGD("glGetLightxv() called");
    return 0;
}

/* Demangled: glGetQueryObjectui64vEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectui64vEXT(void) {
    ALOGD("glGetQueryObjectui64vEXT() called");
    return 0;
}

/* Demangled: glMatrixFrustumEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixFrustumEXT(void) {
    ALOGD("glMatrixFrustumEXT() called");
    return 0;
}

/* Demangled: glPolygonModeNV */
extern "C" __attribute__((visibility("default"))) int glPolygonModeNV(void) {
    ALOGD("glPolygonModeNV() called");
    return 0;
}

/* Demangled: glDeleteBuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteBuffers(void) {
    ALOGD("glDeleteBuffers() called");
    return 0;
}

/* Demangled: glGetMaterialxvOES */
extern "C" __attribute__((visibility("default"))) int glGetMaterialxvOES(void) {
    ALOGD("glGetMaterialxvOES() called");
    return 0;
}

/* Demangled: glGetShaderInfoLog */
extern "C" __attribute__((visibility("default"))) int glGetShaderInfoLog(void) {
    ALOGD("glGetShaderInfoLog() called");
    return 0;
}

/* Demangled: glUniform3i64NV */
extern "C" __attribute__((visibility("default"))) int glUniform3i64NV(void) {
    ALOGD("glUniform3i64NV() called");
    return 0;
}

/* Demangled: trace_init() */
extern "C" __attribute__((visibility("default"))) int _Z10trace_initv(void) {
    ALOGD("_Z10trace_initv() called");
    return 0;
}

/* Demangled: eglWaitClient */
extern "C" __attribute__((visibility("default"))) int eglWaitClient(void) {
    ALOGD("eglWaitClient() called");
    return 0;
}

/* Demangled: glGetLightxvOES */
extern "C" __attribute__((visibility("default"))) int glGetLightxvOES(void) {
    ALOGD("glGetLightxvOES() called");
    return 0;
}

/* Demangled: glGetTexEnvxv */
extern "C" __attribute__((visibility("default"))) int glGetTexEnvxv(void) {
    ALOGD("glGetTexEnvxv() called");
    return 0;
}

/* Demangled: glIsProgram */
extern "C" __attribute__((visibility("default"))) int glIsProgram(void) {
    ALOGD("glIsProgram() called");
    return 0;
}

/* Demangled: glGetPathDashArrayNV */
extern "C" __attribute__((visibility("default"))) int glGetPathDashArrayNV(void) {
    ALOGD("glGetPathDashArrayNV() called");
    return 0;
}

/* Demangled: glGetProgramPipelineInfoLog */
extern "C" __attribute__((visibility("default"))) int glGetProgramPipelineInfoLog(void) {
    ALOGD("glGetProgramPipelineInfoLog() called");
    return 0;
}

/* Demangled: glStencilStrokePathInstancedNV */
extern "C" __attribute__((visibility("default"))) int glStencilStrokePathInstancedNV(void) {
    ALOGD("glStencilStrokePathInstancedNV() called");
    return 0;
}

/* Demangled: glUniformMatrix3x2fvNV */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3x2fvNV(void) {
    ALOGD("glUniformMatrix3x2fvNV() called");
    return 0;
}

/* Demangled: glActiveShaderProgramEXT */
extern "C" __attribute__((visibility("default"))) int glActiveShaderProgramEXT(void) {
    ALOGD("glActiveShaderProgramEXT() called");
    return 0;
}

/* Demangled: glGetString */
extern "C" __attribute__((visibility("default"))) int glGetString(void) {
    ALOGD("glGetString() called");
    return 0;
}

/* Demangled: glGetSyncivAPPLE */
extern "C" __attribute__((visibility("default"))) int glGetSyncivAPPLE(void) {
    ALOGD("glGetSyncivAPPLE() called");
    return 0;
}

/* Demangled: eglGetConfigAttrib */
extern "C" __attribute__((visibility("default"))) int eglGetConfigAttrib(void) {
    ALOGD("eglGetConfigAttrib() called");
    return 0;
}

/* Demangled: eglWaitGL */
extern "C" __attribute__((visibility("default"))) int eglWaitGL(void) {
    ALOGD("eglWaitGL() called");
    return 0;
}

/* Demangled: glActiveShaderProgram */
extern "C" __attribute__((visibility("default"))) int glActiveShaderProgram(void) {
    ALOGD("glActiveShaderProgram() called");
    return 0;
}

/* Demangled: glCopyImageSubData */
extern "C" __attribute__((visibility("default"))) int glCopyImageSubData(void) {
    ALOGD("glCopyImageSubData() called");
    return 0;
}

/* Demangled: glDeleteFramebuffersOES */
extern "C" __attribute__((visibility("default"))) int glDeleteFramebuffersOES(void) {
    ALOGD("glDeleteFramebuffersOES() called");
    return 0;
}

/* Demangled: glDisableVertexAttribArray */
extern "C" __attribute__((visibility("default"))) int glDisableVertexAttribArray(void) {
    ALOGD("glDisableVertexAttribArray() called");
    return 0;
}

/* Demangled: glGetSamplerParameterIiv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterIiv(void) {
    ALOGD("glGetSamplerParameterIiv() called");
    return 0;
}

/* Demangled: glNormalPointer */
extern "C" __attribute__((visibility("default"))) int glNormalPointer(void) {
    ALOGD("glNormalPointer() called");
    return 0;
}

/* Demangled: glPointParameterxOES */
extern "C" __attribute__((visibility("default"))) int glPointParameterxOES(void) {
    ALOGD("glPointParameterxOES() called");
    return 0;
}

/* Demangled: glEnableVertexAttribArray */
extern "C" __attribute__((visibility("default"))) int glEnableVertexAttribArray(void) {
    ALOGD("glEnableVertexAttribArray() called");
    return 0;
}

/* Demangled: glInvalidateFramebuffer */
extern "C" __attribute__((visibility("default"))) int glInvalidateFramebuffer(void) {
    ALOGD("glInvalidateFramebuffer() called");
    return 0;
}

/* Demangled: glProgramUniform1uivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1uivEXT(void) {
    ALOGD("glProgramUniform1uivEXT() called");
    return 0;
}

/* Demangled: glUniformMatrix2x4fvNV */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2x4fvNV(void) {
    ALOGD("glUniformMatrix2x4fvNV() called");
    return 0;
}

/* Demangled: glGetShaderPrecisionFormat */
extern "C" __attribute__((visibility("default"))) int glGetShaderPrecisionFormat(void) {
    ALOGD("glGetShaderPrecisionFormat() called");
    return 0;
}

/* Demangled: glGenVertexArrays */
extern "C" __attribute__((visibility("default"))) int glGenVertexArrays(void) {
    ALOGD("glGenVertexArrays() called");
    return 0;
}

/* Demangled: glGetProgramResourceIndex */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceIndex(void) {
    ALOGD("glGetProgramResourceIndex() called");
    return 0;
}

/* Demangled: glGetQueryObjectuiv */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectuiv(void) {
    ALOGD("glGetQueryObjectuiv() called");
    return 0;
}

/* Demangled: glLightModelxvOES */
extern "C" __attribute__((visibility("default"))) int glLightModelxvOES(void) {
    ALOGD("glLightModelxvOES() called");
    return 0;
}

/* Demangled: glTexImage3D */
extern "C" __attribute__((visibility("default"))) int glTexImage3D(void) {
    ALOGD("glTexImage3D() called");
    return 0;
}

/* Demangled: glUniform2fv */
extern "C" __attribute__((visibility("default"))) int glUniform2fv(void) {
    ALOGD("glUniform2fv() called");
    return 0;
}

/* Demangled: glProgramUniformHandleui64vIMG */
extern "C" __attribute__((visibility("default"))) int glProgramUniformHandleui64vIMG(void) {
    ALOGD("glProgramUniformHandleui64vIMG() called");
    return 0;
}

/* Demangled: glSubpixelPrecisionBiasNV */
extern "C" __attribute__((visibility("default"))) int glSubpixelPrecisionBiasNV(void) {
    ALOGD("glSubpixelPrecisionBiasNV() called");
    return 0;
}

/* Demangled: glTranslatex */
extern "C" __attribute__((visibility("default"))) int glTranslatex(void) {
    ALOGD("glTranslatex() called");
    return 0;
}

/* Demangled: eglGetError */
extern "C" __attribute__((visibility("default"))) int eglGetError(void) {
    ALOGD("eglGetError() called");
    return 0;
}

/* Demangled: glDeleteProgramPipelines */
extern "C" __attribute__((visibility("default"))) int glDeleteProgramPipelines(void) {
    ALOGD("glDeleteProgramPipelines() called");
    return 0;
}

/* Demangled: glGetTexParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameteriv(void) {
    ALOGD("glGetTexParameteriv() called");
    return 0;
}

/* Demangled: glMatrixMultfEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixMultfEXT(void) {
    ALOGD("glMatrixMultfEXT() called");
    return 0;
}

/* Demangled: glCurrentPaletteMatrixOES */
extern "C" __attribute__((visibility("default"))) int glCurrentPaletteMatrixOES(void) {
    ALOGD("glCurrentPaletteMatrixOES() called");
    return 0;
}

/* Demangled: glProgramUniform3ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3ui(void) {
    ALOGD("glProgramUniform3ui() called");
    return 0;
}

/* Demangled: glUniform2ui64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform2ui64vNV(void) {
    ALOGD("glUniform2ui64vNV() called");
    return 0;
}

/* Demangled: trace_process_init() */
extern "C" __attribute__((visibility("default"))) int _Z18trace_process_initv(void) {
    ALOGD("_Z18trace_process_initv() called");
    return 0;
}

/* Demangled: glGetImageHandleNV */
extern "C" __attribute__((visibility("default"))) int glGetImageHandleNV(void) {
    ALOGD("glGetImageHandleNV() called");
    return 0;
}

/* Demangled: glGetTexParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuiv(void) {
    ALOGD("glGetTexParameterIuiv() called");
    return 0;
}

/* Demangled: glPolygonOffset */
extern "C" __attribute__((visibility("default"))) int glPolygonOffset(void) {
    ALOGD("glPolygonOffset() called");
    return 0;
}

/* Demangled: glProgramUniform3i64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3i64NV(void) {
    ALOGD("glProgramUniform3i64NV() called");
    return 0;
}

/* Demangled: glScissorIndexedvOES */
extern "C" __attribute__((visibility("default"))) int glScissorIndexedvOES(void) {
    ALOGD("glScissorIndexedvOES() called");
    return 0;
}

/* Demangled: glDrawTexfvOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexfvOES(void) {
    ALOGD("glDrawTexfvOES() called");
    return 0;
}

/* Demangled: glGetProgramPipelineivEXT */
extern "C" __attribute__((visibility("default"))) int glGetProgramPipelineivEXT(void) {
    ALOGD("glGetProgramPipelineivEXT() called");
    return 0;
}

/* Demangled: glMultiDrawElementsEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawElementsEXT(void) {
    ALOGD("glMultiDrawElementsEXT() called");
    return 0;
}

/* Demangled: eglStreamConsumerReleaseKHR */
extern "C" __attribute__((visibility("default"))) int eglStreamConsumerReleaseKHR(void) {
    ALOGD("eglStreamConsumerReleaseKHR() called");
    return 0;
}

/* Demangled: glFrontFace */
extern "C" __attribute__((visibility("default"))) int glFrontFace(void) {
    ALOGD("glFrontFace() called");
    return 0;
}

/* Demangled: glGetStringi */
extern "C" __attribute__((visibility("default"))) int glGetStringi(void) {
    ALOGD("glGetStringi() called");
    return 0;
}

/* Demangled: glDrawArraysInstancedNV */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedNV(void) {
    ALOGD("glDrawArraysInstancedNV() called");
    return 0;
}

/* Demangled: glInterpolatePathsNV */
extern "C" __attribute__((visibility("default"))) int glInterpolatePathsNV(void) {
    ALOGD("glInterpolatePathsNV() called");
    return 0;
}

/* Demangled: glObjectLabel */
extern "C" __attribute__((visibility("default"))) int glObjectLabel(void) {
    ALOGD("glObjectLabel() called");
    return 0;
}

/* Demangled: glTexBufferRange */
extern "C" __attribute__((visibility("default"))) int glTexBufferRange(void) {
    ALOGD("glTexBufferRange() called");
    return 0;
}

/* Demangled: glTexStorage2D */
extern "C" __attribute__((visibility("default"))) int glTexStorage2D(void) {
    ALOGD("glTexStorage2D() called");
    return 0;
}

/* Demangled: glExtGetBuffersQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetBuffersQCOM(void) {
    ALOGD("glExtGetBuffersQCOM() called");
    return 0;
}

/* Demangled: glGetActiveAttrib */
extern "C" __attribute__((visibility("default"))) int glGetActiveAttrib(void) {
    ALOGD("glGetActiveAttrib() called");
    return 0;
}

/* Demangled: glCreateShader */
extern "C" __attribute__((visibility("default"))) int glCreateShader(void) {
    ALOGD("glCreateShader() called");
    return 0;
}

/* Demangled: glDrawArraysIndirect */
extern "C" __attribute__((visibility("default"))) int glDrawArraysIndirect(void) {
    ALOGD("glDrawArraysIndirect() called");
    return 0;
}

/* Demangled: glFogx */
extern "C" __attribute__((visibility("default"))) int glFogx(void) {
    ALOGD("glFogx() called");
    return 0;
}

/* Demangled: glIsPathNV */
extern "C" __attribute__((visibility("default"))) int glIsPathNV(void) {
    ALOGD("glIsPathNV() called");
    return 0;
}

/* Demangled: glUniformMatrix2x4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2x4fv(void) {
    ALOGD("glUniformMatrix2x4fv() called");
    return 0;
}

/* Demangled: eglCreatePixmapSurface */
extern "C" __attribute__((visibility("default"))) int eglCreatePixmapSurface(void) {
    ALOGD("eglCreatePixmapSurface() called");
    return 0;
}

/* Demangled: glMatrixMultdEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixMultdEXT(void) {
    ALOGD("glMatrixMultdEXT() called");
    return 0;
}

/* Demangled: glPathCoordsNV */
extern "C" __attribute__((visibility("default"))) int glPathCoordsNV(void) {
    ALOGD("glPathCoordsNV() called");
    return 0;
}

/* Demangled: glUniformMatrix4x2fvNV */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4x2fvNV(void) {
    ALOGD("glUniformMatrix4x2fvNV() called");
    return 0;
}

/* Demangled: glVertex2bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14glVertex2bvOESPKa(void) {
    ALOGD("_Z14glVertex2bvOESPKa() called");
    return 0;
}

/* Demangled: glDeleteFencesNV */
extern "C" __attribute__((visibility("default"))) int glDeleteFencesNV(void) {
    ALOGD("glDeleteFencesNV() called");
    return 0;
}

/* Demangled: glDebugMessageInsertKHR */
extern "C" __attribute__((visibility("default"))) int glDebugMessageInsertKHR(void) {
    ALOGD("glDebugMessageInsertKHR() called");
    return 0;
}

/* Demangled: glEndTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glEndTransformFeedback(void) {
    ALOGD("glEndTransformFeedback() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleANGLE */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleANGLE(void) {
    ALOGD("glRenderbufferStorageMultisampleANGLE() called");
    return 0;
}

/* Demangled: glSampleCoveragexOES */
extern "C" __attribute__((visibility("default"))) int glSampleCoveragexOES(void) {
    ALOGD("glSampleCoveragexOES() called");
    return 0;
}

/* Demangled: glUniform3ui64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform3ui64vNV(void) {
    ALOGD("glUniform3ui64vNV() called");
    return 0;
}

/* Demangled: glBlendFunciOES */
extern "C" __attribute__((visibility("default"))) int glBlendFunciOES(void) {
    ALOGD("glBlendFunciOES() called");
    return 0;
}

/* Demangled: glClipPlanef */
extern "C" __attribute__((visibility("default"))) int glClipPlanef(void) {
    ALOGD("glClipPlanef() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertexEXT(void) {
    ALOGD("glDrawElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: glProgramUniform2uivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2uivEXT(void) {
    ALOGD("glProgramUniform2uivEXT() called");
    return 0;
}

/* Demangled: glUniform4iv */
extern "C" __attribute__((visibility("default"))) int glUniform4iv(void) {
    ALOGD("glUniform4iv() called");
    return 0;
}

/* Demangled: glUniformMatrix3x4fvNV */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix3x4fvNV(void) {
    ALOGD("glUniformMatrix3x4fvNV() called");
    return 0;
}

/* Demangled: glMultMatrixf */
extern "C" __attribute__((visibility("default"))) int glMultMatrixf(void) {
    ALOGD("glMultMatrixf() called");
    return 0;
}

/* Demangled: glCopyImageSubDataEXT */
extern "C" __attribute__((visibility("default"))) int glCopyImageSubDataEXT(void) {
    ALOGD("glCopyImageSubDataEXT() called");
    return 0;
}

/* Demangled: glClearTexSubImageEXT */
extern "C" __attribute__((visibility("default"))) int glClearTexSubImageEXT(void) {
    ALOGD("glClearTexSubImageEXT() called");
    return 0;
}

/* Demangled: glExtIsProgramBinaryQCOM */
extern "C" __attribute__((visibility("default"))) int glExtIsProgramBinaryQCOM(void) {
    ALOGD("glExtIsProgramBinaryQCOM() called");
    return 0;
}

/* Demangled: glPathGlyphRangeNV */
extern "C" __attribute__((visibility("default"))) int glPathGlyphRangeNV(void) {
    ALOGD("glPathGlyphRangeNV() called");
    return 0;
}

/* Demangled: glProgramUniform1uiEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1uiEXT(void) {
    ALOGD("glProgramUniform1uiEXT() called");
    return 0;
}

/* Demangled: glScissorIndexedNV */
extern "C" __attribute__((visibility("default"))) int glScissorIndexedNV(void) {
    ALOGD("glScissorIndexedNV() called");
    return 0;
}

/* Demangled: glStencilThenCoverFillPathInstancedNV */
extern "C" __attribute__((visibility("default"))) int glStencilThenCoverFillPathInstancedNV(void) {
    ALOGD("glStencilThenCoverFillPathInstancedNV() called");
    return 0;
}

/* Demangled: glDebugMessageCallback */
extern "C" __attribute__((visibility("default"))) int glDebugMessageCallback(void) {
    ALOGD("glDebugMessageCallback() called");
    return 0;
}

/* Demangled: glGetActiveUniformsiv */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniformsiv(void) {
    ALOGD("glGetActiveUniformsiv() called");
    return 0;
}

/* Demangled: glMaterialfv */
extern "C" __attribute__((visibility("default"))) int glMaterialfv(void) {
    ALOGD("glMaterialfv() called");
    return 0;
}

/* Demangled: glIsPointInFillPathNV */
extern "C" __attribute__((visibility("default"))) int glIsPointInFillPathNV(void) {
    ALOGD("glIsPointInFillPathNV() called");
    return 0;
}

/* Demangled: glProgramParameteriEXT */
extern "C" __attribute__((visibility("default"))) int glProgramParameteriEXT(void) {
    ALOGD("glProgramParameteriEXT() called");
    return 0;
}

/* Demangled: glUniform2f */
extern "C" __attribute__((visibility("default"))) int glUniform2f(void) {
    ALOGD("glUniform2f() called");
    return 0;
}

/* Demangled: glWaitSemaphoreEXT */
extern "C" __attribute__((visibility("default"))) int glWaitSemaphoreEXT(void) {
    ALOGD("glWaitSemaphoreEXT() called");
    return 0;
}

/* Demangled: eglStreamConsumerGLTextureExternalKHR */
extern "C" __attribute__((visibility("default"))) int eglStreamConsumerGLTextureExternalKHR(void) {
    ALOGD("eglStreamConsumerGLTextureExternalKHR() called");
    return 0;
}

/* Demangled: glBindTexture */
extern "C" __attribute__((visibility("default"))) int glBindTexture(void) {
    ALOGD("glBindTexture() called");
    return 0;
}

/* Demangled: glGetQueryObjectivEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjectivEXT(void) {
    ALOGD("glGetQueryObjectivEXT() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3x2fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3x2fvEXT(void) {
    ALOGD("glProgramUniformMatrix3x2fvEXT() called");
    return 0;
}

/* Demangled: glBeginQueryEXT */
extern "C" __attribute__((visibility("default"))) int glBeginQueryEXT(void) {
    ALOGD("glBeginQueryEXT() called");
    return 0;
}

/* Demangled: glBlendFuncSeparateiEXT */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparateiEXT(void) {
    ALOGD("glBlendFuncSeparateiEXT() called");
    return 0;
}

/* Demangled: glClearDepthf */
extern "C" __attribute__((visibility("default"))) int glClearDepthf(void) {
    ALOGD("glClearDepthf() called");
    return 0;
}

/* Demangled: glClearStencil */
extern "C" __attribute__((visibility("default"))) int glClearStencil(void) {
    ALOGD("glClearStencil() called");
    return 0;
}

/* Demangled: glTransformPathNV */
extern "C" __attribute__((visibility("default"))) int glTransformPathNV(void) {
    ALOGD("glTransformPathNV() called");
    return 0;
}

/* Demangled: glUniform2i */
extern "C" __attribute__((visibility("default"))) int glUniform2i(void) {
    ALOGD("glUniform2i() called");
    return 0;
}

/* Demangled: glUniform4ui64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform4ui64vNV(void) {
    ALOGD("glUniform4ui64vNV() called");
    return 0;
}

/* Demangled: glBindAttribLocation */
extern "C" __attribute__((visibility("default"))) int glBindAttribLocation(void) {
    ALOGD("glBindAttribLocation() called");
    return 0;
}

/* Demangled: glBlendEquationSeparateOES */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparateOES(void) {
    ALOGD("glBlendEquationSeparateOES() called");
    return 0;
}

/* Demangled: glFramebufferTextureLayer */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureLayer(void) {
    ALOGD("glFramebufferTextureLayer() called");
    return 0;
}

/* Demangled: glMaterialxvOES */
extern "C" __attribute__((visibility("default"))) int glMaterialxvOES(void) {
    ALOGD("glMaterialxvOES() called");
    return 0;
}

/* Demangled: glProgramUniform2ivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2ivEXT(void) {
    ALOGD("glProgramUniform2ivEXT() called");
    return 0;
}

/* Demangled: glMultiDrawElementsBaseVertexOES(unsigned int, int const*, unsigned int, void const* const*, int, int const*) */
extern "C" __attribute__((visibility("default"))) int _Z32glMultiDrawElementsBaseVertexOESjPKijPKPKviS0_(void) {
    ALOGD("_Z32glMultiDrawElementsBaseVertexOESjPKijPKPKviS0_() called");
    return 0;
}

/* Demangled: glGetPerfQueryInfoINTEL */
extern "C" __attribute__((visibility("default"))) int glGetPerfQueryInfoINTEL(void) {
    ALOGD("glGetPerfQueryInfoINTEL() called");
    return 0;
}

/* Demangled: glUniform3ui64NV */
extern "C" __attribute__((visibility("default"))) int glUniform3ui64NV(void) {
    ALOGD("glUniform3ui64NV() called");
    return 0;
}

/* Demangled: glFramebufferTextureLayerDownsampleIMG */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureLayerDownsampleIMG(void) {
    ALOGD("glFramebufferTextureLayerDownsampleIMG() called");
    return 0;
}

/* Demangled: glIsSemaphoreEXT */
extern "C" __attribute__((visibility("default"))) int glIsSemaphoreEXT(void) {
    ALOGD("glIsSemaphoreEXT() called");
    return 0;
}

/* Demangled: glPauseTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glPauseTransformFeedback(void) {
    ALOGD("glPauseTransformFeedback() called");
    return 0;
}

/* Demangled: glProgramUniform3fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3fvEXT(void) {
    ALOGD("glProgramUniform3fvEXT() called");
    return 0;
}

/* Demangled: glDeletePathsNV */
extern "C" __attribute__((visibility("default"))) int glDeletePathsNV(void) {
    ALOGD("glDeletePathsNV() called");
    return 0;
}

/* Demangled: glGetSynciv */
extern "C" __attribute__((visibility("default"))) int glGetSynciv(void) {
    ALOGD("glGetSynciv() called");
    return 0;
}

/* Demangled: glMatrixTranslatefEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixTranslatefEXT(void) {
    ALOGD("glMatrixTranslatefEXT() called");
    return 0;
}

/* Demangled: glSetFenceNV */
extern "C" __attribute__((visibility("default"))) int glSetFenceNV(void) {
    ALOGD("glSetFenceNV() called");
    return 0;
}

/* Demangled: glBindRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glBindRenderbuffer(void) {
    ALOGD("glBindRenderbuffer() called");
    return 0;
}

/* Demangled: glBlendEquationSeparatei */
extern "C" __attribute__((visibility("default"))) int glBlendEquationSeparatei(void) {
    ALOGD("glBlendEquationSeparatei() called");
    return 0;
}

/* Demangled: glClearBufferiv */
extern "C" __attribute__((visibility("default"))) int glClearBufferiv(void) {
    ALOGD("glClearBufferiv() called");
    return 0;
}

/* Demangled: glDrawTexxOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexxOES(void) {
    ALOGD("glDrawTexxOES() called");
    return 0;
}

/* Demangled: glExtGetShadersQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetShadersQCOM(void) {
    ALOGD("glExtGetShadersQCOM() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2x4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2x4fv(void) {
    ALOGD("glProgramUniformMatrix2x4fv() called");
    return 0;
}

/* Demangled: glGetFramebufferAttachmentParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferAttachmentParameteriv(void) {
    ALOGD("glGetFramebufferAttachmentParameteriv() called");
    return 0;
}

/* Demangled: glSamplerParameterIuivEXT */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIuivEXT(void) {
    ALOGD("glSamplerParameterIuivEXT() called");
    return 0;
}

/* Demangled: glTexGenxOES */
extern "C" __attribute__((visibility("default"))) int glTexGenxOES(void) {
    ALOGD("glTexGenxOES() called");
    return 0;
}

/* Demangled: glUniform1ui64vNV */
extern "C" __attribute__((visibility("default"))) int glUniform1ui64vNV(void) {
    ALOGD("glUniform1ui64vNV() called");
    return 0;
}

/* Demangled: trace_get_address */
extern "C" __attribute__((visibility("default"))) int trace_get_address(void) {
    ALOGD("trace_get_address() called");
    return 0;
}

/* Demangled: glGetPerfMonitorCounterStringAMD */
extern "C" __attribute__((visibility("default"))) int glGetPerfMonitorCounterStringAMD(void) {
    ALOGD("glGetPerfMonitorCounterStringAMD() called");
    return 0;
}

/* Demangled: glGetProgramResourceLocation */
extern "C" __attribute__((visibility("default"))) int glGetProgramResourceLocation(void) {
    ALOGD("glGetProgramResourceLocation() called");
    return 0;
}

/* Demangled: glProgramUniform4i64vNV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4i64vNV(void) {
    ALOGD("glProgramUniform4i64vNV() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4x2fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4x2fvEXT(void) {
    ALOGD("glProgramUniformMatrix4x2fvEXT() called");
    return 0;
}

/* Demangled: glSamplerParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glSamplerParameterIivEXT(void) {
    ALOGD("glSamplerParameterIivEXT() called");
    return 0;
}

/* Demangled: glCompressedTexImage2D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexImage2D(void) {
    ALOGD("glCompressedTexImage2D() called");
    return 0;
}

/* Demangled: glFogxOES */
extern "C" __attribute__((visibility("default"))) int glFogxOES(void) {
    ALOGD("glFogxOES() called");
    return 0;
}

/* Demangled: glFramebufferTextureMultisampleMultiviewOVR */
extern "C" __attribute__((visibility("default"))) int glFramebufferTextureMultisampleMultiviewOVR(void) {
    ALOGD("glFramebufferTextureMultisampleMultiviewOVR() called");
    return 0;
}

/* Demangled: glGetAttachedShaders */
extern "C" __attribute__((visibility("default"))) int glGetAttachedShaders(void) {
    ALOGD("glGetAttachedShaders() called");
    return 0;
}

/* Demangled: glGetShaderSource */
extern "C" __attribute__((visibility("default"))) int glGetShaderSource(void) {
    ALOGD("glGetShaderSource() called");
    return 0;
}

/* Demangled: glQueryCounterEXT */
extern "C" __attribute__((visibility("default"))) int glQueryCounterEXT(void) {
    ALOGD("glQueryCounterEXT() called");
    return 0;
}

/* Demangled: glMultiTexCoord3bOES(unsigned int, signed char, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z20glMultiTexCoord3bOESjaaa(void) {
    ALOGD("_Z20glMultiTexCoord3bOESjaaa() called");
    return 0;
}

/* Demangled: glBufferStorageMemEXT */
extern "C" __attribute__((visibility("default"))) int glBufferStorageMemEXT(void) {
    ALOGD("glBufferStorageMemEXT() called");
    return 0;
}

/* Demangled: glClipPlanexOES */
extern "C" __attribute__((visibility("default"))) int glClipPlanexOES(void) {
    ALOGD("glClipPlanexOES() called");
    return 0;
}

/* Demangled: glGetError */
extern "C" __attribute__((visibility("default"))) int glGetError(void) {
    ALOGD("glGetError() called");
    return 0;
}

/* Demangled: glMultiDrawArraysEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawArraysEXT(void) {
    ALOGD("glMultiDrawArraysEXT() called");
    return 0;
}

/* Demangled: glTexParameterIivEXT */
extern "C" __attribute__((visibility("default"))) int glTexParameterIivEXT(void) {
    ALOGD("glTexParameterIivEXT() called");
    return 0;
}

/* Demangled: glClipPlanex */
extern "C" __attribute__((visibility("default"))) int glClipPlanex(void) {
    ALOGD("glClipPlanex() called");
    return 0;
}

/* Demangled: glGetIntegerv */
extern "C" __attribute__((visibility("default"))) int glGetIntegerv(void) {
    ALOGD("glGetIntegerv() called");
    return 0;
}

/* Demangled: glGetProgramBinaryOES */
extern "C" __attribute__((visibility("default"))) int glGetProgramBinaryOES(void) {
    ALOGD("glGetProgramBinaryOES() called");
    return 0;
}

/* Demangled: glBlendFuncSeparate */
extern "C" __attribute__((visibility("default"))) int glBlendFuncSeparate(void) {
    ALOGD("glBlendFuncSeparate() called");
    return 0;
}

/* Demangled: glCheckFramebufferStatusOES */
extern "C" __attribute__((visibility("default"))) int glCheckFramebufferStatusOES(void) {
    ALOGD("glCheckFramebufferStatusOES() called");
    return 0;
}

/* Demangled: glGetnUniformfvEXT */
extern "C" __attribute__((visibility("default"))) int glGetnUniformfvEXT(void) {
    ALOGD("glGetnUniformfvEXT() called");
    return 0;
}

/* Demangled: glMultMatrixx */
extern "C" __attribute__((visibility("default"))) int glMultMatrixx(void) {
    ALOGD("glMultMatrixx() called");
    return 0;
}

/* Demangled: glWindowRectanglesEXT */
extern "C" __attribute__((visibility("default"))) int glWindowRectanglesEXT(void) {
    ALOGD("glWindowRectanglesEXT() called");
    return 0;
}

/* Demangled: eglGetRenderBufferANDROID(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z25eglGetRenderBufferANDROIDPvS_(void) {
    ALOGD("_Z25eglGetRenderBufferANDROIDPvS_() called");
    return 0;
}

/* Exported Object: ddk */
extern "C" __attribute__((visibility("default"))) void* ddk = NULL;

/* Demangled: glLogicOp */
extern "C" __attribute__((visibility("default"))) int glLogicOp(void) {
    ALOGD("glLogicOp() called");
    return 0;
}

/* Demangled: glMatrixOrthoEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixOrthoEXT(void) {
    ALOGD("glMatrixOrthoEXT() called");
    return 0;
}

/* Demangled: glMatrixTranslatedEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixTranslatedEXT(void) {
    ALOGD("glMatrixTranslatedEXT() called");
    return 0;
}

/* Demangled: glStencilFillPathInstancedNV */
extern "C" __attribute__((visibility("default"))) int glStencilFillPathInstancedNV(void) {
    ALOGD("glStencilFillPathInstancedNV() called");
    return 0;
}

/* Demangled: glDrawArrays */
extern "C" __attribute__((visibility("default"))) int glDrawArrays(void) {
    ALOGD("glDrawArrays() called");
    return 0;
}

/* Demangled: glVertexAttribDivisorANGLE */
extern "C" __attribute__((visibility("default"))) int glVertexAttribDivisorANGLE(void) {
    ALOGD("glVertexAttribDivisorANGLE() called");
    return 0;
}

/* Demangled: glGenerateMipmap */
extern "C" __attribute__((visibility("default"))) int glGenerateMipmap(void) {
    ALOGD("glGenerateMipmap() called");
    return 0;
}

/* Demangled: glMatrixMultTransposefEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixMultTransposefEXT(void) {
    ALOGD("glMatrixMultTransposefEXT() called");
    return 0;
}

/* Demangled: glPointParameterxvOES */
extern "C" __attribute__((visibility("default"))) int glPointParameterxvOES(void) {
    ALOGD("glPointParameterxvOES() called");
    return 0;
}

/* Demangled: eglStreamConsumerAcquireKHR */
extern "C" __attribute__((visibility("default"))) int eglStreamConsumerAcquireKHR(void) {
    ALOGD("eglStreamConsumerAcquireKHR() called");
    return 0;
}

/* Demangled: glEGLImageTargetTextureStorageEXT */
extern "C" __attribute__((visibility("default"))) int glEGLImageTargetTextureStorageEXT(void) {
    ALOGD("glEGLImageTargetTextureStorageEXT() called");
    return 0;
}

/* Demangled: glGetTexLevelParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetTexLevelParameterfv(void) {
    ALOGD("glGetTexLevelParameterfv() called");
    return 0;
}

/* Demangled: glMultiDrawElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawElementsBaseVertexEXT(void) {
    ALOGD("glMultiDrawElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: glDrawBuffersNV */
extern "C" __attribute__((visibility("default"))) int glDrawBuffersNV(void) {
    ALOGD("glDrawBuffersNV() called");
    return 0;
}

/* Demangled: glGetFloati_vNV */
extern "C" __attribute__((visibility("default"))) int glGetFloati_vNV(void) {
    ALOGD("glGetFloati_vNV() called");
    return 0;
}

/* Demangled: glIsSampler */
extern "C" __attribute__((visibility("default"))) int glIsSampler(void) {
    ALOGD("glIsSampler() called");
    return 0;
}

/* Demangled: glTextureStorage1DEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorage1DEXT(void) {
    ALOGD("glTextureStorage1DEXT() called");
    return 0;
}

/* Demangled: glTexCoord3bOES(signed char, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z15glTexCoord3bOESaaa(void) {
    ALOGD("_Z15glTexCoord3bOESaaa() called");
    return 0;
}

/* Demangled: glClearDepthx */
extern "C" __attribute__((visibility("default"))) int glClearDepthx(void) {
    ALOGD("glClearDepthx() called");
    return 0;
}

/* Demangled: glGetObjectLabel */
extern "C" __attribute__((visibility("default"))) int glGetObjectLabel(void) {
    ALOGD("glGetObjectLabel() called");
    return 0;
}

/* Demangled: glMinSampleShadingOES */
extern "C" __attribute__((visibility("default"))) int glMinSampleShadingOES(void) {
    ALOGD("glMinSampleShadingOES() called");
    return 0;
}

/* Demangled: glProgramUniformHandleui64IMG */
extern "C" __attribute__((visibility("default"))) int glProgramUniformHandleui64IMG(void) {
    ALOGD("glProgramUniformHandleui64IMG() called");
    return 0;
}

/* Demangled: glUseProgramStages */
extern "C" __attribute__((visibility("default"))) int glUseProgramStages(void) {
    ALOGD("glUseProgramStages() called");
    return 0;
}

/* Demangled: glFramebufferFoveationConfigQCOM */
extern "C" __attribute__((visibility("default"))) int glFramebufferFoveationConfigQCOM(void) {
    ALOGD("glFramebufferFoveationConfigQCOM() called");
    return 0;
}

/* Demangled: glGetClipPlanefOES */
extern "C" __attribute__((visibility("default"))) int glGetClipPlanefOES(void) {
    ALOGD("glGetClipPlanefOES() called");
    return 0;
}

/* Demangled: glTexParameterfv */
extern "C" __attribute__((visibility("default"))) int glTexParameterfv(void) {
    ALOGD("glTexParameterfv() called");
    return 0;
}

/* Demangled: glUniform4ui64NV */
extern "C" __attribute__((visibility("default"))) int glUniform4ui64NV(void) {
    ALOGD("glUniform4ui64NV() called");
    return 0;
}

/* Demangled: glBindFramebuffer */
extern "C" __attribute__((visibility("default"))) int glBindFramebuffer(void) {
    ALOGD("glBindFramebuffer() called");
    return 0;
}

/* Demangled: glClearDepthxOES */
extern "C" __attribute__((visibility("default"))) int glClearDepthxOES(void) {
    ALOGD("glClearDepthxOES() called");
    return 0;
}

/* Demangled: glGetAttribLocation */
extern "C" __attribute__((visibility("default"))) int glGetAttribLocation(void) {
    ALOGD("glGetAttribLocation() called");
    return 0;
}

/* Demangled: glGetPerfCounterInfoINTEL */
extern "C" __attribute__((visibility("default"))) int glGetPerfCounterInfoINTEL(void) {
    ALOGD("glGetPerfCounterInfoINTEL() called");
    return 0;
}

/* Demangled: glIsRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glIsRenderbuffer(void) {
    ALOGD("glIsRenderbuffer() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2fvEXT(void) {
    ALOGD("glProgramUniformMatrix2fvEXT() called");
    return 0;
}

/* Demangled: glResumeTransformFeedback */
extern "C" __attribute__((visibility("default"))) int glResumeTransformFeedback(void) {
    ALOGD("glResumeTransformFeedback() called");
    return 0;
}

/* Demangled: glTexStorage3D */
extern "C" __attribute__((visibility("default"))) int glTexStorage3D(void) {
    ALOGD("glTexStorage3D() called");
    return 0;
}

/* Demangled: glCopyTexSubImage3DOES */
extern "C" __attribute__((visibility("default"))) int glCopyTexSubImage3DOES(void) {
    ALOGD("glCopyTexSubImage3DOES() called");
    return 0;
}

/* Demangled: glTexEnvf */
extern "C" __attribute__((visibility("default"))) int glTexEnvf(void) {
    ALOGD("glTexEnvf() called");
    return 0;
}

/* Demangled: glPatchParameteri */
extern "C" __attribute__((visibility("default"))) int glPatchParameteri(void) {
    ALOGD("glPatchParameteri() called");
    return 0;
}

/* Demangled: glGenRenderbuffersOES */
extern "C" __attribute__((visibility("default"))) int glGenRenderbuffersOES(void) {
    ALOGD("glGenRenderbuffersOES() called");
    return 0;
}

/* Demangled: glMatrixMultTransposedEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixMultTransposedEXT(void) {
    ALOGD("glMatrixMultTransposedEXT() called");
    return 0;
}

/* Demangled: glUniform1fv */
extern "C" __attribute__((visibility("default"))) int glUniform1fv(void) {
    ALOGD("glUniform1fv() called");
    return 0;
}

/* Demangled: glBindVertexArrayOES */
extern "C" __attribute__((visibility("default"))) int glBindVertexArrayOES(void) {
    ALOGD("glBindVertexArrayOES() called");
    return 0;
}

/* Demangled: glFramebufferSampleLocationsfvNV */
extern "C" __attribute__((visibility("default"))) int glFramebufferSampleLocationsfvNV(void) {
    ALOGD("glFramebufferSampleLocationsfvNV() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DDownsampleIMG */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DDownsampleIMG(void) {
    ALOGD("glFramebufferTexture2DDownsampleIMG() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DOES(void) {
    ALOGD("glFramebufferTexture2DOES() called");
    return 0;
}

/* Demangled: glProgramUniform4fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4fv(void) {
    ALOGD("glProgramUniform4fv() called");
    return 0;
}

/* Demangled: glTexEnvi */
extern "C" __attribute__((visibility("default"))) int glTexEnvi(void) {
    ALOGD("glTexEnvi() called");
    return 0;
}

/* Demangled: glVertex2bOES(signed char) */
extern "C" __attribute__((visibility("default"))) int _Z13glVertex2bOESa(void) {
    ALOGD("_Z13glVertex2bOESa() called");
    return 0;
}

/* Demangled: glBufferData */
extern "C" __attribute__((visibility("default"))) int glBufferData(void) {
    ALOGD("glBufferData() called");
    return 0;
}

/* Demangled: glGetActiveUniformBlockiv */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniformBlockiv(void) {
    ALOGD("glGetActiveUniformBlockiv() called");
    return 0;
}

/* Demangled: glMaterialxv */
extern "C" __attribute__((visibility("default"))) int glMaterialxv(void) {
    ALOGD("glMaterialxv() called");
    return 0;
}

/* Demangled: glTexSubImage3DOES */
extern "C" __attribute__((visibility("default"))) int glTexSubImage3DOES(void) {
    ALOGD("glTexSubImage3DOES() called");
    return 0;
}

/* Demangled: glMultiTexCoord2bOES(unsigned int, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _Z20glMultiTexCoord2bOESjaa(void) {
    ALOGD("_Z20glMultiTexCoord2bOESjaa() called");
    return 0;
}

/* Demangled: glClipPlanefIMG */
extern "C" __attribute__((visibility("default"))) int glClipPlanefIMG(void) {
    ALOGD("glClipPlanefIMG() called");
    return 0;
}

/* Demangled: glCreateProgram */
extern "C" __attribute__((visibility("default"))) int glCreateProgram(void) {
    ALOGD("glCreateProgram() called");
    return 0;
}

/* Demangled: glDrawTexsOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexsOES(void) {
    ALOGD("glDrawTexsOES() called");
    return 0;
}

/* Demangled: glGetInteger64v */
extern "C" __attribute__((visibility("default"))) int glGetInteger64v(void) {
    ALOGD("glGetInteger64v() called");
    return 0;
}

/* Demangled: glIsQuery */
extern "C" __attribute__((visibility("default"))) int glIsQuery(void) {
    ALOGD("glIsQuery() called");
    return 0;
}

/* Demangled: glLabelObjectEXT */
extern "C" __attribute__((visibility("default"))) int glLabelObjectEXT(void) {
    ALOGD("glLabelObjectEXT() called");
    return 0;
}

/* Demangled: glProgramUniform2ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform2ui(void) {
    ALOGD("glProgramUniform2ui() called");
    return 0;
}

/* Demangled: glTexCoord3bvOES(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16glTexCoord3bvOESPKa(void) {
    ALOGD("_Z16glTexCoord3bvOESPKa() called");
    return 0;
}

/* Demangled: glCompressedTexSubImage3DOES */
extern "C" __attribute__((visibility("default"))) int glCompressedTexSubImage3DOES(void) {
    ALOGD("glCompressedTexSubImage3DOES() called");
    return 0;
}

/* Demangled: glTestFenceNV */
extern "C" __attribute__((visibility("default"))) int glTestFenceNV(void) {
    ALOGD("glTestFenceNV() called");
    return 0;
}

/* Demangled: glCopyTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int glCopyTexSubImage2D(void) {
    ALOGD("glCopyTexSubImage2D() called");
    return 0;
}

/* Demangled: glDrawElementsInstanced */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstanced(void) {
    ALOGD("glDrawElementsInstanced() called");
    return 0;
}

/* Demangled: glSamplerParameteriv */
extern "C" __attribute__((visibility("default"))) int glSamplerParameteriv(void) {
    ALOGD("glSamplerParameteriv() called");
    return 0;
}

/* Demangled: glCreateShaderProgramv */
extern "C" __attribute__((visibility("default"))) int glCreateShaderProgramv(void) {
    ALOGD("glCreateShaderProgramv() called");
    return 0;
}

/* Demangled: glPushMatrix */
extern "C" __attribute__((visibility("default"))) int glPushMatrix(void) {
    ALOGD("glPushMatrix() called");
    return 0;
}

/* Demangled: eglGetCurrentContext */
extern "C" __attribute__((visibility("default"))) int eglGetCurrentContext(void) {
    ALOGD("eglGetCurrentContext() called");
    return 0;
}

/* Demangled: eglQueryAPI */
extern "C" __attribute__((visibility("default"))) int eglQueryAPI(void) {
    ALOGD("eglQueryAPI() called");
    return 0;
}

/* Demangled: glGetTexGenfvOES */
extern "C" __attribute__((visibility("default"))) int glGetTexGenfvOES(void) {
    ALOGD("glGetTexGenfvOES() called");
    return 0;
}

/* Demangled: glProgramPathFragmentInputGenNV */
extern "C" __attribute__((visibility("default"))) int glProgramPathFragmentInputGenNV(void) {
    ALOGD("glProgramPathFragmentInputGenNV() called");
    return 0;
}

/* Demangled: glTexStorage1DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorage1DEXT(void) {
    ALOGD("glTexStorage1DEXT() called");
    return 0;
}

/* Demangled: glDebugMessageControlKHR */
extern "C" __attribute__((visibility("default"))) int glDebugMessageControlKHR(void) {
    ALOGD("glDebugMessageControlKHR() called");
    return 0;
}

/* Demangled: glDrawArraysInstancedBaseInstanceEXT */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedBaseInstanceEXT(void) {
    ALOGD("glDrawArraysInstancedBaseInstanceEXT() called");
    return 0;
}

/* Demangled: glDrawElementsIndirect */
extern "C" __attribute__((visibility("default"))) int glDrawElementsIndirect(void) {
    ALOGD("glDrawElementsIndirect() called");
    return 0;
}

/* Demangled: glGetPathMetricsNV */
extern "C" __attribute__((visibility("default"))) int glGetPathMetricsNV(void) {
    ALOGD("glGetPathMetricsNV() called");
    return 0;
}

/* Demangled: glMatrixLoadfEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixLoadfEXT(void) {
    ALOGD("glMatrixLoadfEXT() called");
    return 0;
}

/* Demangled: glUniform3f */
extern "C" __attribute__((visibility("default"))) int glUniform3f(void) {
    ALOGD("glUniform3f() called");
    return 0;
}

/* Demangled: glGetGraphicsResetStatusKHR */
extern "C" __attribute__((visibility("default"))) int glGetGraphicsResetStatusKHR(void) {
    ALOGD("glGetGraphicsResetStatusKHR() called");
    return 0;
}

/* Demangled: glPointAlongPathNV */
extern "C" __attribute__((visibility("default"))) int glPointAlongPathNV(void) {
    ALOGD("glPointAlongPathNV() called");
    return 0;
}

/* Demangled: glUniformMatrix2x3fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix2x3fv(void) {
    ALOGD("glUniformMatrix2x3fv() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertexEXT(void) {
    ALOGD("glDrawRangeElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: glLoadMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glLoadMatrixxOES(void) {
    ALOGD("glLoadMatrixxOES() called");
    return 0;
}

/* Demangled: glMemoryBarrier */
extern "C" __attribute__((visibility("default"))) int glMemoryBarrier(void) {
    ALOGD("glMemoryBarrier() called");
    return 0;
}

/* Demangled: glMultiTexCoord4xOES */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4xOES(void) {
    ALOGD("glMultiTexCoord4xOES() called");
    return 0;
}

/* Demangled: glUniform3i */
extern "C" __attribute__((visibility("default"))) int glUniform3i(void) {
    ALOGD("glUniform3i() called");
    return 0;
}

/* Demangled: glFramebufferRenderbufferOES */
extern "C" __attribute__((visibility("default"))) int glFramebufferRenderbufferOES(void) {
    ALOGD("glFramebufferRenderbufferOES() called");
    return 0;
}

/* Demangled: glGetnUniformiv */
extern "C" __attribute__((visibility("default"))) int glGetnUniformiv(void) {
    ALOGD("glGetnUniformiv() called");
    return 0;
}

/* Demangled: glLightModelfv */
extern "C" __attribute__((visibility("default"))) int glLightModelfv(void) {
    ALOGD("glLightModelfv() called");
    return 0;
}

/* Demangled: glCompileShader */
extern "C" __attribute__((visibility("default"))) int glCompileShader(void) {
    ALOGD("glCompileShader() called");
    return 0;
}

/* Demangled: glEnable */
extern "C" __attribute__((visibility("default"))) int glEnable(void) {
    ALOGD("glEnable() called");
    return 0;
}

/* Demangled: glTextureStorage3DEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorage3DEXT(void) {
    ALOGD("glTextureStorage3DEXT() called");
    return 0;
}

/* Demangled: glUniform3iv */
extern "C" __attribute__((visibility("default"))) int glUniform3iv(void) {
    ALOGD("glUniform3iv() called");
    return 0;
}

/* Demangled: glDisableiOES */
extern "C" __attribute__((visibility("default"))) int glDisableiOES(void) {
    ALOGD("glDisableiOES() called");
    return 0;
}

/* Demangled: glTexStorage3DMultisample */
extern "C" __attribute__((visibility("default"))) int glTexStorage3DMultisample(void) {
    ALOGD("glTexStorage3DMultisample() called");
    return 0;
}

/* Demangled: glDrawTransformFeedbackInstancedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawTransformFeedbackInstancedEXT(void) {
    ALOGD("glDrawTransformFeedbackInstancedEXT() called");
    return 0;
}

/* Demangled: glGetQueryObjecti64vEXT */
extern "C" __attribute__((visibility("default"))) int glGetQueryObjecti64vEXT(void) {
    ALOGD("glGetQueryObjecti64vEXT() called");
    return 0;
}

/* Demangled: glMatrixLoaddEXT */
extern "C" __attribute__((visibility("default"))) int glMatrixLoaddEXT(void) {
    ALOGD("glMatrixLoaddEXT() called");
    return 0;
}

/* Demangled: glTexEnvx */
extern "C" __attribute__((visibility("default"))) int glTexEnvx(void) {
    ALOGD("glTexEnvx() called");
    return 0;
}

/* Demangled: glDisableDriverControlQCOM */
extern "C" __attribute__((visibility("default"))) int glDisableDriverControlQCOM(void) {
    ALOGD("glDisableDriverControlQCOM() called");
    return 0;
}

/* Demangled: glGenSamplers */
extern "C" __attribute__((visibility("default"))) int glGenSamplers(void) {
    ALOGD("glGenSamplers() called");
    return 0;
}

/* Demangled: glMatrixMode */
extern "C" __attribute__((visibility("default"))) int glMatrixMode(void) {
    ALOGD("glMatrixMode() called");
    return 0;
}

/* Demangled: glSignalSemaphoreEXT */
extern "C" __attribute__((visibility("default"))) int glSignalSemaphoreEXT(void) {
    ALOGD("glSignalSemaphoreEXT() called");
    return 0;
}

/* Demangled: glTexEnvxvOES */
extern "C" __attribute__((visibility("default"))) int glTexEnvxvOES(void) {
    ALOGD("glTexEnvxvOES() called");
    return 0;
}

/* Demangled: glViewport */
extern "C" __attribute__((visibility("default"))) int glViewport(void) {
    ALOGD("glViewport() called");
    return 0;
}

/* Demangled: eglClientWaitSync */
extern "C" __attribute__((visibility("default"))) int eglClientWaitSync(void) {
    ALOGD("eglClientWaitSync() called");
    return 0;
}

/* Demangled: glDeleteFramebuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteFramebuffers(void) {
    ALOGD("glDeleteFramebuffers() called");
    return 0;
}

/* Demangled: glDeleteProgram */
extern "C" __attribute__((visibility("default"))) int glDeleteProgram(void) {
    ALOGD("glDeleteProgram() called");
    return 0;
}

/* Demangled: glEnableDriverControlQCOM */
extern "C" __attribute__((visibility("default"))) int glEnableDriverControlQCOM(void) {
    ALOGD("glEnableDriverControlQCOM() called");
    return 0;
}

/* Demangled: glFlushMappedBufferRangeEXT */
extern "C" __attribute__((visibility("default"))) int glFlushMappedBufferRangeEXT(void) {
    ALOGD("glFlushMappedBufferRangeEXT() called");
    return 0;
}

/* Demangled: glGetFenceivNV */
extern "C" __attribute__((visibility("default"))) int glGetFenceivNV(void) {
    ALOGD("glGetFenceivNV() called");
    return 0;
}

/* Demangled: glGetInteger64i_v */
extern "C" __attribute__((visibility("default"))) int glGetInteger64i_v(void) {
    ALOGD("glGetInteger64i_v() called");
    return 0;
}

/* Demangled: glPointSize */
extern "C" __attribute__((visibility("default"))) int glPointSize(void) {
    ALOGD("glPointSize() called");
    return 0;
}

/* Demangled: glScissorArrayvNV */
extern "C" __attribute__((visibility("default"))) int glScissorArrayvNV(void) {
    ALOGD("glScissorArrayvNV() called");
    return 0;
}

/* Demangled: glStencilFunc */
extern "C" __attribute__((visibility("default"))) int glStencilFunc(void) {
    ALOGD("glStencilFunc() called");
    return 0;
}

/* Demangled: glCompressedTexImage3D */
extern "C" __attribute__((visibility("default"))) int glCompressedTexImage3D(void) {
    ALOGD("glCompressedTexImage3D() called");
    return 0;
}

/* Demangled: glEnableiNV */
extern "C" __attribute__((visibility("default"))) int glEnableiNV(void) {
    ALOGD("glEnableiNV() called");
    return 0;
}

/* Demangled: glGenBuffers */
extern "C" __attribute__((visibility("default"))) int glGenBuffers(void) {
    ALOGD("glGenBuffers() called");
    return 0;
}

/* Demangled: glIsFramebuffer */
extern "C" __attribute__((visibility("default"))) int glIsFramebuffer(void) {
    ALOGD("glIsFramebuffer() called");
    return 0;
}

/* Demangled: glProgramUniform3uivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3uivEXT(void) {
    ALOGD("glProgramUniform3uivEXT() called");
    return 0;
}

/* Demangled: glPushGroupMarkerEXT */
extern "C" __attribute__((visibility("default"))) int glPushGroupMarkerEXT(void) {
    ALOGD("glPushGroupMarkerEXT() called");
    return 0;
}

/* Demangled: glStencilThenCoverFillPathNV */
extern "C" __attribute__((visibility("default"))) int glStencilThenCoverFillPathNV(void) {
    ALOGD("glStencilThenCoverFillPathNV() called");
    return 0;
}

/* Demangled: glBindProgramPipelineEXT */
extern "C" __attribute__((visibility("default"))) int glBindProgramPipelineEXT(void) {
    ALOGD("glBindProgramPipelineEXT() called");
    return 0;
}

/* Demangled: glDeleteTextures */
extern "C" __attribute__((visibility("default"))) int glDeleteTextures(void) {
    ALOGD("glDeleteTextures() called");
    return 0;
}

/* Demangled: glFramebufferRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glFramebufferRenderbuffer(void) {
    ALOGD("glFramebufferRenderbuffer() called");
    return 0;
}

/* Demangled: glFrustumxOES */
extern "C" __attribute__((visibility("default"))) int glFrustumxOES(void) {
    ALOGD("glFrustumxOES() called");
    return 0;
}

/* Demangled: glGetTexEnviv */
extern "C" __attribute__((visibility("default"))) int glGetTexEnviv(void) {
    ALOGD("glGetTexEnviv() called");
    return 0;
}

/* Demangled: glIsSync */
extern "C" __attribute__((visibility("default"))) int glIsSync(void) {
    ALOGD("glIsSync() called");
    return 0;
}

/* Demangled: glGetDebugMessageLogKHR */
extern "C" __attribute__((visibility("default"))) int glGetDebugMessageLogKHR(void) {
    ALOGD("glGetDebugMessageLogKHR() called");
    return 0;
}

/* Demangled: glGetObjectLabelEXT */
extern "C" __attribute__((visibility("default"))) int glGetObjectLabelEXT(void) {
    ALOGD("glGetObjectLabelEXT() called");
    return 0;
}

/* Demangled: eglGetStreamFileDescriptorKHR */
extern "C" __attribute__((visibility("default"))) int eglGetStreamFileDescriptorKHR(void) {
    ALOGD("eglGetStreamFileDescriptorKHR() called");
    return 0;
}

/* Demangled: glGetVkProcAddrNV */
extern "C" __attribute__((visibility("default"))) int glGetVkProcAddrNV(void) {
    ALOGD("glGetVkProcAddrNV() called");
    return 0;
}

/* Demangled: glTexImage3DOES */
extern "C" __attribute__((visibility("default"))) int glTexImage3DOES(void) {
    ALOGD("glTexImage3DOES() called");
    return 0;
}

/* Demangled: eglCreatePlatformWindowSurface */
extern "C" __attribute__((visibility("default"))) int eglCreatePlatformWindowSurface(void) {
    ALOGD("eglCreatePlatformWindowSurface() called");
    return 0;
}

/* Demangled: glTexParameterxv */
extern "C" __attribute__((visibility("default"))) int glTexParameterxv(void) {
    ALOGD("glTexParameterxv() called");
    return 0;
}

/* Demangled: glValidateProgramPipelineEXT */
extern "C" __attribute__((visibility("default"))) int glValidateProgramPipelineEXT(void) {
    ALOGD("glValidateProgramPipelineEXT() called");
    return 0;
}

/* Demangled: glBindFramebufferOES */
extern "C" __attribute__((visibility("default"))) int glBindFramebufferOES(void) {
    ALOGD("glBindFramebufferOES() called");
    return 0;
}

/* Demangled: eglCreateImageKHR */
extern "C" __attribute__((visibility("default"))) int eglCreateImageKHR(void) {
    ALOGD("eglCreateImageKHR() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedANGLE */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedANGLE(void) {
    ALOGD("glDrawElementsInstancedANGLE() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2x3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2x3fv(void) {
    ALOGD("glProgramUniformMatrix2x3fv() called");
    return 0;
}

/* Demangled: glTexStorage3DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorage3DEXT(void) {
    ALOGD("glTexStorage3DEXT() called");
    return 0;
}

/* Demangled: glUniform4uiv */
extern "C" __attribute__((visibility("default"))) int glUniform4uiv(void) {
    ALOGD("glUniform4uiv() called");
    return 0;
}

/* Demangled: glCreatePerfQueryINTEL */
extern "C" __attribute__((visibility("default"))) int glCreatePerfQueryINTEL(void) {
    ALOGD("glCreatePerfQueryINTEL() called");
    return 0;
}

/* Demangled: glGenerateMipmapOES */
extern "C" __attribute__((visibility("default"))) int glGenerateMipmapOES(void) {
    ALOGD("glGenerateMipmapOES() called");
    return 0;
}

/* Demangled: glGetProgramInfoLog */
extern "C" __attribute__((visibility("default"))) int glGetProgramInfoLog(void) {
    ALOGD("glGetProgramInfoLog() called");
    return 0;
}

/* Demangled: glIsShader */
extern "C" __attribute__((visibility("default"))) int glIsShader(void) {
    ALOGD("glIsShader() called");
    return 0;
}

/* Demangled: glPathSubCommandsNV */
extern "C" __attribute__((visibility("default"))) int glPathSubCommandsNV(void) {
    ALOGD("glPathSubCommandsNV() called");
    return 0;
}

/* Demangled: glTexEnvfv */
extern "C" __attribute__((visibility("default"))) int glTexEnvfv(void) {
    ALOGD("glTexEnvfv() called");
    return 0;
}

/* Demangled: glViewportSwizzleNV */
extern "C" __attribute__((visibility("default"))) int glViewportSwizzleNV(void) {
    ALOGD("glViewportSwizzleNV() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix2x4fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix2x4fvEXT(void) {
    ALOGD("glProgramUniformMatrix2x4fvEXT() called");
    return 0;
}

/* Demangled: glTexParameterxvOES */
extern "C" __attribute__((visibility("default"))) int glTexParameterxvOES(void) {
    ALOGD("glTexParameterxvOES() called");
    return 0;
}

/* Demangled: glUniformHandleui64vIMG */
extern "C" __attribute__((visibility("default"))) int glUniformHandleui64vIMG(void) {
    ALOGD("glUniformHandleui64vIMG() called");
    return 0;
}

/* Demangled: glUniformMatrix4x3fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4x3fv(void) {
    ALOGD("glUniformMatrix4x3fv() called");
    return 0;
}

/* Demangled: glBlendEquationiEXT */
extern "C" __attribute__((visibility("default"))) int glBlendEquationiEXT(void) {
    ALOGD("glBlendEquationiEXT() called");
    return 0;
}

/* Demangled: glMultiTexCoord4bvOES(unsigned int, signed char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21glMultiTexCoord4bvOESjPKa(void) {
    ALOGD("_Z21glMultiTexCoord4bvOESjPKa() called");
    return 0;
}

/* Demangled: glGetProgramiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramiv(void) {
    ALOGD("glGetProgramiv() called");
    return 0;
}

/* Demangled: glTexBufferRangeEXT */
extern "C" __attribute__((visibility("default"))) int glTexBufferRangeEXT(void) {
    ALOGD("glTexBufferRangeEXT() called");
    return 0;
}

/* Demangled: glTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int glTexSubImage2D(void) {
    ALOGD("glTexSubImage2D() called");
    return 0;
}

/* Demangled: glTextureStorageMem2DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glTextureStorageMem2DMultisampleEXT(void) {
    ALOGD("glTextureStorageMem2DMultisampleEXT() called");
    return 0;
}

/* Demangled: glUniform3uiv */
extern "C" __attribute__((visibility("default"))) int glUniform3uiv(void) {
    ALOGD("glUniform3uiv() called");
    return 0;
}

/* Demangled: glVertexAttribPointer */
extern "C" __attribute__((visibility("default"))) int glVertexAttribPointer(void) {
    ALOGD("glVertexAttribPointer() called");
    return 0;
}

/* Demangled: glGenTransformFeedbacks */
extern "C" __attribute__((visibility("default"))) int glGenTransformFeedbacks(void) {
    ALOGD("glGenTransformFeedbacks() called");
    return 0;
}

/* Demangled: glMultiTexCoord4f */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4f(void) {
    ALOGD("glMultiTexCoord4f() called");
    return 0;
}

/* Demangled: eglUnlockSurfaceKHR */
extern "C" __attribute__((visibility("default"))) int eglUnlockSurfaceKHR(void) {
    ALOGD("eglUnlockSurfaceKHR() called");
    return 0;
}

/* Demangled: glCopyTexImage2D */
extern "C" __attribute__((visibility("default"))) int glCopyTexImage2D(void) {
    ALOGD("glCopyTexImage2D() called");
    return 0;
}

/* Demangled: glFragmentCoverageColorNV */
extern "C" __attribute__((visibility("default"))) int glFragmentCoverageColorNV(void) {
    ALOGD("glFragmentCoverageColorNV() called");
    return 0;
}

/* Demangled: glMakeImageHandleResidentNV */
extern "C" __attribute__((visibility("default"))) int glMakeImageHandleResidentNV(void) {
    ALOGD("glMakeImageHandleResidentNV() called");
    return 0;
}

/* Demangled: glTextureViewEXT */
extern "C" __attribute__((visibility("default"))) int glTextureViewEXT(void) {
    ALOGD("glTextureViewEXT() called");
    return 0;
}

/* Demangled: glDebugMessageInsert */
extern "C" __attribute__((visibility("default"))) int glDebugMessageInsert(void) {
    ALOGD("glDebugMessageInsert() called");
    return 0;
}

/* Demangled: glDeleteMemoryObjectsEXT */
extern "C" __attribute__((visibility("default"))) int glDeleteMemoryObjectsEXT(void) {
    ALOGD("glDeleteMemoryObjectsEXT() called");
    return 0;
}

/* Demangled: glFinishFenceNV */
extern "C" __attribute__((visibility("default"))) int glFinishFenceNV(void) {
    ALOGD("glFinishFenceNV() called");
    return 0;
}

/* Demangled: glMapBufferOES */
extern "C" __attribute__((visibility("default"))) int glMapBufferOES(void) {
    ALOGD("glMapBufferOES() called");
    return 0;
}

/* Demangled: glMapBufferRangeEXT */
extern "C" __attribute__((visibility("default"))) int glMapBufferRangeEXT(void) {
    ALOGD("glMapBufferRangeEXT() called");
    return 0;
}

/* Demangled: glPathMemoryGlyphIndexArrayNV */
extern "C" __attribute__((visibility("default"))) int glPathMemoryGlyphIndexArrayNV(void) {
    ALOGD("glPathMemoryGlyphIndexArrayNV() called");
    return 0;
}

/* Demangled: glProgramUniform1iEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1iEXT(void) {
    ALOGD("glProgramUniform1iEXT() called");
    return 0;
}

/* Demangled: glProgramUniform3uiEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3uiEXT(void) {
    ALOGD("glProgramUniform3uiEXT() called");
    return 0;
}

/* Demangled: glTexStorageMem2DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorageMem2DMultisampleEXT(void) {
    ALOGD("glTexStorageMem2DMultisampleEXT() called");
    return 0;
}

/* Demangled: glUniform2uiv */
extern "C" __attribute__((visibility("default"))) int glUniform2uiv(void) {
    ALOGD("glUniform2uiv() called");
    return 0;
}

/* Demangled: glWeightPathsNV */
extern "C" __attribute__((visibility("default"))) int glWeightPathsNV(void) {
    ALOGD("glWeightPathsNV() called");
    return 0;
}

/* Demangled: glProgramUniform4uivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4uivEXT(void) {
    ALOGD("glProgramUniform4uivEXT() called");
    return 0;
}

/* Demangled: glSignalVkSemaphoreNV */
extern "C" __attribute__((visibility("default"))) int glSignalVkSemaphoreNV(void) {
    ALOGD("glSignalVkSemaphoreNV() called");
    return 0;
}

/* Demangled: glGetVertexAttribPointerv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribPointerv(void) {
    ALOGD("glGetVertexAttribPointerv() called");
    return 0;
}

/* Demangled: glGetVertexAttribiv */
extern "C" __attribute__((visibility("default"))) int glGetVertexAttribiv(void) {
    ALOGD("glGetVertexAttribiv() called");
    return 0;
}

/* Demangled: glIsPointInStrokePathNV */
extern "C" __attribute__((visibility("default"))) int glIsPointInStrokePathNV(void) {
    ALOGD("glIsPointInStrokePathNV() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix3x4fvEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix3x4fvEXT(void) {
    ALOGD("glProgramUniformMatrix3x4fvEXT() called");
    return 0;
}

/* Demangled: glCopyTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int glCopyTexSubImage3D(void) {
    ALOGD("glCopyTexSubImage3D() called");
    return 0;
}

/* Demangled: glUniform1uiv */
extern "C" __attribute__((visibility("default"))) int glUniform1uiv(void) {
    ALOGD("glUniform1uiv() called");
    return 0;
}

/* Demangled: eglClientWaitSyncKHR */
extern "C" __attribute__((visibility("default"))) int eglClientWaitSyncKHR(void) {
    ALOGD("eglClientWaitSyncKHR() called");
    return 0;
}

/* Demangled: glCullFace */
extern "C" __attribute__((visibility("default"))) int glCullFace(void) {
    ALOGD("glCullFace() called");
    return 0;
}

/* Demangled: glVertexAttrib1f */
extern "C" __attribute__((visibility("default"))) int glVertexAttrib1f(void) {
    ALOGD("glVertexAttrib1f() called");
    return 0;
}

/* Demangled: glLightModelxv */
extern "C" __attribute__((visibility("default"))) int glLightModelxv(void) {
    ALOGD("glLightModelxv() called");
    return 0;
}

/* Demangled: glPathParameterivNV */
extern "C" __attribute__((visibility("default"))) int glPathParameterivNV(void) {
    ALOGD("glPathParameterivNV() called");
    return 0;
}

/* Demangled: glProgramUniform4ivEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform4ivEXT(void) {
    ALOGD("glProgramUniform4ivEXT() called");
    return 0;
}

/* Demangled: glVertexAttribI4iv */
extern "C" __attribute__((visibility("default"))) int glVertexAttribI4iv(void) {
    ALOGD("glVertexAttribI4iv() called");
    return 0;
}

/* Demangled: glUniform4f */
extern "C" __attribute__((visibility("default"))) int glUniform4f(void) {
    ALOGD("glUniform4f() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedEXT(void) {
    ALOGD("glDrawElementsInstancedEXT() called");
    return 0;
}

/* Demangled: glStencilFuncSeparate */
extern "C" __attribute__((visibility("default"))) int glStencilFuncSeparate(void) {
    ALOGD("glStencilFuncSeparate() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexEXT(void) {
    ALOGD("glDrawElementsInstancedBaseVertexEXT() called");
    return 0;
}

/* Demangled: glDrawTexiOES */
extern "C" __attribute__((visibility("default"))) int glDrawTexiOES(void) {
    ALOGD("glDrawTexiOES() called");
    return 0;
}

/* Demangled: glClearTexImageEXT */
extern "C" __attribute__((visibility("default"))) int glClearTexImageEXT(void) {
    ALOGD("glClearTexImageEXT() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertexOES(void) {
    ALOGD("glDrawElementsBaseVertexOES() called");
    return 0;
}

/* Demangled: glProgramUniform3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniform3fv(void) {
    ALOGD("glProgramUniform3fv() called");
    return 0;
}

/* Demangled: glTexGeniOES */
extern "C" __attribute__((visibility("default"))) int glTexGeniOES(void) {
    ALOGD("glTexGeniOES() called");
    return 0;
}

/* Demangled: glUniform4i */
extern "C" __attribute__((visibility("default"))) int glUniform4i(void) {
    ALOGD("glUniform4i() called");
    return 0;
}

/* Demangled: glProgramUniformMatrix4x3fv */
extern "C" __attribute__((visibility("default"))) int glProgramUniformMatrix4x3fv(void) {
    ALOGD("glProgramUniformMatrix4x3fv() called");
    return 0;
}

/* Demangled: glCopyImageSubDataOES */
extern "C" __attribute__((visibility("default"))) int glCopyImageSubDataOES(void) {
    ALOGD("glCopyImageSubDataOES() called");
    return 0;
}

/* Demangled: glGetRenderbufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetRenderbufferParameteriv(void) {
    ALOGD("glGetRenderbufferParameteriv() called");
    return 0;
}

/* Demangled: glProgramUniform1fEXT */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1fEXT(void) {
    ALOGD("glProgramUniform1fEXT() called");
    return 0;
}

/* Demangled: glProgramUniform1ui */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1ui(void) {
    ALOGD("glProgramUniform1ui() called");
    return 0;
}

/* Demangled: glCoverStrokePathNV */
extern "C" __attribute__((visibility("default"))) int glCoverStrokePathNV(void) {
    ALOGD("glCoverStrokePathNV() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertex(void) {
    ALOGD("glDrawRangeElementsBaseVertex() called");
    return 0;
}

/* Demangled: glExtGetRenderbuffersQCOM */
extern "C" __attribute__((visibility("default"))) int glExtGetRenderbuffersQCOM(void) {
    ALOGD("glExtGetRenderbuffersQCOM() called");
    return 0;
}

/* Demangled: glGetSamplerParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetSamplerParameterfv(void) {
    ALOGD("glGetSamplerParameterfv() called");
    return 0;
}

/* Demangled: glProgramUniform1ui64NV */
extern "C" __attribute__((visibility("default"))) int glProgramUniform1ui64NV(void) {
    ALOGD("glProgramUniform1ui64NV() called");
    return 0;
}

/* Demangled: glUniformHandleui64NV */
extern "C" __attribute__((visibility("default"))) int glUniformHandleui64NV(void) {
    ALOGD("glUniformHandleui64NV() called");
    return 0;
}

/* Demangled: glGetPointerv */
extern "C" __attribute__((visibility("default"))) int glGetPointerv(void) {
    ALOGD("glGetPointerv() called");
    return 0;
}

/* Demangled: glLightModelf */
extern "C" __attribute__((visibility("default"))) int glLightModelf(void) {
    ALOGD("glLightModelf() called");
    return 0;
}

/* Demangled: glUniformHandleui64IMG */
extern "C" __attribute__((visibility("default"))) int glUniformHandleui64IMG(void) {
    ALOGD("glUniformHandleui64IMG() called");
    return 0;
}

/* Demangled: glLineWidth */
extern "C" __attribute__((visibility("default"))) int glLineWidth(void) {
    ALOGD("glLineWidth() called");
    return 0;
}

/* Demangled: glMultiTexCoord4x */
extern "C" __attribute__((visibility("default"))) int glMultiTexCoord4x(void) {
    ALOGD("glMultiTexCoord4x() called");
    return 0;
}

/* Demangled: glTexPageCommitmentEXT */
extern "C" __attribute__((visibility("default"))) int glTexPageCommitmentEXT(void) {
    ALOGD("glTexPageCommitmentEXT() called");
    return 0;
}
