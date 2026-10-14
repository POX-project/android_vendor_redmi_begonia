/*
 * Reverse-Engineered ABI Specification for: libnwk_opt_halwrap_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libnwk_opt_halwrap_vendor.so
 */

#ifndef BEGONIA_RE_LIBNWK_OPT_HALWRAP_VENDOR_H
#define BEGONIA_RE_LIBNWK_OPT_HALWRAP_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: NwkOptHal_Wrap_notifyAppState_S */
/* Demangled: NwkOptHal_Wrap_notifyAppState_S */
int NwkOptHal_Wrap_notifyAppState_S(void);

/* Symbol: NwkOptHal_wrap_switch_game_mode_S */
/* Demangled: NwkOptHal_wrap_switch_game_mode_S */
int NwkOptHal_wrap_switch_game_mode_S(void);

/* Symbol: _ZN7android2spI20NwkOptDeathRecipientED2Ev */
/* Demangled: android::sp<NwkOptDeathRecipient>::~sp() */
int _ZN7android2spI20NwkOptDeathRecipientED2Ev(void);

/* Symbol: _ZTV20NwkOptDeathRecipient */
/* Demangled: vtable for NwkOptDeathRecipient */
extern void* _ZTV20NwkOptDeathRecipient;

/* Symbol: NwkOptHal_wrap_setDisplayViewport_S */
/* Demangled: NwkOptHal_wrap_setDisplayViewport_S */
int NwkOptHal_wrap_setDisplayViewport_S(void);

/* Symbol: _ZN7android2spI20NwkOptDeathRecipientEaSEPS1_ */
/* Demangled: android::sp<NwkOptDeathRecipient>::operator=(NwkOptDeathRecipient*) */
int _ZN7android2spI20NwkOptDeathRecipientEaSEPS1_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEED2Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>::operator=(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEOS7_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEPS6_ */
/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>::operator=(vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt*) */
int _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEPS6_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNWK_OPT_HALWRAP_VENDOR_H */
