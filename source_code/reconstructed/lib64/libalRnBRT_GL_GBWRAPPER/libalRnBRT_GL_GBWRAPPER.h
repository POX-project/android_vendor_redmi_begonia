/*
 * Reverse-Engineered ABI Specification for: libalRnBRT_GL_GBWRAPPER.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libalRnBRT_GL_GBWRAPPER.so
 */

#ifndef BEGONIA_RE_LIBALRNBRT_GL_GBWRAPPER_H
#define BEGONIA_RE_LIBALRNBRT_GL_GBWRAPPER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9GBWrapper10FreeBufferEi */
/* Demangled: GBWrapper::FreeBuffer(int) */
int _ZN9GBWrapper10FreeBufferEi(void);

/* Symbol: _ZN9GBWrapper10lock_writeEPPvi */
/* Demangled: GBWrapper::lock_write(void**, int) */
int _ZN9GBWrapper10lock_writeEPPvi(void);

/* Symbol: _ZN9GBWrapper15getNativeBufferEi */
/* Demangled: GBWrapper::getNativeBuffer(int) */
int _ZN9GBWrapper15getNativeBufferEi(void);

/* Symbol: _ZN9GBWrapper9lock_readEPPvi */
/* Demangled: GBWrapper::lock_read(void**, int) */
int _ZN9GBWrapper9lock_readEPPvi(void);

/* Symbol: _ZN9GBWrapperC1Ev */
/* Demangled: GBWrapper::GBWrapper() */
int _ZN9GBWrapperC1Ev(void);

/* Symbol: _ZN9GBWrapperC2Ev */
/* Demangled: GBWrapper::GBWrapper() */
int _ZN9GBWrapperC2Ev(void);

/* Symbol: _ZN9GBWrapperD1Ev */
/* Demangled: GBWrapper::~GBWrapper() */
int _ZN9GBWrapperD1Ev(void);

/* Symbol: _ZN9GBWrapperD2Ev */
/* Demangled: GBWrapper::~GBWrapper() */
int _ZN9GBWrapperD2Ev(void);

/* Symbol: gGraphicBuf */
/* Demangled: gGraphicBuf */
extern void* gGraphicBuf;

/* Symbol: gVersion */
/* Demangled: gVersion */
extern void* gVersion;

/* Symbol: _Z16isValidGBWrapperv */
/* Demangled: isValidGBWrapper() */
int _Z16isValidGBWrapperv(void);

/* Symbol: _ZN9GBWrapper11AllocBufferEiiji */
/* Demangled: GBWrapper::AllocBuffer(int, int, unsigned int, int) */
int _ZN9GBWrapper11AllocBufferEiiji(void);

/* Symbol: _Z17GBVersionInfo_GetPvi */
/* Demangled: GBVersionInfo_Get(void*, int) */
int _Z17GBVersionInfo_GetPvi(void);

/* Symbol: _ZN9GBWrapper6unlockEi */
/* Demangled: GBWrapper::unlock(int) */
int _ZN9GBWrapper6unlockEi(void);

/* Symbol: _ZN9GBWrapper9getStrideEi */
/* Demangled: GBWrapper::getStride(int) */
int _ZN9GBWrapper9getStrideEi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBALRNBRT_GL_GBWRAPPER_H */
