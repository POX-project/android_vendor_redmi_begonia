/*
 * Reverse-Engineered ABI Specification for: libcapctrl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcapctrl.so
 */

#ifndef BEGONIA_RE_LIBCAPCTRL_H
#define BEGONIA_RE_LIBCAPCTRL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z11findContexti */
/* Demangled: findContext(int) */
int _Z11findContexti(void);

/* Symbol: getQueryCapabilityCommand */
/* Demangled: getQueryCapabilityCommand */
int getQueryCapabilityCommand(void);

/* Symbol: removeContext */
/* Demangled: removeContext */
int removeContext(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIiEEjRKT_ */
/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::__erase_unique<int>(int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIiEEjRKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, AuthContext*>, std::__1::__tree_node<std::__1::__value_type<int, AuthContext*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::__emplace_unique_key_args<int, std::__1::pair<int, AuthContext*> >(int const&, std::__1::pair<int, AuthContext*>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, AuthContext*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: getAbortCommand */
/* Demangled: getAbortCommand */
int getAbortCommand(void);

/* Symbol: getCertPhase2Command */
/* Demangled: getCertPhase2Command */
int getCertPhase2Command(void);

/* Symbol: _Z11findContextv */
/* Demangled: findContext() */
int _Z11findContextv(void);

/* Symbol: _Z14getSegmentCodev */
/* Demangled: getSegmentCode() */
int _Z14getSegmentCodev(void);

/* Symbol: _Z16mbedAesEncCbc128PhS_S_S_j */
/* Demangled: mbedAesEncCbc128(unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned int) */
int _Z16mbedAesEncCbc128PhS_S_S_j(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: mbedtls_internal_aes_decrypt */
/* Demangled: mbedtls_internal_aes_decrypt */
int mbedtls_internal_aes_decrypt(void);

/* Symbol: mbedtls_internal_aes_encrypt */
/* Demangled: mbedtls_internal_aes_encrypt */
int mbedtls_internal_aes_encrypt(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: updateRnd */
/* Demangled: updateRnd */
int updateRnd(void);

/* Symbol: mbedtls_aes_free */
/* Demangled: mbedtls_aes_free */
int mbedtls_aes_free(void);

/* Symbol: _Z12printContextv */
/* Demangled: printContext() */
int _Z12printContextv(void);

/* Symbol: mbedtls_aes_self_test */
/* Demangled: mbedtls_aes_self_test */
int mbedtls_aes_self_test(void);

/* Symbol: getCapabilityCommand */
/* Demangled: getCapabilityCommand */
int getCapabilityCommand(void);

/* Symbol: mbedtls_aes_crypt_ecb */
/* Demangled: mbedtls_aes_crypt_ecb */
int mbedtls_aes_crypt_ecb(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: getQueryPrefixCommand */
/* Demangled: getQueryPrefixCommand */
int getQueryPrefixCommand(void);

/* Symbol: mAuthContext */
/* Demangled: mAuthContext */
extern void* mAuthContext;

/* Symbol: mbedtls_aes_crypt_cbc */
/* Demangled: mbedtls_aes_crypt_cbc */
int mbedtls_aes_crypt_cbc(void);

/* Symbol: mbedtls_aes_setkey_enc */
/* Demangled: mbedtls_aes_setkey_enc */
int mbedtls_aes_setkey_enc(void);

/* Symbol: mbedtls_aes_setkey_dec */
/* Demangled: mbedtls_aes_setkey_dec */
int mbedtls_aes_setkey_dec(void);

/* Symbol: mbedtls_platform_zeroize */
/* Demangled: mbedtls_platform_zeroize */
int mbedtls_platform_zeroize(void);

/* Symbol: _Z12stringToBytePciPS_ */
/* Demangled: stringToByte(char*, int, char**) */
int _Z12stringToBytePciPS_(void);

/* Symbol: getCertPhase1Command */
/* Demangled: getCertPhase1Command */
int getCertPhase1Command(void);

/* Symbol: mRnd */
/* Demangled: mRnd */
extern void* mRnd;

/* Symbol: mbedtls_aes_init */
/* Demangled: mbedtls_aes_init */
int mbedtls_aes_init(void);

/* Symbol: updateContext */
/* Demangled: updateContext */
int updateContext(void);

/* Symbol: mbedtls_aes_decrypt */
/* Demangled: mbedtls_aes_decrypt */
int mbedtls_aes_decrypt(void);

/* Symbol: mbedtls_aes_encrypt */
/* Demangled: mbedtls_aes_encrypt */
int mbedtls_aes_encrypt(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: getAuthPhaseCommand */
/* Demangled: getAuthPhaseCommand */
int getAuthPhaseCommand(void);

/* Symbol: getAuthPrefixCommand */
/* Demangled: getAuthPrefixCommand */
int getAuthPrefixCommand(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z12byteToStringPciPS_ */
/* Demangled: byteToString(char*, int, char**) */
int _Z12byteToStringPciPS_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAPCTRL_H */
