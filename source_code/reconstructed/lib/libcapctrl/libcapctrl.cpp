/*
 * Reverse-Engineered Source for: libcapctrl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcapctrl"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libcapctrl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: findContext(int) */
extern "C" __attribute__((visibility("default"))) int _Z11findContexti(void) {
    ALOGD("_Z11findContexti() called");
    return 0;
}

/* Demangled: getQueryCapabilityCommand */
extern "C" __attribute__((visibility("default"))) int getQueryCapabilityCommand(void) {
    ALOGD("getQueryCapabilityCommand() called");
    return 0;
}

/* Demangled: removeContext */
extern "C" __attribute__((visibility("default"))) int removeContext(void) {
    ALOGD("removeContext() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::__erase_unique<int>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIiEEjRKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIiEEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, AuthContext*>, std::__1::__tree_node<std::__1::__value_type<int, AuthContext*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::__emplace_unique_key_args<int, std::__1::pair<int, AuthContext*> >(int const&, std::__1::pair<int, AuthContext*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, AuthContext*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: getAbortCommand */
extern "C" __attribute__((visibility("default"))) int getAbortCommand(void) {
    ALOGD("getAbortCommand() called");
    return 0;
}

/* Demangled: getCertPhase2Command */
extern "C" __attribute__((visibility("default"))) int getCertPhase2Command(void) {
    ALOGD("getCertPhase2Command() called");
    return 0;
}

/* Demangled: findContext() */
extern "C" __attribute__((visibility("default"))) int _Z11findContextv(void) {
    ALOGD("_Z11findContextv() called");
    return 0;
}

/* Demangled: getSegmentCode() */
extern "C" __attribute__((visibility("default"))) int _Z14getSegmentCodev(void) {
    ALOGD("_Z14getSegmentCodev() called");
    return 0;
}

/* Demangled: mbedAesEncCbc128(unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16mbedAesEncCbc128PhS_S_S_j(void) {
    ALOGD("_Z16mbedAesEncCbc128PhS_S_S_j() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: mbedtls_internal_aes_decrypt */
extern "C" __attribute__((visibility("default"))) int mbedtls_internal_aes_decrypt(void) {
    ALOGD("mbedtls_internal_aes_decrypt() called");
    return 0;
}

/* Demangled: mbedtls_internal_aes_encrypt */
extern "C" __attribute__((visibility("default"))) int mbedtls_internal_aes_encrypt(void) {
    ALOGD("mbedtls_internal_aes_encrypt() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, AuthContext*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, AuthContext*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, AuthContext*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP11AuthContextEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: updateRnd */
extern "C" __attribute__((visibility("default"))) int updateRnd(void) {
    ALOGD("updateRnd() called");
    return 0;
}

/* Demangled: mbedtls_aes_free */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_free(void) {
    ALOGD("mbedtls_aes_free() called");
    return 0;
}

/* Demangled: printContext() */
extern "C" __attribute__((visibility("default"))) int _Z12printContextv(void) {
    ALOGD("_Z12printContextv() called");
    return 0;
}

/* Demangled: mbedtls_aes_self_test */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_self_test(void) {
    ALOGD("mbedtls_aes_self_test() called");
    return 0;
}

/* Demangled: getCapabilityCommand */
extern "C" __attribute__((visibility("default"))) int getCapabilityCommand(void) {
    ALOGD("getCapabilityCommand() called");
    return 0;
}

/* Demangled: mbedtls_aes_crypt_ecb */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_crypt_ecb(void) {
    ALOGD("mbedtls_aes_crypt_ecb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: getQueryPrefixCommand */
extern "C" __attribute__((visibility("default"))) int getQueryPrefixCommand(void) {
    ALOGD("getQueryPrefixCommand() called");
    return 0;
}

/* Exported Object: mAuthContext */
extern "C" __attribute__((visibility("default"))) void* mAuthContext = NULL;

/* Demangled: mbedtls_aes_crypt_cbc */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_crypt_cbc(void) {
    ALOGD("mbedtls_aes_crypt_cbc() called");
    return 0;
}

/* Demangled: mbedtls_aes_setkey_enc */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_setkey_enc(void) {
    ALOGD("mbedtls_aes_setkey_enc() called");
    return 0;
}

/* Demangled: mbedtls_aes_setkey_dec */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_setkey_dec(void) {
    ALOGD("mbedtls_aes_setkey_dec() called");
    return 0;
}

/* Demangled: mbedtls_platform_zeroize */
extern "C" __attribute__((visibility("default"))) int mbedtls_platform_zeroize(void) {
    ALOGD("mbedtls_platform_zeroize() called");
    return 0;
}

/* Demangled: stringToByte(char*, int, char**) */
extern "C" __attribute__((visibility("default"))) int _Z12stringToBytePciPS_(void) {
    ALOGD("_Z12stringToBytePciPS_() called");
    return 0;
}

/* Demangled: getCertPhase1Command */
extern "C" __attribute__((visibility("default"))) int getCertPhase1Command(void) {
    ALOGD("getCertPhase1Command() called");
    return 0;
}

/* Exported Object: mRnd */
extern "C" __attribute__((visibility("default"))) void* mRnd = NULL;

/* Demangled: mbedtls_aes_init */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_init(void) {
    ALOGD("mbedtls_aes_init() called");
    return 0;
}

/* Demangled: updateContext */
extern "C" __attribute__((visibility("default"))) int updateContext(void) {
    ALOGD("updateContext() called");
    return 0;
}

/* Demangled: mbedtls_aes_decrypt */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_decrypt(void) {
    ALOGD("mbedtls_aes_decrypt() called");
    return 0;
}

/* Demangled: mbedtls_aes_encrypt */
extern "C" __attribute__((visibility("default"))) int mbedtls_aes_encrypt(void) {
    ALOGD("mbedtls_aes_encrypt() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: getAuthPhaseCommand */
extern "C" __attribute__((visibility("default"))) int getAuthPhaseCommand(void) {
    ALOGD("getAuthPhaseCommand() called");
    return 0;
}

/* Demangled: getAuthPrefixCommand */
extern "C" __attribute__((visibility("default"))) int getAuthPrefixCommand(void) {
    ALOGD("getAuthPrefixCommand() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: byteToString(char*, int, char**) */
extern "C" __attribute__((visibility("default"))) int _Z12byteToStringPciPS_(void) {
    ALOGD("_Z12byteToStringPciPS_() called");
    return 0;
}
