/*
 * Reverse-Engineered Source for: wechat.beanpod.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "wechat_beanpod"

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
#include "wechat_beanpod.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int wechat_beanpod_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int wechat_beanpod_close(struct hw_device_t* dev);

static struct hw_module_methods_t wechat_beanpod_module_methods = {
    .open = wechat_beanpod_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "wechat",
    .name = "Begonia wechat_beanpod Module",
    .author = "LineageOS / Community RE",
    .methods = &wechat_beanpod_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int wechat_beanpod_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int wechat_beanpod_close(struct hw_device_t* dev) {
    ALOGI("Closing wechat_beanpod module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: get_device_id(unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z13get_device_idPhPm(void) {
    ALOGD("_Z13get_device_idPhPm() called");
    return 0;
}

/* Demangled: remove_auth_key(unsigned char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z15remove_auth_keyPKhPKc(void) {
    ALOGD("_Z15remove_auth_keyPKhPKc() called");
    return 0;
}

/* Demangled: auth_finish_sign(int, void*, unsigned int, void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z16auth_finish_signiPvjS_PjS_S0_(void) {
    ALOGD("_Z16auth_finish_signiPvjS_PjS_S0_() called");
    return 0;
}

/* Demangled: generate_ask_key_pair(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21generate_ask_key_pairPKh(void) {
    ALOGD("_Z21generate_ask_key_pairPKh() called");
    return 0;
}

/* Demangled: gen_attk_key(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12gen_attk_keyij(void) {
    ALOGD("_Z12gen_attk_keyij() called");
    return 0;
}

/* Demangled: gen_auth_key(int, int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12gen_auth_keyiiPvj(void) {
    ALOGD("_Z12gen_auth_keyiiPvj() called");
    return 0;
}

/* Demangled: auth_init_sign(int, int, void*, unsigned int, void*, unsigned int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14auth_init_signiiPvjS_jS_Pj(void) {
    ALOGD("_Z14auth_init_signiiPvjS_jS_Pj() called");
    return 0;
}

/* Demangled: invoke_command(int, unsigned int, void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14invoke_commandijPvPjS_S0_(void) {
    ALOGD("_Z14invoke_commandijPvPjS_S0_() called");
    return 0;
}

/* Demangled: export_ask_public_key(unsigned char const*, soter_ask_struct*) */
extern "C" __attribute__((visibility("default"))) int _Z21export_ask_public_keyPKhP16soter_ask_struct(void) {
    ALOGD("_Z21export_ask_public_keyPKhP16soter_ask_struct() called");
    return 0;
}

/* Demangled: has_auth_key(unsigned char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z12has_auth_keyPKhPKc(void) {
    ALOGD("_Z12has_auth_keyPKhPKc() called");
    return 0;
}

/* Demangled: verify_attk_key_pair() */
extern "C" __attribute__((visibility("default"))) int _Z20verify_attk_key_pairv(void) {
    ALOGD("_Z20verify_attk_key_pairv() called");
    return 0;
}

/* Demangled: generate_attk_key_pair(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z22generate_attk_key_pairh(void) {
    ALOGD("_Z22generate_attk_key_pairh() called");
    return 0;
}

/* Demangled: get_info(int, unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z8get_infoiPhPm(void) {
    ALOGD("_Z8get_infoiPhPm() called");
    return 0;
}

/* Demangled: finish_sign(soter_sign_session const*, soter_sign_result_struct*) */
extern "C" __attribute__((visibility("default"))) int _Z11finish_signPK18soter_sign_sessionP24soter_sign_result_struct(void) {
    ALOGD("_Z11finish_signPK18soter_sign_sessionP24soter_sign_result_struct() called");
    return 0;
}

/* Demangled: has_ask_already(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _Z15has_ask_alreadyPKh(void) {
    ALOGD("_Z15has_ask_alreadyPKh() called");
    return 0;
}

/* Demangled: export_attk_public_key(unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z22export_attk_public_keyPhPm(void) {
    ALOGD("_Z22export_attk_public_keyPhPm() called");
    return 0;
}

/* Demangled: generate_auth_key_pair(unsigned char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z22generate_auth_key_pairPKhPKc(void) {
    ALOGD("_Z22generate_auth_key_pairPKhPKc() called");
    return 0;
}

/* Demangled: set_info(int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8set_infoiPvj(void) {
    ALOGD("_Z8set_infoiPvj() called");
    return 0;
}

/* Demangled: auth_key_utils(int, int, void*, unsigned int, void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14auth_key_utilsiiPvjS_PjS_S0_(void) {
    ALOGD("_Z14auth_key_utilsiiPvjS_PjS_S0_() called");
    return 0;
}

/* Demangled: get_wechat_info(wechat_info_t*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z15get_wechat_infoP13wechat_info_tPm(void) {
    ALOGD("_Z15get_wechat_infoP13wechat_info_tPm() called");
    return 0;
}

/* Demangled: remove_all_uid_key(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _Z18remove_all_uid_keyPKh(void) {
    ALOGD("_Z18remove_all_uid_keyPKh() called");
    return 0;
}

/* Demangled: export_auth_key_public_key(unsigned char const*, char const*, soter_auth_key_struct*) */
extern "C" __attribute__((visibility("default"))) int _Z26export_auth_key_public_keyPKhPKcP21soter_auth_key_struct(void) {
    ALOGD("_Z26export_auth_key_public_keyPKhPKcP21soter_auth_key_struct() called");
    return 0;
}

/* Demangled: init_sign(unsigned char const*, char const*, char const*, soter_sign_session*) */
extern "C" __attribute__((visibility("default"))) int _Z9init_signPKhPKcS2_P18soter_sign_session(void) {
    ALOGD("_Z9init_signPKhPKcS2_P18soter_sign_session() called");
    return 0;
}

/* Exported Object: host_name */
extern "C" __attribute__((visibility("default"))) void* host_name = NULL;
