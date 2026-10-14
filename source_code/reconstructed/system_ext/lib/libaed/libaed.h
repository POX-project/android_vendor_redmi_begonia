/*
 * Reverse-Engineered ABI Specification for: libaed.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaed.so
 */

#ifndef BEGONIA_RE_LIBAED_H
#define BEGONIA_RE_LIBAED_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi10ThreadInfoEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, ThreadInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ThreadInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ThreadInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, ThreadInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi10ThreadInfoEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: RegLength */
/* Demangled: RegLength */
extern void* RegLength;

/* Symbol: crash_mini_dump_notify */
/* Demangled: crash_mini_dump_notify */
int crash_mini_dump_notify(void);

/* Symbol: fop_file_write_two_string */
/* Demangled: fop_file_write_two_string */
int fop_file_write_two_string(void);

/* Symbol: zipOpenNewFileInZip2_64 */
/* Demangled: zipOpenNewFileInZip2_64 */
int zipOpenNewFileInZip2_64(void);

/* Symbol: aee_try_get_word */
/* Demangled: aee_try_get_word */
int aee_try_get_word(void);

/* Symbol: rtt_get_caller_backtrace */
/* Demangled: rtt_get_caller_backtrace */
int rtt_get_caller_backtrace(void);

/* Symbol: zipOpenNewFileInZip64 */
/* Demangled: zipOpenNewFileInZip64 */
int zipOpenNewFileInZip64(void);

/* Symbol: _ZNSt3__110shared_ptrIN11unwindstack6MemoryEED2Ev */
/* Demangled: std::__1::shared_ptr<unwindstack::Memory>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN11unwindstack6MemoryEED2Ev(void);

/* Symbol: rtt_aee_corepattern_enable_disable */
/* Demangled: rtt_aee_corepattern_enable_disable */
int rtt_aee_corepattern_enable_disable(void);

/* Symbol: note_phdr */
/* Demangled: note_phdr */
extern void* note_phdr;

/* Symbol: aee_aed_raise_defect */
/* Demangled: aee_aed_raise_defect */
int aee_aed_raise_defect(void);

/* Symbol: rtt_dump_process_name_to_pid */
/* Demangled: rtt_dump_process_name_to_pid */
int rtt_dump_process_name_to_pid(void);

/* Symbol: dump_registers */
/* Demangled: dump_registers */
int dump_registers(void);

/* Symbol: rtt_aee_copy_anr_file */
/* Demangled: rtt_aee_copy_anr_file */
int rtt_aee_copy_anr_file(void);

/* Symbol: rtt_dump_caller_backtrace */
/* Demangled: rtt_dump_caller_backtrace */
int rtt_dump_caller_backtrace(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEERNS5_IS8_EEEC2EjjSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> >&) */
int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEERNS5_IS8_EEEC2EjjSA_(void);

/* Symbol: _ZTVN11unwindstack9LocalMapsE */
/* Demangled: vtable for unwindstack::LocalMaps */
extern void* _ZTVN11unwindstack9LocalMapsE;

/* Symbol: dump_registers64 */
/* Demangled: dump_registers64 */
int dump_registers64(void);

/* Symbol: dumpstack */
/* Demangled: dumpstack */
int dumpstack(void);

/* Symbol: usersmaps_info */
/* Demangled: usersmaps_info */
extern void* usersmaps_info;

/* Symbol: rtt_aee_clean_dal */
/* Demangled: rtt_aee_clean_dal */
int rtt_aee_clean_dal(void);

/* Symbol: zipOpen2 */
/* Demangled: zipOpen2 */
int zipOpen2(void);

/* Symbol: _ZNSt3__16vectorIPN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::base::unique_fd_impl<android::base::DefaultCloser>*, std::__1::allocator<android::base::unique_fd_impl<android::base::DefaultCloser>*> >::__push_back_slow_path<android::base::unique_fd_impl<android::base::DefaultCloser>*>(android::base::unique_fd_impl<android::base::DefaultCloser>*&&) */
int _ZNSt3__16vectorIPN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: aee_aed_get_cmd_name */
/* Demangled: aee_aed_get_cmd_name */
int aee_aed_get_cmd_name(void);

/* Symbol: aee_aed_get_cmd_type_name */
/* Demangled: aee_aed_get_cmd_type_name */
int aee_aed_get_cmd_type_name(void);

/* Symbol: aee_get_category */
/* Demangled: aee_get_category */
int aee_get_category(void);

/* Symbol: zipClose_64 */
/* Demangled: zipClose_64 */
int zipClose_64(void);

/* Symbol: zipOpen2_64 */
/* Demangled: zipOpen2_64 */
int zipOpen2_64(void);

/* Symbol: zipOpen3 */
/* Demangled: zipOpen3 */
int zipOpen3(void);

/* Symbol: zipOpenNewFileInZip */
/* Demangled: zipOpenNewFileInZip */
int zipOpenNewFileInZip(void);

/* Symbol: get_backtrace_to_buffer */
/* Demangled: get_backtrace_to_buffer */
int get_backtrace_to_buffer(void);

/* Symbol: zipOpen4 */
/* Demangled: zipOpen4 */
int zipOpen4(void);

/* Symbol: dir_is_exist */
/* Demangled: dir_is_exist */
int dir_is_exist(void);

/* Symbol: aee_exception_running */
/* Demangled: aee_exception_running */
int aee_exception_running(void);

/* Symbol: rtt_dump_all_backtrace */
/* Demangled: rtt_dump_all_backtrace */
int rtt_dump_all_backtrace(void);

/* Symbol: zip_copyright */
/* Demangled: zip_copyright */
extern void* zip_copyright;

/* Symbol: _ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: aee_aed_is_ready */
/* Demangled: aee_aed_is_ready */
int aee_aed_is_ready(void);

/* Symbol: read_cmdline */
/* Demangled: read_cmdline */
int read_cmdline(void);

/* Symbol: dop_create_dirs_relabel */
/* Demangled: dop_create_dirs_relabel */
int dop_create_dirs_relabel(void);

/* Symbol: zipCloseFileInZipRaw */
/* Demangled: zipCloseFileInZipRaw */
int zipCloseFileInZipRaw(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEERNS5_IS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEERNS5_IS8_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE */
/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> >&>&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE(void);

/* Symbol: aee_system_exception */
/* Demangled: aee_system_exception */
int aee_system_exception(void);

/* Symbol: aee_replace_char */
/* Demangled: aee_replace_char */
int aee_replace_char(void);

/* Symbol: userthread_reg32 */
/* Demangled: userthread_reg32 */
extern void* userthread_reg32;

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEENS5_IS8_EEE24__emplace_back_slow_pathIJRPKcRyEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> > >::__emplace_back_slow_path<char const*&, unsigned long long&>(char const*&, unsigned long long&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEENS5_IS8_EEE24__emplace_back_slow_pathIJRPKcRyEEEvDpOT_(void);

/* Symbol: notes_stub_bytes */
/* Demangled: notes_stub_bytes */
extern void* notes_stub_bytes;

/* Symbol: _ZNSt3__113__vector_baseIN11unwindstack9FrameDataENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__vector_base<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN11unwindstack9FrameDataENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: fop_move_file */
/* Demangled: fop_move_file */
int fop_move_file(void);

/* Symbol: mini_free */
/* Demangled: mini_free */
int mini_free(void);

/* Symbol: dumpUserMapsInfo2File */
/* Demangled: dumpUserMapsInfo2File */
int dumpUserMapsInfo2File(void);

/* Symbol: aee_get_mode */
/* Demangled: aee_get_mode */
int aee_get_mode(void);

/* Symbol: rtt_get_system_time */
/* Demangled: rtt_get_system_time */
int rtt_get_system_time(void);

/* Symbol: rtt_aee_minicore_enable_disable */
/* Demangled: rtt_aee_minicore_enable_disable */
int rtt_aee_minicore_enable_disable(void);

/* Symbol: _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEENS5_IS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long long> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEyEENS5_IS8_EEED2Ev(void);

/* Symbol: UserSP_start */
/* Demangled: UserSP_start */
extern void* UserSP_start;

/* Symbol: fop_file_is_exist */
/* Demangled: fop_file_is_exist */
int fop_file_is_exist(void);

/* Symbol: rtt_aee_reinit */
/* Demangled: rtt_aee_reinit */
int rtt_aee_reinit(void);

/* Symbol: mini_coredump */
/* Demangled: mini_coredump */
int mini_coredump(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");

/* Symbol: mini_dump_coredump_to_file_zip */
/* Demangled: mini_dump_coredump_to_file_zip */
int mini_dump_coredump_to_file_zip(void);

/* Symbol: aee_get_class_name */
/* Demangled: aee_get_class_name */
int aee_get_class_name(void);

/* Symbol: ae_db_xx_secret */
/* Demangled: ae_db_xx_secret */
extern void* ae_db_xx_secret;

/* Symbol: aee_ioctl_get_reg */
/* Demangled: aee_ioctl_get_reg */
int aee_ioctl_get_reg(void);

/* Symbol: aee_kernel_dump_user_ioctl_get_userstack */
/* Demangled: aee_kernel_dump_user_ioctl_get_userstack */
int aee_kernel_dump_user_ioctl_get_userstack(void);

/* Symbol: dumpUserSpaceRegStackInfo2File */
/* Demangled: dumpUserSpaceRegStackInfo2File */
int dumpUserSpaceRegStackInfo2File(void);

/* Symbol: rtt_aee_switch_dal_and_vibrate */
/* Demangled: rtt_aee_switch_dal_and_vibrate */
int rtt_aee_switch_dal_and_vibrate(void);

/* Symbol: rtt_dump_all_backtrace_JBT_by_name */
/* Demangled: rtt_dump_all_backtrace_JBT_by_name */
int rtt_dump_all_backtrace_JBT_by_name(void);

/* Symbol: _ZNSt3__16vectorIPN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE */
/* Demangled: std::__1::vector<android::base::unique_fd_impl<android::base::DefaultCloser>*, std::__1::allocator<android::base::unique_fd_impl<android::base::DefaultCloser>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<android::base::unique_fd_impl<android::base::DefaultCloser>*, std::__1::allocator<android::base::unique_fd_impl<android::base::DefaultCloser>*>&>&) */
int _ZNSt3__16vectorIPN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void);

/* Symbol: aee_get_process_name_by_pid */
/* Demangled: aee_get_process_name_by_pid */
int aee_get_process_name_by_pid(void);

/* Symbol: dop_delete_dir */
/* Demangled: dop_delete_dir */
int dop_delete_dir(void);

/* Symbol: rtt_get_loadavg */
/* Demangled: rtt_get_loadavg */
int rtt_get_loadavg(void);

/* Symbol: rtt_dump_all_backtrace_by_name */
/* Demangled: rtt_dump_all_backtrace_by_name */
int rtt_dump_all_backtrace_by_name(void);

/* Symbol: zipOpen64 */
/* Demangled: zipOpen64 */
int zipOpen64(void);

/* Symbol: aee_aed_dump_db_always */
/* Demangled: aee_aed_dump_db_always */
int aee_aed_dump_db_always(void);

/* Symbol: NativeInfo */
/* Demangled: NativeInfo */
extern void* NativeInfo;

/* Symbol: regvalue */
/* Demangled: regvalue */
extern void* regvalue;

/* Symbol: call_ztell64 */
/* Demangled: call_ztell64 */
int call_ztell64(void);

/* Symbol: rtt_dump_backtrace */
/* Demangled: rtt_dump_backtrace */
int rtt_dump_backtrace(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::base::unique_fd_impl<android::base::DefaultCloser>, std::__1::allocator<android::base::unique_fd_impl<android::base::DefaultCloser> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android4base14unique_fd_implINS2_13DefaultCloserEEENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: aee_socket_local_client */
/* Demangled: aee_socket_local_client */
int aee_socket_local_client(void);

/* Symbol: aee_aed_get_sdcard_path */
/* Demangled: aee_aed_get_sdcard_path */
int aee_aed_get_sdcard_path(void);

/* Symbol: set_aee_log_route */
/* Demangled: set_aee_log_route */
int set_aee_log_route(void);

/* Symbol: fill_fopen64_filefunc */
/* Demangled: fill_fopen64_filefunc */
int fill_fopen64_filefunc(void);

/* Symbol: rtt_aee_set_fatal_db_count */
/* Demangled: rtt_aee_set_fatal_db_count */
int rtt_aee_set_fatal_db_count(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");

/* Symbol: zipOpenNewFileInZip2 */
/* Demangled: zipOpenNewFileInZip2 */
int zipOpenNewFileInZip2(void);

/* Symbol: aee_get_time */
/* Demangled: aee_get_time */
int aee_get_time(void);

/* Symbol: aee_system_warning */
/* Demangled: aee_system_warning */
int aee_system_warning(void);

/* Symbol: aee_kernel_dump_user_ioctl_get_reg */
/* Demangled: aee_kernel_dump_user_ioctl_get_reg */
int aee_kernel_dump_user_ioctl_get_reg(void);

/* Symbol: aee_load_is_eng_built */
/* Demangled: aee_load_is_eng_built */
int aee_load_is_eng_built(void);

/* Symbol: fop_append_file */
/* Demangled: fop_append_file */
int fop_append_file(void);

/* Symbol: call_zseek64 */
/* Demangled: call_zseek64 */
int call_zseek64(void);

/* Symbol: zipOpenNewFileInZip3 */
/* Demangled: zipOpenNewFileInZip3 */
int zipOpenNewFileInZip3(void);

/* Symbol: zipOpenNewFileInZip4_64 */
/* Demangled: zipOpenNewFileInZip4_64 */
int zipOpenNewFileInZip4_64(void);

/* Symbol: fop_safe_write */
/* Demangled: fop_safe_write */
int fop_safe_write(void);

/* Symbol: aee_load_is_userdebug_built */
/* Demangled: aee_load_is_userdebug_built */
int aee_load_is_userdebug_built(void);

/* Symbol: call_zopendisk64 */
/* Demangled: call_zopendisk64 */
int call_zopendisk64(void);

/* Symbol: aee_exception_running_64 */
/* Demangled: aee_exception_running_64 */
int aee_exception_running_64(void);

/* Symbol: rtt_aee_coredirect_enable_disable */
/* Demangled: rtt_aee_coredirect_enable_disable */
int rtt_aee_coredirect_enable_disable(void);

/* Symbol: zipClose2_64 */
/* Demangled: zipClose2_64 */
int zipClose2_64(void);

/* Symbol: zipOpenNewFileInZip4 */
/* Demangled: zipOpenNewFileInZip4 */
int zipOpenNewFileInZip4(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int fn___aeabi_memset(void) __asm__("__aeabi_memset");

/* Symbol: aee_modem_warning */
/* Demangled: aee_modem_warning */
int aee_modem_warning(void);

/* Symbol: dump_registers64_to_32 */
/* Demangled: dump_registers64_to_32 */
int dump_registers64_to_32(void);

/* Symbol: rtt_aee_reboot_system */
/* Demangled: rtt_aee_reboot_system */
int rtt_aee_reboot_system(void);

/* Symbol: zipOpen */
/* Demangled: zipOpen */
int zipOpen(void);

/* Symbol: _ZNSt3__16vectorI8map_infoNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<map_info, std::__1::allocator<map_info> >::__swap_out_circular_buffer(std::__1::__split_buffer<map_info, std::__1::allocator<map_info>&>&) */
int _ZNSt3__16vectorI8map_infoNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj */
/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned int) */
int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj(void);

/* Symbol: aee_get_sysreboot */
/* Demangled: aee_get_sysreboot */
int aee_get_sysreboot(void);

/* Symbol: aee_switch_ftrace */
/* Demangled: aee_switch_ftrace */
int aee_switch_ftrace(void);

/* Symbol: rtt_aee_hang_detect_timeout */
/* Demangled: rtt_aee_hang_detect_timeout */
int rtt_aee_hang_detect_timeout(void);

/* Symbol: merged_registers */
/* Demangled: merged_registers */
int merged_registers(void);

/* Symbol: aee_get_reason */
/* Demangled: aee_get_reason */
int aee_get_reason(void);

/* Symbol: fop_file_write_string_append */
/* Demangled: fop_file_write_string_append */
int fop_file_write_string_append(void);

/* Symbol: rtt_aee_switch_wtf_exception */
/* Demangled: rtt_aee_switch_wtf_exception */
int rtt_aee_switch_wtf_exception(void);

/* Symbol: zipCloseFileInZipRaw64 */
/* Demangled: zipCloseFileInZipRaw64 */
int zipCloseFileInZipRaw64(void);

/* Symbol: is_mp */
/* Demangled: is_mp */
int is_mp(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");

/* Symbol: userstack_info */
/* Demangled: userstack_info */
extern void* userstack_info;

/* Symbol: _ZNSt3__16vectorI8map_infoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<map_info, std::__1::allocator<map_info> >::__push_back_slow_path<map_info const&>(map_info const&) */
int _ZNSt3__16vectorI8map_infoNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: receive_file_descriptor */
/* Demangled: receive_file_descriptor */
int receive_file_descriptor(void);

/* Symbol: aee_system_report_JNI */
/* Demangled: aee_system_report_JNI */
int aee_system_report_JNI(void);

/* Symbol: rtt_aee_filter_3rd_party */
/* Demangled: rtt_aee_filter_3rd_party */
int rtt_aee_filter_3rd_party(void);

/* Symbol: aee_get_socket_server_name */
/* Demangled: aee_get_socket_server_name */
int aee_get_socket_server_name(void);

/* Symbol: crash_dump_notify */
/* Demangled: crash_dump_notify */
int crash_dump_notify(void);

/* Symbol: hdr */
/* Demangled: hdr */
extern void* hdr;

/* Symbol: zipWriteInFileInZip */
/* Demangled: zipWriteInFileInZip */
int zipWriteInFileInZip(void);

/* Symbol: Log2Buffer */
/* Demangled: Log2Buffer */
int Log2Buffer(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");

/* Symbol: dop_create_dirs */
/* Demangled: dop_create_dirs */
int dop_create_dirs(void);

/* Symbol: rtt_aee_set_db_count */
/* Demangled: rtt_aee_set_db_count */
int rtt_aee_set_db_count(void);

/* Symbol: aee_load_is_customer_built */
/* Demangled: aee_load_is_customer_built */
int aee_load_is_customer_built(void);

/* Symbol: fill_fopen_filefunc */
/* Demangled: fill_fopen_filefunc */
int fill_fopen_filefunc(void);

/* Symbol: _ZNSt3__114__split_bufferI8map_infoRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<map_info, std::__1::allocator<map_info>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<map_info>&) */
int _ZNSt3__114__split_bufferI8map_infoRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: zipClose */
/* Demangled: zipClose */
int zipClose(void);

/* Symbol: zipOpenNewFileInZip3_64 */
/* Demangled: zipOpenNewFileInZip3_64 */
int zipOpenNewFileInZip3_64(void);

/* Symbol: _ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<unwindstack::FrameData>&) */
int _ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: aee_aed_raise_exception */
/* Demangled: aee_aed_raise_exception */
int aee_aed_raise_exception(void);

/* Symbol: socket_server */
/* Demangled: socket_server */
extern void* socket_server;

/* Symbol: chowns */
/* Demangled: chowns */
int chowns(void);

/* Symbol: rtt_get_uptime */
/* Demangled: rtt_get_uptime */
int rtt_get_uptime(void);

/* Symbol: _ZN7android4base22ReceiveFileDescriptorsIJPNS0_14unique_fd_implINS0_13DefaultCloserEEEEEEiNS0_11borrowed_fdEPvjDpOT_ */
/* Demangled: int android::base::ReceiveFileDescriptors<android::base::unique_fd_impl<android::base::DefaultCloser>*>(android::base::borrowed_fd, void*, unsigned int, android::base::unique_fd_impl<android::base::DefaultCloser>*&&) */
int _ZN7android4base22ReceiveFileDescriptorsIJPNS0_14unique_fd_implINS0_13DefaultCloserEEEEEEiNS0_11borrowed_fdEPvjDpOT_(void);

/* Symbol: rtt_is_java_process */
/* Demangled: rtt_is_java_process */
int rtt_is_java_process(void);

/* Symbol: rtt_aee_switch_exp_level */
/* Demangled: rtt_aee_switch_exp_level */
int rtt_aee_switch_exp_level(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");

/* Symbol: aee_log_route */
/* Demangled: aee_log_route */
int aee_log_route(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::__swap_out_circular_buffer(std::__1::__split_buffer<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData>&>&) */
int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: dump_registers32 */
/* Demangled: dump_registers32 */
int dump_registers32(void);

/* Symbol: fop_file_write_string */
/* Demangled: fop_file_write_string */
int fop_file_write_string(void);

/* Symbol: fop_copy_file */
/* Demangled: fop_copy_file */
int fop_copy_file(void);

/* Symbol: fop_safe_read_timeout */
/* Demangled: fop_safe_read_timeout */
int fop_safe_read_timeout(void);

/* Symbol: rtt_is_ready */
/* Demangled: rtt_is_ready */
int rtt_is_ready(void);

/* Symbol: rtt_aee_changemode */
/* Demangled: rtt_aee_changemode */
int rtt_aee_changemode(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");

/* Symbol: socket_server_32 */
/* Demangled: socket_server_32 */
extern void* socket_server_32;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");

/* Symbol: _ZTVN11unwindstack8UnwinderE */
/* Demangled: vtable for unwindstack::Unwinder */
extern void* _ZTVN11unwindstack8UnwinderE;

/* Symbol: aee_get_exp_name */
/* Demangled: aee_get_exp_name */
int aee_get_exp_name(void);

/* Symbol: aee_is_cpu_aarch64 */
/* Demangled: aee_is_cpu_aarch64 */
int aee_is_cpu_aarch64(void);

/* Symbol: fill_zlib_filefunc64_32_def_from_filefunc32 */
/* Demangled: fill_zlib_filefunc64_32_def_from_filefunc32 */
int fill_zlib_filefunc64_32_def_from_filefunc32(void);

/* Symbol: zipOpen3_64 */
/* Demangled: zipOpen3_64 */
int zipOpen3_64(void);

/* Symbol: userthread_reg */
/* Demangled: userthread_reg */
extern void* userthread_reg;

/* Symbol: call_zopen64 */
/* Demangled: call_zopen64 */
int call_zopen64(void);

/* Symbol: bits_check */
/* Demangled: bits_check */
int bits_check(void);

/* Symbol: zipCloseFileInZip */
/* Demangled: zipCloseFileInZip */
int zipCloseFileInZip(void);

/* Symbol: aee_load_is_user_built */
/* Demangled: aee_load_is_user_built */
int aee_load_is_user_built(void);

/* Symbol: fop_file_read_string */
/* Demangled: fop_file_read_string */
int fop_file_read_string(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");

__END_DECLS

#endif /* BEGONIA_RE_LIBAED_H */
