/*
 * Reverse-Engineered ABI Specification for: wechat.beanpod.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: wechat.beanpod.so
 */

#ifndef BEGONIA_RE_WECHAT_BEANPOD_H
#define BEGONIA_RE_WECHAT_BEANPOD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _Z13get_device_idPhPm */
/* Demangled: get_device_id(unsigned char*, unsigned long*) */
int _Z13get_device_idPhPm(void);

/* Symbol: _Z15remove_auth_keyPKhPKc */
/* Demangled: remove_auth_key(unsigned char const*, char const*) */
int _Z15remove_auth_keyPKhPKc(void);

/* Symbol: _Z16auth_finish_signiPvjS_PjS_S0_ */
/* Demangled: auth_finish_sign(int, void*, unsigned int, void*, unsigned int*, void*, unsigned int*) */
int _Z16auth_finish_signiPvjS_PjS_S0_(void);

/* Symbol: _Z21generate_ask_key_pairPKh */
/* Demangled: generate_ask_key_pair(unsigned char const*) */
int _Z21generate_ask_key_pairPKh(void);

/* Symbol: _Z12gen_attk_keyij */
/* Demangled: gen_attk_key(int, unsigned int) */
int _Z12gen_attk_keyij(void);

/* Symbol: _Z12gen_auth_keyiiPvj */
/* Demangled: gen_auth_key(int, int, void*, unsigned int) */
int _Z12gen_auth_keyiiPvj(void);

/* Symbol: _Z14auth_init_signiiPvjS_jS_Pj */
/* Demangled: auth_init_sign(int, int, void*, unsigned int, void*, unsigned int, void*, unsigned int*) */
int _Z14auth_init_signiiPvjS_jS_Pj(void);

/* Symbol: _Z14invoke_commandijPvPjS_S0_ */
/* Demangled: invoke_command(int, unsigned int, void*, unsigned int*, void*, unsigned int*) */
int _Z14invoke_commandijPvPjS_S0_(void);

/* Symbol: _Z21export_ask_public_keyPKhP16soter_ask_struct */
/* Demangled: export_ask_public_key(unsigned char const*, soter_ask_struct*) */
int _Z21export_ask_public_keyPKhP16soter_ask_struct(void);

/* Symbol: _Z12has_auth_keyPKhPKc */
/* Demangled: has_auth_key(unsigned char const*, char const*) */
int _Z12has_auth_keyPKhPKc(void);

/* Symbol: _Z20verify_attk_key_pairv */
/* Demangled: verify_attk_key_pair() */
int _Z20verify_attk_key_pairv(void);

/* Symbol: _Z22generate_attk_key_pairh */
/* Demangled: generate_attk_key_pair(unsigned char) */
int _Z22generate_attk_key_pairh(void);

/* Symbol: _Z8get_infoiPhPm */
/* Demangled: get_info(int, unsigned char*, unsigned long*) */
int _Z8get_infoiPhPm(void);

/* Symbol: _Z11finish_signPK18soter_sign_sessionP24soter_sign_result_struct */
/* Demangled: finish_sign(soter_sign_session const*, soter_sign_result_struct*) */
int _Z11finish_signPK18soter_sign_sessionP24soter_sign_result_struct(void);

/* Symbol: _Z15has_ask_alreadyPKh */
/* Demangled: has_ask_already(unsigned char const*) */
int _Z15has_ask_alreadyPKh(void);

/* Symbol: _Z22export_attk_public_keyPhPm */
/* Demangled: export_attk_public_key(unsigned char*, unsigned long*) */
int _Z22export_attk_public_keyPhPm(void);

/* Symbol: _Z22generate_auth_key_pairPKhPKc */
/* Demangled: generate_auth_key_pair(unsigned char const*, char const*) */
int _Z22generate_auth_key_pairPKhPKc(void);

/* Symbol: _Z8set_infoiPvj */
/* Demangled: set_info(int, void*, unsigned int) */
int _Z8set_infoiPvj(void);

/* Symbol: _Z14auth_key_utilsiiPvjS_PjS_S0_ */
/* Demangled: auth_key_utils(int, int, void*, unsigned int, void*, unsigned int*, void*, unsigned int*) */
int _Z14auth_key_utilsiiPvjS_PjS_S0_(void);

/* Symbol: _Z15get_wechat_infoP13wechat_info_tPm */
/* Demangled: get_wechat_info(wechat_info_t*, unsigned long*) */
int _Z15get_wechat_infoP13wechat_info_tPm(void);

/* Symbol: _Z18remove_all_uid_keyPKh */
/* Demangled: remove_all_uid_key(unsigned char const*) */
int _Z18remove_all_uid_keyPKh(void);

/* Symbol: _Z26export_auth_key_public_keyPKhPKcP21soter_auth_key_struct */
/* Demangled: export_auth_key_public_key(unsigned char const*, char const*, soter_auth_key_struct*) */
int _Z26export_auth_key_public_keyPKhPKcP21soter_auth_key_struct(void);

/* Symbol: _Z9init_signPKhPKcS2_P18soter_sign_session */
/* Demangled: init_sign(unsigned char const*, char const*, char const*, soter_sign_session*) */
int _Z9init_signPKhPKcS2_P18soter_sign_session(void);

/* Symbol: host_name */
/* Demangled: host_name */
extern void* host_name;

__END_DECLS

#endif /* BEGONIA_RE_WECHAT_BEANPOD_H */
