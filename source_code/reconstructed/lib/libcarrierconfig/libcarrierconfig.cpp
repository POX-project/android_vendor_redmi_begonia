/*
 * Reverse-Engineered Source for: libcarrierconfig.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcarrierconfig"

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
#include "libcarrierconfig.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal_abort(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal_abort(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal_abort(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal_abort(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal_abort(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: getStartIndex */
extern "C" __attribute__((visibility("default"))) int getStartIndex(void) {
    ALOGD("getStartIndex() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal() called");
    return 0;
}

/* Demangled: getKeyCount */
extern "C" __attribute__((visibility("default"))) int getKeyCount(void) {
    ALOGD("getKeyCount() called");
    return 0;
}

/* Demangled: __ubsan_handle_missing_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_missing_return_minimal(void) {
    ALOGD("__ubsan_handle_missing_return_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_builtin_unreachable_minimal(void) {
    ALOGD("__ubsan_handle_builtin_unreachable_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal() called");
    return 0;
}

/* Demangled: getValuesByMccMnc */
extern "C" __attribute__((visibility("default"))) int getValuesByMccMnc(void) {
    ALOGD("getValuesByMccMnc() called");
    return 0;
}

/* Demangled: __ubsan_handle_add_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal_abort(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal() called");
    return 0;
}
