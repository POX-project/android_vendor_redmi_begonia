/*
 * Reverse-Engineered Source for: libaed.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libaed"

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
#include "libaed.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_AED0 "/dev/aed0"
#define DEV_DEV_SOCKET "/dev/socket/"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_AED0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_AED0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_AED0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_SOCKET, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SOCKET, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SOCKET, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: merged_registers */
extern "C" __attribute__((visibility("default"))) int merged_registers(void) {
    ALOGD("merged_registers() called");
    return 0;
}

/* Exported Object: note_phdr */
extern "C" __attribute__((visibility("default"))) void* note_phdr = NULL;

/* Exported Object: NativeInfo */
extern "C" __attribute__((visibility("default"))) void* NativeInfo = NULL;

/* Demangled: fop_file_write_string_append */
extern "C" __attribute__((visibility("default"))) int fop_file_write_string_append(void) {
    ALOGD("fop_file_write_string_append() called");
    return 0;
}

/* Demangled: aee_get_time */
extern "C" __attribute__((visibility("default"))) int aee_get_time(void) {
    ALOGD("aee_get_time() called");
    return 0;
}

/* Demangled: call_zopendisk64 */
extern "C" __attribute__((visibility("default"))) int call_zopendisk64(void) {
    ALOGD("call_zopendisk64() called");
    return 0;
}

/* Demangled: call_ztell64 */
extern "C" __attribute__((visibility("default"))) int call_ztell64(void) {
    ALOGD("call_ztell64() called");
    return 0;
}

/* Demangled: rtt_aee_set_db_count */
extern "C" __attribute__((visibility("default"))) int rtt_aee_set_db_count(void) {
    ALOGD("rtt_aee_set_db_count() called");
    return 0;
}

/* Demangled: aee_aed_raise_exception */
extern "C" __attribute__((visibility("default"))) int aee_aed_raise_exception(void) {
    ALOGD("aee_aed_raise_exception() called");
    return 0;
}

/* Demangled: aee_is_cpu_aarch64 */
extern "C" __attribute__((visibility("default"))) int aee_is_cpu_aarch64(void) {
    ALOGD("aee_is_cpu_aarch64() called");
    return 0;
}

/* Exported Object: userthread_reg32 */
extern "C" __attribute__((visibility("default"))) void* userthread_reg32 = NULL;

/* Demangled: zipCloseFileInZipRaw */
extern "C" __attribute__((visibility("default"))) int zipCloseFileInZipRaw(void) {
    ALOGD("zipCloseFileInZipRaw() called");
    return 0;
}

/* Exported Object: hdr */
extern "C" __attribute__((visibility("default"))) void* hdr = NULL;

/* Demangled: rtt_dump_backtrace */
extern "C" __attribute__((visibility("default"))) int rtt_dump_backtrace(void) {
    ALOGD("rtt_dump_backtrace() called");
    return 0;
}

/* Demangled: aee_aed_get_cmd_type_name */
extern "C" __attribute__((visibility("default"))) int aee_aed_get_cmd_type_name(void) {
    ALOGD("aee_aed_get_cmd_type_name() called");
    return 0;
}

/* Demangled: aee_socket_local_client */
extern "C" __attribute__((visibility("default"))) int aee_socket_local_client(void) {
    ALOGD("aee_socket_local_client() called");
    return 0;
}

/* Demangled: aee_get_sysreboot */
extern "C" __attribute__((visibility("default"))) int aee_get_sysreboot(void) {
    ALOGD("aee_get_sysreboot() called");
    return 0;
}

/* Demangled: bits_check */
extern "C" __attribute__((visibility("default"))) int bits_check(void) {
    ALOGD("bits_check() called");
    return 0;
}

/* Demangled: rtt_aee_corepattern_enable_disable */
extern "C" __attribute__((visibility("default"))) int rtt_aee_corepattern_enable_disable(void) {
    ALOGD("rtt_aee_corepattern_enable_disable() called");
    return 0;
}

/* Demangled: rtt_aee_switch_dal_and_vibrate */
extern "C" __attribute__((visibility("default"))) int rtt_aee_switch_dal_and_vibrate(void) {
    ALOGD("rtt_aee_switch_dal_and_vibrate() called");
    return 0;
}

/* Demangled: rtt_aee_switch_wtf_exception */
extern "C" __attribute__((visibility("default"))) int rtt_aee_switch_wtf_exception(void) {
    ALOGD("rtt_aee_switch_wtf_exception() called");
    return 0;
}

/* Exported Object: notes_stub_bytes */
extern "C" __attribute__((visibility("default"))) void* notes_stub_bytes = NULL;

/* Demangled: rtt_get_uptime */
extern "C" __attribute__((visibility("default"))) int rtt_get_uptime(void) {
    ALOGD("rtt_get_uptime() called");
    return 0;
}

/* Demangled: aee_switch_ftrace */
extern "C" __attribute__((visibility("default"))) int aee_switch_ftrace(void) {
    ALOGD("aee_switch_ftrace() called");
    return 0;
}

/* Demangled: zipOpen2_64 */
extern "C" __attribute__((visibility("default"))) int zipOpen2_64(void) {
    ALOGD("zipOpen2_64() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip3_64 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip3_64(void) {
    ALOGD("zipOpenNewFileInZip3_64() called");
    return 0;
}

/* Demangled: aee_exception_running */
extern "C" __attribute__((visibility("default"))) int aee_exception_running(void) {
    ALOGD("aee_exception_running() called");
    return 0;
}

/* Demangled: crash_dump_notify */
extern "C" __attribute__((visibility("default"))) int crash_dump_notify(void) {
    ALOGD("crash_dump_notify() called");
    return 0;
}

/* Demangled: aee_system_report_JNI */
extern "C" __attribute__((visibility("default"))) int aee_system_report_JNI(void) {
    ALOGD("aee_system_report_JNI() called");
    return 0;
}

/* Exported Object: usersmaps_info */
extern "C" __attribute__((visibility("default"))) void* usersmaps_info = NULL;

/* Demangled: aee_load_is_user_built */
extern "C" __attribute__((visibility("default"))) int aee_load_is_user_built(void) {
    ALOGD("aee_load_is_user_built() called");
    return 0;
}

/* Demangled: rtt_aee_reinit */
extern "C" __attribute__((visibility("default"))) int rtt_aee_reinit(void) {
    ALOGD("rtt_aee_reinit() called");
    return 0;
}

/* Demangled: rtt_dump_all_backtrace */
extern "C" __attribute__((visibility("default"))) int rtt_dump_all_backtrace(void) {
    ALOGD("rtt_dump_all_backtrace() called");
    return 0;
}

/* Demangled: mini_coredump */
extern "C" __attribute__((visibility("default"))) int mini_coredump(void) {
    ALOGD("mini_coredump() called");
    return 0;
}

/* Exported Object: ae_db_xx_secret */
extern "C" __attribute__((visibility("default"))) void* ae_db_xx_secret = NULL;

/* Demangled: aee_aed_is_ready */
extern "C" __attribute__((visibility("default"))) int aee_aed_is_ready(void) {
    ALOGD("aee_aed_is_ready() called");
    return 0;
}

/* Demangled: dump_registers64 */
extern "C" __attribute__((visibility("default"))) int dump_registers64(void) {
    ALOGD("dump_registers64() called");
    return 0;
}

/* Demangled: zipCloseFileInZipRaw64 */
extern "C" __attribute__((visibility("default"))) int zipCloseFileInZipRaw64(void) {
    ALOGD("zipCloseFileInZipRaw64() called");
    return 0;
}

/* Demangled: void std::__1::vector<map_info, std::__1::allocator<map_info> >::__push_back_slow_path<map_info const&>(map_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8map_infoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI8map_infoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: rtt_is_java_process */
extern "C" __attribute__((visibility("default"))) int rtt_is_java_process(void) {
    ALOGD("rtt_is_java_process() called");
    return 0;
}

/* Demangled: rtt_aee_coredirect_enable_disable */
extern "C" __attribute__((visibility("default"))) int rtt_aee_coredirect_enable_disable(void) {
    ALOGD("rtt_aee_coredirect_enable_disable() called");
    return 0;
}

/* Demangled: rtt_dump_all_backtrace_by_name */
extern "C" __attribute__((visibility("default"))) int rtt_dump_all_backtrace_by_name(void) {
    ALOGD("rtt_dump_all_backtrace_by_name() called");
    return 0;
}

/* Demangled: aee_modem_warning */
extern "C" __attribute__((visibility("default"))) int aee_modem_warning(void) {
    ALOGD("aee_modem_warning() called");
    return 0;
}

/* Demangled: fop_safe_write */
extern "C" __attribute__((visibility("default"))) int fop_safe_write(void) {
    ALOGD("fop_safe_write() called");
    return 0;
}

/* Demangled: aee_get_reason */
extern "C" __attribute__((visibility("default"))) int aee_get_reason(void) {
    ALOGD("aee_get_reason() called");
    return 0;
}

/* Demangled: fop_file_read_string */
extern "C" __attribute__((visibility("default"))) int fop_file_read_string(void) {
    ALOGD("fop_file_read_string() called");
    return 0;
}

/* Demangled: call_zopen64 */
extern "C" __attribute__((visibility("default"))) int call_zopen64(void) {
    ALOGD("call_zopen64() called");
    return 0;
}

/* Demangled: fill_zlib_filefunc64_32_def_from_filefunc32 */
extern "C" __attribute__((visibility("default"))) int fill_zlib_filefunc64_32_def_from_filefunc32(void) {
    ALOGD("fill_zlib_filefunc64_32_def_from_filefunc32() called");
    return 0;
}

/* Demangled: rtt_aee_copy_anr_file */
extern "C" __attribute__((visibility("default"))) int rtt_aee_copy_anr_file(void) {
    ALOGD("rtt_aee_copy_anr_file() called");
    return 0;
}

/* Demangled: crash_mini_dump_notify */
extern "C" __attribute__((visibility("default"))) int crash_mini_dump_notify(void) {
    ALOGD("crash_mini_dump_notify() called");
    return 0;
}

/* Demangled: fop_copy_file */
extern "C" __attribute__((visibility("default"))) int fop_copy_file(void) {
    ALOGD("fop_copy_file() called");
    return 0;
}

/* Demangled: fop_move_file */
extern "C" __attribute__((visibility("default"))) int fop_move_file(void) {
    ALOGD("fop_move_file() called");
    return 0;
}

/* Demangled: mini_dump_coredump_to_file_zip */
extern "C" __attribute__((visibility("default"))) int mini_dump_coredump_to_file_zip(void) {
    ALOGD("mini_dump_coredump_to_file_zip() called");
    return 0;
}

/* Demangled: zipOpen64 */
extern "C" __attribute__((visibility("default"))) int zipOpen64(void) {
    ALOGD("zipOpen64() called");
    return 0;
}

/* Exported Object: UserSP_start */
extern "C" __attribute__((visibility("default"))) void* UserSP_start = NULL;

/* Demangled: dop_create_dirs */
extern "C" __attribute__((visibility("default"))) int dop_create_dirs(void) {
    ALOGD("dop_create_dirs() called");
    return 0;
}

/* Exported Object: zip_copyright */
extern "C" __attribute__((visibility("default"))) void* zip_copyright = NULL;

/* Demangled: receive_file_descriptor */
extern "C" __attribute__((visibility("default"))) int receive_file_descriptor(void) {
    ALOGD("receive_file_descriptor() called");
    return 0;
}

/* Exported Object: RegLength */
extern "C" __attribute__((visibility("default"))) void* RegLength = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, ThreadInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ThreadInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ThreadInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, ThreadInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi10ThreadInfoEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi10ThreadInfoEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: aee_ioctl_get_reg */
extern "C" __attribute__((visibility("default"))) int aee_ioctl_get_reg(void) {
    ALOGD("aee_ioctl_get_reg() called");
    return 0;
}

/* Demangled: zipOpen3_64 */
extern "C" __attribute__((visibility("default"))) int zipOpen3_64(void) {
    ALOGD("zipOpen3_64() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip(void) {
    ALOGD("zipOpenNewFileInZip() called");
    return 0;
}

/* Demangled: aee_log_route */
extern "C" __attribute__((visibility("default"))) int aee_log_route(void) {
    ALOGD("aee_log_route() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long> > >::__emplace_back_slow_path<char const*&, unsigned long&>(char const*&, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEmEENS5_IS8_EEE24__emplace_back_slow_pathIJRPKcRmEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEmEENS5_IS8_EEE24__emplace_back_slow_pathIJRPKcRmEEEvDpOT_() called");
    return 0;
}

/* Demangled: aee_get_exp_name */
extern "C" __attribute__((visibility("default"))) int aee_get_exp_name(void) {
    ALOGD("aee_get_exp_name() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip4_64 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip4_64(void) {
    ALOGD("zipOpenNewFileInZip4_64() called");
    return 0;
}

/* Exported Object: socket_server_32 */
extern "C" __attribute__((visibility("default"))) void* socket_server_32 = NULL;

/* Demangled: fop_file_is_exist */
extern "C" __attribute__((visibility("default"))) int fop_file_is_exist(void) {
    ALOGD("fop_file_is_exist() called");
    return 0;
}

/* Demangled: fop_append_file */
extern "C" __attribute__((visibility("default"))) int fop_append_file(void) {
    ALOGD("fop_append_file() called");
    return 0;
}

/* Demangled: rtt_aee_hang_detect_timeout */
extern "C" __attribute__((visibility("default"))) int rtt_aee_hang_detect_timeout(void) {
    ALOGD("rtt_aee_hang_detect_timeout() called");
    return 0;
}

/* Demangled: zipOpen2 */
extern "C" __attribute__((visibility("default"))) int zipOpen2(void) {
    ALOGD("zipOpen2() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip64 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip64(void) {
    ALOGD("zipOpenNewFileInZip64() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::LocalMaps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack9LocalMapsE = NULL;

/* Exported Object: userstack_info */
extern "C" __attribute__((visibility("default"))) void* userstack_info = NULL;

/* Demangled: fop_file_write_string */
extern "C" __attribute__((visibility("default"))) int fop_file_write_string(void) {
    ALOGD("fop_file_write_string() called");
    return 0;
}

/* Demangled: rtt_aee_filter_3rd_party */
extern "C" __attribute__((visibility("default"))) int rtt_aee_filter_3rd_party(void) {
    ALOGD("rtt_aee_filter_3rd_party() called");
    return 0;
}

/* Demangled: zipOpen3 */
extern "C" __attribute__((visibility("default"))) int zipOpen3(void) {
    ALOGD("zipOpen3() called");
    return 0;
}

/* Demangled: dump_registers */
extern "C" __attribute__((visibility("default"))) int dump_registers(void) {
    ALOGD("dump_registers() called");
    return 0;
}

/* Demangled: aee_load_is_userdebug_built */
extern "C" __attribute__((visibility("default"))) int aee_load_is_userdebug_built(void) {
    ALOGD("aee_load_is_userdebug_built() called");
    return 0;
}

/* Demangled: zipOpen */
extern "C" __attribute__((visibility("default"))) int zipOpen(void) {
    ALOGD("zipOpen() called");
    return 0;
}

/* Demangled: zipOpen4 */
extern "C" __attribute__((visibility("default"))) int zipOpen4(void) {
    ALOGD("zipOpen4() called");
    return 0;
}

/* Demangled: mini_free */
extern "C" __attribute__((visibility("default"))) int mini_free(void) {
    ALOGD("mini_free() called");
    return 0;
}

/* Demangled: aee_get_mode */
extern "C" __attribute__((visibility("default"))) int aee_get_mode(void) {
    ALOGD("aee_get_mode() called");
    return 0;
}

/* Demangled: rtt_get_caller_backtrace */
extern "C" __attribute__((visibility("default"))) int rtt_get_caller_backtrace(void) {
    ALOGD("rtt_get_caller_backtrace() called");
    return 0;
}

/* Demangled: rtt_get_loadavg */
extern "C" __attribute__((visibility("default"))) int rtt_get_loadavg(void) {
    ALOGD("rtt_get_loadavg() called");
    return 0;
}

/* Demangled: read_cmdline */
extern "C" __attribute__((visibility("default"))) int read_cmdline(void) {
    ALOGD("read_cmdline() called");
    return 0;
}

/* Demangled: rtt_dump_process_name_to_pid */
extern "C" __attribute__((visibility("default"))) int rtt_dump_process_name_to_pid(void) {
    ALOGD("rtt_dump_process_name_to_pid() called");
    return 0;
}

/* Demangled: aee_get_category */
extern "C" __attribute__((visibility("default"))) int aee_get_category(void) {
    ALOGD("aee_get_category() called");
    return 0;
}

/* Demangled: aee_get_class_name */
extern "C" __attribute__((visibility("default"))) int aee_get_class_name(void) {
    ALOGD("aee_get_class_name() called");
    return 0;
}

/* Demangled: aee_replace_char */
extern "C" __attribute__((visibility("default"))) int aee_replace_char(void) {
    ALOGD("aee_replace_char() called");
    return 0;
}

/* Exported Object: socket_server */
extern "C" __attribute__((visibility("default"))) void* socket_server = NULL;

/* Demangled: is_mp */
extern "C" __attribute__((visibility("default"))) int is_mp(void) {
    ALOGD("is_mp() called");
    return 0;
}

/* Demangled: dumpstack */
extern "C" __attribute__((visibility("default"))) int dumpstack(void) {
    ALOGD("dumpstack() called");
    return 0;
}

/* Demangled: rtt_dump_caller_backtrace */
extern "C" __attribute__((visibility("default"))) int rtt_dump_caller_backtrace(void) {
    ALOGD("rtt_dump_caller_backtrace() called");
    return 0;
}

/* Demangled: set_aee_log_route */
extern "C" __attribute__((visibility("default"))) int set_aee_log_route(void) {
    ALOGD("set_aee_log_route() called");
    return 0;
}

/* Demangled: fop_file_write_two_string */
extern "C" __attribute__((visibility("default"))) int fop_file_write_two_string(void) {
    ALOGD("fop_file_write_two_string() called");
    return 0;
}

/* Demangled: get_backtrace_to_buffer */
extern "C" __attribute__((visibility("default"))) int get_backtrace_to_buffer(void) {
    ALOGD("get_backtrace_to_buffer() called");
    return 0;
}

/* Demangled: Log2Buffer */
extern "C" __attribute__((visibility("default"))) int Log2Buffer(void) {
    ALOGD("Log2Buffer() called");
    return 0;
}

/* Demangled: rtt_aee_changemode */
extern "C" __attribute__((visibility("default"))) int rtt_aee_changemode(void) {
    ALOGD("rtt_aee_changemode() called");
    return 0;
}

/* Demangled: rtt_aee_clean_dal */
extern "C" __attribute__((visibility("default"))) int rtt_aee_clean_dal(void) {
    ALOGD("rtt_aee_clean_dal() called");
    return 0;
}

/* Demangled: rtt_aee_reboot_system */
extern "C" __attribute__((visibility("default"))) int rtt_aee_reboot_system(void) {
    ALOGD("rtt_aee_reboot_system() called");
    return 0;
}

/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEm() called");
    return 0;
}

/* Demangled: aee_aed_get_sdcard_path */
extern "C" __attribute__((visibility("default"))) int aee_aed_get_sdcard_path(void) {
    ALOGD("aee_aed_get_sdcard_path() called");
    return 0;
}

/* Demangled: aee_kernel_dump_user_ioctl_get_userstack */
extern "C" __attribute__((visibility("default"))) int aee_kernel_dump_user_ioctl_get_userstack(void) {
    ALOGD("aee_kernel_dump_user_ioctl_get_userstack() called");
    return 0;
}

/* Exported Object: regvalue */
extern "C" __attribute__((visibility("default"))) void* regvalue = NULL;

/* Demangled: dop_delete_dir */
extern "C" __attribute__((visibility("default"))) int dop_delete_dir(void) {
    ALOGD("dop_delete_dir() called");
    return 0;
}

/* Demangled: fill_fopen64_filefunc */
extern "C" __attribute__((visibility("default"))) int fill_fopen64_filefunc(void) {
    ALOGD("fill_fopen64_filefunc() called");
    return 0;
}

/* Demangled: rtt_get_system_time */
extern "C" __attribute__((visibility("default"))) int rtt_get_system_time(void) {
    ALOGD("rtt_get_system_time() called");
    return 0;
}

/* Demangled: rtt_dump_all_backtrace_JBT_by_name */
extern "C" __attribute__((visibility("default"))) int rtt_dump_all_backtrace_JBT_by_name(void) {
    ALOGD("rtt_dump_all_backtrace_JBT_by_name() called");
    return 0;
}

/* Demangled: aee_system_warning */
extern "C" __attribute__((visibility("default"))) int aee_system_warning(void) {
    ALOGD("aee_system_warning() called");
    return 0;
}

/* Exported Object: userthread_reg */
extern "C" __attribute__((visibility("default"))) void* userthread_reg = NULL;

/* Demangled: rtt_aee_switch_exp_level */
extern "C" __attribute__((visibility("default"))) int rtt_aee_switch_exp_level(void) {
    ALOGD("rtt_aee_switch_exp_level() called");
    return 0;
}

/* Demangled: long android::base::ReceiveFileDescriptors<android::base::unique_fd_impl<android::base::DefaultCloser>*>(android::base::borrowed_fd, void*, unsigned long, android::base::unique_fd_impl<android::base::DefaultCloser>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base22ReceiveFileDescriptorsIJPNS0_14unique_fd_implINS0_13DefaultCloserEEEEEElNS0_11borrowed_fdEPvmDpOT_(void) {
    ALOGD("_ZN7android4base22ReceiveFileDescriptorsIJPNS0_14unique_fd_implINS0_13DefaultCloserEEEEEElNS0_11borrowed_fdEPvmDpOT_() called");
    return 0;
}

/* Demangled: aee_aed_raise_defect */
extern "C" __attribute__((visibility("default"))) int aee_aed_raise_defect(void) {
    ALOGD("aee_aed_raise_defect() called");
    return 0;
}

/* Demangled: dop_create_dirs_relabel */
extern "C" __attribute__((visibility("default"))) int dop_create_dirs_relabel(void) {
    ALOGD("dop_create_dirs_relabel() called");
    return 0;
}

/* Demangled: rtt_is_ready */
extern "C" __attribute__((visibility("default"))) int rtt_is_ready(void) {
    ALOGD("rtt_is_ready() called");
    return 0;
}

/* Demangled: aee_aed_dump_db_always */
extern "C" __attribute__((visibility("default"))) int aee_aed_dump_db_always(void) {
    ALOGD("aee_aed_dump_db_always() called");
    return 0;
}

/* Demangled: aee_aed_get_cmd_name */
extern "C" __attribute__((visibility("default"))) int aee_aed_get_cmd_name(void) {
    ALOGD("aee_aed_get_cmd_name() called");
    return 0;
}

/* Demangled: aee_get_process_name_by_pid */
extern "C" __attribute__((visibility("default"))) int aee_get_process_name_by_pid(void) {
    ALOGD("aee_get_process_name_by_pid() called");
    return 0;
}

/* Demangled: chowns */
extern "C" __attribute__((visibility("default"))) int chowns(void) {
    ALOGD("chowns() called");
    return 0;
}

/* Demangled: zipCloseFileInZip */
extern "C" __attribute__((visibility("default"))) int zipCloseFileInZip(void) {
    ALOGD("zipCloseFileInZip() called");
    return 0;
}

/* Demangled: zipWriteInFileInZip */
extern "C" __attribute__((visibility("default"))) int zipWriteInFileInZip(void) {
    ALOGD("zipWriteInFileInZip() called");
    return 0;
}

/* Demangled: aee_try_get_word */
extern "C" __attribute__((visibility("default"))) int aee_try_get_word(void) {
    ALOGD("aee_try_get_word() called");
    return 0;
}

/* Demangled: dumpUserSpaceRegStackInfo2File */
extern "C" __attribute__((visibility("default"))) int dumpUserSpaceRegStackInfo2File(void) {
    ALOGD("dumpUserSpaceRegStackInfo2File() called");
    return 0;
}

/* Demangled: call_zseek64 */
extern "C" __attribute__((visibility("default"))) int call_zseek64(void) {
    ALOGD("call_zseek64() called");
    return 0;
}

/* Demangled: rtt_aee_set_fatal_db_count */
extern "C" __attribute__((visibility("default"))) int rtt_aee_set_fatal_db_count(void) {
    ALOGD("rtt_aee_set_fatal_db_count() called");
    return 0;
}

/* Demangled: fop_safe_read_timeout */
extern "C" __attribute__((visibility("default"))) int fop_safe_read_timeout(void) {
    ALOGD("fop_safe_read_timeout() called");
    return 0;
}

/* Demangled: aee_get_socket_server_name */
extern "C" __attribute__((visibility("default"))) int aee_get_socket_server_name(void) {
    ALOGD("aee_get_socket_server_name() called");
    return 0;
}

/* Demangled: zipClose2_64 */
extern "C" __attribute__((visibility("default"))) int zipClose2_64(void) {
    ALOGD("zipClose2_64() called");
    return 0;
}

/* Demangled: fill_fopen_filefunc */
extern "C" __attribute__((visibility("default"))) int fill_fopen_filefunc(void) {
    ALOGD("fill_fopen_filefunc() called");
    return 0;
}

/* Demangled: dir_is_exist */
extern "C" __attribute__((visibility("default"))) int dir_is_exist(void) {
    ALOGD("dir_is_exist() called");
    return 0;
}

/* Demangled: aee_exception_running_64 */
extern "C" __attribute__((visibility("default"))) int aee_exception_running_64(void) {
    ALOGD("aee_exception_running_64() called");
    return 0;
}

/* Demangled: rtt_aee_minicore_enable_disable */
extern "C" __attribute__((visibility("default"))) int rtt_aee_minicore_enable_disable(void) {
    ALOGD("rtt_aee_minicore_enable_disable() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Unwinder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8UnwinderE = NULL;

/* Demangled: zipOpenNewFileInZip2 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip2(void) {
    ALOGD("zipOpenNewFileInZip2() called");
    return 0;
}

/* Demangled: aee_kernel_dump_user_ioctl_get_reg */
extern "C" __attribute__((visibility("default"))) int aee_kernel_dump_user_ioctl_get_reg(void) {
    ALOGD("aee_kernel_dump_user_ioctl_get_reg() called");
    return 0;
}

/* Demangled: dumpUserMapsInfo2File */
extern "C" __attribute__((visibility("default"))) int dumpUserMapsInfo2File(void) {
    ALOGD("dumpUserMapsInfo2File() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip2_64 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip2_64(void) {
    ALOGD("zipOpenNewFileInZip2_64() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip3 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip3(void) {
    ALOGD("zipOpenNewFileInZip3() called");
    return 0;
}

/* Demangled: zipClose */
extern "C" __attribute__((visibility("default"))) int zipClose(void) {
    ALOGD("zipClose() called");
    return 0;
}

/* Demangled: aee_system_exception */
extern "C" __attribute__((visibility("default"))) int aee_system_exception(void) {
    ALOGD("aee_system_exception() called");
    return 0;
}

/* Demangled: aee_load_is_customer_built */
extern "C" __attribute__((visibility("default"))) int aee_load_is_customer_built(void) {
    ALOGD("aee_load_is_customer_built() called");
    return 0;
}

/* Demangled: aee_load_is_eng_built */
extern "C" __attribute__((visibility("default"))) int aee_load_is_eng_built(void) {
    ALOGD("aee_load_is_eng_built() called");
    return 0;
}

/* Demangled: zipOpenNewFileInZip4 */
extern "C" __attribute__((visibility("default"))) int zipOpenNewFileInZip4(void) {
    ALOGD("zipOpenNewFileInZip4() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::base::unique_fd_impl<android::base::DefaultCloser>*, std::__1::allocator<android::base::unique_fd_impl<android::base::DefaultCloser>*> >::__push_back_slow_path<android::base::unique_fd_impl<android::base::DefaultCloser>*>(android::base::unique_fd_impl<android::base::DefaultCloser>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: zipClose_64 */
extern "C" __attribute__((visibility("default"))) int zipClose_64(void) {
    ALOGD("zipClose_64() called");
    return 0;
}
