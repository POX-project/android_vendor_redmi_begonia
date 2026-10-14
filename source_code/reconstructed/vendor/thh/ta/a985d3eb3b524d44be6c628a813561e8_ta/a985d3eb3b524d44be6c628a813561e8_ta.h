/*
 * Reverse-Engineered ABI Specification for: a985d3eb3b524d44be6c628a813561e8.ta
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Executable Service Daemon
 * Soname: a985d3eb3b524d44be6c628a813561e8.ta
 */

#ifndef BEGONIA_RE_A985D3EB3B524D44BE6C628A813561E8_TA_H
#define BEGONIA_RE_A985D3EB3B524D44BE6C628A813561E8_TA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: sign */
/* Demangled: sign */
extern void* sign;

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: pubkey_three_py */
/* Demangled: pubkey_three_py */
extern void* pubkey_three_py;

/* Symbol: pubkey_three_px */
/* Demangled: pubkey_three_px */
extern void* pubkey_three_px;

/* Symbol: sm2_param_ende_key */
/* Demangled: sm2_param_ende_key */
extern void* sm2_param_ende_key;

/* Symbol: _fini */
/* Demangled: _fini */
int _fini(void);

/* Symbol: handle_process */
/* Demangled: handle_process */
extern void* handle_process;

/* Symbol: EC_GROUP_new_curve_GF2m */
/* Demangled: EC_GROUP_new_curve_GF2m */
int EC_GROUP_new_curve_GF2m(void);

/* Symbol: EC_POINT_set_affine_coordinates_GF2m */
/* Demangled: EC_POINT_set_affine_coordinates_GF2m */
int EC_POINT_set_affine_coordinates_GF2m(void);

/* Symbol: BN_sub */
/* Demangled: BN_sub */
int BN_sub(void);

/* Symbol: TA_InvokeCommandEntryPoint */
/* Demangled: TA_InvokeCommandEntryPoint */
int TA_InvokeCommandEntryPoint(void);

/* Symbol: __exidx_start */
/* Demangled: __exidx_start */
extern void* obj___exidx_start __asm__("__exidx_start");

/* Symbol: TA_CloseSessionEntryPoint */
/* Demangled: TA_CloseSessionEntryPoint */
int TA_CloseSessionEntryPoint(void);

/* Symbol: sm2_param_dh_h */
/* Demangled: sm2_param_dh_h */
extern void* sm2_param_dh_h;

/* Symbol: __L4_KIP_ADDR__ */
/* Demangled: __L4_KIP_ADDR__ */
extern void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__");

/* Symbol: ALPHABET */
/* Demangled: ALPHABET */
extern void* ALPHABET;

/* Symbol: base64_encode */
/* Demangled: base64_encode */
int base64_encode(void);

/* Symbol: sm2_param_sign_r */
/* Demangled: sm2_param_sign_r */
extern void* sm2_param_sign_r;

/* Symbol: const_aid */
/* Demangled: const_aid */
extern void* const_aid;

/* Symbol: ecp */
/* Demangled: ecp */
extern void* ecp;

/* Symbol: sign_head */
/* Demangled: sign_head */
extern void* sign_head;

/* Symbol: _init */
/* Demangled: _init */
int _init(void);

/* Symbol: sm2_param_sign_pri */
/* Demangled: sm2_param_sign_pri */
extern void* sm2_param_sign_pri;

/* Symbol: lh_strhash */
/* Demangled: lh_strhash */
int lh_strhash(void);

/* Symbol: sm2_param_recommand */
/* Demangled: sm2_param_recommand */
extern void* sm2_param_recommand;

/* Symbol: TA_OpenSessionEntryPoint */
/* Demangled: TA_OpenSessionEntryPoint */
int TA_OpenSessionEntryPoint(void);

/* Symbol: EC_POINT_get_affine_coordinates_GFp */
/* Demangled: EC_POINT_get_affine_coordinates_GFp */
int EC_POINT_get_affine_coordinates_GFp(void);

/* Symbol: _start */
/* Demangled: _start */
int _start(void);

/* Symbol: __exidx_end */
/* Demangled: __exidx_end */
extern void* obj___exidx_end __asm__("__exidx_end");

/* Symbol: BN_add */
/* Demangled: BN_add */
int BN_add(void);

/* Symbol: sm2_param_ende_r */
/* Demangled: sm2_param_ende_r */
extern void* sm2_param_ende_r;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: key_file_len */
/* Demangled: key_file_len */
extern void* key_file_len;

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* obj___end__ __asm__("__end__");

/* Symbol: TA_DestroyEntryPoint */
/* Demangled: TA_DestroyEntryPoint */
int TA_DestroyEntryPoint(void);

/* Symbol: key_file_name */
/* Demangled: key_file_name */
extern void* key_file_name;

/* Symbol: eig_msg */
/* Demangled: eig_msg */
extern void* eig_msg;

/* Symbol: cleanse_ctr */
/* Demangled: cleanse_ctr */
extern void* cleanse_ctr;

/* Symbol: BZ2_crc32Table */
/* Demangled: BZ2_crc32Table */
extern void* BZ2_crc32Table;

/* Symbol: EC_GROUP_new_curve_GFp */
/* Demangled: EC_GROUP_new_curve_GFp */
int EC_GROUP_new_curve_GFp(void);

/* Symbol: base64_decode */
/* Demangled: base64_decode */
int base64_decode(void);

/* Symbol: sm2_param_dh_A */
/* Demangled: sm2_param_dh_A */
extern void* sm2_param_dh_A;

/* Symbol: sm2_param_dh_B */
/* Demangled: sm2_param_dh_B */
extern void* sm2_param_dh_B;

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* obj___bss_start__ __asm__("__bss_start__");

/* Symbol: sm2_param_dh_key_B */
/* Demangled: sm2_param_dh_key_B */
extern void* sm2_param_dh_key_B;

/* Symbol: sm2_param_dh_key_A */
/* Demangled: sm2_param_dh_key_A */
extern void* sm2_param_dh_key_A;

/* Symbol: EC_POINT_get_affine_coordinates_GF2m */
/* Demangled: EC_POINT_get_affine_coordinates_GF2m */
int EC_POINT_get_affine_coordinates_GF2m(void);

/* Symbol: CNTR_BEF */
/* Demangled: CNTR_BEF */
extern void* CNTR_BEF;

/* Symbol: _ta_cfg */
/* Demangled: _ta_cfg */
extern void* _ta_cfg;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: BZ2_rNums */
/* Demangled: BZ2_rNums */
extern void* BZ2_rNums;

/* Symbol: pic_buffer */
/* Demangled: pic_buffer */
extern void* pic_buffer;

/* Symbol: EC_POINT_set_affine_coordinates_GFp */
/* Demangled: EC_POINT_set_affine_coordinates_GFp */
int EC_POINT_set_affine_coordinates_GFp(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* obj___bss_end__ __asm__("__bss_end__");

/* Symbol: message_data */
/* Demangled: message_data */
extern void* message_data;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: base64char */
/* Demangled: base64char */
extern void* base64char;

/* Symbol: TA_CreateEntryPoint */
/* Demangled: TA_CreateEntryPoint */
int TA_CreateEntryPoint(void);

__END_DECLS

#endif /* BEGONIA_RE_A985D3EB3B524D44BE6C628A813561E8_TA_H */
