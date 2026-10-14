/*
 * Reverse-Engineered ABI Specification for: libaudiocomponentengine_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiocomponentengine_vendor.so
 */

#ifndef BEGONIA_RE_LIBAUDIOCOMPONENTENGINE_VENDOR_H
#define BEGONIA_RE_LIBAUDIOCOMPONENTENGINE_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MtkAudioLoudEnableXMLCallBack */
/* Demangled: MtkAudioLoudEnableXMLCallBack */
int MtkAudioLoudEnableXMLCallBack(void);

/* Symbol: _ZN7android11MtkAudioSrcC2Ejjjj14SRC_PCM_FORMAT */
/* Demangled: android::MtkAudioSrc::MtkAudioSrc(unsigned int, unsigned int, unsigned int, unsigned int, SRC_PCM_FORMAT) */
int _ZN7android11MtkAudioSrcC2Ejjjj14SRC_PCM_FORMAT(void);

/* Symbol: _ZN7android20MtkAudioBitConverterC1Ev */
/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter() */
int _ZN7android20MtkAudioBitConverterC1Ev(void);

/* Symbol: _ZN7android16MtkAudioDcRemoveD0Ev */
/* Demangled: android::MtkAudioDcRemove::~MtkAudioDcRemove() */
int _ZN7android16MtkAudioDcRemoveD0Ev(void);

/* Symbol: _ZN7android11MtkAudioSrc12setParameterEjPv */
/* Demangled: android::MtkAudioSrc::setParameter(unsigned int, void*) */
int _ZN7android11MtkAudioSrc12setParameterEjPv(void);

/* Symbol: _ZN7android11MtkAudioSrcD2Ev */
/* Demangled: android::MtkAudioSrc::~MtkAudioSrc() */
int _ZN7android11MtkAudioSrcD2Ev(void);

/* Symbol: _ZN7android20MtkAudioBitConverter11resetBufferEv */
/* Demangled: android::MtkAudioBitConverter::resetBuffer() */
int _ZN7android20MtkAudioBitConverter11resetBufferEv(void);

/* Symbol: _ZN7android20MtkAudioBitConverter7processEPvPjS1_S2_ */
/* Demangled: android::MtkAudioBitConverter::process(void*, unsigned int*, void*, unsigned int*) */
int _ZN7android20MtkAudioBitConverter7processEPvPjS1_S2_(void);

/* Symbol: createMtkDcRemove */
/* Demangled: createMtkDcRemove */
int createMtkDcRemove(void);

/* Symbol: _ZN7android16MtkAudioDcRemove11resetBufferEv */
/* Demangled: android::MtkAudioDcRemove::resetBuffer() */
int _ZN7android16MtkAudioDcRemove11resetBufferEv(void);

/* Symbol: _ZN7android11MtkAudioSrcC2Ev */
/* Demangled: android::MtkAudioSrc::MtkAudioSrc() */
int _ZN7android11MtkAudioSrcC2Ev(void);

/* Symbol: _ZN7android20MtkAudioBitConverter12setParameterEjPv */
/* Demangled: android::MtkAudioBitConverter::setParameter(unsigned int, void*) */
int _ZN7android20MtkAudioBitConverter12setParameterEjPv(void);

/* Symbol: _ZN7android20MtkAudioBitConverterD0Ev */
/* Demangled: android::MtkAudioBitConverter::~MtkAudioBitConverter() */
int _ZN7android20MtkAudioBitConverterD0Ev(void);

/* Symbol: destroyMtkAudioCustParamCache */
/* Demangled: destroyMtkAudioCustParamCache */
int destroyMtkAudioCustParamCache(void);

/* Symbol: _ZN7android16MtkAudioDcRemove4initEjjjj */
/* Demangled: android::MtkAudioDcRemove::init(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN7android16MtkAudioDcRemove4initEjjjj(void);

/* Symbol: _ZTVN7android11MtkAudioSrcE */
/* Demangled: vtable for android::MtkAudioSrc */
extern void* _ZTVN7android11MtkAudioSrcE;

/* Symbol: destroyMtkAudioDcRemove */
/* Demangled: destroyMtkAudioDcRemove */
int destroyMtkAudioDcRemove(void);

/* Symbol: _ZN7android16MtkAudioDcRemove7processEPvPjS1_S2_ */
/* Demangled: android::MtkAudioDcRemove::process(void*, unsigned int*, void*, unsigned int*) */
int _ZN7android16MtkAudioDcRemove7processEPvPjS1_S2_(void);

/* Symbol: _ZN7android11MtkAudioSrc11resetBufferEv */
/* Demangled: android::MtkAudioSrc::resetBuffer() */
int _ZN7android11MtkAudioSrc11resetBufferEv(void);

/* Symbol: _ZN7android11MtkAudioSrc5closeEv */
/* Demangled: android::MtkAudioSrc::close() */
int _ZN7android11MtkAudioSrc5closeEv(void);

/* Symbol: _ZN7android11MtkAudioSrcD1Ev */
/* Demangled: android::MtkAudioSrc::~MtkAudioSrc() */
int _ZN7android11MtkAudioSrcD1Ev(void);

/* Symbol: _ZN7android20MtkAudioBitConverter12getParameterEjPv */
/* Demangled: android::MtkAudioBitConverter::getParameter(unsigned int, void*) */
int _ZN7android20MtkAudioBitConverter12getParameterEjPv(void);

/* Symbol: _ZN7android20MtkAudioBitConverter4openEv */
/* Demangled: android::MtkAudioBitConverter::open() */
int _ZN7android20MtkAudioBitConverter4openEv(void);

/* Symbol: _ZN7android20MtkAudioBitConverterC2Ejj14BCV_PCM_FORMAT */
/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter(unsigned int, unsigned int, BCV_PCM_FORMAT) */
int _ZN7android20MtkAudioBitConverterC2Ejj14BCV_PCM_FORMAT(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN7android20MtkAudioBitConverterC1Ejj14BCV_PCM_FORMAT */
/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter(unsigned int, unsigned int, BCV_PCM_FORMAT) */
int _ZN7android20MtkAudioBitConverterC1Ejj14BCV_PCM_FORMAT(void);

/* Symbol: destroyMtkAudioLoud */
/* Demangled: destroyMtkAudioLoud */
int destroyMtkAudioLoud(void);

/* Symbol: _ZN7android16MtkAudioDcRemove12getParameterEjPv */
/* Demangled: android::MtkAudioDcRemove::getParameter(unsigned int, void*) */
int _ZN7android16MtkAudioDcRemove12getParameterEjPv(void);

/* Symbol: _ZN7android11MtkAudioSrc23multiChannelResetBufferEv */
/* Demangled: android::MtkAudioSrc::multiChannelResetBuffer() */
int _ZN7android11MtkAudioSrc23multiChannelResetBufferEv(void);

/* Symbol: _ZN7android11MtkAudioSrcC1Ev */
/* Demangled: android::MtkAudioSrc::MtkAudioSrc() */
int _ZN7android11MtkAudioSrcC1Ev(void);

/* Symbol: destroyMtkAudioBitConverter */
/* Demangled: destroyMtkAudioBitConverter */
int destroyMtkAudioBitConverter(void);

/* Symbol: _ZTVN7android20MtkAudioBitConverterE */
/* Demangled: vtable for android::MtkAudioBitConverter */
extern void* _ZTVN7android20MtkAudioBitConverterE;

/* Symbol: _ZN7android16MtkAudioDcRemove4openEv */
/* Demangled: android::MtkAudioDcRemove::open() */
int _ZN7android16MtkAudioDcRemove4openEv(void);

/* Symbol: _ZN7android11MtkAudioSrc12getParameterEjPv */
/* Demangled: android::MtkAudioSrc::getParameter(unsigned int, void*) */
int _ZN7android11MtkAudioSrc12getParameterEjPv(void);

/* Symbol: _ZN7android11MtkAudioSrcD0Ev */
/* Demangled: android::MtkAudioSrc::~MtkAudioSrc() */
int _ZN7android11MtkAudioSrcD0Ev(void);

/* Symbol: createMtkAudioBitConverter */
/* Demangled: createMtkAudioBitConverter */
int createMtkAudioBitConverter(void);

/* Symbol: _ZN7android11MtkAudioSrc16multiChannelOpenEv */
/* Demangled: android::MtkAudioSrc::multiChannelOpen() */
int _ZN7android11MtkAudioSrc16multiChannelOpenEv(void);

/* Symbol: _ZN7android11MtkAudioSrc7processEPvPjS1_S2_ */
/* Demangled: android::MtkAudioSrc::process(void*, unsigned int*, void*, unsigned int*) */
int _ZN7android11MtkAudioSrc7processEPvPjS1_S2_(void);

/* Symbol: _ZN7android11MtkAudioSrcC1Ejjjj14SRC_PCM_FORMAT */
/* Demangled: android::MtkAudioSrc::MtkAudioSrc(unsigned int, unsigned int, unsigned int, unsigned int, SRC_PCM_FORMAT) */
int _ZN7android11MtkAudioSrcC1Ejjjj14SRC_PCM_FORMAT(void);

/* Symbol: _ZN7android16MtkAudioDcRemoveD2Ev */
/* Demangled: android::MtkAudioDcRemove::~MtkAudioDcRemove() */
int _ZN7android16MtkAudioDcRemoveD2Ev(void);

/* Symbol: _ZN7android20MtkAudioBitConverter5closeEv */
/* Demangled: android::MtkAudioBitConverter::close() */
int _ZN7android20MtkAudioBitConverter5closeEv(void);

/* Symbol: _ZN7android16MtkAudioDcRemove5closeEv */
/* Demangled: android::MtkAudioDcRemove::close() */
int _ZN7android16MtkAudioDcRemove5closeEv(void);

/* Symbol: _ZN7android16MtkAudioDcRemoveC2Ev */
/* Demangled: android::MtkAudioDcRemove::MtkAudioDcRemove() */
int _ZN7android16MtkAudioDcRemoveC2Ev(void);

/* Symbol: _ZN7android20MtkAudioBitConverterD2Ev */
/* Demangled: android::MtkAudioBitConverter::~MtkAudioBitConverter() */
int _ZN7android20MtkAudioBitConverterD2Ev(void);

/* Symbol: createMtkAudioCustParamCache */
/* Demangled: createMtkAudioCustParamCache */
int createMtkAudioCustParamCache(void);

/* Symbol: destroyMtkAudioSrc */
/* Demangled: destroyMtkAudioSrc */
int destroyMtkAudioSrc(void);

/* Symbol: _ZN7android11MtkAudioSrc4openEv */
/* Demangled: android::MtkAudioSrc::open() */
int _ZN7android11MtkAudioSrc4openEv(void);

/* Symbol: _ZN7android20MtkAudioBitConverterC2Ev */
/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter() */
int _ZN7android20MtkAudioBitConverterC2Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN7android16MtkAudioDcRemoveD1Ev */
/* Demangled: android::MtkAudioDcRemove::~MtkAudioDcRemove() */
int _ZN7android16MtkAudioDcRemoveD1Ev(void);

/* Symbol: _ZN7android16MtkAudioDcRemoveC1Ev */
/* Demangled: android::MtkAudioDcRemove::MtkAudioDcRemove() */
int _ZN7android16MtkAudioDcRemoveC1Ev(void);

/* Symbol: createMtkAudioLoud */
/* Demangled: createMtkAudioLoud */
int createMtkAudioLoud(void);

/* Symbol: createMtkAudioSrc */
/* Demangled: createMtkAudioSrc */
int createMtkAudioSrc(void);

/* Symbol: _ZN7android16MtkAudioDcRemove12setParameterEjPv */
/* Demangled: android::MtkAudioDcRemove::setParameter(unsigned int, void*) */
int _ZN7android16MtkAudioDcRemove12setParameterEjPv(void);

/* Symbol: _ZTVN7android16MtkAudioDcRemoveE */
/* Demangled: vtable for android::MtkAudioDcRemove */
extern void* _ZTVN7android16MtkAudioDcRemoveE;

/* Symbol: _ZN7android11MtkAudioSrc19multiChannelProcessEPvPjS1_S2_ */
/* Demangled: android::MtkAudioSrc::multiChannelProcess(void*, unsigned int*, void*, unsigned int*) */
int _ZN7android11MtkAudioSrc19multiChannelProcessEPvPjS1_S2_(void);

/* Symbol: _ZN7android20MtkAudioBitConverterD1Ev */
/* Demangled: android::MtkAudioBitConverter::~MtkAudioBitConverter() */
int _ZN7android20MtkAudioBitConverterD1Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOCOMPONENTENGINE_VENDOR_H */
