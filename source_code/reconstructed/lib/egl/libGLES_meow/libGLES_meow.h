/*
 * Reverse-Engineered ABI Specification for: libGLES_meow.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libGLES_meow.so
 */

#ifndef BEGONIA_RE_LIBGLES_MEOW_H
#define BEGONIA_RE_LIBGLES_MEOW_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MEOW_thread_update_callchain */
/* Demangled: MEOW_thread_update_callchain */
int MEOW_thread_update_callchain(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: eglCreateContext */
/* Demangled: eglCreateContext */
int eglCreateContext(void);

/* Symbol: eglDestroyContext */
/* Demangled: eglDestroyContext */
int eglDestroyContext(void);

/* Symbol: _ZN9GLTWorker4waitEv */
/* Demangled: GLTWorker::wait() */
int _ZN9GLTWorker4waitEv(void);

/* Symbol: _ZN9GLTWorkerD1Ev */
/* Demangled: GLTWorker::~GLTWorker() */
int _ZN9GLTWorkerD1Ev(void);

/* Symbol: MEOW_get_raw_ddk_hook */
/* Demangled: MEOW_get_raw_ddk_hook */
int MEOW_get_raw_ddk_hook(void);

/* Symbol: MEOW_PLUGIN_GLT_SHIM_SYM */
/* Demangled: MEOW_PLUGIN_GLT_SHIM_SYM */
extern void* MEOW_PLUGIN_GLT_SHIM_SYM;

/* Symbol: _ZN9GLTWorker13runSwapBufferEP13BaseGLTActionb */
/* Demangled: GLTWorker::runSwapBuffer(BaseGLTAction*, bool) */
int _ZN9GLTWorker13runSwapBufferEP13BaseGLTActionb(void);

/* Symbol: _ZN9GLTWorker14waitSwapBufferEi */
/* Demangled: GLTWorker::waitSwapBuffer(int) */
int _ZN9GLTWorker14waitSwapBufferEi(void);

/* Symbol: _ZN9GLTWorker4joinEv */
/* Demangled: GLTWorker::join() */
int _ZN9GLTWorker4joinEv(void);

/* Symbol: _ZN9GLTWorker8terminalEv */
/* Demangled: GLTWorker::terminal() */
int _ZN9GLTWorker8terminalEv(void);

/* Symbol: MEOW_get_process_name */
/* Demangled: MEOW_get_process_name */
int MEOW_get_process_name(void);

/* Symbol: MEOW_unregister_tls */
/* Demangled: MEOW_unregister_tls */
int MEOW_unregister_tls(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: eglMakeCurrent */
/* Demangled: eglMakeCurrent */
int eglMakeCurrent(void);

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7android8gEGLImplE */
/* Demangled: android::gEGLImpl */
extern void* _ZN7android8gEGLImplE;

/* Symbol: _ZN9GLTWorkerC2Ev */
/* Demangled: GLTWorker::GLTWorker() */
int _ZN9GLTWorkerC2Ev(void);

/* Symbol: MEOW_PLUGIN_GLT_SYM */
/* Demangled: MEOW_PLUGIN_GLT_SYM */
extern void* MEOW_PLUGIN_GLT_SYM;

/* Symbol: _ZN9GLTWorker3runEP13BaseGLTAction */
/* Demangled: GLTWorker::run(BaseGLTAction*) */
int _ZN9GLTWorker3runEP13BaseGLTAction(void);

/* Symbol: _ZN9GLTWorkerC1Ev */
/* Demangled: GLTWorker::GLTWorker() */
int _ZN9GLTWorkerC1Ev(void);

/* Symbol: _ZN9GLTWorker12update_queueEv */
/* Demangled: GLTWorker::update_queue() */
int _ZN9GLTWorker12update_queueEv(void);

/* Symbol: MEOW_get_egl_names */
/* Demangled: MEOW_get_egl_names */
int MEOW_get_egl_names(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: MEOW_get_setting */
/* Demangled: MEOW_get_setting */
int MEOW_get_setting(void);

/* Symbol: eglGetProcAddress */
/* Demangled: eglGetProcAddress */
int eglGetProcAddress(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: MEOW_PLUGIN_API_PROFILER_SYM */
/* Demangled: MEOW_PLUGIN_API_PROFILER_SYM */
extern void* MEOW_PLUGIN_API_PROFILER_SYM;

/* Symbol: _ZN9GLTWorker12prepare2waitEv */
/* Demangled: GLTWorker::prepare2wait() */
int _ZN9GLTWorker12prepare2waitEv(void);

/* Symbol: MEOW_PLUGIN_GLT2_SYM */
/* Demangled: MEOW_PLUGIN_GLT2_SYM */
extern void* MEOW_PLUGIN_GLT2_SYM;

/* Symbol: MEOW_get_ddk_hook */
/* Demangled: MEOW_get_ddk_hook */
int MEOW_get_ddk_hook(void);

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN9GLTWorker10threadLoopEv */
/* Demangled: GLTWorker::threadLoop() */
int _ZN9GLTWorker10threadLoopEv(void);

/* Symbol: MEOW_get_gl_names */
/* Demangled: MEOW_get_gl_names */
int MEOW_get_gl_names(void);

/* Symbol: MEOW_register_tls */
/* Demangled: MEOW_register_tls */
int MEOW_register_tls(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN9GLTWorkerD2Ev */
/* Demangled: GLTWorker::~GLTWorker() */
int _ZN9GLTWorkerD2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGLES_MEOW_H */
