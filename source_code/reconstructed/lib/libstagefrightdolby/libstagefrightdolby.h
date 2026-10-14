/*
 * Reverse-Engineered ABI Specification for: libstagefrightdolby.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefrightdolby.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHTDOLBY_H
#define BEGONIA_RE_LIBSTAGEFRIGHTDOLBY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android14DolbyOMXPlugin19enumerateComponentsEPcjj */
/* Demangled: android::DolbyOMXPlugin::enumerateComponents(char*, unsigned int, unsigned int) */
int _ZN7android14DolbyOMXPlugin19enumerateComponentsEPcjj(void);

/* Symbol: _ZN7android14DolbyOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::DolbyOMXPlugin::makeComponentInstance(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android14DolbyOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android14DolbyOMXPluginC2Ev */
/* Demangled: android::DolbyOMXPlugin::DolbyOMXPlugin() */
int _ZN7android14DolbyOMXPluginC2Ev(void);

/* Symbol: _ZN7android15createOMXPluginEv */
/* Demangled: android::createOMXPlugin() */
int _ZN7android15createOMXPluginEv(void);

/* Symbol: _ZN7android14DolbyOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE */
/* Demangled: android::DolbyOMXPlugin::getRolesOfComponent(char const*, android::Vector<android::String8>*) */
int _ZN7android14DolbyOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE(void);

/* Symbol: _ZN7android14DolbyOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE */
/* Demangled: android::DolbyOMXPlugin::destroyComponentInstance(OMX_COMPONENTTYPE*) */
int _ZN7android14DolbyOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android14DolbyOMXPluginC1Ev */
/* Demangled: android::DolbyOMXPlugin::DolbyOMXPlugin() */
int _ZN7android14DolbyOMXPluginC1Ev(void);

/* Symbol: _ZTVN7android14DolbyOMXPluginE */
/* Demangled: vtable for android::DolbyOMXPlugin */
extern void* _ZTVN7android14DolbyOMXPluginE;

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHTDOLBY_H */
