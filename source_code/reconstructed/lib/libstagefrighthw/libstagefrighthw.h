/*
 * Reverse-Engineered ABI Specification for: libstagefrighthw.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefrighthw.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHTHW_H
#define BEGONIA_RE_LIBSTAGEFRIGHTHW_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android12MtkOMXPlugin19enumerateComponentsEPcjj */
/* Demangled: android::MtkOMXPlugin::enumerateComponents(char*, unsigned int, unsigned int) */
int _ZN7android12MtkOMXPlugin19enumerateComponentsEPcjj(void);

/* Symbol: _ZN7android12MtkOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::MtkOMXPlugin::makeComponentInstance(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android12MtkOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android12MtkOMXPluginC2Ev */
/* Demangled: android::MtkOMXPlugin::MtkOMXPlugin() */
int _ZN7android12MtkOMXPluginC2Ev(void);

/* Symbol: _ZN7android12MtkOMXPluginD1Ev */
/* Demangled: android::MtkOMXPlugin::~MtkOMXPlugin() */
int _ZN7android12MtkOMXPluginD1Ev(void);

/* Symbol: _ZN7android15createOMXPluginEv */
/* Demangled: android::createOMXPlugin() */
int _ZN7android15createOMXPluginEv(void);

/* Symbol: _ZN7android12MtkOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE */
/* Demangled: android::MtkOMXPlugin::getRolesOfComponent(char const*, android::Vector<android::String8>*) */
int _ZN7android12MtkOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE(void);

/* Symbol: _ZN7android12MtkOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE */
/* Demangled: android::MtkOMXPlugin::destroyComponentInstance(OMX_COMPONENTTYPE*) */
int _ZN7android12MtkOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android12MtkOMXPluginC1Ev */
/* Demangled: android::MtkOMXPlugin::MtkOMXPlugin() */
int _ZN7android12MtkOMXPluginC1Ev(void);

/* Symbol: _ZN7android12MtkOMXPluginD0Ev */
/* Demangled: android::MtkOMXPlugin::~MtkOMXPlugin() */
int _ZN7android12MtkOMXPluginD0Ev(void);

/* Symbol: _ZN7android12MtkOMXPluginD2Ev */
/* Demangled: android::MtkOMXPlugin::~MtkOMXPlugin() */
int _ZN7android12MtkOMXPluginD2Ev(void);

/* Symbol: _ZTVN7android12MtkOMXPluginE */
/* Demangled: vtable for android::MtkOMXPlugin */
extern void* _ZTVN7android12MtkOMXPluginE;

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHTHW_H */
