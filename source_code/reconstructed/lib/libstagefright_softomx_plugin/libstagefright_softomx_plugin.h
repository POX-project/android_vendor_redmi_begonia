/*
 * Reverse-Engineered ABI Specification for: libstagefright_softomx_plugin.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_softomx_plugin.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_SOFTOMX_PLUGIN_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_SOFTOMX_PLUGIN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android13SoftOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE */
/* Demangled: android::SoftOMXPlugin::getRolesOfComponent(char const*, android::Vector<android::String8>*) */
int _ZN7android13SoftOMXPlugin19getRolesOfComponentEPKcPNS_6VectorINS_7String8EEE(void);

/* Symbol: _ZN7android13SoftOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftOMXPlugin::destroyComponentInstance(OMX_COMPONENTTYPE*) */
int _ZN7android13SoftOMXPlugin24destroyComponentInstanceEP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android13SoftOMXPluginC1Ev */
/* Demangled: android::SoftOMXPlugin::SoftOMXPlugin() */
int _ZN7android13SoftOMXPluginC1Ev(void);

/* Symbol: _ZTVN7android13SoftOMXPluginE */
/* Demangled: vtable for android::SoftOMXPlugin */
extern void* _ZTVN7android13SoftOMXPluginE;

/* Symbol: createOMXPlugin */
/* Demangled: createOMXPlugin */
int createOMXPlugin(void);

/* Symbol: destroyOMXPlugin */
/* Demangled: destroyOMXPlugin */
int destroyOMXPlugin(void);

/* Symbol: _ZN7android13SoftOMXPlugin19enumerateComponentsEPcjj */
/* Demangled: android::SoftOMXPlugin::enumerateComponents(char*, unsigned int, unsigned int) */
int _ZN7android13SoftOMXPlugin19enumerateComponentsEPcjj(void);

/* Symbol: _ZN7android13SoftOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftOMXPlugin::makeComponentInstance(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android13SoftOMXPlugin21makeComponentInstanceEPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android13SoftOMXPluginC2Ev */
/* Demangled: android::SoftOMXPlugin::SoftOMXPlugin() */
int _ZN7android13SoftOMXPluginC2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_SOFTOMX_PLUGIN_H */
