/*
 * Reverse-Engineered Source for: libGLES_meow.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libGLES_meow"

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
#include "libGLES_meow.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MEOW_thread_update_callchain */
extern "C" __attribute__((visibility("default"))) int MEOW_thread_update_callchain(void) {
    ALOGD("MEOW_thread_update_callchain() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: eglCreateContext */
extern "C" __attribute__((visibility("default"))) int eglCreateContext(void) {
    ALOGD("eglCreateContext() called");
    return 0;
}

/* Demangled: eglDestroyContext */
extern "C" __attribute__((visibility("default"))) int eglDestroyContext(void) {
    ALOGD("eglDestroyContext() called");
    return 0;
}

/* Demangled: GLTWorker::wait() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker4waitEv(void) {
    ALOGD("_ZN9GLTWorker4waitEv() called");
    return 0;
}

/* Demangled: GLTWorker::~GLTWorker() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorkerD1Ev(void) {
    ALOGD("_ZN9GLTWorkerD1Ev() called");
    return 0;
}

/* Demangled: MEOW_get_raw_ddk_hook */
extern "C" __attribute__((visibility("default"))) int MEOW_get_raw_ddk_hook(void) {
    ALOGD("MEOW_get_raw_ddk_hook() called");
    return 0;
}

/* Exported Object: MEOW_PLUGIN_GLT_SHIM_SYM */
extern "C" __attribute__((visibility("default"))) void* MEOW_PLUGIN_GLT_SHIM_SYM = NULL;

/* Demangled: GLTWorker::runSwapBuffer(BaseGLTAction*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker13runSwapBufferEP13BaseGLTActionb(void) {
    ALOGD("_ZN9GLTWorker13runSwapBufferEP13BaseGLTActionb() called");
    return 0;
}

/* Demangled: GLTWorker::waitSwapBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker14waitSwapBufferEi(void) {
    ALOGD("_ZN9GLTWorker14waitSwapBufferEi() called");
    return 0;
}

/* Demangled: GLTWorker::join() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker4joinEv(void) {
    ALOGD("_ZN9GLTWorker4joinEv() called");
    return 0;
}

/* Demangled: GLTWorker::terminal() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker8terminalEv(void) {
    ALOGD("_ZN9GLTWorker8terminalEv() called");
    return 0;
}

/* Demangled: MEOW_get_process_name */
extern "C" __attribute__((visibility("default"))) int MEOW_get_process_name(void) {
    ALOGD("MEOW_get_process_name() called");
    return 0;
}

/* Demangled: MEOW_unregister_tls */
extern "C" __attribute__((visibility("default"))) int MEOW_unregister_tls(void) {
    ALOGD("MEOW_unregister_tls() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: eglMakeCurrent */
extern "C" __attribute__((visibility("default"))) int eglMakeCurrent(void) {
    ALOGD("eglMakeCurrent() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: android::gEGLImpl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8gEGLImplE = NULL;

/* Demangled: GLTWorker::GLTWorker() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorkerC2Ev(void) {
    ALOGD("_ZN9GLTWorkerC2Ev() called");
    return 0;
}

/* Exported Object: MEOW_PLUGIN_GLT_SYM */
extern "C" __attribute__((visibility("default"))) void* MEOW_PLUGIN_GLT_SYM = NULL;

/* Demangled: GLTWorker::run(BaseGLTAction*) */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker3runEP13BaseGLTAction(void) {
    ALOGD("_ZN9GLTWorker3runEP13BaseGLTAction() called");
    return 0;
}

/* Demangled: GLTWorker::GLTWorker() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorkerC1Ev(void) {
    ALOGD("_ZN9GLTWorkerC1Ev() called");
    return 0;
}

/* Demangled: GLTWorker::update_queue() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker12update_queueEv(void) {
    ALOGD("_ZN9GLTWorker12update_queueEv() called");
    return 0;
}

/* Demangled: MEOW_get_egl_names */
extern "C" __attribute__((visibility("default"))) int MEOW_get_egl_names(void) {
    ALOGD("MEOW_get_egl_names() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: MEOW_get_setting */
extern "C" __attribute__((visibility("default"))) int MEOW_get_setting(void) {
    ALOGD("MEOW_get_setting() called");
    return 0;
}

/* Demangled: eglGetProcAddress */
extern "C" __attribute__((visibility("default"))) int eglGetProcAddress(void) {
    ALOGD("eglGetProcAddress() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: MEOW_PLUGIN_API_PROFILER_SYM */
extern "C" __attribute__((visibility("default"))) void* MEOW_PLUGIN_API_PROFILER_SYM = NULL;

/* Demangled: GLTWorker::prepare2wait() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker12prepare2waitEv(void) {
    ALOGD("_ZN9GLTWorker12prepare2waitEv() called");
    return 0;
}

/* Exported Object: MEOW_PLUGIN_GLT2_SYM */
extern "C" __attribute__((visibility("default"))) void* MEOW_PLUGIN_GLT2_SYM = NULL;

/* Demangled: MEOW_get_ddk_hook */
extern "C" __attribute__((visibility("default"))) int MEOW_get_ddk_hook(void) {
    ALOGD("MEOW_get_ddk_hook() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: GLTWorker::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorker10threadLoopEv(void) {
    ALOGD("_ZN9GLTWorker10threadLoopEv() called");
    return 0;
}

/* Demangled: MEOW_get_gl_names */
extern "C" __attribute__((visibility("default"))) int MEOW_get_gl_names(void) {
    ALOGD("MEOW_get_gl_names() called");
    return 0;
}

/* Demangled: MEOW_register_tls */
extern "C" __attribute__((visibility("default"))) int MEOW_register_tls(void) {
    ALOGD("MEOW_register_tls() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: GLTWorker::~GLTWorker() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLTWorkerD2Ev(void) {
    ALOGD("_ZN9GLTWorkerD2Ev() called");
    return 0;
}
