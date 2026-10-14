/*
 * Reverse-Engineered Source for: libvp8enc_sa.ca7.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvp8enc_sa_ca7"

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
#include "libvp8enc_sa_ca7.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VP8EncoderGetMemoryRequiredAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderGetMemoryRequiredAdapt(void) {
    ALOGD("VP8EncoderGetMemoryRequiredAdapt() called");
    return 0;
}

/* Demangled: VP8EncoderGetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderGetParameterAdapt(void) {
    ALOGD("VP8EncoderGetParameterAdapt() called");
    return 0;
}

/* Demangled: VP8EncoderCloseAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderCloseAdapt(void) {
    ALOGD("VP8EncoderCloseAdapt() called");
    return 0;
}

/* Demangled: VP8EncoderGenerateHeader */
extern "C" __attribute__((visibility("default"))) int VP8EncoderGenerateHeader(void) {
    ALOGD("VP8EncoderGenerateHeader() called");
    return 0;
}

/* Demangled: VP8EncoderOpenAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderOpenAdapt(void) {
    ALOGD("VP8EncoderOpenAdapt() called");
    return 0;
}

/* Demangled: vpx_codec_vp8_cx */
extern "C" __attribute__((visibility("default"))) int vpx_codec_vp8_cx(void) {
    ALOGD("vpx_codec_vp8_cx() called");
    return 0;
}

/* Demangled: VP8EncoderEncodeOneFrame */
extern "C" __attribute__((visibility("default"))) int VP8EncoderEncodeOneFrame(void) {
    ALOGD("VP8EncoderEncodeOneFrame() called");
    return 0;
}

/* Demangled: vpx_img_wrap */
extern "C" __attribute__((visibility("default"))) int vpx_img_wrap(void) {
    ALOGD("vpx_img_wrap() called");
    return 0;
}

/* Demangled: vp8e_encode */
extern "C" __attribute__((visibility("default"))) int vp8e_encode(void) {
    ALOGD("vp8e_encode() called");
    return 0;
}

/* Demangled: VP8EncoderGetNextBitstream */
extern "C" __attribute__((visibility("default"))) int VP8EncoderGetNextBitstream(void) {
    ALOGD("VP8EncoderGetNextBitstream() called");
    return 0;
}

/* Demangled: vp8e_get_cxdata */
extern "C" __attribute__((visibility("default"))) int vp8e_get_cxdata(void) {
    ALOGD("vp8e_get_cxdata() called");
    return 0;
}

/* Demangled: VP8EncoderDeInitAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderDeInitAdapt(void) {
    ALOGD("VP8EncoderDeInitAdapt() called");
    return 0;
}

/* Demangled: vp8e_destroy */
extern "C" __attribute__((visibility("default"))) int vp8e_destroy(void) {
    ALOGD("vp8e_destroy() called");
    return 0;
}

/* Demangled: vp8_assert */
extern "C" __attribute__((visibility("default"))) int vp8_assert(void) {
    ALOGD("vp8_assert() called");
    return 0;
}

/* Demangled: vp8_enc_malloc */
extern "C" __attribute__((visibility("default"))) int vp8_enc_malloc(void) {
    ALOGD("vp8_enc_malloc() called");
    return 0;
}

/* Demangled: vp8_enc_calloc */
extern "C" __attribute__((visibility("default"))) int vp8_enc_calloc(void) {
    ALOGD("vp8_enc_calloc() called");
    return 0;
}

/* Demangled: vp8_enc_realloc */
extern "C" __attribute__((visibility("default"))) int vp8_enc_realloc(void) {
    ALOGD("vp8_enc_realloc() called");
    return 0;
}

/* Demangled: vp8_enc_free */
extern "C" __attribute__((visibility("default"))) int vp8_enc_free(void) {
    ALOGD("vp8_enc_free() called");
    return 0;
}

/* Demangled: vp8_enc_memset */
extern "C" __attribute__((visibility("default"))) int vp8_enc_memset(void) {
    ALOGD("vp8_enc_memset() called");
    return 0;
}

/* Demangled: vp8_enc_memcpy */
extern "C" __attribute__((visibility("default"))) int vp8_enc_memcpy(void) {
    ALOGD("vp8_enc_memcpy() called");
    return 0;
}

/* Demangled: vp8_enc_memmove */
extern "C" __attribute__((visibility("default"))) int vp8_enc_memmove(void) {
    ALOGD("vp8_enc_memmove() called");
    return 0;
}

/* Demangled: vp8_codec_cb_allocate_stream_buffer */
extern "C" __attribute__((visibility("default"))) int vp8_codec_cb_allocate_stream_buffer(void) {
    ALOGD("vp8_codec_cb_allocate_stream_buffer() called");
    return 0;
}

/* Demangled: vp8_codec_cb_update_stream_wr_ptr */
extern "C" __attribute__((visibility("default"))) int vp8_codec_cb_update_stream_wr_ptr(void) {
    ALOGD("vp8_codec_cb_update_stream_wr_ptr() called");
    return 0;
}

/* Demangled: vp8_enc_thread_create */
extern "C" __attribute__((visibility("default"))) int vp8_enc_thread_create(void) {
    ALOGD("vp8_enc_thread_create() called");
    return 0;
}

/* Demangled: vp8_enc_thread_join */
extern "C" __attribute__((visibility("default"))) int vp8_enc_thread_join(void) {
    ALOGD("vp8_enc_thread_join() called");
    return 0;
}

/* Demangled: vp8encoder_setuplayeredbitrate */
extern "C" __attribute__((visibility("default"))) int vp8encoder_setuplayeredbitrate(void) {
    ALOGD("vp8encoder_setuplayeredbitrate() called");
    return 0;
}

/* Demangled: VP8EncoderInitAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderInitAdapt(void) {
    ALOGD("VP8EncoderInitAdapt() called");
    return 0;
}

/* Demangled: vpx_codec_enc_config_default */
extern "C" __attribute__((visibility("default"))) int vpx_codec_enc_config_default(void) {
    ALOGD("vpx_codec_enc_config_default() called");
    return 0;
}

/* Demangled: vp8e_init */
extern "C" __attribute__((visibility("default"))) int vp8e_init(void) {
    ALOGD("vp8e_init() called");
    return 0;
}

/* Demangled: vp8e_set_param */
extern "C" __attribute__((visibility("default"))) int vp8e_set_param(void) {
    ALOGD("vp8e_set_param() called");
    return 0;
}

/* Demangled: VP8EncoderSetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int VP8EncoderSetParameterAdapt(void) {
    ALOGD("VP8EncoderSetParameterAdapt() called");
    return 0;
}

/* Demangled: vp8e_set_config */
extern "C" __attribute__((visibility("default"))) int vp8e_set_config(void) {
    ALOGD("vp8e_set_config() called");
    return 0;
}

/* Demangled: GetVP8EncoderHandler */
extern "C" __attribute__((visibility("default"))) int GetVP8EncoderHandler(void) {
    ALOGD("GetVP8EncoderHandler() called");
    return 0;
}

/* Demangled: GetVP8EncoderAPI */
extern "C" __attribute__((visibility("default"))) int GetVP8EncoderAPI(void) {
    ALOGD("GetVP8EncoderAPI() called");
    return 0;
}

/* Demangled: vp8_sleep */
extern "C" __attribute__((visibility("default"))) int vp8_sleep(void) {
    ALOGD("vp8_sleep() called");
    return 0;
}

/* Exported Object: _rVP8EncoderAPI */
extern "C" __attribute__((visibility("default"))) void* _rVP8EncoderAPI = NULL;

/* Exported Object: do_mb_times */
extern "C" __attribute__((visibility("default"))) void* do_mb_times = NULL;

/* Exported Object: wait_times */
extern "C" __attribute__((visibility("default"))) void* wait_times = NULL;

/* Exported Object: seek_row_times */
extern "C" __attribute__((visibility("default"))) void* seek_row_times = NULL;

/* Exported Object: vpx_codec_vp8_cx_algo */
extern "C" __attribute__((visibility("default"))) void* vpx_codec_vp8_cx_algo = NULL;

/* Demangled: _vp8_B510F1FF6A9CCDE45AF7D8460FC295FC5E5B8BDCE626FD20451920CC76FF70F3 */
extern "C" __attribute__((visibility("default"))) int _vp8_B510F1FF6A9CCDE45AF7D8460FC295FC5E5B8BDCE626FD20451920CC76FF70F3(void) {
    ALOGD("_vp8_B510F1FF6A9CCDE45AF7D8460FC295FC5E5B8BDCE626FD20451920CC76FF70F3() called");
    return 0;
}

/* Demangled: _vp8_F4EB6E6FCB49A8B3B18665B07F4EA98C26C0B0DE5ED2034817CBEE9077C87783 */
extern "C" __attribute__((visibility("default"))) int _vp8_F4EB6E6FCB49A8B3B18665B07F4EA98C26C0B0DE5ED2034817CBEE9077C87783(void) {
    ALOGD("_vp8_F4EB6E6FCB49A8B3B18665B07F4EA98C26C0B0DE5ED2034817CBEE9077C87783() called");
    return 0;
}

/* Demangled: _vp8_13D4E21B6C8C5765EB685970FC35FB72 */
extern "C" __attribute__((visibility("default"))) int _vp8_13D4E21B6C8C5765EB685970FC35FB72(void) {
    ALOGD("_vp8_13D4E21B6C8C5765EB685970FC35FB72() called");
    return 0;
}

/* Demangled: _vp8_16770F71A56BC2AEFAD563C5BBA950331B1715D865DD382A0BE8BEDF1C923070 */
extern "C" __attribute__((visibility("default"))) int _vp8_16770F71A56BC2AEFAD563C5BBA950331B1715D865DD382A0BE8BEDF1C923070(void) {
    ALOGD("_vp8_16770F71A56BC2AEFAD563C5BBA950331B1715D865DD382A0BE8BEDF1C923070() called");
    return 0;
}

/* Demangled: _vp8_1747204B74DC6D0FD7723B6C9D170C8AE109B34D242DCDFD27F02FAAEE5E985E */
extern "C" __attribute__((visibility("default"))) int _vp8_1747204B74DC6D0FD7723B6C9D170C8AE109B34D242DCDFD27F02FAAEE5E985E(void) {
    ALOGD("_vp8_1747204B74DC6D0FD7723B6C9D170C8AE109B34D242DCDFD27F02FAAEE5E985E() called");
    return 0;
}

/* Demangled: _vp8_27F19D2BF9486281C7769B2C55EF1D6139F1107B030516985AD4C01512399C5E */
extern "C" __attribute__((visibility("default"))) int _vp8_27F19D2BF9486281C7769B2C55EF1D6139F1107B030516985AD4C01512399C5E(void) {
    ALOGD("_vp8_27F19D2BF9486281C7769B2C55EF1D6139F1107B030516985AD4C01512399C5E() called");
    return 0;
}

/* Demangled: _vp8_399D3055CF9AFDA5DBBB896AB478F4CC */
extern "C" __attribute__((visibility("default"))) int _vp8_399D3055CF9AFDA5DBBB896AB478F4CC(void) {
    ALOGD("_vp8_399D3055CF9AFDA5DBBB896AB478F4CC() called");
    return 0;
}

/* Demangled: _vp8_3F545BA65B79DD70677ABCC4672AA3B0BE6364438CB8A2094F8344EAA9D73C06 */
extern "C" __attribute__((visibility("default"))) int _vp8_3F545BA65B79DD70677ABCC4672AA3B0BE6364438CB8A2094F8344EAA9D73C06(void) {
    ALOGD("_vp8_3F545BA65B79DD70677ABCC4672AA3B0BE6364438CB8A2094F8344EAA9D73C06() called");
    return 0;
}

/* Demangled: _vp8_4A661FC150AC0184BFA516115C0D6C32AC75D526AB688554C94E0F8940D5DE49 */
extern "C" __attribute__((visibility("default"))) int _vp8_4A661FC150AC0184BFA516115C0D6C32AC75D526AB688554C94E0F8940D5DE49(void) {
    ALOGD("_vp8_4A661FC150AC0184BFA516115C0D6C32AC75D526AB688554C94E0F8940D5DE49() called");
    return 0;
}

/* Demangled: _vp8_4D39871978BA023B3C287F8375A76D9FADDD9DCB4C73A2AD3E23E1B5C7EED72E */
extern "C" __attribute__((visibility("default"))) int _vp8_4D39871978BA023B3C287F8375A76D9FADDD9DCB4C73A2AD3E23E1B5C7EED72E(void) {
    ALOGD("_vp8_4D39871978BA023B3C287F8375A76D9FADDD9DCB4C73A2AD3E23E1B5C7EED72E() called");
    return 0;
}

/* Demangled: _vp8_60CAE44B22C51EFCC6B949F7ACC45451 */
extern "C" __attribute__((visibility("default"))) int _vp8_60CAE44B22C51EFCC6B949F7ACC45451(void) {
    ALOGD("_vp8_60CAE44B22C51EFCC6B949F7ACC45451() called");
    return 0;
}

/* Demangled: _vp8_7E23DB616AD6AE4C66098FC3DC1D4CC935B722C405CAB51FF335E578FD3E1F6A */
extern "C" __attribute__((visibility("default"))) int _vp8_7E23DB616AD6AE4C66098FC3DC1D4CC935B722C405CAB51FF335E578FD3E1F6A(void) {
    ALOGD("_vp8_7E23DB616AD6AE4C66098FC3DC1D4CC935B722C405CAB51FF335E578FD3E1F6A() called");
    return 0;
}

/* Demangled: _vp8_7E5ED3FACD6802D42BFC3CF6409CBA95 */
extern "C" __attribute__((visibility("default"))) int _vp8_7E5ED3FACD6802D42BFC3CF6409CBA95(void) {
    ALOGD("_vp8_7E5ED3FACD6802D42BFC3CF6409CBA95() called");
    return 0;
}

/* Demangled: _vp8_927CB1A25283E0F237531310F10F36848485D8C4BAD949902FF77CCA4FC75C89 */
extern "C" __attribute__((visibility("default"))) int _vp8_927CB1A25283E0F237531310F10F36848485D8C4BAD949902FF77CCA4FC75C89(void) {
    ALOGD("_vp8_927CB1A25283E0F237531310F10F36848485D8C4BAD949902FF77CCA4FC75C89() called");
    return 0;
}

/* Demangled: _vp8_BF04311192835BB27A583997A90A1CB2BE6364438CB8A2094F8344EAA9D73C06 */
extern "C" __attribute__((visibility("default"))) int _vp8_BF04311192835BB27A583997A90A1CB2BE6364438CB8A2094F8344EAA9D73C06(void) {
    ALOGD("_vp8_BF04311192835BB27A583997A90A1CB2BE6364438CB8A2094F8344EAA9D73C06() called");
    return 0;
}

/* Demangled: _vp8_CC243D66BD04BC52AB942DD97666CCF092D60EB956E1BFBD772891E87F41FE6D */
extern "C" __attribute__((visibility("default"))) int _vp8_CC243D66BD04BC52AB942DD97666CCF092D60EB956E1BFBD772891E87F41FE6D(void) {
    ALOGD("_vp8_CC243D66BD04BC52AB942DD97666CCF092D60EB956E1BFBD772891E87F41FE6D() called");
    return 0;
}

/* Demangled: _vp8_D2796376B4A71C3CD7DE011045E526424985CD485606EAC71BA5A4875BC5C171 */
extern "C" __attribute__((visibility("default"))) int _vp8_D2796376B4A71C3CD7DE011045E526424985CD485606EAC71BA5A4875BC5C171(void) {
    ALOGD("_vp8_D2796376B4A71C3CD7DE011045E526424985CD485606EAC71BA5A4875BC5C171() called");
    return 0;
}

/* Demangled: _vp8_DA7787E215BFD2E4E4354CD0BC99B89DDBE8C552F83B070D069248CBDA035240 */
extern "C" __attribute__((visibility("default"))) int _vp8_DA7787E215BFD2E4E4354CD0BC99B89DDBE8C552F83B070D069248CBDA035240(void) {
    ALOGD("_vp8_DA7787E215BFD2E4E4354CD0BC99B89DDBE8C552F83B070D069248CBDA035240() called");
    return 0;
}

/* Demangled: _vp8_E98AB34C52E6F793799246A50AE1A734E109B34D242DCDFD27F02FAAEE5E985E */
extern "C" __attribute__((visibility("default"))) int _vp8_E98AB34C52E6F793799246A50AE1A734E109B34D242DCDFD27F02FAAEE5E985E(void) {
    ALOGD("_vp8_E98AB34C52E6F793799246A50AE1A734E109B34D242DCDFD27F02FAAEE5E985E() called");
    return 0;
}

/* Demangled: _vp8_FD2316D29C686A6EC50DF8C76B59F2534985CD485606EAC71BA5A4875BC5C171 */
extern "C" __attribute__((visibility("default"))) int _vp8_FD2316D29C686A6EC50DF8C76B59F2534985CD485606EAC71BA5A4875BC5C171(void) {
    ALOGD("_vp8_FD2316D29C686A6EC50DF8C76B59F2534985CD485606EAC71BA5A4875BC5C171() called");
    return 0;
}

/* Demangled: _vp8_FF28754665B05D164BE0E7C6337A698A4E5F379744F1C4856AE5805A7EC964F9 */
extern "C" __attribute__((visibility("default"))) int _vp8_FF28754665B05D164BE0E7C6337A698A4E5F379744F1C4856AE5805A7EC964F9(void) {
    ALOGD("_vp8_FF28754665B05D164BE0E7C6337A698A4E5F379744F1C4856AE5805A7EC964F9() called");
    return 0;
}

/* Demangled: _vp8_E8ABB6E295B553CA2CA44FCA62588107 */
extern "C" __attribute__((visibility("default"))) int _vp8_E8ABB6E295B553CA2CA44FCA62588107(void) {
    ALOGD("_vp8_E8ABB6E295B553CA2CA44FCA62588107() called");
    return 0;
}

/* Demangled: _vp8_90FD2C56D4582351047A151D75B60248 */
extern "C" __attribute__((visibility("default"))) int _vp8_90FD2C56D4582351047A151D75B60248(void) {
    ALOGD("_vp8_90FD2C56D4582351047A151D75B60248() called");
    return 0;
}

/* Demangled: _vp8_7F64BD33FCCDCA518BA9E816816F5C11 */
extern "C" __attribute__((visibility("default"))) int _vp8_7F64BD33FCCDCA518BA9E816816F5C11(void) {
    ALOGD("_vp8_7F64BD33FCCDCA518BA9E816816F5C11() called");
    return 0;
}

/* Demangled: _vp8_3BEC1FD7877DE84E1D84709B01114B85 */
extern "C" __attribute__((visibility("default"))) int _vp8_3BEC1FD7877DE84E1D84709B01114B85(void) {
    ALOGD("_vp8_3BEC1FD7877DE84E1D84709B01114B85() called");
    return 0;
}

/* Demangled: _vp8_7C4A3D4088B2CF9DC98FCA8DBF52D001 */
extern "C" __attribute__((visibility("default"))) int _vp8_7C4A3D4088B2CF9DC98FCA8DBF52D001(void) {
    ALOGD("_vp8_7C4A3D4088B2CF9DC98FCA8DBF52D001() called");
    return 0;
}

/* Demangled: _vp8_2199A87A7FC1CCC97D1B488C9D272A0112766C6CC9A427F52085B4FB831BB32E */
extern "C" __attribute__((visibility("default"))) int _vp8_2199A87A7FC1CCC97D1B488C9D272A0112766C6CC9A427F52085B4FB831BB32E(void) {
    ALOGD("_vp8_2199A87A7FC1CCC97D1B488C9D272A0112766C6CC9A427F52085B4FB831BB32E() called");
    return 0;
}

/* Demangled: _vp8_C81060CD2C68FC48C30003DE52E3339B060E0E79A64EE69ABEB6AC0000EE8F34 */
extern "C" __attribute__((visibility("default"))) int _vp8_C81060CD2C68FC48C30003DE52E3339B060E0E79A64EE69ABEB6AC0000EE8F34(void) {
    ALOGD("_vp8_C81060CD2C68FC48C30003DE52E3339B060E0E79A64EE69ABEB6AC0000EE8F34() called");
    return 0;
}

/* Demangled: _vp8_53AB33D79C2D2C63AD86C757B3B4D17992D60EB956E1BFBD772891E87F41FE6D */
extern "C" __attribute__((visibility("default"))) int _vp8_53AB33D79C2D2C63AD86C757B3B4D17992D60EB956E1BFBD772891E87F41FE6D(void) {
    ALOGD("_vp8_53AB33D79C2D2C63AD86C757B3B4D17992D60EB956E1BFBD772891E87F41FE6D() called");
    return 0;
}

/* Demangled: _vp8_337487F6F018BF511D9A71C9B6DAB4AF14B7DFDF140D31BFEA65CAA98117F070 */
extern "C" __attribute__((visibility("default"))) int _vp8_337487F6F018BF511D9A71C9B6DAB4AF14B7DFDF140D31BFEA65CAA98117F070(void) {
    ALOGD("_vp8_337487F6F018BF511D9A71C9B6DAB4AF14B7DFDF140D31BFEA65CAA98117F070() called");
    return 0;
}

/* Demangled: _vp8_98016C7EC0FA5417BBFA43A5F4653FBD */
extern "C" __attribute__((visibility("default"))) int _vp8_98016C7EC0FA5417BBFA43A5F4653FBD(void) {
    ALOGD("_vp8_98016C7EC0FA5417BBFA43A5F4653FBD() called");
    return 0;
}

/* Demangled: _vp8_FF7384D1CEAB0625EE270BA4AB0BFF9D */
extern "C" __attribute__((visibility("default"))) int _vp8_FF7384D1CEAB0625EE270BA4AB0BFF9D(void) {
    ALOGD("_vp8_FF7384D1CEAB0625EE270BA4AB0BFF9D() called");
    return 0;
}

/* Demangled: _vp8_32D7CE4AFE0A45DBE025C8CE80DBB1FD */
extern "C" __attribute__((visibility("default"))) int _vp8_32D7CE4AFE0A45DBE025C8CE80DBB1FD(void) {
    ALOGD("_vp8_32D7CE4AFE0A45DBE025C8CE80DBB1FD() called");
    return 0;
}

/* Demangled: _vp8_7E28C59F2F99EB556DD9386C411E1BBE */
extern "C" __attribute__((visibility("default"))) int _vp8_7E28C59F2F99EB556DD9386C411E1BBE(void) {
    ALOGD("_vp8_7E28C59F2F99EB556DD9386C411E1BBE() called");
    return 0;
}

/* Demangled: _vp8_08DFD9A365E8AF6BF8345B457E65123A */
extern "C" __attribute__((visibility("default"))) int _vp8_08DFD9A365E8AF6BF8345B457E65123A(void) {
    ALOGD("_vp8_08DFD9A365E8AF6BF8345B457E65123A() called");
    return 0;
}

/* Demangled: _vp8_DD8517F294954AC74F6B57DEC17032DF963CC89A29E5CACBD1CCC00D806C2B25 */
extern "C" __attribute__((visibility("default"))) int _vp8_DD8517F294954AC74F6B57DEC17032DF963CC89A29E5CACBD1CCC00D806C2B25(void) {
    ALOGD("_vp8_DD8517F294954AC74F6B57DEC17032DF963CC89A29E5CACBD1CCC00D806C2B25() called");
    return 0;
}

/* Demangled: _vp8_AD9FFD64A2E5984CDCFA570D554BF9E8500315F3AAE3A97B618FD8A67E8C3080 */
extern "C" __attribute__((visibility("default"))) int _vp8_AD9FFD64A2E5984CDCFA570D554BF9E8500315F3AAE3A97B618FD8A67E8C3080(void) {
    ALOGD("_vp8_AD9FFD64A2E5984CDCFA570D554BF9E8500315F3AAE3A97B618FD8A67E8C3080() called");
    return 0;
}

/* Demangled: _vp8_AB4A4BD0EBFECEB244B760B5F4E43152BE6364438CB8A2094F8344EAA9D73C06 */
extern "C" __attribute__((visibility("default"))) int _vp8_AB4A4BD0EBFECEB244B760B5F4E43152BE6364438CB8A2094F8344EAA9D73C06(void) {
    ALOGD("_vp8_AB4A4BD0EBFECEB244B760B5F4E43152BE6364438CB8A2094F8344EAA9D73C06() called");
    return 0;
}

/* Demangled: _vp8_5C4FA9D78D829995F15E1FF8D1DC698EDCAC4713A5699C283B12E3994F4A4913 */
extern "C" __attribute__((visibility("default"))) int _vp8_5C4FA9D78D829995F15E1FF8D1DC698EDCAC4713A5699C283B12E3994F4A4913(void) {
    ALOGD("_vp8_5C4FA9D78D829995F15E1FF8D1DC698EDCAC4713A5699C283B12E3994F4A4913() called");
    return 0;
}

/* Demangled: _vp8_B825C3C81AE78703D129B6985701329C08FF5F52CE42DEF1BBEC60FEB3D7C32B */
extern "C" __attribute__((visibility("default"))) int _vp8_B825C3C81AE78703D129B6985701329C08FF5F52CE42DEF1BBEC60FEB3D7C32B(void) {
    ALOGD("_vp8_B825C3C81AE78703D129B6985701329C08FF5F52CE42DEF1BBEC60FEB3D7C32B() called");
    return 0;
}

/* Demangled: _vp8_0276E52EFDABDE51E6ED3D61BB3C8BA0D886E660B3901572AD30F6B21F1F5955 */
extern "C" __attribute__((visibility("default"))) int _vp8_0276E52EFDABDE51E6ED3D61BB3C8BA0D886E660B3901572AD30F6B21F1F5955(void) {
    ALOGD("_vp8_0276E52EFDABDE51E6ED3D61BB3C8BA0D886E660B3901572AD30F6B21F1F5955() called");
    return 0;
}

/* Demangled: _vp8_0FA2B2B379923E32B69E5544E25DA0F9759766C423BDC36446231A46F0C5C784 */
extern "C" __attribute__((visibility("default"))) int _vp8_0FA2B2B379923E32B69E5544E25DA0F9759766C423BDC36446231A46F0C5C784(void) {
    ALOGD("_vp8_0FA2B2B379923E32B69E5544E25DA0F9759766C423BDC36446231A46F0C5C784() called");
    return 0;
}

/* Demangled: _vp8_10D1FC388B63CE3A5A6A2FB935A3AE08DF8755438F69E74F755284739AF40E84 */
extern "C" __attribute__((visibility("default"))) int _vp8_10D1FC388B63CE3A5A6A2FB935A3AE08DF8755438F69E74F755284739AF40E84(void) {
    ALOGD("_vp8_10D1FC388B63CE3A5A6A2FB935A3AE08DF8755438F69E74F755284739AF40E84() called");
    return 0;
}

/* Demangled: _vp8_1750C7C2E7C77336F5DD7EE7FE2B366255B3F39C6CC0716B54E65A555F84B3FF */
extern "C" __attribute__((visibility("default"))) int _vp8_1750C7C2E7C77336F5DD7EE7FE2B366255B3F39C6CC0716B54E65A555F84B3FF(void) {
    ALOGD("_vp8_1750C7C2E7C77336F5DD7EE7FE2B366255B3F39C6CC0716B54E65A555F84B3FF() called");
    return 0;
}

/* Demangled: _vp8_186644E0227CEAD2A10FBB9E985C4EC1E9E53B04ECA3C0832F32C1C8E4789498 */
extern "C" __attribute__((visibility("default"))) int _vp8_186644E0227CEAD2A10FBB9E985C4EC1E9E53B04ECA3C0832F32C1C8E4789498(void) {
    ALOGD("_vp8_186644E0227CEAD2A10FBB9E985C4EC1E9E53B04ECA3C0832F32C1C8E4789498() called");
    return 0;
}

/* Demangled: _vp8_1F6992868C44AB22A366E0E9F800A87D3FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_1F6992868C44AB22A366E0E9F800A87D3FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_1F6992868C44AB22A366E0E9F800A87D3FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_24FD3B3F05155DDA8B305EFAF927FC21 */
extern "C" __attribute__((visibility("default"))) int _vp8_24FD3B3F05155DDA8B305EFAF927FC21(void) {
    ALOGD("_vp8_24FD3B3F05155DDA8B305EFAF927FC21() called");
    return 0;
}

/* Demangled: _vp8_2B06E475F3D93F3AB1B26922E203719CB0637879E8DBD7FE79504609A3511B7A */
extern "C" __attribute__((visibility("default"))) int _vp8_2B06E475F3D93F3AB1B26922E203719CB0637879E8DBD7FE79504609A3511B7A(void) {
    ALOGD("_vp8_2B06E475F3D93F3AB1B26922E203719CB0637879E8DBD7FE79504609A3511B7A() called");
    return 0;
}

/* Demangled: _vp8_2CCAC0671FB7910E475D1B2B6ADF10D262A37A5BDD85E2DD53070E6720D23705 */
extern "C" __attribute__((visibility("default"))) int _vp8_2CCAC0671FB7910E475D1B2B6ADF10D262A37A5BDD85E2DD53070E6720D23705(void) {
    ALOGD("_vp8_2CCAC0671FB7910E475D1B2B6ADF10D262A37A5BDD85E2DD53070E6720D23705() called");
    return 0;
}

/* Demangled: _vp8_2FF1129F88D1ED6E40918A8C9783F016DA2F7AC50C6A5A9B5F91C844D75BEDC9 */
extern "C" __attribute__((visibility("default"))) int _vp8_2FF1129F88D1ED6E40918A8C9783F016DA2F7AC50C6A5A9B5F91C844D75BEDC9(void) {
    ALOGD("_vp8_2FF1129F88D1ED6E40918A8C9783F016DA2F7AC50C6A5A9B5F91C844D75BEDC9() called");
    return 0;
}

/* Demangled: _vp8_3333B06C1D72BC78D131F5AF73F1CCA8B0637879E8DBD7FE79504609A3511B7A */
extern "C" __attribute__((visibility("default"))) int _vp8_3333B06C1D72BC78D131F5AF73F1CCA8B0637879E8DBD7FE79504609A3511B7A(void) {
    ALOGD("_vp8_3333B06C1D72BC78D131F5AF73F1CCA8B0637879E8DBD7FE79504609A3511B7A() called");
    return 0;
}

/* Demangled: _vp8_3B0C7B73B3C4F27F9542222D4D0E006C955A024DB3BFB8B639F94D1D7388331E */
extern "C" __attribute__((visibility("default"))) int _vp8_3B0C7B73B3C4F27F9542222D4D0E006C955A024DB3BFB8B639F94D1D7388331E(void) {
    ALOGD("_vp8_3B0C7B73B3C4F27F9542222D4D0E006C955A024DB3BFB8B639F94D1D7388331E() called");
    return 0;
}

/* Demangled: _vp8_3DE525D05E16A5782E5921AD922D9742F643710CED1526504B3B1697C94B3007EB4A643B96E79EAEF093631F2DBDFABA */
extern "C" __attribute__((visibility("default"))) int _vp8_3DE525D05E16A5782E5921AD922D9742F643710CED1526504B3B1697C94B3007EB4A643B96E79EAEF093631F2DBDFABA(void) {
    ALOGD("_vp8_3DE525D05E16A5782E5921AD922D9742F643710CED1526504B3B1697C94B3007EB4A643B96E79EAEF093631F2DBDFABA() called");
    return 0;
}

/* Demangled: _vp8_3F9D2F6A3F76EF281CAC030635683B57F76F059754E25BDFD6174C8FB2F708D0 */
extern "C" __attribute__((visibility("default"))) int _vp8_3F9D2F6A3F76EF281CAC030635683B57F76F059754E25BDFD6174C8FB2F708D0(void) {
    ALOGD("_vp8_3F9D2F6A3F76EF281CAC030635683B57F76F059754E25BDFD6174C8FB2F708D0() called");
    return 0;
}

/* Demangled: _vp8_44C9D1199F83925713832A8CF0A60F03E5288BCD7470315BCC67C0F9151292E7 */
extern "C" __attribute__((visibility("default"))) int _vp8_44C9D1199F83925713832A8CF0A60F03E5288BCD7470315BCC67C0F9151292E7(void) {
    ALOGD("_vp8_44C9D1199F83925713832A8CF0A60F03E5288BCD7470315BCC67C0F9151292E7() called");
    return 0;
}

/* Demangled: _vp8_48886177D6AD648E038A81A4D05F846607B193574727B9A3F45BBAD7E722B1E14721DE37B5A850DCFC730A3420F89412 */
extern "C" __attribute__((visibility("default"))) int _vp8_48886177D6AD648E038A81A4D05F846607B193574727B9A3F45BBAD7E722B1E14721DE37B5A850DCFC730A3420F89412(void) {
    ALOGD("_vp8_48886177D6AD648E038A81A4D05F846607B193574727B9A3F45BBAD7E722B1E14721DE37B5A850DCFC730A3420F89412() called");
    return 0;
}

/* Demangled: _vp8_4CE7F1EE9EC5CD7622474AF51234E35D527E77E65A594C102C8C7DC5302C0EEC */
extern "C" __attribute__((visibility("default"))) int _vp8_4CE7F1EE9EC5CD7622474AF51234E35D527E77E65A594C102C8C7DC5302C0EEC(void) {
    ALOGD("_vp8_4CE7F1EE9EC5CD7622474AF51234E35D527E77E65A594C102C8C7DC5302C0EEC() called");
    return 0;
}

/* Demangled: _vp8_4E4BB2DCC28040211C36671E0ECFD2035D9D9C914121377E4481B1F12E737123 */
extern "C" __attribute__((visibility("default"))) int _vp8_4E4BB2DCC28040211C36671E0ECFD2035D9D9C914121377E4481B1F12E737123(void) {
    ALOGD("_vp8_4E4BB2DCC28040211C36671E0ECFD2035D9D9C914121377E4481B1F12E737123() called");
    return 0;
}

/* Demangled: _vp8_4FB6BFBE0A3A6B8A08E7B3327053DE861ED35652A1AF40A916BBA11036AC4103 */
extern "C" __attribute__((visibility("default"))) int _vp8_4FB6BFBE0A3A6B8A08E7B3327053DE861ED35652A1AF40A916BBA11036AC4103(void) {
    ALOGD("_vp8_4FB6BFBE0A3A6B8A08E7B3327053DE861ED35652A1AF40A916BBA11036AC4103() called");
    return 0;
}

/* Demangled: _vp8_4FB6BFBE0A3A6B8A08E7B3327053DE865705C530B389DD83188758D50BA5CC90 */
extern "C" __attribute__((visibility("default"))) int _vp8_4FB6BFBE0A3A6B8A08E7B3327053DE865705C530B389DD83188758D50BA5CC90(void) {
    ALOGD("_vp8_4FB6BFBE0A3A6B8A08E7B3327053DE865705C530B389DD83188758D50BA5CC90() called");
    return 0;
}

/* Demangled: _vp8_5A70C68C6083A88CB20DDAFEA4E7DA2293E93AAE9339430FFA52C30E4B897DE0 */
extern "C" __attribute__((visibility("default"))) int _vp8_5A70C68C6083A88CB20DDAFEA4E7DA2293E93AAE9339430FFA52C30E4B897DE0(void) {
    ALOGD("_vp8_5A70C68C6083A88CB20DDAFEA4E7DA2293E93AAE9339430FFA52C30E4B897DE0() called");
    return 0;
}

/* Demangled: _vp8_5E09D1517126B1532179872311605765 */
extern "C" __attribute__((visibility("default"))) int _vp8_5E09D1517126B1532179872311605765(void) {
    ALOGD("_vp8_5E09D1517126B1532179872311605765() called");
    return 0;
}

/* Demangled: _vp8_613F891E3FCF6EF3CCF710B2641AD780 */
extern "C" __attribute__((visibility("default"))) int _vp8_613F891E3FCF6EF3CCF710B2641AD780(void) {
    ALOGD("_vp8_613F891E3FCF6EF3CCF710B2641AD780() called");
    return 0;
}

/* Demangled: _vp8_62D93F108754397423766F0AF063224F2F7BD70627A65B419DC953AE6ED9E9DC */
extern "C" __attribute__((visibility("default"))) int _vp8_62D93F108754397423766F0AF063224F2F7BD70627A65B419DC953AE6ED9E9DC(void) {
    ALOGD("_vp8_62D93F108754397423766F0AF063224F2F7BD70627A65B419DC953AE6ED9E9DC() called");
    return 0;
}

/* Demangled: _vp8_68A21B91A05455E5CA2DDCE8F5674C9DB0D74EF0A72D4FEDC54C8502B870F145 */
extern "C" __attribute__((visibility("default"))) int _vp8_68A21B91A05455E5CA2DDCE8F5674C9DB0D74EF0A72D4FEDC54C8502B870F145(void) {
    ALOGD("_vp8_68A21B91A05455E5CA2DDCE8F5674C9DB0D74EF0A72D4FEDC54C8502B870F145() called");
    return 0;
}

/* Demangled: _vp8_742EE83DB0708F87605258F0E2A4C7795D9D9C914121377E4481B1F12E737123 */
extern "C" __attribute__((visibility("default"))) int _vp8_742EE83DB0708F87605258F0E2A4C7795D9D9C914121377E4481B1F12E737123(void) {
    ALOGD("_vp8_742EE83DB0708F87605258F0E2A4C7795D9D9C914121377E4481B1F12E737123() called");
    return 0;
}

/* Demangled: _vp8_859050D5046BF708B26F88DA1BFDEB11 */
extern "C" __attribute__((visibility("default"))) int _vp8_859050D5046BF708B26F88DA1BFDEB11(void) {
    ALOGD("_vp8_859050D5046BF708B26F88DA1BFDEB11() called");
    return 0;
}

/* Demangled: _vp8_91F466FDB3A33C8E3E1E83D2C6E607607CF78641B2A9A5D88E890F8F314167EC */
extern "C" __attribute__((visibility("default"))) int _vp8_91F466FDB3A33C8E3E1E83D2C6E607607CF78641B2A9A5D88E890F8F314167EC(void) {
    ALOGD("_vp8_91F466FDB3A33C8E3E1E83D2C6E607607CF78641B2A9A5D88E890F8F314167EC() called");
    return 0;
}

/* Demangled: _vp8_9997DADBE968A48D2A8CC8DBBDB8065D3FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_9997DADBE968A48D2A8CC8DBBDB8065D3FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_9997DADBE968A48D2A8CC8DBBDB8065D3FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_9B1E2CAADE822E811BC0CAB558CD578D0073084A612F11A5B8F215ADD15FF5CE */
extern "C" __attribute__((visibility("default"))) int _vp8_9B1E2CAADE822E811BC0CAB558CD578D0073084A612F11A5B8F215ADD15FF5CE(void) {
    ALOGD("_vp8_9B1E2CAADE822E811BC0CAB558CD578D0073084A612F11A5B8F215ADD15FF5CE() called");
    return 0;
}

/* Demangled: _vp8_A2673E91E47DC5F548D950886B58B4B86F677EFA660F7F2EAE065E3B85330A15 */
extern "C" __attribute__((visibility("default"))) int _vp8_A2673E91E47DC5F548D950886B58B4B86F677EFA660F7F2EAE065E3B85330A15(void) {
    ALOGD("_vp8_A2673E91E47DC5F548D950886B58B4B86F677EFA660F7F2EAE065E3B85330A15() called");
    return 0;
}

/* Demangled: _vp8_A289A8FCBCD97BD3F161A217CFEB0482FCA90F41A6C29896786380BD8552BE50F8A09D15BEF93B723F96C6879C1750A6 */
extern "C" __attribute__((visibility("default"))) int _vp8_A289A8FCBCD97BD3F161A217CFEB0482FCA90F41A6C29896786380BD8552BE50F8A09D15BEF93B723F96C6879C1750A6(void) {
    ALOGD("_vp8_A289A8FCBCD97BD3F161A217CFEB0482FCA90F41A6C29896786380BD8552BE50F8A09D15BEF93B723F96C6879C1750A6() called");
    return 0;
}

/* Demangled: _vp8_AD94D38A9E6EA985DC2DFCC456E11D9B36FD2A664BD1B2B84134818F7EBA4951 */
extern "C" __attribute__((visibility("default"))) int _vp8_AD94D38A9E6EA985DC2DFCC456E11D9B36FD2A664BD1B2B84134818F7EBA4951(void) {
    ALOGD("_vp8_AD94D38A9E6EA985DC2DFCC456E11D9B36FD2A664BD1B2B84134818F7EBA4951() called");
    return 0;
}

/* Demangled: _vp8_AD94D38A9E6EA985DC2DFCC456E11D9BE236BFF2B6DEEE62040CF80D0D71B571 */
extern "C" __attribute__((visibility("default"))) int _vp8_AD94D38A9E6EA985DC2DFCC456E11D9BE236BFF2B6DEEE62040CF80D0D71B571(void) {
    ALOGD("_vp8_AD94D38A9E6EA985DC2DFCC456E11D9BE236BFF2B6DEEE62040CF80D0D71B571() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB35B722C405CAB51FF335E578FD3E1F6A */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB35B722C405CAB51FF335E578FD3E1F6A(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB35B722C405CAB51FF335E578FD3E1F6A() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBF0FC623E629F3FD487A0C4CF233394FB */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBF0FC623E629F3FD487A0C4CF233394FB(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBF0FC623E629F3FD487A0C4CF233394FB() called");
    return 0;
}

/* Demangled: _vp8_B5E27E76FAD6655FE1F253A317BA1CFD2447D70B637BF732227FFD029EA294DF */
extern "C" __attribute__((visibility("default"))) int _vp8_B5E27E76FAD6655FE1F253A317BA1CFD2447D70B637BF732227FFD029EA294DF(void) {
    ALOGD("_vp8_B5E27E76FAD6655FE1F253A317BA1CFD2447D70B637BF732227FFD029EA294DF() called");
    return 0;
}

/* Demangled: _vp8_B5E27E76FAD6655FE1F253A317BA1CFDC4C0A8D7C3C7D02A016996A843A1FBB0 */
extern "C" __attribute__((visibility("default"))) int _vp8_B5E27E76FAD6655FE1F253A317BA1CFDC4C0A8D7C3C7D02A016996A843A1FBB0(void) {
    ALOGD("_vp8_B5E27E76FAD6655FE1F253A317BA1CFDC4C0A8D7C3C7D02A016996A843A1FBB0() called");
    return 0;
}

/* Demangled: _vp8_B6A6A62E1906255EE454A6AD52AD65B8C2A2A0747DBCB7B2912C59961464346A */
extern "C" __attribute__((visibility("default"))) int _vp8_B6A6A62E1906255EE454A6AD52AD65B8C2A2A0747DBCB7B2912C59961464346A(void) {
    ALOGD("_vp8_B6A6A62E1906255EE454A6AD52AD65B8C2A2A0747DBCB7B2912C59961464346A() called");
    return 0;
}

/* Demangled: _vp8_BE18437D5BF2D5AFBB57F6D52ADD659B */
extern "C" __attribute__((visibility("default"))) int _vp8_BE18437D5BF2D5AFBB57F6D52ADD659B(void) {
    ALOGD("_vp8_BE18437D5BF2D5AFBB57F6D52ADD659B() called");
    return 0;
}

/* Demangled: _vp8_CC9AF23878872C5C89B674AD567E31F13FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_CC9AF23878872C5C89B674AD567E31F13FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_CC9AF23878872C5C89B674AD567E31F13FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_D73AC5D95C5301D3C161BE0A0E0CC288 */
extern "C" __attribute__((visibility("default"))) int _vp8_D73AC5D95C5301D3C161BE0A0E0CC288(void) {
    ALOGD("_vp8_D73AC5D95C5301D3C161BE0A0E0CC288() called");
    return 0;
}

/* Demangled: _vp8_DB0A17DCF9324E5FF114772F445CDDA004A22FC488CA6EC51A5C3711BFE0B223 */
extern "C" __attribute__((visibility("default"))) int _vp8_DB0A17DCF9324E5FF114772F445CDDA004A22FC488CA6EC51A5C3711BFE0B223(void) {
    ALOGD("_vp8_DB0A17DCF9324E5FF114772F445CDDA004A22FC488CA6EC51A5C3711BFE0B223() called");
    return 0;
}

/* Demangled: _vp8_DEF2342A559CA3FC229C51F5964FEEDF617BB01D42E80F3AFF374C08E38E7CC7 */
extern "C" __attribute__((visibility("default"))) int _vp8_DEF2342A559CA3FC229C51F5964FEEDF617BB01D42E80F3AFF374C08E38E7CC7(void) {
    ALOGD("_vp8_DEF2342A559CA3FC229C51F5964FEEDF617BB01D42E80F3AFF374C08E38E7CC7() called");
    return 0;
}

/* Demangled: _vp8_E184769E8B60B481044BA71C43A96371DD073824470771CAEC6934ED546A96A9 */
extern "C" __attribute__((visibility("default"))) int _vp8_E184769E8B60B481044BA71C43A96371DD073824470771CAEC6934ED546A96A9(void) {
    ALOGD("_vp8_E184769E8B60B481044BA71C43A96371DD073824470771CAEC6934ED546A96A9() called");
    return 0;
}

/* Demangled: _vp8_E9FD4922E9370280495085ED51F1039C */
extern "C" __attribute__((visibility("default"))) int _vp8_E9FD4922E9370280495085ED51F1039C(void) {
    ALOGD("_vp8_E9FD4922E9370280495085ED51F1039C() called");
    return 0;
}

/* Demangled: _vp8_EA2738A748D603D27DDEDB8A0CB0EE53032DD2C0C0B2A958B705155B7E190EF3 */
extern "C" __attribute__((visibility("default"))) int _vp8_EA2738A748D603D27DDEDB8A0CB0EE53032DD2C0C0B2A958B705155B7E190EF3(void) {
    ALOGD("_vp8_EA2738A748D603D27DDEDB8A0CB0EE53032DD2C0C0B2A958B705155B7E190EF3() called");
    return 0;
}

/* Demangled: _vp8_F361FEF2353C9943EDE1577F898A13053133E815880A9C9B826C1C6020C62EC7 */
extern "C" __attribute__((visibility("default"))) int _vp8_F361FEF2353C9943EDE1577F898A13053133E815880A9C9B826C1C6020C62EC7(void) {
    ALOGD("_vp8_F361FEF2353C9943EDE1577F898A13053133E815880A9C9B826C1C6020C62EC7() called");
    return 0;
}

/* Demangled: _vp8_F97ED484401C3F50FDBF449EFF6F9C077529BCACDB30994D7E83B69371391B73 */
extern "C" __attribute__((visibility("default"))) int _vp8_F97ED484401C3F50FDBF449EFF6F9C077529BCACDB30994D7E83B69371391B73(void) {
    ALOGD("_vp8_F97ED484401C3F50FDBF449EFF6F9C077529BCACDB30994D7E83B69371391B73() called");
    return 0;
}

/* Demangled: _vp8_FAA13B3FE1EC4C82E09646156E864B8986CC454DE0A19884B8A6BEE8219C9CD6 */
extern "C" __attribute__((visibility("default"))) int _vp8_FAA13B3FE1EC4C82E09646156E864B8986CC454DE0A19884B8A6BEE8219C9CD6(void) {
    ALOGD("_vp8_FAA13B3FE1EC4C82E09646156E864B8986CC454DE0A19884B8A6BEE8219C9CD6() called");
    return 0;
}

/* Demangled: _vp8_FB529C379ED8B79553B181B5A7A5EB8239F1107B030516985AD4C01512399C5E */
extern "C" __attribute__((visibility("default"))) int _vp8_FB529C379ED8B79553B181B5A7A5EB8239F1107B030516985AD4C01512399C5E(void) {
    ALOGD("_vp8_FB529C379ED8B79553B181B5A7A5EB8239F1107B030516985AD4C01512399C5E() called");
    return 0;
}

/* Exported Object: subblock_offset */
extern "C" __attribute__((visibility("default"))) void* subblock_offset = NULL;

/* Exported Object: vp8cx_base_skip_false_prob */
extern "C" __attribute__((visibility("default"))) void* vp8cx_base_skip_false_prob = NULL;

/* Exported Object: diamond_mv */
extern "C" __attribute__((visibility("default"))) void* diamond_mv = NULL;

/* Exported Object: fmv_col */
extern "C" __attribute__((visibility("default"))) void* fmv_col = NULL;

/* Exported Object: fmv_row */
extern "C" __attribute__((visibility("default"))) void* fmv_row = NULL;

/* Exported Object: vp8_bilinear_filters_u8 */
extern "C" __attribute__((visibility("default"))) void* vp8_bilinear_filters_u8 = NULL;

/* Exported Object: fmv */
extern "C" __attribute__((visibility("default"))) void* fmv = NULL;

/* Demangled: _vp8_44912B7CC1364F2A8B7F8D3FA8B0B7424CCFA54C4C3E4433211B222E5AAAA6AD59A73B209D0C53A16ACFDC47F3378874 */
extern "C" __attribute__((visibility("default"))) int _vp8_44912B7CC1364F2A8B7F8D3FA8B0B7424CCFA54C4C3E4433211B222E5AAAA6AD59A73B209D0C53A16ACFDC47F3378874(void) {
    ALOGD("_vp8_44912B7CC1364F2A8B7F8D3FA8B0B7424CCFA54C4C3E4433211B222E5AAAA6AD59A73B209D0C53A16ACFDC47F3378874() called");
    return 0;
}

/* Demangled: _vp8_642E6D0741CDEB4CB8E0B7E31BCBAA5996B7EACBA1335F3970F2FD5124A17FC9 */
extern "C" __attribute__((visibility("default"))) int _vp8_642E6D0741CDEB4CB8E0B7E31BCBAA5996B7EACBA1335F3970F2FD5124A17FC9(void) {
    ALOGD("_vp8_642E6D0741CDEB4CB8E0B7E31BCBAA5996B7EACBA1335F3970F2FD5124A17FC9() called");
    return 0;
}

/* Demangled: _vp8_635F58176041BF5E16C74C54EA32EAA25FA061572CD65D7FC3A2778DD044DAC0 */
extern "C" __attribute__((visibility("default"))) int _vp8_635F58176041BF5E16C74C54EA32EAA25FA061572CD65D7FC3A2778DD044DAC0(void) {
    ALOGD("_vp8_635F58176041BF5E16C74C54EA32EAA25FA061572CD65D7FC3A2778DD044DAC0() called");
    return 0;
}

/* Demangled: _vp8_C8E9D4EFD80E6A08EF07BDECBC7758FAD0963B21E3B11CA53FC1C08A4FD7ED2F */
extern "C" __attribute__((visibility("default"))) int _vp8_C8E9D4EFD80E6A08EF07BDECBC7758FAD0963B21E3B11CA53FC1C08A4FD7ED2F(void) {
    ALOGD("_vp8_C8E9D4EFD80E6A08EF07BDECBC7758FAD0963B21E3B11CA53FC1C08A4FD7ED2F() called");
    return 0;
}

/* Demangled: _vp8_6FAF4F3830DC0CEF89197DE8F32DAF49C25EA3DE29E46BA6F3AC42FD08DF05F2 */
extern "C" __attribute__((visibility("default"))) int _vp8_6FAF4F3830DC0CEF89197DE8F32DAF49C25EA3DE29E46BA6F3AC42FD08DF05F2(void) {
    ALOGD("_vp8_6FAF4F3830DC0CEF89197DE8F32DAF49C25EA3DE29E46BA6F3AC42FD08DF05F2() called");
    return 0;
}

/* Demangled: _vp8_8ADF1333383EA1EF8589AF46DFB257784E18BEC2E7DF3B44027016079EBD783C */
extern "C" __attribute__((visibility("default"))) int _vp8_8ADF1333383EA1EF8589AF46DFB257784E18BEC2E7DF3B44027016079EBD783C(void) {
    ALOGD("_vp8_8ADF1333383EA1EF8589AF46DFB257784E18BEC2E7DF3B44027016079EBD783C() called");
    return 0;
}

/* Demangled: _vp8_8ADF1333383EA1EF8589AF46DFB25778EF37862F1DFA62749D6E0D0E8654492C */
extern "C" __attribute__((visibility("default"))) int _vp8_8ADF1333383EA1EF8589AF46DFB25778EF37862F1DFA62749D6E0D0E8654492C(void) {
    ALOGD("_vp8_8ADF1333383EA1EF8589AF46DFB25778EF37862F1DFA62749D6E0D0E8654492C() called");
    return 0;
}

/* Demangled: _vp8_8ADF1333383EA1EF8589AF46DFB25778A08EFFF8C50100F345CB3EBB35930288 */
extern "C" __attribute__((visibility("default"))) int _vp8_8ADF1333383EA1EF8589AF46DFB25778A08EFFF8C50100F345CB3EBB35930288(void) {
    ALOGD("_vp8_8ADF1333383EA1EF8589AF46DFB25778A08EFFF8C50100F345CB3EBB35930288() called");
    return 0;
}

/* Demangled: _vp8_7625C9BF566D5277BDADD199B9B30B10FB8D6603DED7FD04D5F5A3AE320A747C */
extern "C" __attribute__((visibility("default"))) int _vp8_7625C9BF566D5277BDADD199B9B30B10FB8D6603DED7FD04D5F5A3AE320A747C(void) {
    ALOGD("_vp8_7625C9BF566D5277BDADD199B9B30B10FB8D6603DED7FD04D5F5A3AE320A747C() called");
    return 0;
}

/* Demangled: _vp8_577B2CEBEE01A35DE2123E56BF1127069F5EEF7C01CFB5856F83CE01A4131D2A */
extern "C" __attribute__((visibility("default"))) int _vp8_577B2CEBEE01A35DE2123E56BF1127069F5EEF7C01CFB5856F83CE01A4131D2A(void) {
    ALOGD("_vp8_577B2CEBEE01A35DE2123E56BF1127069F5EEF7C01CFB5856F83CE01A4131D2A() called");
    return 0;
}

/* Demangled: _vp8_9AD3A53E11D8920970191D27279890FAAA6013A1D0B77B594CB4B5A4BB58CFBC */
extern "C" __attribute__((visibility("default"))) int _vp8_9AD3A53E11D8920970191D27279890FAAA6013A1D0B77B594CB4B5A4BB58CFBC(void) {
    ALOGD("_vp8_9AD3A53E11D8920970191D27279890FAAA6013A1D0B77B594CB4B5A4BB58CFBC() called");
    return 0;
}

/* Demangled: _vp8_331BBFF91B835AEF350F84C28B219FC7BE23A58896E00C9E3A88B5F71DE0B385 */
extern "C" __attribute__((visibility("default"))) int _vp8_331BBFF91B835AEF350F84C28B219FC7BE23A58896E00C9E3A88B5F71DE0B385(void) {
    ALOGD("_vp8_331BBFF91B835AEF350F84C28B219FC7BE23A58896E00C9E3A88B5F71DE0B385() called");
    return 0;
}

/* Demangled: _vp8_AD71C8D0593DF932E63660A59DA965B9F8A09D15BEF93B723F96C6879C1750A6 */
extern "C" __attribute__((visibility("default"))) int _vp8_AD71C8D0593DF932E63660A59DA965B9F8A09D15BEF93B723F96C6879C1750A6(void) {
    ALOGD("_vp8_AD71C8D0593DF932E63660A59DA965B9F8A09D15BEF93B723F96C6879C1750A6() called");
    return 0;
}

/* Demangled: _vp8_EB0E046233D13F31E87C8DFF9D2E87AC345B5B8FC6C7F3C8696C65D78AE5DE61 */
extern "C" __attribute__((visibility("default"))) int _vp8_EB0E046233D13F31E87C8DFF9D2E87AC345B5B8FC6C7F3C8696C65D78AE5DE61(void) {
    ALOGD("_vp8_EB0E046233D13F31E87C8DFF9D2E87AC345B5B8FC6C7F3C8696C65D78AE5DE61() called");
    return 0;
}

/* Demangled: _vp8_BC0C4C0925C289D2BFAAFD88A5E8663DD7F650387C315B1D538CEE36645CD13B */
extern "C" __attribute__((visibility("default"))) int _vp8_BC0C4C0925C289D2BFAAFD88A5E8663DD7F650387C315B1D538CEE36645CD13B(void) {
    ALOGD("_vp8_BC0C4C0925C289D2BFAAFD88A5E8663DD7F650387C315B1D538CEE36645CD13B() called");
    return 0;
}

/* Demangled: _vp8_534FD9C2157CA27001D17CCB897FEDF1F85AE3C8979C623394A83C5FFA9E40BDC5410F628DA0E9304D99921D7E4A4A25 */
extern "C" __attribute__((visibility("default"))) int _vp8_534FD9C2157CA27001D17CCB897FEDF1F85AE3C8979C623394A83C5FFA9E40BDC5410F628DA0E9304D99921D7E4A4A25(void) {
    ALOGD("_vp8_534FD9C2157CA27001D17CCB897FEDF1F85AE3C8979C623394A83C5FFA9E40BDC5410F628DA0E9304D99921D7E4A4A25() called");
    return 0;
}

/* Demangled: _vp8_534FD9C2157CA27001D17CCB897FEDF1F85AE3C8979C623394A83C5FFA9E40BD3110B1EF042F5147DCEF75824792BA27F29E34A06936D6FC526E436DB436813C */
extern "C" __attribute__((visibility("default"))) int _vp8_534FD9C2157CA27001D17CCB897FEDF1F85AE3C8979C623394A83C5FFA9E40BD3110B1EF042F5147DCEF75824792BA27F29E34A06936D6FC526E436DB436813C(void) {
    ALOGD("_vp8_534FD9C2157CA27001D17CCB897FEDF1F85AE3C8979C623394A83C5FFA9E40BD3110B1EF042F5147DCEF75824792BA27F29E34A06936D6FC526E436DB436813C() called");
    return 0;
}

/* Demangled: _vp8_2651C220E663C7B82491DBDDF3FA4718C14C43EDC049B274D5E9E9D996469048 */
extern "C" __attribute__((visibility("default"))) int _vp8_2651C220E663C7B82491DBDDF3FA4718C14C43EDC049B274D5E9E9D996469048(void) {
    ALOGD("_vp8_2651C220E663C7B82491DBDDF3FA4718C14C43EDC049B274D5E9E9D996469048() called");
    return 0;
}

/* Demangled: _vp8_2793422AAFAB3037D8AEE2A9DEB23F6E41DF0180889E18A3AB6685AA5C8E60BC */
extern "C" __attribute__((visibility("default"))) int _vp8_2793422AAFAB3037D8AEE2A9DEB23F6E41DF0180889E18A3AB6685AA5C8E60BC(void) {
    ALOGD("_vp8_2793422AAFAB3037D8AEE2A9DEB23F6E41DF0180889E18A3AB6685AA5C8E60BC() called");
    return 0;
}

/* Demangled: _vp8_3EEAC9ACB73755A2F0D96ACD651311299F5EEF7C01CFB5856F83CE01A4131D2A */
extern "C" __attribute__((visibility("default"))) int _vp8_3EEAC9ACB73755A2F0D96ACD651311299F5EEF7C01CFB5856F83CE01A4131D2A(void) {
    ALOGD("_vp8_3EEAC9ACB73755A2F0D96ACD651311299F5EEF7C01CFB5856F83CE01A4131D2A() called");
    return 0;
}

/* Demangled: _vp8_44912B7CC1364F2A8B7F8D3FA8B0B742BB63A5A6B07AE10BA268BEC145AF9D819041AB2978AF15A62BFA19461EA7B387 */
extern "C" __attribute__((visibility("default"))) int _vp8_44912B7CC1364F2A8B7F8D3FA8B0B742BB63A5A6B07AE10BA268BEC145AF9D819041AB2978AF15A62BFA19461EA7B387(void) {
    ALOGD("_vp8_44912B7CC1364F2A8B7F8D3FA8B0B742BB63A5A6B07AE10BA268BEC145AF9D819041AB2978AF15A62BFA19461EA7B387() called");
    return 0;
}

/* Demangled: _vp8_44912B7CC1364F2A8B7F8D3FA8B0B742E994CA8EF2F320B1A0E30DA10A50FE9D9041AB2978AF15A62BFA19461EA7B387 */
extern "C" __attribute__((visibility("default"))) int _vp8_44912B7CC1364F2A8B7F8D3FA8B0B742E994CA8EF2F320B1A0E30DA10A50FE9D9041AB2978AF15A62BFA19461EA7B387(void) {
    ALOGD("_vp8_44912B7CC1364F2A8B7F8D3FA8B0B742E994CA8EF2F320B1A0E30DA10A50FE9D9041AB2978AF15A62BFA19461EA7B387() called");
    return 0;
}

/* Demangled: _vp8_4B7275CEC206DE48A84AC9E23251420942D70119BA9491875DBA7AE46286EB11E0086F3B816DD77CD7F36084B5D79AAD */
extern "C" __attribute__((visibility("default"))) int _vp8_4B7275CEC206DE48A84AC9E23251420942D70119BA9491875DBA7AE46286EB11E0086F3B816DD77CD7F36084B5D79AAD(void) {
    ALOGD("_vp8_4B7275CEC206DE48A84AC9E23251420942D70119BA9491875DBA7AE46286EB11E0086F3B816DD77CD7F36084B5D79AAD() called");
    return 0;
}

/* Demangled: _vp8_558B79F8F492BC5AA8134FFB3220AD97964588563E67F60E7F40B5564A6B41AE */
extern "C" __attribute__((visibility("default"))) int _vp8_558B79F8F492BC5AA8134FFB3220AD97964588563E67F60E7F40B5564A6B41AE(void) {
    ALOGD("_vp8_558B79F8F492BC5AA8134FFB3220AD97964588563E67F60E7F40B5564A6B41AE() called");
    return 0;
}

/* Demangled: _vp8_6019A3D4399FBC0C4CD032A33E69CE4E3B37610325E83863E87BBC7BB83EFEFB3FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_6019A3D4399FBC0C4CD032A33E69CE4E3B37610325E83863E87BBC7BB83EFEFB3FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_6019A3D4399FBC0C4CD032A33E69CE4E3B37610325E83863E87BBC7BB83EFEFB3FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_6A3BB2F4D2AAED744BE9042CB5F2C98A555B5D044482F6BE4324890390FBF25C */
extern "C" __attribute__((visibility("default"))) int _vp8_6A3BB2F4D2AAED744BE9042CB5F2C98A555B5D044482F6BE4324890390FBF25C(void) {
    ALOGD("_vp8_6A3BB2F4D2AAED744BE9042CB5F2C98A555B5D044482F6BE4324890390FBF25C() called");
    return 0;
}

/* Demangled: _vp8_77F2F0E4851861A54C95437DB0BB4F6903DD066C3C83EAEC2BA7D29549ECC4E4 */
extern "C" __attribute__((visibility("default"))) int _vp8_77F2F0E4851861A54C95437DB0BB4F6903DD066C3C83EAEC2BA7D29549ECC4E4(void) {
    ALOGD("_vp8_77F2F0E4851861A54C95437DB0BB4F6903DD066C3C83EAEC2BA7D29549ECC4E4() called");
    return 0;
}

/* Demangled: _vp8_7E7E6F5D7066AEDD07467789D7990921 */
extern "C" __attribute__((visibility("default"))) int _vp8_7E7E6F5D7066AEDD07467789D7990921(void) {
    ALOGD("_vp8_7E7E6F5D7066AEDD07467789D7990921() called");
    return 0;
}

/* Demangled: _vp8_8ADF1333383EA1EF8589AF46DFB257786A14D603AFE5E159B2BB520874016F343FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_8ADF1333383EA1EF8589AF46DFB257786A14D603AFE5E159B2BB520874016F343FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_8ADF1333383EA1EF8589AF46DFB257786A14D603AFE5E159B2BB520874016F343FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_8ADF1333383EA1EF8589AF46DFB25778CFF038610AA174A79F0D2BCDDA997DAB */
extern "C" __attribute__((visibility("default"))) int _vp8_8ADF1333383EA1EF8589AF46DFB25778CFF038610AA174A79F0D2BCDDA997DAB(void) {
    ALOGD("_vp8_8ADF1333383EA1EF8589AF46DFB25778CFF038610AA174A79F0D2BCDDA997DAB() called");
    return 0;
}

/* Demangled: _vp8_8ADF1333383EA1EF8589AF46DFB25778FCA550093A1F0246E958477DCDB7D864 */
extern "C" __attribute__((visibility("default"))) int _vp8_8ADF1333383EA1EF8589AF46DFB25778FCA550093A1F0246E958477DCDB7D864(void) {
    ALOGD("_vp8_8ADF1333383EA1EF8589AF46DFB25778FCA550093A1F0246E958477DCDB7D864() called");
    return 0;
}

/* Demangled: _vp8_9731EAFAE8FCDD6968467528E50DC4AC56CD1FA7BE64170D33F6C92ED00A3329 */
extern "C" __attribute__((visibility("default"))) int _vp8_9731EAFAE8FCDD6968467528E50DC4AC56CD1FA7BE64170D33F6C92ED00A3329(void) {
    ALOGD("_vp8_9731EAFAE8FCDD6968467528E50DC4AC56CD1FA7BE64170D33F6C92ED00A3329() called");
    return 0;
}

/* Demangled: _vp8_98B72B1E839E83C1033D7E57D08354B42137EFF3329CEC036A998A21B7BA8494 */
extern "C" __attribute__((visibility("default"))) int _vp8_98B72B1E839E83C1033D7E57D08354B42137EFF3329CEC036A998A21B7BA8494(void) {
    ALOGD("_vp8_98B72B1E839E83C1033D7E57D08354B42137EFF3329CEC036A998A21B7BA8494() called");
    return 0;
}

/* Demangled: _vp8_A79FD295B61C9768689293D2F1BA4C18C690487D6F58D0423DFF24D1991B9056E0086F3B816DD77CD7F36084B5D79AAD */
extern "C" __attribute__((visibility("default"))) int _vp8_A79FD295B61C9768689293D2F1BA4C18C690487D6F58D0423DFF24D1991B9056E0086F3B816DD77CD7F36084B5D79AAD(void) {
    ALOGD("_vp8_A79FD295B61C9768689293D2F1BA4C18C690487D6F58D0423DFF24D1991B9056E0086F3B816DD77CD7F36084B5D79AAD() called");
    return 0;
}

/* Demangled: _vp8_A8280A2D5CC9E8AED09C266BAF9CE44ECBB91011D2A40FECDA7E732B2DA1DF1A60D61DE8F253949DD1BFB34A69524CAF */
extern "C" __attribute__((visibility("default"))) int _vp8_A8280A2D5CC9E8AED09C266BAF9CE44ECBB91011D2A40FECDA7E732B2DA1DF1A60D61DE8F253949DD1BFB34A69524CAF(void) {
    ALOGD("_vp8_A8280A2D5CC9E8AED09C266BAF9CE44ECBB91011D2A40FECDA7E732B2DA1DF1A60D61DE8F253949DD1BFB34A69524CAF() called");
    return 0;
}

/* Demangled: _vp8_C249BA6E4BF2E81AA4A03A73DC16D01FCBB91011D2A40FECDA7E732B2DA1DF1A60D61DE8F253949DD1BFB34A69524CAF */
extern "C" __attribute__((visibility("default"))) int _vp8_C249BA6E4BF2E81AA4A03A73DC16D01FCBB91011D2A40FECDA7E732B2DA1DF1A60D61DE8F253949DD1BFB34A69524CAF(void) {
    ALOGD("_vp8_C249BA6E4BF2E81AA4A03A73DC16D01FCBB91011D2A40FECDA7E732B2DA1DF1A60D61DE8F253949DD1BFB34A69524CAF() called");
    return 0;
}

/* Demangled: _vp8_C249BA6E4BF2E81AA4A03A73DC16D01FFDF6621DF0F8D64A9F6F8CCB57B8090F73622D5E937D66ED6AEF5D6C8501AEDE */
extern "C" __attribute__((visibility("default"))) int _vp8_C249BA6E4BF2E81AA4A03A73DC16D01FFDF6621DF0F8D64A9F6F8CCB57B8090F73622D5E937D66ED6AEF5D6C8501AEDE(void) {
    ALOGD("_vp8_C249BA6E4BF2E81AA4A03A73DC16D01FFDF6621DF0F8D64A9F6F8CCB57B8090F73622D5E937D66ED6AEF5D6C8501AEDE() called");
    return 0;
}

/* Demangled: _vp8_C95FBBCB6C32A0283BC453C3A379ED2A */
extern "C" __attribute__((visibility("default"))) int _vp8_C95FBBCB6C32A0283BC453C3A379ED2A(void) {
    ALOGD("_vp8_C95FBBCB6C32A0283BC453C3A379ED2A() called");
    return 0;
}

/* Demangled: _vp8_CCB868C4BFDF5CDE85462191B79D68842137EFF3329CEC036A998A21B7BA8494 */
extern "C" __attribute__((visibility("default"))) int _vp8_CCB868C4BFDF5CDE85462191B79D68842137EFF3329CEC036A998A21B7BA8494(void) {
    ALOGD("_vp8_CCB868C4BFDF5CDE85462191B79D68842137EFF3329CEC036A998A21B7BA8494() called");
    return 0;
}

/* Demangled: _vp8_CD1CE9E05BF7296E88DF57614AA0B241224028852AB085B3EA787B2383C6571FA3E5058696F39DF28B8D45C99F90248F */
extern "C" __attribute__((visibility("default"))) int _vp8_CD1CE9E05BF7296E88DF57614AA0B241224028852AB085B3EA787B2383C6571FA3E5058696F39DF28B8D45C99F90248F(void) {
    ALOGD("_vp8_CD1CE9E05BF7296E88DF57614AA0B241224028852AB085B3EA787B2383C6571FA3E5058696F39DF28B8D45C99F90248F() called");
    return 0;
}

/* Demangled: _vp8_CF91603A71B1CF7B718C371D5EE1C958EC4E9A1371D5635B1A51FF877189D5D5 */
extern "C" __attribute__((visibility("default"))) int _vp8_CF91603A71B1CF7B718C371D5EE1C958EC4E9A1371D5635B1A51FF877189D5D5(void) {
    ALOGD("_vp8_CF91603A71B1CF7B718C371D5EE1C958EC4E9A1371D5635B1A51FF877189D5D5() called");
    return 0;
}

/* Demangled: _vp8_D4FE6917BEAE483326F5F8D34A69732F9C682401A54C455B22ACAA331D5D4711 */
extern "C" __attribute__((visibility("default"))) int _vp8_D4FE6917BEAE483326F5F8D34A69732F9C682401A54C455B22ACAA331D5D4711(void) {
    ALOGD("_vp8_D4FE6917BEAE483326F5F8D34A69732F9C682401A54C455B22ACAA331D5D4711() called");
    return 0;
}

/* Demangled: _vp8_D5982DFD2512601AC1F1826CBF43C85341DF0180889E18A3AB6685AA5C8E60BC */
extern "C" __attribute__((visibility("default"))) int _vp8_D5982DFD2512601AC1F1826CBF43C85341DF0180889E18A3AB6685AA5C8E60BC(void) {
    ALOGD("_vp8_D5982DFD2512601AC1F1826CBF43C85341DF0180889E18A3AB6685AA5C8E60BC() called");
    return 0;
}

/* Demangled: _vp8_DBF7314D0449D0164F60E1F87E2E5A1C */
extern "C" __attribute__((visibility("default"))) int _vp8_DBF7314D0449D0164F60E1F87E2E5A1C(void) {
    ALOGD("_vp8_DBF7314D0449D0164F60E1F87E2E5A1C() called");
    return 0;
}

/* Demangled: _vp8_DC36BCCE1A0C0CF495E78D2453E4B1B3C5E989A9402D47B81EAC3985DE8303651041D318837267DA71552FC814C334EB */
extern "C" __attribute__((visibility("default"))) int _vp8_DC36BCCE1A0C0CF495E78D2453E4B1B3C5E989A9402D47B81EAC3985DE8303651041D318837267DA71552FC814C334EB(void) {
    ALOGD("_vp8_DC36BCCE1A0C0CF495E78D2453E4B1B3C5E989A9402D47B81EAC3985DE8303651041D318837267DA71552FC814C334EB() called");
    return 0;
}

/* Demangled: _vp8_EBE0ACF63DF735095EA696562BB71EAEF8A09D15BEF93B723F96C6879C1750A6 */
extern "C" __attribute__((visibility("default"))) int _vp8_EBE0ACF63DF735095EA696562BB71EAEF8A09D15BEF93B723F96C6879C1750A6(void) {
    ALOGD("_vp8_EBE0ACF63DF735095EA696562BB71EAEF8A09D15BEF93B723F96C6879C1750A6() called");
    return 0;
}

/* Demangled: _vp8_F41AFDF1A82BF51F1C9B4941C01DF3E256CD1FA7BE64170D33F6C92ED00A3329 */
extern "C" __attribute__((visibility("default"))) int _vp8_F41AFDF1A82BF51F1C9B4941C01DF3E256CD1FA7BE64170D33F6C92ED00A3329(void) {
    ALOGD("_vp8_F41AFDF1A82BF51F1C9B4941C01DF3E256CD1FA7BE64170D33F6C92ED00A3329() called");
    return 0;
}

/* Demangled: _vp8_F41AFDF1A82BF51F1C9B4941C01DF3E2DB3A806F8F22A7871DFA8D1769468264 */
extern "C" __attribute__((visibility("default"))) int _vp8_F41AFDF1A82BF51F1C9B4941C01DF3E2DB3A806F8F22A7871DFA8D1769468264(void) {
    ALOGD("_vp8_F41AFDF1A82BF51F1C9B4941C01DF3E2DB3A806F8F22A7871DFA8D1769468264() called");
    return 0;
}

/* Demangled: _vp8_F49804930E00A04D95DDAD55E0A801622137EFF3329CEC036A998A21B7BA8494 */
extern "C" __attribute__((visibility("default"))) int _vp8_F49804930E00A04D95DDAD55E0A801622137EFF3329CEC036A998A21B7BA8494(void) {
    ALOGD("_vp8_F49804930E00A04D95DDAD55E0A801622137EFF3329CEC036A998A21B7BA8494() called");
    return 0;
}

/* Exported Object: vp8_mode_contexts */
extern "C" __attribute__((visibility("default"))) void* vp8_mode_contexts = NULL;

/* Demangled: _vp8_230A30B84695152032B712903A0F98FF938BCE9090E027CC124AE1CEC5BDB3B8 */
extern "C" __attribute__((visibility("default"))) int _vp8_230A30B84695152032B712903A0F98FF938BCE9090E027CC124AE1CEC5BDB3B8(void) {
    ALOGD("_vp8_230A30B84695152032B712903A0F98FF938BCE9090E027CC124AE1CEC5BDB3B8() called");
    return 0;
}

/* Demangled: _vp8_F7DFD3BE2CB9455BFD9EB2E3C9842D5A5242BBBC1E50B11C32C0930E7927BBCB */
extern "C" __attribute__((visibility("default"))) int _vp8_F7DFD3BE2CB9455BFD9EB2E3C9842D5A5242BBBC1E50B11C32C0930E7927BBCB(void) {
    ALOGD("_vp8_F7DFD3BE2CB9455BFD9EB2E3C9842D5A5242BBBC1E50B11C32C0930E7927BBCB() called");
    return 0;
}

/* Demangled: _vp8_0199AAB52B36C33F08BB220768E235A3 */
extern "C" __attribute__((visibility("default"))) int _vp8_0199AAB52B36C33F08BB220768E235A3(void) {
    ALOGD("_vp8_0199AAB52B36C33F08BB220768E235A3() called");
    return 0;
}

/* Demangled: _vp8_73A961EFE0BB811E61299B95B4DBBCF4 */
extern "C" __attribute__((visibility("default"))) int _vp8_73A961EFE0BB811E61299B95B4DBBCF4(void) {
    ALOGD("_vp8_73A961EFE0BB811E61299B95B4DBBCF4() called");
    return 0;
}

/* Demangled: _vp8_80005324C99FC3563F87135E59172C4C */
extern "C" __attribute__((visibility("default"))) int _vp8_80005324C99FC3563F87135E59172C4C(void) {
    ALOGD("_vp8_80005324C99FC3563F87135E59172C4C() called");
    return 0;
}

/* Demangled: _vp8_855A4DBBD41AAD52D3D6B38E4933037B */
extern "C" __attribute__((visibility("default"))) int _vp8_855A4DBBD41AAD52D3D6B38E4933037B(void) {
    ALOGD("_vp8_855A4DBBD41AAD52D3D6B38E4933037B() called");
    return 0;
}

/* Demangled: _vp8_C440BFAC2339D5D1AF8A9468F127545F */
extern "C" __attribute__((visibility("default"))) int _vp8_C440BFAC2339D5D1AF8A9468F127545F(void) {
    ALOGD("_vp8_C440BFAC2339D5D1AF8A9468F127545F() called");
    return 0;
}

/* Demangled: _vp8_F6B988DA131BBE228330F9D75CAF272A */
extern "C" __attribute__((visibility("default"))) int _vp8_F6B988DA131BBE228330F9D75CAF272A(void) {
    ALOGD("_vp8_F6B988DA131BBE228330F9D75CAF272A() called");
    return 0;
}

/* Exported Object: vp8_bits_per_mb */
extern "C" __attribute__((visibility("default"))) void* vp8_bits_per_mb = NULL;

/* Exported Object: vp8_gf_boost_qadjustment */
extern "C" __attribute__((visibility("default"))) void* vp8_gf_boost_qadjustment = NULL;

/* Demangled: _vp8_E425F685A00CCE2E6B99DF32C97414DB4E143617B2B76B67C1D1C8199F3E7482 */
extern "C" __attribute__((visibility("default"))) int _vp8_E425F685A00CCE2E6B99DF32C97414DB4E143617B2B76B67C1D1C8199F3E7482(void) {
    ALOGD("_vp8_E425F685A00CCE2E6B99DF32C97414DB4E143617B2B76B67C1D1C8199F3E7482() called");
    return 0;
}

/* Demangled: _vp8_5630ECA9BC446218BBAD475A68BE60C04E143617B2B76B67C1D1C8199F3E7482 */
extern "C" __attribute__((visibility("default"))) int _vp8_5630ECA9BC446218BBAD475A68BE60C04E143617B2B76B67C1D1C8199F3E7482(void) {
    ALOGD("_vp8_5630ECA9BC446218BBAD475A68BE60C04E143617B2B76B67C1D1C8199F3E7482() called");
    return 0;
}

/* Demangled: _vp8_E5374B0C8554B672B39F2A075A011468959875ED272B0C197B002634608698AF */
extern "C" __attribute__((visibility("default"))) int _vp8_E5374B0C8554B672B39F2A075A011468959875ED272B0C197B002634608698AF(void) {
    ALOGD("_vp8_E5374B0C8554B672B39F2A075A011468959875ED272B0C197B002634608698AF() called");
    return 0;
}

/* Demangled: _vp8_8E2C26DC6E41DD6A85CDF68FE087A692BBB022A691791E307802DDC7283010CA */
extern "C" __attribute__((visibility("default"))) int _vp8_8E2C26DC6E41DD6A85CDF68FE087A692BBB022A691791E307802DDC7283010CA(void) {
    ALOGD("_vp8_8E2C26DC6E41DD6A85CDF68FE087A692BBB022A691791E307802DDC7283010CA() called");
    return 0;
}

/* Demangled: _vp8_C94F6D1610FA921CA6986B13994ADCA4FA318F2848684239CCF002D24510A0EE */
extern "C" __attribute__((visibility("default"))) int _vp8_C94F6D1610FA921CA6986B13994ADCA4FA318F2848684239CCF002D24510A0EE(void) {
    ALOGD("_vp8_C94F6D1610FA921CA6986B13994ADCA4FA318F2848684239CCF002D24510A0EE() called");
    return 0;
}

/* Exported Object: vp8_default_mv_context */
extern "C" __attribute__((visibility("default"))) void* vp8_default_mv_context = NULL;

/* Exported Object: vp8_mode_order */
extern "C" __attribute__((visibility("default"))) void* vp8_mode_order = NULL;

/* Exported Object: vp8_ref_frame_order */
extern "C" __attribute__((visibility("default"))) void* vp8_ref_frame_order = NULL;

/* Demangled: _vp8_32A4A9F65B6C4670C72BB23E0AA479CBAD6278FABF44B82379CEA04C87A738B9 */
extern "C" __attribute__((visibility("default"))) int _vp8_32A4A9F65B6C4670C72BB23E0AA479CBAD6278FABF44B82379CEA04C87A738B9(void) {
    ALOGD("_vp8_32A4A9F65B6C4670C72BB23E0AA479CBAD6278FABF44B82379CEA04C87A738B9() called");
    return 0;
}

/* Demangled: _vp8_0D25C163A1EFAD249A3AB4E13E99C4C860EC24D160BF721D14D929942C1BE086 */
extern "C" __attribute__((visibility("default"))) int _vp8_0D25C163A1EFAD249A3AB4E13E99C4C860EC24D160BF721D14D929942C1BE086(void) {
    ALOGD("_vp8_0D25C163A1EFAD249A3AB4E13E99C4C860EC24D160BF721D14D929942C1BE086() called");
    return 0;
}

/* Demangled: _vp8_31163104405150E093D7A9865B2A84711211D28AB3086C3FCA20C481202F190E */
extern "C" __attribute__((visibility("default"))) int _vp8_31163104405150E093D7A9865B2A84711211D28AB3086C3FCA20C481202F190E(void) {
    ALOGD("_vp8_31163104405150E093D7A9865B2A84711211D28AB3086C3FCA20C481202F190E() called");
    return 0;
}

/* Exported Object: vp8_mv_ref_encoding_array */
extern "C" __attribute__((visibility("default"))) void* vp8_mv_ref_encoding_array = NULL;

/* Exported Object: vp8_mv_ref_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_mv_ref_tree = NULL;

/* Exported Object: vp8_prob_cost */
extern "C" __attribute__((visibility("default"))) void* vp8_prob_cost = NULL;

/* Demangled: _vp8_5B15A4749E31514ADB5CB0EEFD1CA05F3F7CCF0DAD26D5D87CA3CCE81D1D3A1C */
extern "C" __attribute__((visibility("default"))) int _vp8_5B15A4749E31514ADB5CB0EEFD1CA05F3F7CCF0DAD26D5D87CA3CCE81D1D3A1C(void) {
    ALOGD("_vp8_5B15A4749E31514ADB5CB0EEFD1CA05F3F7CCF0DAD26D5D87CA3CCE81D1D3A1C() called");
    return 0;
}

/* Demangled: _vp8_33343C7AACC41FC15579B7AC0C2418D629C95DB2211DE5CA73D0D1053B281C85 */
extern "C" __attribute__((visibility("default"))) int _vp8_33343C7AACC41FC15579B7AC0C2418D629C95DB2211DE5CA73D0D1053B281C85(void) {
    ALOGD("_vp8_33343C7AACC41FC15579B7AC0C2418D629C95DB2211DE5CA73D0D1053B281C85() called");
    return 0;
}

/* Demangled: _vp8_92D7C709C37AA35E7E7F23FD498FAC43DE8D1B6E6381436B05ED9D3E58BBD6C8 */
extern "C" __attribute__((visibility("default"))) int _vp8_92D7C709C37AA35E7E7F23FD498FAC43DE8D1B6E6381436B05ED9D3E58BBD6C8(void) {
    ALOGD("_vp8_92D7C709C37AA35E7E7F23FD498FAC43DE8D1B6E6381436B05ED9D3E58BBD6C8() called");
    return 0;
}

/* Demangled: _vp8_B50F37F85806DBA7C99B702099553429DC3B6F97C8E41BCD275127161E030AD8 */
extern "C" __attribute__((visibility("default"))) int _vp8_B50F37F85806DBA7C99B702099553429DC3B6F97C8E41BCD275127161E030AD8(void) {
    ALOGD("_vp8_B50F37F85806DBA7C99B702099553429DC3B6F97C8E41BCD275127161E030AD8() called");
    return 0;
}

/* Exported Object: vp8_coef_bands */
extern "C" __attribute__((visibility("default"))) void* vp8_coef_bands = NULL;

/* Exported Object: vp8_coef_encodings */
extern "C" __attribute__((visibility("default"))) void* vp8_coef_encodings = NULL;

/* Exported Object: vp8_coef_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_coef_tree = NULL;

/* Exported Object: vp8_coef_update_probs */
extern "C" __attribute__((visibility("default"))) void* vp8_coef_update_probs = NULL;

/* Exported Object: vp8_default_inv_zig_zag */
extern "C" __attribute__((visibility("default"))) void* vp8_default_inv_zig_zag = NULL;

/* Exported Object: vp8_default_zig_zag1d */
extern "C" __attribute__((visibility("default"))) void* vp8_default_zig_zag1d = NULL;

/* Exported Object: vp8_default_zig_zag_mask */
extern "C" __attribute__((visibility("default"))) void* vp8_default_zig_zag_mask = NULL;

/* Exported Object: vp8_mb_feature_data_bits */
extern "C" __attribute__((visibility("default"))) void* vp8_mb_feature_data_bits = NULL;

/* Exported Object: vp8_norm */
extern "C" __attribute__((visibility("default"))) void* vp8_norm = NULL;

/* Exported Object: vp8_prev_token_class */
extern "C" __attribute__((visibility("default"))) void* vp8_prev_token_class = NULL;

/* Exported Object: vp8_extra_bits */
extern "C" __attribute__((visibility("default"))) void* vp8_extra_bits = NULL;

/* Exported Object: vp8_bmode_encodings */
extern "C" __attribute__((visibility("default"))) void* vp8_bmode_encodings = NULL;

/* Exported Object: vp8_bmode_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_bmode_tree = NULL;

/* Exported Object: vp8_kf_bmode_prob */
extern "C" __attribute__((visibility("default"))) void* vp8_kf_bmode_prob = NULL;

/* Exported Object: vp8_kf_uv_mode_prob */
extern "C" __attribute__((visibility("default"))) void* vp8_kf_uv_mode_prob = NULL;

/* Exported Object: vp8_kf_ymode_encodings */
extern "C" __attribute__((visibility("default"))) void* vp8_kf_ymode_encodings = NULL;

/* Exported Object: vp8_kf_ymode_prob */
extern "C" __attribute__((visibility("default"))) void* vp8_kf_ymode_prob = NULL;

/* Exported Object: vp8_kf_ymode_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_kf_ymode_tree = NULL;

/* Exported Object: vp8_mbsplit_count */
extern "C" __attribute__((visibility("default"))) void* vp8_mbsplit_count = NULL;

/* Exported Object: vp8_mbsplit_encodings */
extern "C" __attribute__((visibility("default"))) void* vp8_mbsplit_encodings = NULL;

/* Exported Object: vp8_mbsplit_probs */
extern "C" __attribute__((visibility("default"))) void* vp8_mbsplit_probs = NULL;

/* Exported Object: vp8_mbsplit_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_mbsplit_tree = NULL;

/* Exported Object: vp8_mbsplits */
extern "C" __attribute__((visibility("default"))) void* vp8_mbsplits = NULL;

/* Exported Object: vp8_small_mvencodings */
extern "C" __attribute__((visibility("default"))) void* vp8_small_mvencodings = NULL;

/* Exported Object: vp8_small_mvtree */
extern "C" __attribute__((visibility("default"))) void* vp8_small_mvtree = NULL;

/* Exported Object: vp8_sub_mv_ref_encoding_array */
extern "C" __attribute__((visibility("default"))) void* vp8_sub_mv_ref_encoding_array = NULL;

/* Exported Object: vp8_sub_mv_ref_prob2 */
extern "C" __attribute__((visibility("default"))) void* vp8_sub_mv_ref_prob2 = NULL;

/* Exported Object: vp8_sub_mv_ref_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_sub_mv_ref_tree = NULL;

/* Exported Object: vp8_uv_mode_encodings */
extern "C" __attribute__((visibility("default"))) void* vp8_uv_mode_encodings = NULL;

/* Exported Object: vp8_uv_mode_prob */
extern "C" __attribute__((visibility("default"))) void* vp8_uv_mode_prob = NULL;

/* Exported Object: vp8_uv_mode_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_uv_mode_tree = NULL;

/* Exported Object: vp8_ymode_encodings */
extern "C" __attribute__((visibility("default"))) void* vp8_ymode_encodings = NULL;

/* Exported Object: vp8_ymode_tree */
extern "C" __attribute__((visibility("default"))) void* vp8_ymode_tree = NULL;

/* Exported Object: vp8_ymode_prob */
extern "C" __attribute__((visibility("default"))) void* vp8_ymode_prob = NULL;

/* Exported Object: vp8_bmode_prob */
extern "C" __attribute__((visibility("default"))) void* vp8_bmode_prob = NULL;

/* Demangled: _vp8_AE1E349FF8C5AD4605F64F03C8658637 */
extern "C" __attribute__((visibility("default"))) int _vp8_AE1E349FF8C5AD4605F64F03C8658637(void) {
    ALOGD("_vp8_AE1E349FF8C5AD4605F64F03C8658637() called");
    return 0;
}

/* Exported Object: vp8_mv_update_probs */
extern "C" __attribute__((visibility("default"))) void* vp8_mv_update_probs = NULL;

/* Exported Object: vp8_mbsplit_offset */
extern "C" __attribute__((visibility("default"))) void* vp8_mbsplit_offset = NULL;

/* Demangled: _vp8_D4FE6917BEAE483326F5F8D34A69732F4E5F379744F1C4856AE5805A7EC964F9 */
extern "C" __attribute__((visibility("default"))) int _vp8_D4FE6917BEAE483326F5F8D34A69732F4E5F379744F1C4856AE5805A7EC964F9(void) {
    ALOGD("_vp8_D4FE6917BEAE483326F5F8D34A69732F4E5F379744F1C4856AE5805A7EC964F9() called");
    return 0;
}

/* Demangled: _vp8_0370C2CF9B6620141A9263A806D864EFE8A9A689B600BC36327106C64B0ACEEC */
extern "C" __attribute__((visibility("default"))) int _vp8_0370C2CF9B6620141A9263A806D864EFE8A9A689B600BC36327106C64B0ACEEC(void) {
    ALOGD("_vp8_0370C2CF9B6620141A9263A806D864EFE8A9A689B600BC36327106C64B0ACEEC() called");
    return 0;
}

/* Demangled: _vp8_DF5D95578C0EDBB39F96386EF2BA02776BB2CA7DC978F4E84A0DA51ECB8E0B36 */
extern "C" __attribute__((visibility("default"))) int _vp8_DF5D95578C0EDBB39F96386EF2BA02776BB2CA7DC978F4E84A0DA51ECB8E0B36(void) {
    ALOGD("_vp8_DF5D95578C0EDBB39F96386EF2BA02776BB2CA7DC978F4E84A0DA51ECB8E0B36() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBE31CA0BA06BEB48E193BA95FB7C457A5 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBE31CA0BA06BEB48E193BA95FB7C457A5(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBE31CA0BA06BEB48E193BA95FB7C457A5() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB18DA77BF80D6E56633A0B4FA7B266A97 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB18DA77BF80D6E56633A0B4FA7B266A97(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB18DA77BF80D6E56633A0B4FA7B266A97() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB719CF791026DA98AF95C0AD2A8D2CA8E */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB719CF791026DA98AF95C0AD2A8D2CA8E(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB719CF791026DA98AF95C0AD2A8D2CA8E() called");
    return 0;
}

/* Demangled: _vp8_245398AE9143CF83A597BB543E31F3CBC62CC60E5BDB74C5C70F0AE872C60A4A */
extern "C" __attribute__((visibility("default"))) int _vp8_245398AE9143CF83A597BB543E31F3CBC62CC60E5BDB74C5C70F0AE872C60A4A(void) {
    ALOGD("_vp8_245398AE9143CF83A597BB543E31F3CBC62CC60E5BDB74C5C70F0AE872C60A4A() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB3013969F2DF1BC877A098A275143EC61 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB3013969F2DF1BC877A098A275143EC61(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB3013969F2DF1BC877A098A275143EC61() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB6F141FAD5FB16C78F9CAA04A60A1C1CC */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB6F141FAD5FB16C78F9CAA04A60A1C1CC(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB6F141FAD5FB16C78F9CAA04A60A1C1CC() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB87E9312744B9C895371E33D457F14A79 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB87E9312744B9C895371E33D457F14A79(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB87E9312744B9C895371E33D457F14A79() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBA0A5BE1FE3967BADF5643409523A1E37 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBA0A5BE1FE3967BADF5643409523A1E37(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBA0A5BE1FE3967BADF5643409523A1E37() called");
    return 0;
}

/* Demangled: _vp8_C43E8425B64B973D091BAF970E132F3C */
extern "C" __attribute__((visibility("default"))) int _vp8_C43E8425B64B973D091BAF970E132F3C(void) {
    ALOGD("_vp8_C43E8425B64B973D091BAF970E132F3C() called");
    return 0;
}

/* Demangled: _vp8_D0D1576548B1A28CC83285F3A819A004A7D89F388D7ADCCD56EFB9780972DF5C */
extern "C" __attribute__((visibility("default"))) int _vp8_D0D1576548B1A28CC83285F3A819A004A7D89F388D7ADCCD56EFB9780972DF5C(void) {
    ALOGD("_vp8_D0D1576548B1A28CC83285F3A819A004A7D89F388D7ADCCD56EFB9780972DF5C() called");
    return 0;
}

/* Demangled: _vp8_9E985D39A497598F616049942842A1944023F9F66BF69424A6DDF442180C6E90 */
extern "C" __attribute__((visibility("default"))) int _vp8_9E985D39A497598F616049942842A1944023F9F66BF69424A6DDF442180C6E90(void) {
    ALOGD("_vp8_9E985D39A497598F616049942842A1944023F9F66BF69424A6DDF442180C6E90() called");
    return 0;
}

/* Demangled: _vp8_CF91603A71B1CF7B718C371D5EE1C958169361B1D19FED28DAFD189FE22E3AF9 */
extern "C" __attribute__((visibility("default"))) int _vp8_CF91603A71B1CF7B718C371D5EE1C958169361B1D19FED28DAFD189FE22E3AF9(void) {
    ALOGD("_vp8_CF91603A71B1CF7B718C371D5EE1C958169361B1D19FED28DAFD189FE22E3AF9() called");
    return 0;
}

/* Demangled: _vp8_FB7CA72BAED4775BD915DE97E305A8FCDB9514A29A4C9C144FCBC2F2AE11DCD7C76D6AB591C81CA41642625D089A39D8 */
extern "C" __attribute__((visibility("default"))) int _vp8_FB7CA72BAED4775BD915DE97E305A8FCDB9514A29A4C9C144FCBC2F2AE11DCD7C76D6AB591C81CA41642625D089A39D8(void) {
    ALOGD("_vp8_FB7CA72BAED4775BD915DE97E305A8FCDB9514A29A4C9C144FCBC2F2AE11DCD7C76D6AB591C81CA41642625D089A39D8() called");
    return 0;
}

/* Demangled: _vp8_304E5ACA02C4EB606A3D06B3B07FE7C8B027321166FD105342BA7CC34F31B71B */
extern "C" __attribute__((visibility("default"))) int _vp8_304E5ACA02C4EB606A3D06B3B07FE7C8B027321166FD105342BA7CC34F31B71B(void) {
    ALOGD("_vp8_304E5ACA02C4EB606A3D06B3B07FE7C8B027321166FD105342BA7CC34F31B71B() called");
    return 0;
}

/* Demangled: _vp8_44C7198E3F03104F183303AF7503CC7493CE5D81BB200C3D893E270936A9861A */
extern "C" __attribute__((visibility("default"))) int _vp8_44C7198E3F03104F183303AF7503CC7493CE5D81BB200C3D893E270936A9861A(void) {
    ALOGD("_vp8_44C7198E3F03104F183303AF7503CC7493CE5D81BB200C3D893E270936A9861A() called");
    return 0;
}

/* Demangled: _vp8_69B23EC19DCB81DC297832B399624223988DCEC161CF98E85169D005250D7506 */
extern "C" __attribute__((visibility("default"))) int _vp8_69B23EC19DCB81DC297832B399624223988DCEC161CF98E85169D005250D7506(void) {
    ALOGD("_vp8_69B23EC19DCB81DC297832B399624223988DCEC161CF98E85169D005250D7506() called");
    return 0;
}

/* Demangled: _vp8_9BF257B8A10D9180484DE18873C509BC93CE5D81BB200C3D893E270936A9861A */
extern "C" __attribute__((visibility("default"))) int _vp8_9BF257B8A10D9180484DE18873C509BC93CE5D81BB200C3D893E270936A9861A(void) {
    ALOGD("_vp8_9BF257B8A10D9180484DE18873C509BC93CE5D81BB200C3D893E270936A9861A() called");
    return 0;
}

/* Demangled: _vp8_B127700D9C3B4980F44025962EEAFCA9B027321166FD105342BA7CC34F31B71B */
extern "C" __attribute__((visibility("default"))) int _vp8_B127700D9C3B4980F44025962EEAFCA9B027321166FD105342BA7CC34F31B71B(void) {
    ALOGD("_vp8_B127700D9C3B4980F44025962EEAFCA9B027321166FD105342BA7CC34F31B71B() called");
    return 0;
}

/* Demangled: _vp8_C8845B87E180228D646FCE2C9422331FBFF8BC5C374FE736B0EA7F7F4BB021A9 */
extern "C" __attribute__((visibility("default"))) int _vp8_C8845B87E180228D646FCE2C9422331FBFF8BC5C374FE736B0EA7F7F4BB021A9(void) {
    ALOGD("_vp8_C8845B87E180228D646FCE2C9422331FBFF8BC5C374FE736B0EA7F7F4BB021A9() called");
    return 0;
}

/* Demangled: _vp8_E6427FB4792D879E2AD8B0B064340E16988DCEC161CF98E85169D005250D7506 */
extern "C" __attribute__((visibility("default"))) int _vp8_E6427FB4792D879E2AD8B0B064340E16988DCEC161CF98E85169D005250D7506(void) {
    ALOGD("_vp8_E6427FB4792D879E2AD8B0B064340E16988DCEC161CF98E85169D005250D7506() called");
    return 0;
}

/* Demangled: _vp8_D114669DC07711506039E350724501F9 */
extern "C" __attribute__((visibility("default"))) int _vp8_D114669DC07711506039E350724501F9(void) {
    ALOGD("_vp8_D114669DC07711506039E350724501F9() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBD29CEAE7725A62B7DDA9D1A18F10E7ED */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBD29CEAE7725A62B7DDA9D1A18F10E7ED(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBD29CEAE7725A62B7DDA9D1A18F10E7ED() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBDBCA6E423AED49116933F325B3665B93 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBDBCA6E423AED49116933F325B3665B93(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBDBCA6E423AED49116933F325B3665B93() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBEE6ABF7B09DA527BFCB7CE45B118FEDD */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBEE6ABF7B09DA527BFCB7CE45B118FEDD(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBEE6ABF7B09DA527BFCB7CE45B118FEDD() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBF2C622817A94B387BC85948F53A1DB8A */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBF2C622817A94B387BC85948F53A1DB8A(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBF2C622817A94B387BC85948F53A1DB8A() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB7062540430CAA130F5F482040CCB8DF5 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB7062540430CAA130F5F482040CCB8DF5(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB7062540430CAA130F5F482040CCB8DF5() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBC467131F3828AB7D80C28D8B4E873CEF */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBC467131F3828AB7D80C28D8B4E873CEF(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBC467131F3828AB7D80C28D8B4E873CEF() called");
    return 0;
}

/* Demangled: _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331171D4B107F67D1B8546311FA527C01D2 */
extern "C" __attribute__((visibility("default"))) int _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331171D4B107F67D1B8546311FA527C01D2(void) {
    ALOGD("_vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331171D4B107F67D1B8546311FA527C01D2() called");
    return 0;
}

/* Demangled: _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331A3BCD891CF2380FA981F6A0DFEF69DEB */
extern "C" __attribute__((visibility("default"))) int _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331A3BCD891CF2380FA981F6A0DFEF69DEB(void) {
    ALOGD("_vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331A3BCD891CF2380FA981F6A0DFEF69DEB() called");
    return 0;
}

/* Demangled: _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331FEE7AA9076E0A581F2E417A03F1BEC4D */
extern "C" __attribute__((visibility("default"))) int _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331FEE7AA9076E0A581F2E417A03F1BEC4D(void) {
    ALOGD("_vp8_7B68EE39602D5AAEEF54A2389D5E9E2A703A8C3EC63DBBB8C6AF815E762D8331FEE7AA9076E0A581F2E417A03F1BEC4D() called");
    return 0;
}

/* Demangled: _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AA154A374B5B04EBB558D80C2E260C2E19 */
extern "C" __attribute__((visibility("default"))) int _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AA154A374B5B04EBB558D80C2E260C2E19(void) {
    ALOGD("_vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AA154A374B5B04EBB558D80C2E260C2E19() called");
    return 0;
}

/* Demangled: _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AA78DB3A70F021B8F1BDEBFDECA3263097 */
extern "C" __attribute__((visibility("default"))) int _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AA78DB3A70F021B8F1BDEBFDECA3263097(void) {
    ALOGD("_vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AA78DB3A70F021B8F1BDEBFDECA3263097() called");
    return 0;
}

/* Demangled: _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AAAF23CDB2E7BD84B3353402AA03D0EAFB */
extern "C" __attribute__((visibility("default"))) int _vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AAAF23CDB2E7BD84B3353402AA03D0EAFB(void) {
    ALOGD("_vp8_7B68EE39602D5AAEEF54A2389D5E9E2A9BED3CEE6C5C2FD01F042171B22E54AAAF23CDB2E7BD84B3353402AA03D0EAFB() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB07F8BC05EDD17254B084FF1A85460F1E653A7DCDC0F7B2D6E5DCBFC224791C1A */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB07F8BC05EDD17254B084FF1A85460F1E653A7DCDC0F7B2D6E5DCBFC224791C1A(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB07F8BC05EDD17254B084FF1A85460F1E653A7DCDC0F7B2D6E5DCBFC224791C1A() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB3962D89557CE472BAC3A8B0A20EA2D76B82CB36F165CE95389EA1398ECFA59F9 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB3962D89557CE472BAC3A8B0A20EA2D76B82CB36F165CE95389EA1398ECFA59F9(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB3962D89557CE472BAC3A8B0A20EA2D76B82CB36F165CE95389EA1398ECFA59F9() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB8AB739C983AEAA865E5DABF94AC6208D41DF0180889E18A3AB6685AA5C8E60BC */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB8AB739C983AEAA865E5DABF94AC6208D41DF0180889E18A3AB6685AA5C8E60BC(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB8AB739C983AEAA865E5DABF94AC6208D41DF0180889E18A3AB6685AA5C8E60BC() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9F171D4B107F67D1B8546311FA527C01D2 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9F171D4B107F67D1B8546311FA527C01D2(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9F171D4B107F67D1B8546311FA527C01D2() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9FA3BCD891CF2380FA981F6A0DFEF69DEB */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9FA3BCD891CF2380FA981F6A0DFEF69DEB(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9FA3BCD891CF2380FA981F6A0DFEF69DEB() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9FFEE7AA9076E0A581F2E417A03F1BEC4D */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9FFEE7AA9076E0A581F2E417A03F1BEC4D(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBB9182DE1474475A566BB91093E2DEC9FFEE7AA9076E0A581F2E417A03F1BEC4D() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBD7CDED2B201CD5F76AB934A9858D2239E57AB74E0613A2E63ADC3D0E8992C913 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBD7CDED2B201CD5F76AB934A9858D2239E57AB74E0613A2E63ADC3D0E8992C913(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBD7CDED2B201CD5F76AB934A9858D2239E57AB74E0613A2E63ADC3D0E8992C913() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECBECA4DFA8B9182B536A95075E3F273BDD2137EFF3329CEC036A998A21B7BA8494 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECBECA4DFA8B9182B536A95075E3F273BDD2137EFF3329CEC036A998A21B7BA8494(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECBECA4DFA8B9182B536A95075E3F273BDD2137EFF3329CEC036A998A21B7BA8494() called");
    return 0;
}

/* Demangled: _vp8_2BFB23605BBA2262A50539757217CF55F35B4E87FC8CE1858110D79CF2BFD82D */
extern "C" __attribute__((visibility("default"))) int _vp8_2BFB23605BBA2262A50539757217CF55F35B4E87FC8CE1858110D79CF2BFD82D(void) {
    ALOGD("_vp8_2BFB23605BBA2262A50539757217CF55F35B4E87FC8CE1858110D79CF2BFD82D() called");
    return 0;
}

/* Demangled: _vp8_78863745897176E7C4EE402BC07A713E347F3787C62815CA5FA8B19DC272BD5C */
extern "C" __attribute__((visibility("default"))) int _vp8_78863745897176E7C4EE402BC07A713E347F3787C62815CA5FA8B19DC272BD5C(void) {
    ALOGD("_vp8_78863745897176E7C4EE402BC07A713E347F3787C62815CA5FA8B19DC272BD5C() called");
    return 0;
}

/* Demangled: _vp8_5F3AADD7178E20328C33902AD64383F5706E5CC59C1995DE00B12C785E815D36 */
extern "C" __attribute__((visibility("default"))) int _vp8_5F3AADD7178E20328C33902AD64383F5706E5CC59C1995DE00B12C785E815D36(void) {
    ALOGD("_vp8_5F3AADD7178E20328C33902AD64383F5706E5CC59C1995DE00B12C785E815D36() called");
    return 0;
}

/* Demangled: _vp8_6D65927C0DD5152974D88BE799F6C7201A10920F548983DC6EAE184F0D303D3F */
extern "C" __attribute__((visibility("default"))) int _vp8_6D65927C0DD5152974D88BE799F6C7201A10920F548983DC6EAE184F0D303D3F(void) {
    ALOGD("_vp8_6D65927C0DD5152974D88BE799F6C7201A10920F548983DC6EAE184F0D303D3F() called");
    return 0;
}

/* Demangled: _vp8_16CB096179956D43BA53ACF177FEF83F41DF0180889E18A3AB6685AA5C8E60BC */
extern "C" __attribute__((visibility("default"))) int _vp8_16CB096179956D43BA53ACF177FEF83F41DF0180889E18A3AB6685AA5C8E60BC(void) {
    ALOGD("_vp8_16CB096179956D43BA53ACF177FEF83F41DF0180889E18A3AB6685AA5C8E60BC() called");
    return 0;
}

/* Demangled: _vp8_4E08436CDD8C461F65D0E83BE3B4D4DBA9AC4F27F0ABEE2102035BCF8080AB53 */
extern "C" __attribute__((visibility("default"))) int _vp8_4E08436CDD8C461F65D0E83BE3B4D4DBA9AC4F27F0ABEE2102035BCF8080AB53(void) {
    ALOGD("_vp8_4E08436CDD8C461F65D0E83BE3B4D4DBA9AC4F27F0ABEE2102035BCF8080AB53() called");
    return 0;
}

/* Demangled: _vp8_9EA7CF747F00388A0AC772C8FDFC24D74DEFB57D413C0B7178910631550C2C46 */
extern "C" __attribute__((visibility("default"))) int _vp8_9EA7CF747F00388A0AC772C8FDFC24D74DEFB57D413C0B7178910631550C2C46(void) {
    ALOGD("_vp8_9EA7CF747F00388A0AC772C8FDFC24D74DEFB57D413C0B7178910631550C2C46() called");
    return 0;
}

/* Demangled: _vp8_5A70C68C6083A88CB20DDAFEA4E7DA22AD996A6D006B7AE5F2A8D9084DF99AEE */
extern "C" __attribute__((visibility("default"))) int _vp8_5A70C68C6083A88CB20DDAFEA4E7DA22AD996A6D006B7AE5F2A8D9084DF99AEE(void) {
    ALOGD("_vp8_5A70C68C6083A88CB20DDAFEA4E7DA22AD996A6D006B7AE5F2A8D9084DF99AEE() called");
    return 0;
}

/* Demangled: _vp8_A60B44C979248D3F9FC514AD90E2A6703B37610325E83863E87BBC7BB83EFEFB3FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_A60B44C979248D3F9FC514AD90E2A6703B37610325E83863E87BBC7BB83EFEFB3FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_A60B44C979248D3F9FC514AD90E2A6703B37610325E83863E87BBC7BB83EFEFB3FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_1FB8EB335382448CE573337078746F859C50C9150A2885653A7EBFB89325C093 */
extern "C" __attribute__((visibility("default"))) int _vp8_1FB8EB335382448CE573337078746F859C50C9150A2885653A7EBFB89325C093(void) {
    ALOGD("_vp8_1FB8EB335382448CE573337078746F859C50C9150A2885653A7EBFB89325C093() called");
    return 0;
}

/* Demangled: _vp8_B7679546510E0E34B9C424B4AA5A08B2FD519D0B860E96986589A5FFBC21F4DB */
extern "C" __attribute__((visibility("default"))) int _vp8_B7679546510E0E34B9C424B4AA5A08B2FD519D0B860E96986589A5FFBC21F4DB(void) {
    ALOGD("_vp8_B7679546510E0E34B9C424B4AA5A08B2FD519D0B860E96986589A5FFBC21F4DB() called");
    return 0;
}

/* Demangled: _vp8_B7746C8B0A6CE8D57E6393E32B508856F75C1E5B800BA1E76BD5519B6DE1FB36 */
extern "C" __attribute__((visibility("default"))) int _vp8_B7746C8B0A6CE8D57E6393E32B508856F75C1E5B800BA1E76BD5519B6DE1FB36(void) {
    ALOGD("_vp8_B7746C8B0A6CE8D57E6393E32B508856F75C1E5B800BA1E76BD5519B6DE1FB36() called");
    return 0;
}

/* Demangled: _vp8_0987293AABFDBC407314A6A554AA8C570637447B87EA384F834336EB123FA755 */
extern "C" __attribute__((visibility("default"))) int _vp8_0987293AABFDBC407314A6A554AA8C570637447B87EA384F834336EB123FA755(void) {
    ALOGD("_vp8_0987293AABFDBC407314A6A554AA8C570637447B87EA384F834336EB123FA755() called");
    return 0;
}

/* Demangled: _vp8_CD553338229345CB740A2EEF1FBFFA6C1C8C2183EE7984A6FD3679A020947BD4 */
extern "C" __attribute__((visibility("default"))) int _vp8_CD553338229345CB740A2EEF1FBFFA6C1C8C2183EE7984A6FD3679A020947BD4(void) {
    ALOGD("_vp8_CD553338229345CB740A2EEF1FBFFA6C1C8C2183EE7984A6FD3679A020947BD4() called");
    return 0;
}

/* Demangled: _vp8_CD553338229345CB740A2EEF1FBFFA6C9BA62124C57F941B412F061BAC8F1225 */
extern "C" __attribute__((visibility("default"))) int _vp8_CD553338229345CB740A2EEF1FBFFA6C9BA62124C57F941B412F061BAC8F1225(void) {
    ALOGD("_vp8_CD553338229345CB740A2EEF1FBFFA6C9BA62124C57F941B412F061BAC8F1225() called");
    return 0;
}

/* Demangled: _vp8_166C24338EC9583E8D302F07645DEE069D04E3AAE54595AD60722E468E448B56 */
extern "C" __attribute__((visibility("default"))) int _vp8_166C24338EC9583E8D302F07645DEE069D04E3AAE54595AD60722E468E448B56(void) {
    ALOGD("_vp8_166C24338EC9583E8D302F07645DEE069D04E3AAE54595AD60722E468E448B56() called");
    return 0;
}

/* Demangled: _vp8_5B3383E5D37544C9E0D678A8608F91E45B795A259C1884B9ABA4F10A7B7B11387579F9CA11C51E2F945A749C530206E6 */
extern "C" __attribute__((visibility("default"))) int _vp8_5B3383E5D37544C9E0D678A8608F91E45B795A259C1884B9ABA4F10A7B7B11387579F9CA11C51E2F945A749C530206E6(void) {
    ALOGD("_vp8_5B3383E5D37544C9E0D678A8608F91E45B795A259C1884B9ABA4F10A7B7B11387579F9CA11C51E2F945A749C530206E6() called");
    return 0;
}

/* Demangled: _vp8_5B3383E5D37544C9E0D678A8608F91E47579F9CA11C51E2F945A749C530206E6 */
extern "C" __attribute__((visibility("default"))) int _vp8_5B3383E5D37544C9E0D678A8608F91E47579F9CA11C51E2F945A749C530206E6(void) {
    ALOGD("_vp8_5B3383E5D37544C9E0D678A8608F91E47579F9CA11C51E2F945A749C530206E6() called");
    return 0;
}

/* Demangled: _vp8_694F6B946BCA079312E49DE6812BDA926C5722E22A9E1D8C1F8DAB39698B4991 */
extern "C" __attribute__((visibility("default"))) int _vp8_694F6B946BCA079312E49DE6812BDA926C5722E22A9E1D8C1F8DAB39698B4991(void) {
    ALOGD("_vp8_694F6B946BCA079312E49DE6812BDA926C5722E22A9E1D8C1F8DAB39698B4991() called");
    return 0;
}

/* Demangled: _vp8_7DACFA2FB5673D22F9A6AEDA79AD4DFAAF9CBD80B67CC729465B7BFAC1F9BBD1 */
extern "C" __attribute__((visibility("default"))) int _vp8_7DACFA2FB5673D22F9A6AEDA79AD4DFAAF9CBD80B67CC729465B7BFAC1F9BBD1(void) {
    ALOGD("_vp8_7DACFA2FB5673D22F9A6AEDA79AD4DFAAF9CBD80B67CC729465B7BFAC1F9BBD1() called");
    return 0;
}

/* Demangled: _vp8_9706D1A101A6D717474CD9076055E3E5AF9CBD80B67CC729465B7BFAC1F9BBD1 */
extern "C" __attribute__((visibility("default"))) int _vp8_9706D1A101A6D717474CD9076055E3E5AF9CBD80B67CC729465B7BFAC1F9BBD1(void) {
    ALOGD("_vp8_9706D1A101A6D717474CD9076055E3E5AF9CBD80B67CC729465B7BFAC1F9BBD1() called");
    return 0;
}

/* Demangled: _vp8_C05A48C9B3DD3C5FFF5001AD79A1F107DFD94E225A1D76A0E2CB81BF41D7FF6C */
extern "C" __attribute__((visibility("default"))) int _vp8_C05A48C9B3DD3C5FFF5001AD79A1F107DFD94E225A1D76A0E2CB81BF41D7FF6C(void) {
    ALOGD("_vp8_C05A48C9B3DD3C5FFF5001AD79A1F107DFD94E225A1D76A0E2CB81BF41D7FF6C() called");
    return 0;
}

/* Demangled: _vp8_CAA868017F78A99F33F6772A479DB8D46C5722E22A9E1D8C1F8DAB39698B4991 */
extern "C" __attribute__((visibility("default"))) int _vp8_CAA868017F78A99F33F6772A479DB8D46C5722E22A9E1D8C1F8DAB39698B4991(void) {
    ALOGD("_vp8_CAA868017F78A99F33F6772A479DB8D46C5722E22A9E1D8C1F8DAB39698B4991() called");
    return 0;
}

/* Demangled: _vp8_DDA0DE1336AEA168D620C798BAC4C517C25755A8762FFB53A6628BF1410EAC1D */
extern "C" __attribute__((visibility("default"))) int _vp8_DDA0DE1336AEA168D620C798BAC4C517C25755A8762FFB53A6628BF1410EAC1D(void) {
    ALOGD("_vp8_DDA0DE1336AEA168D620C798BAC4C517C25755A8762FFB53A6628BF1410EAC1D() called");
    return 0;
}

/* Demangled: _vp8_FC39734269A44824D199CA43CA3DF8EE4E5F379744F1C4856AE5805A7EC964F9 */
extern "C" __attribute__((visibility("default"))) int _vp8_FC39734269A44824D199CA43CA3DF8EE4E5F379744F1C4856AE5805A7EC964F9(void) {
    ALOGD("_vp8_FC39734269A44824D199CA43CA3DF8EE4E5F379744F1C4856AE5805A7EC964F9() called");
    return 0;
}

/* Demangled: _vp8_9E985D39A497598F616049942842A19442BEF4AD996F9D10EC190684BBCE1F28 */
extern "C" __attribute__((visibility("default"))) int _vp8_9E985D39A497598F616049942842A19442BEF4AD996F9D10EC190684BBCE1F28(void) {
    ALOGD("_vp8_9E985D39A497598F616049942842A19442BEF4AD996F9D10EC190684BBCE1F28() called");
    return 0;
}

/* Demangled: _vp8_F16112A79229CE660B5D78D137F67A5FAC0A5CE85DFA23D0A1B4118DF619652C */
extern "C" __attribute__((visibility("default"))) int _vp8_F16112A79229CE660B5D78D137F67A5FAC0A5CE85DFA23D0A1B4118DF619652C(void) {
    ALOGD("_vp8_F16112A79229CE660B5D78D137F67A5FAC0A5CE85DFA23D0A1B4118DF619652C() called");
    return 0;
}

/* Demangled: _vp8_09261118CF01F184602D9950F2315881ED93AEED372C9A62ECD73AD92D173A9E */
extern "C" __attribute__((visibility("default"))) int _vp8_09261118CF01F184602D9950F2315881ED93AEED372C9A62ECD73AD92D173A9E(void) {
    ALOGD("_vp8_09261118CF01F184602D9950F2315881ED93AEED372C9A62ECD73AD92D173A9E() called");
    return 0;
}

/* Demangled: _vp8_09261118CF01F184602D9950F231588114BA66BA06A98B03BC3D1B3A49022533 */
extern "C" __attribute__((visibility("default"))) int _vp8_09261118CF01F184602D9950F231588114BA66BA06A98B03BC3D1B3A49022533(void) {
    ALOGD("_vp8_09261118CF01F184602D9950F231588114BA66BA06A98B03BC3D1B3A49022533() called");
    return 0;
}

/* Demangled: _vp8_197B9AD9CAD8562D314CCBCA346452E1 */
extern "C" __attribute__((visibility("default"))) int _vp8_197B9AD9CAD8562D314CCBCA346452E1(void) {
    ALOGD("_vp8_197B9AD9CAD8562D314CCBCA346452E1() called");
    return 0;
}

/* Demangled: _vp8_473D757C172AEC9A3B97F7F9956702B6F8C299D5BF4B48672525F638B56E8386718E97AE2B22486958977070C7E064DE */
extern "C" __attribute__((visibility("default"))) int _vp8_473D757C172AEC9A3B97F7F9956702B6F8C299D5BF4B48672525F638B56E8386718E97AE2B22486958977070C7E064DE(void) {
    ALOGD("_vp8_473D757C172AEC9A3B97F7F9956702B6F8C299D5BF4B48672525F638B56E8386718E97AE2B22486958977070C7E064DE() called");
    return 0;
}

/* Demangled: _vp8_674EDEA6EBC5943D2CB8223961D8A327999F8DD94801F5F60BE7DE133A78C864 */
extern "C" __attribute__((visibility("default"))) int _vp8_674EDEA6EBC5943D2CB8223961D8A327999F8DD94801F5F60BE7DE133A78C864(void) {
    ALOGD("_vp8_674EDEA6EBC5943D2CB8223961D8A327999F8DD94801F5F60BE7DE133A78C864() called");
    return 0;
}

/* Demangled: _vp8_8CBE4F2A0986E213E2EFCF8189F67C83 */
extern "C" __attribute__((visibility("default"))) int _vp8_8CBE4F2A0986E213E2EFCF8189F67C83(void) {
    ALOGD("_vp8_8CBE4F2A0986E213E2EFCF8189F67C83() called");
    return 0;
}

/* Demangled: _vp8_A07086794CD7CFDA79F9577E786FBD9BBBD81751C654DC904AE232CFAACAC6F8 */
extern "C" __attribute__((visibility("default"))) int _vp8_A07086794CD7CFDA79F9577E786FBD9BBBD81751C654DC904AE232CFAACAC6F8(void) {
    ALOGD("_vp8_A07086794CD7CFDA79F9577E786FBD9BBBD81751C654DC904AE232CFAACAC6F8() called");
    return 0;
}

/* Demangled: _vp8_A3A4176F61FFBA8379E3289EDEB8C56C203A4702C1E3449BE2CE8562F57FB922 */
extern "C" __attribute__((visibility("default"))) int _vp8_A3A4176F61FFBA8379E3289EDEB8C56C203A4702C1E3449BE2CE8562F57FB922(void) {
    ALOGD("_vp8_A3A4176F61FFBA8379E3289EDEB8C56C203A4702C1E3449BE2CE8562F57FB922() called");
    return 0;
}

/* Demangled: _vp8_A3A4176F61FFBA8379E3289EDEB8C56C6C48D8346C58D4A5635ECAC917D014A2 */
extern "C" __attribute__((visibility("default"))) int _vp8_A3A4176F61FFBA8379E3289EDEB8C56C6C48D8346C58D4A5635ECAC917D014A2(void) {
    ALOGD("_vp8_A3A4176F61FFBA8379E3289EDEB8C56C6C48D8346C58D4A5635ECAC917D014A2() called");
    return 0;
}

/* Demangled: _vp8_D294B656D3A1CD2BAE275053781C3A97 */
extern "C" __attribute__((visibility("default"))) int _vp8_D294B656D3A1CD2BAE275053781C3A97(void) {
    ALOGD("_vp8_D294B656D3A1CD2BAE275053781C3A97() called");
    return 0;
}

/* Demangled: _vp8_D6AC79E4C83C3B55AFAAF92384C7937918ED9853EFBBFE5D1BFF582ACE29EAB4 */
extern "C" __attribute__((visibility("default"))) int _vp8_D6AC79E4C83C3B55AFAAF92384C7937918ED9853EFBBFE5D1BFF582ACE29EAB4(void) {
    ALOGD("_vp8_D6AC79E4C83C3B55AFAAF92384C7937918ED9853EFBBFE5D1BFF582ACE29EAB4() called");
    return 0;
}

/* Demangled: _vp8_D6AC79E4C83C3B55AFAAF92384C793798616CD17903B2B0E86E833B28514A6DE */
extern "C" __attribute__((visibility("default"))) int _vp8_D6AC79E4C83C3B55AFAAF92384C793798616CD17903B2B0E86E833B28514A6DE(void) {
    ALOGD("_vp8_D6AC79E4C83C3B55AFAAF92384C793798616CD17903B2B0E86E833B28514A6DE() called");
    return 0;
}

/* Demangled: _vp8_DF1BA26E1728C9FFEE993F2E20D3B25B */
extern "C" __attribute__((visibility("default"))) int _vp8_DF1BA26E1728C9FFEE993F2E20D3B25B(void) {
    ALOGD("_vp8_DF1BA26E1728C9FFEE993F2E20D3B25B() called");
    return 0;
}

/* Demangled: _vp8_F16112A79229CE660B5D78D137F67A5FB7C2082AC766EA7D979376A00AFAB5CC */
extern "C" __attribute__((visibility("default"))) int _vp8_F16112A79229CE660B5D78D137F67A5FB7C2082AC766EA7D979376A00AFAB5CC(void) {
    ALOGD("_vp8_F16112A79229CE660B5D78D137F67A5FB7C2082AC766EA7D979376A00AFAB5CC() called");
    return 0;
}

/* Demangled: _vp8_F243D9484DBE924C31AA1D1B56B4F04A9FF393807B6F8CA8EFD53B3E99E84B70 */
extern "C" __attribute__((visibility("default"))) int _vp8_F243D9484DBE924C31AA1D1B56B4F04A9FF393807B6F8CA8EFD53B3E99E84B70(void) {
    ALOGD("_vp8_F243D9484DBE924C31AA1D1B56B4F04A9FF393807B6F8CA8EFD53B3E99E84B70() called");
    return 0;
}

/* Demangled: _vp8_F5604D910F86137F9F971B712BCDCDFA3D818D914C085A7AE332B2C4ADE32AD83FAB029E9FABF74BCC52B66438A1D1C7 */
extern "C" __attribute__((visibility("default"))) int _vp8_F5604D910F86137F9F971B712BCDCDFA3D818D914C085A7AE332B2C4ADE32AD83FAB029E9FABF74BCC52B66438A1D1C7(void) {
    ALOGD("_vp8_F5604D910F86137F9F971B712BCDCDFA3D818D914C085A7AE332B2C4ADE32AD83FAB029E9FABF74BCC52B66438A1D1C7() called");
    return 0;
}

/* Demangled: _vp8_F5604D910F86137F9F971B712BCDCDFACCEA2E3112E94177DA1FE69E5D4B65CCF8A09D15BEF93B723F96C6879C1750A6 */
extern "C" __attribute__((visibility("default"))) int _vp8_F5604D910F86137F9F971B712BCDCDFACCEA2E3112E94177DA1FE69E5D4B65CCF8A09D15BEF93B723F96C6879C1750A6(void) {
    ALOGD("_vp8_F5604D910F86137F9F971B712BCDCDFACCEA2E3112E94177DA1FE69E5D4B65CCF8A09D15BEF93B723F96C6879C1750A6() called");
    return 0;
}

/* Demangled: _vp8_18089EE8CF2AEDD6939346B6238F2D8A41DF0180889E18A3AB6685AA5C8E60BC */
extern "C" __attribute__((visibility("default"))) int _vp8_18089EE8CF2AEDD6939346B6238F2D8A41DF0180889E18A3AB6685AA5C8E60BC(void) {
    ALOGD("_vp8_18089EE8CF2AEDD6939346B6238F2D8A41DF0180889E18A3AB6685AA5C8E60BC() called");
    return 0;
}

/* Demangled: _vp8_60556742F9D53809E2CA42293D7590341A4765F797BE215416FFB714856A4DF3 */
extern "C" __attribute__((visibility("default"))) int _vp8_60556742F9D53809E2CA42293D7590341A4765F797BE215416FFB714856A4DF3(void) {
    ALOGD("_vp8_60556742F9D53809E2CA42293D7590341A4765F797BE215416FFB714856A4DF3() called");
    return 0;
}

/* Demangled: _vp8_67AE36E78708ABEB6BBAEA3E5EED403A01BC52372909771B745578D89A4C0E6B */
extern "C" __attribute__((visibility("default"))) int _vp8_67AE36E78708ABEB6BBAEA3E5EED403A01BC52372909771B745578D89A4C0E6B(void) {
    ALOGD("_vp8_67AE36E78708ABEB6BBAEA3E5EED403A01BC52372909771B745578D89A4C0E6B() called");
    return 0;
}

/* Demangled: _vp8_80CB0FD34B80BC0DE1BDCD06C71CB0BC20A49F76AE8240E2445AFB4F066D9FC5 */
extern "C" __attribute__((visibility("default"))) int _vp8_80CB0FD34B80BC0DE1BDCD06C71CB0BC20A49F76AE8240E2445AFB4F066D9FC5(void) {
    ALOGD("_vp8_80CB0FD34B80BC0DE1BDCD06C71CB0BC20A49F76AE8240E2445AFB4F066D9FC5() called");
    return 0;
}

/* Demangled: _vp8_859FA15629D7FC39BCC05293FED5F9CD6D26DB7D3631BABAEEBF3FDBC9983E07 */
extern "C" __attribute__((visibility("default"))) int _vp8_859FA15629D7FC39BCC05293FED5F9CD6D26DB7D3631BABAEEBF3FDBC9983E07(void) {
    ALOGD("_vp8_859FA15629D7FC39BCC05293FED5F9CD6D26DB7D3631BABAEEBF3FDBC9983E07() called");
    return 0;
}

/* Demangled: _vp8_943E23CA618A65FB8FECA85C951A4F07EE8519F07BF447FDB4ECAD0504C8E4DD */
extern "C" __attribute__((visibility("default"))) int _vp8_943E23CA618A65FB8FECA85C951A4F07EE8519F07BF447FDB4ECAD0504C8E4DD(void) {
    ALOGD("_vp8_943E23CA618A65FB8FECA85C951A4F07EE8519F07BF447FDB4ECAD0504C8E4DD() called");
    return 0;
}

/* Demangled: _vp8_A1EB4FDA7ECE4C13704810379F6779E7CA40353BBA11772CEC85418E80B6898C */
extern "C" __attribute__((visibility("default"))) int _vp8_A1EB4FDA7ECE4C13704810379F6779E7CA40353BBA11772CEC85418E80B6898C(void) {
    ALOGD("_vp8_A1EB4FDA7ECE4C13704810379F6779E7CA40353BBA11772CEC85418E80B6898C() called");
    return 0;
}

/* Demangled: _vp8_D340C2AB327508EA715527632FB70CC2D37D8FC92FE7AE535E310DFF0CF902A0 */
extern "C" __attribute__((visibility("default"))) int _vp8_D340C2AB327508EA715527632FB70CC2D37D8FC92FE7AE535E310DFF0CF902A0(void) {
    ALOGD("_vp8_D340C2AB327508EA715527632FB70CC2D37D8FC92FE7AE535E310DFF0CF902A0() called");
    return 0;
}

/* Demangled: _vp8_D3A1A912DA885B705D10FDC6BBBD5B84997576BED75465514398D6A1977782EA */
extern "C" __attribute__((visibility("default"))) int _vp8_D3A1A912DA885B705D10FDC6BBBD5B84997576BED75465514398D6A1977782EA(void) {
    ALOGD("_vp8_D3A1A912DA885B705D10FDC6BBBD5B84997576BED75465514398D6A1977782EA() called");
    return 0;
}

/* Demangled: _vp8_D5426029F0B48579A0C6B997D0C8390FDD90E824500A4C4A6E429D652D476C0E */
extern "C" __attribute__((visibility("default"))) int _vp8_D5426029F0B48579A0C6B997D0C8390FDD90E824500A4C4A6E429D652D476C0E(void) {
    ALOGD("_vp8_D5426029F0B48579A0C6B997D0C8390FDD90E824500A4C4A6E429D652D476C0E() called");
    return 0;
}

/* Demangled: _vp8_357A3A850C1E1097D75B62B58EC994901320D84019509C409A0A6D143C435E0B */
extern "C" __attribute__((visibility("default"))) int _vp8_357A3A850C1E1097D75B62B58EC994901320D84019509C409A0A6D143C435E0B(void) {
    ALOGD("_vp8_357A3A850C1E1097D75B62B58EC994901320D84019509C409A0A6D143C435E0B() called");
    return 0;
}

/* Demangled: _vp8_64D4FDA12E7121CA681591CBFEC076B901BC52372909771B745578D89A4C0E6B */
extern "C" __attribute__((visibility("default"))) int _vp8_64D4FDA12E7121CA681591CBFEC076B901BC52372909771B745578D89A4C0E6B(void) {
    ALOGD("_vp8_64D4FDA12E7121CA681591CBFEC076B901BC52372909771B745578D89A4C0E6B() called");
    return 0;
}

/* Demangled: _vp8_7C254B439CACA21E3E74E474ACF96615FA9B7C7BA6F867EEECB80AE2EDD28732 */
extern "C" __attribute__((visibility("default"))) int _vp8_7C254B439CACA21E3E74E474ACF96615FA9B7C7BA6F867EEECB80AE2EDD28732(void) {
    ALOGD("_vp8_7C254B439CACA21E3E74E474ACF96615FA9B7C7BA6F867EEECB80AE2EDD28732() called");
    return 0;
}

/* Exported Object: no_dependency */
extern "C" __attribute__((visibility("default"))) void* no_dependency = NULL;

/* Demangled: _vp8_DCD9EE27CB2DD2ED43BA930F1F5662ABB2D8F46F94A360B63D9851E15652726C */
extern "C" __attribute__((visibility("default"))) int _vp8_DCD9EE27CB2DD2ED43BA930F1F5662ABB2D8F46F94A360B63D9851E15652726C(void) {
    ALOGD("_vp8_DCD9EE27CB2DD2ED43BA930F1F5662ABB2D8F46F94A360B63D9851E15652726C() called");
    return 0;
}

/* Demangled: _vp8_DF5D95578C0EDBB39F96386EF2BA02770156632B1B03E27A5D497BCD8EEE03F8 */
extern "C" __attribute__((visibility("default"))) int _vp8_DF5D95578C0EDBB39F96386EF2BA02770156632B1B03E27A5D497BCD8EEE03F8(void) {
    ALOGD("_vp8_DF5D95578C0EDBB39F96386EF2BA02770156632B1B03E27A5D497BCD8EEE03F8() called");
    return 0;
}

/* Demangled: _vp8_0E1B6CECB2EFA25D1EBEC5C2123834440A139754A073B09349D9076F9BFBC8BA */
extern "C" __attribute__((visibility("default"))) int _vp8_0E1B6CECB2EFA25D1EBEC5C2123834440A139754A073B09349D9076F9BFBC8BA(void) {
    ALOGD("_vp8_0E1B6CECB2EFA25D1EBEC5C2123834440A139754A073B09349D9076F9BFBC8BA() called");
    return 0;
}

/* Demangled: _vp8_36BE9C4742F2E7CB82716412404FB0E57A83591C6267B726C32EB34BD2805C4E */
extern "C" __attribute__((visibility("default"))) int _vp8_36BE9C4742F2E7CB82716412404FB0E57A83591C6267B726C32EB34BD2805C4E(void) {
    ALOGD("_vp8_36BE9C4742F2E7CB82716412404FB0E57A83591C6267B726C32EB34BD2805C4E() called");
    return 0;
}

/* Demangled: _vp8_E31130CBE2D066A9DF293C9A2FE8EDA5 */
extern "C" __attribute__((visibility("default"))) int _vp8_E31130CBE2D066A9DF293C9A2FE8EDA5(void) {
    ALOGD("_vp8_E31130CBE2D066A9DF293C9A2FE8EDA5() called");
    return 0;
}

/* Demangled: _vp8_0F696A706337DA56A43C3E088564448CCB76C01B01ECA44863D78742A416D0DD */
extern "C" __attribute__((visibility("default"))) int _vp8_0F696A706337DA56A43C3E088564448CCB76C01B01ECA44863D78742A416D0DD(void) {
    ALOGD("_vp8_0F696A706337DA56A43C3E088564448CCB76C01B01ECA44863D78742A416D0DD() called");
    return 0;
}

/* Demangled: _vp8_3C0F3A950AF34DF6CF80C4E25EA5D9BD4DD18D2C9340988A1A701A0D71A33BDA */
extern "C" __attribute__((visibility("default"))) int _vp8_3C0F3A950AF34DF6CF80C4E25EA5D9BD4DD18D2C9340988A1A701A0D71A33BDA(void) {
    ALOGD("_vp8_3C0F3A950AF34DF6CF80C4E25EA5D9BD4DD18D2C9340988A1A701A0D71A33BDA() called");
    return 0;
}

/* Demangled: _vp8_3C0F3A950AF34DF6CF80C4E25EA5D9BD83B4BC3705176F71F10D89F4EB5D05A0B0D74EF0A72D4FEDC54C8502B870F145 */
extern "C" __attribute__((visibility("default"))) int _vp8_3C0F3A950AF34DF6CF80C4E25EA5D9BD83B4BC3705176F71F10D89F4EB5D05A0B0D74EF0A72D4FEDC54C8502B870F145(void) {
    ALOGD("_vp8_3C0F3A950AF34DF6CF80C4E25EA5D9BD83B4BC3705176F71F10D89F4EB5D05A0B0D74EF0A72D4FEDC54C8502B870F145() called");
    return 0;
}

/* Demangled: _vp8_8710A93DDD5E32070AE510B9384CC7C1 */
extern "C" __attribute__((visibility("default"))) int _vp8_8710A93DDD5E32070AE510B9384CC7C1(void) {
    ALOGD("_vp8_8710A93DDD5E32070AE510B9384CC7C1() called");
    return 0;
}

/* Demangled: _vp8_F526C6D6237312C1CDE21AD077E8A1965E3879202E4B0FC8431826E4BE1237EB */
extern "C" __attribute__((visibility("default"))) int _vp8_F526C6D6237312C1CDE21AD077E8A1965E3879202E4B0FC8431826E4BE1237EB(void) {
    ALOGD("_vp8_F526C6D6237312C1CDE21AD077E8A1965E3879202E4B0FC8431826E4BE1237EB() called");
    return 0;
}

/* Demangled: _vp8_EF8E22CC2D4D6BB37AD76797CE199555 */
extern "C" __attribute__((visibility("default"))) int _vp8_EF8E22CC2D4D6BB37AD76797CE199555(void) {
    ALOGD("_vp8_EF8E22CC2D4D6BB37AD76797CE199555() called");
    return 0;
}

/* Demangled: _vp8_3AAC900070865D85D2BB161AFCC2556571B93CB916DFC982DF4937251155FB15 */
extern "C" __attribute__((visibility("default"))) int _vp8_3AAC900070865D85D2BB161AFCC2556571B93CB916DFC982DF4937251155FB15(void) {
    ALOGD("_vp8_3AAC900070865D85D2BB161AFCC2556571B93CB916DFC982DF4937251155FB15() called");
    return 0;
}

/* Demangled: _vp8_6EE404FF51A8B1696E86B901D45E9AD3001BFB8EADD76DCEB565E0FB99369C01 */
extern "C" __attribute__((visibility("default"))) int _vp8_6EE404FF51A8B1696E86B901D45E9AD3001BFB8EADD76DCEB565E0FB99369C01(void) {
    ALOGD("_vp8_6EE404FF51A8B1696E86B901D45E9AD3001BFB8EADD76DCEB565E0FB99369C01() called");
    return 0;
}

/* Demangled: _vp8_AEEE8E16C30AFA0DFA8F1F50DB3A09DF770A9D547BBEA23E6D9445E4CBE1E226 */
extern "C" __attribute__((visibility("default"))) int _vp8_AEEE8E16C30AFA0DFA8F1F50DB3A09DF770A9D547BBEA23E6D9445E4CBE1E226(void) {
    ALOGD("_vp8_AEEE8E16C30AFA0DFA8F1F50DB3A09DF770A9D547BBEA23E6D9445E4CBE1E226() called");
    return 0;
}

/* Demangled: _vp8_93DD8B041CD21947BF62854D7AF6112F8C309ECCB3EA3DE579F88397BEBB847F */
extern "C" __attribute__((visibility("default"))) int _vp8_93DD8B041CD21947BF62854D7AF6112F8C309ECCB3EA3DE579F88397BEBB847F(void) {
    ALOGD("_vp8_93DD8B041CD21947BF62854D7AF6112F8C309ECCB3EA3DE579F88397BEBB847F() called");
    return 0;
}

/* Demangled: _vp8_93DD8B041CD21947BF62854D7AF6112FB0A57835236848AB0735B99353B103F2 */
extern "C" __attribute__((visibility("default"))) int _vp8_93DD8B041CD21947BF62854D7AF6112FB0A57835236848AB0735B99353B103F2(void) {
    ALOGD("_vp8_93DD8B041CD21947BF62854D7AF6112FB0A57835236848AB0735B99353B103F2() called");
    return 0;
}

/* Demangled: _vp8_AFF6F87B8463F222C855C0E847B1EECB47AAAFF601B7B643031455FD7EE696E0 */
extern "C" __attribute__((visibility("default"))) int _vp8_AFF6F87B8463F222C855C0E847B1EECB47AAAFF601B7B643031455FD7EE696E0(void) {
    ALOGD("_vp8_AFF6F87B8463F222C855C0E847B1EECB47AAAFF601B7B643031455FD7EE696E0() called");
    return 0;
}

/* Demangled: _vp8_169CAD8DB95CC9F442C1A2B6AA2B444690586CCC10ADDD6FEBA40A49B48F55F53A1E26F1A62CF37A6C6087A0FA51DB51 */
extern "C" __attribute__((visibility("default"))) int _vp8_169CAD8DB95CC9F442C1A2B6AA2B444690586CCC10ADDD6FEBA40A49B48F55F53A1E26F1A62CF37A6C6087A0FA51DB51(void) {
    ALOGD("_vp8_169CAD8DB95CC9F442C1A2B6AA2B444690586CCC10ADDD6FEBA40A49B48F55F53A1E26F1A62CF37A6C6087A0FA51DB51() called");
    return 0;
}

/* Demangled: _vp8_E7F81B088864B29EA5F3504B5B187E73402444BD7313795FDA5FA5845A1E06F52DEF708986FE20A6B9D6EEDDE91FE979 */
extern "C" __attribute__((visibility("default"))) int _vp8_E7F81B088864B29EA5F3504B5B187E73402444BD7313795FDA5FA5845A1E06F52DEF708986FE20A6B9D6EEDDE91FE979(void) {
    ALOGD("_vp8_E7F81B088864B29EA5F3504B5B187E73402444BD7313795FDA5FA5845A1E06F52DEF708986FE20A6B9D6EEDDE91FE979() called");
    return 0;
}

/* Demangled: _vp8_2CCAC0671FB7910E475D1B2B6ADF10D21FEB07F12EB2F6F9FCD34CF896382C42 */
extern "C" __attribute__((visibility("default"))) int _vp8_2CCAC0671FB7910E475D1B2B6ADF10D21FEB07F12EB2F6F9FCD34CF896382C42(void) {
    ALOGD("_vp8_2CCAC0671FB7910E475D1B2B6ADF10D21FEB07F12EB2F6F9FCD34CF896382C42() called");
    return 0;
}

/* Demangled: _vp8_6D8F14DAC7697FD55409BEAD7DC63180 */
extern "C" __attribute__((visibility("default"))) int _vp8_6D8F14DAC7697FD55409BEAD7DC63180(void) {
    ALOGD("_vp8_6D8F14DAC7697FD55409BEAD7DC63180() called");
    return 0;
}

/* Exported Object: vp8_dct_value_cost_ptr */
extern "C" __attribute__((visibility("default"))) void* vp8_dct_value_cost_ptr = NULL;

/* Exported Object: vp8_dct_value_tokens_ptr */
extern "C" __attribute__((visibility("default"))) void* vp8_dct_value_tokens_ptr = NULL;

/* Demangled: _vp8_BB9FB2CF7887B58CC2E252EAD2B027962137EFF3329CEC036A998A21B7BA8494 */
extern "C" __attribute__((visibility("default"))) int _vp8_BB9FB2CF7887B58CC2E252EAD2B027962137EFF3329CEC036A998A21B7BA8494(void) {
    ALOGD("_vp8_BB9FB2CF7887B58CC2E252EAD2B027962137EFF3329CEC036A998A21B7BA8494() called");
    return 0;
}

/* Exported Object: vp8_block2above */
extern "C" __attribute__((visibility("default"))) void* vp8_block2above = NULL;

/* Exported Object: vp8_block2left */
extern "C" __attribute__((visibility("default"))) void* vp8_block2left = NULL;

/* Demangled: _vp8_3223120FD297607E9157868679B850665611FAEA91C301A0A5C9ADD33D1D6665 */
extern "C" __attribute__((visibility("default"))) int _vp8_3223120FD297607E9157868679B850665611FAEA91C301A0A5C9ADD33D1D6665(void) {
    ALOGD("_vp8_3223120FD297607E9157868679B850665611FAEA91C301A0A5C9ADD33D1D6665() called");
    return 0;
}

/* Demangled: _vp8_3223120FD297607E9157868679B850666603456C97752EEC2D36C4DDD7DC8D79 */
extern "C" __attribute__((visibility("default"))) int _vp8_3223120FD297607E9157868679B850666603456C97752EEC2D36C4DDD7DC8D79(void) {
    ALOGD("_vp8_3223120FD297607E9157868679B850666603456C97752EEC2D36C4DDD7DC8D79() called");
    return 0;
}

/* Demangled: _vp8_3223120FD297607E9157868679B8506690C48AAEA8F800E457B55264D357C58B */
extern "C" __attribute__((visibility("default"))) int _vp8_3223120FD297607E9157868679B8506690C48AAEA8F800E457B55264D357C58B(void) {
    ALOGD("_vp8_3223120FD297607E9157868679B8506690C48AAEA8F800E457B55264D357C58B() called");
    return 0;
}

/* Demangled: _vp8_3223120FD297607E9157868679B85066952C90DBB9D49B9AACC439B86CA37910 */
extern "C" __attribute__((visibility("default"))) int _vp8_3223120FD297607E9157868679B85066952C90DBB9D49B9AACC439B86CA37910(void) {
    ALOGD("_vp8_3223120FD297607E9157868679B85066952C90DBB9D49B9AACC439B86CA37910() called");
    return 0;
}

/* Demangled: _vp8_3223120FD297607E9157868679B85066BAEE65C8FC672CAE1A4B97275EBFEE1A */
extern "C" __attribute__((visibility("default"))) int _vp8_3223120FD297607E9157868679B85066BAEE65C8FC672CAE1A4B97275EBFEE1A(void) {
    ALOGD("_vp8_3223120FD297607E9157868679B85066BAEE65C8FC672CAE1A4B97275EBFEE1A() called");
    return 0;
}

/* Demangled: _vp8_3223120FD297607E9157868679B85066E1806A14132160C5D61FA74FD19F7368 */
extern "C" __attribute__((visibility("default"))) int _vp8_3223120FD297607E9157868679B85066E1806A14132160C5D61FA74FD19F7368(void) {
    ALOGD("_vp8_3223120FD297607E9157868679B85066E1806A14132160C5D61FA74FD19F7368() called");
    return 0;
}

/* Demangled: _vp8_454F75D04F54D4FD8E24E1BEA665C51C2137EFF3329CEC036A998A21B7BA8494 */
extern "C" __attribute__((visibility("default"))) int _vp8_454F75D04F54D4FD8E24E1BEA665C51C2137EFF3329CEC036A998A21B7BA8494(void) {
    ALOGD("_vp8_454F75D04F54D4FD8E24E1BEA665C51C2137EFF3329CEC036A998A21B7BA8494() called");
    return 0;
}

/* Demangled: _vp8_BE0AF8AF27AC10D5631F9C5B4D48F9DD988DCEC161CF98E85169D005250D7506 */
extern "C" __attribute__((visibility("default"))) int _vp8_BE0AF8AF27AC10D5631F9C5B4D48F9DD988DCEC161CF98E85169D005250D7506(void) {
    ALOGD("_vp8_BE0AF8AF27AC10D5631F9C5B4D48F9DD988DCEC161CF98E85169D005250D7506() called");
    return 0;
}

/* Demangled: _vp8_F243D9484DBE924C31AA1D1B56B4F04A7243CEF5D87E0881A2F7CBD99E8120B1 */
extern "C" __attribute__((visibility("default"))) int _vp8_F243D9484DBE924C31AA1D1B56B4F04A7243CEF5D87E0881A2F7CBD99E8120B1(void) {
    ALOGD("_vp8_F243D9484DBE924C31AA1D1B56B4F04A7243CEF5D87E0881A2F7CBD99E8120B1() called");
    return 0;
}

/* Demangled: _vp8_31D800D0E869B85670B670476BF463CA1804CFACF64ECE63F6F749494E22010E */
extern "C" __attribute__((visibility("default"))) int _vp8_31D800D0E869B85670B670476BF463CA1804CFACF64ECE63F6F749494E22010E(void) {
    ALOGD("_vp8_31D800D0E869B85670B670476BF463CA1804CFACF64ECE63F6F749494E22010E() called");
    return 0;
}

/* Demangled: _vp8_31D800D0E869B85670B670476BF463CA85A37E16B6AA53D6925C1340DDBEF856 */
extern "C" __attribute__((visibility("default"))) int _vp8_31D800D0E869B85670B670476BF463CA85A37E16B6AA53D6925C1340DDBEF856(void) {
    ALOGD("_vp8_31D800D0E869B85670B670476BF463CA85A37E16B6AA53D6925C1340DDBEF856() called");
    return 0;
}

/* Demangled: _vp8_1DB15A07A605B38074F021944829FE3B49C04C9241C33DBA13171DF7DA44A2F6 */
extern "C" __attribute__((visibility("default"))) int _vp8_1DB15A07A605B38074F021944829FE3B49C04C9241C33DBA13171DF7DA44A2F6(void) {
    ALOGD("_vp8_1DB15A07A605B38074F021944829FE3B49C04C9241C33DBA13171DF7DA44A2F6() called");
    return 0;
}

/* Demangled: _vp8_CE198D99A0F1598D68E35543467EDE746C5C575D368E1421CE2A6604A954AA1F */
extern "C" __attribute__((visibility("default"))) int _vp8_CE198D99A0F1598D68E35543467EDE746C5C575D368E1421CE2A6604A954AA1F(void) {
    ALOGD("_vp8_CE198D99A0F1598D68E35543467EDE746C5C575D368E1421CE2A6604A954AA1F() called");
    return 0;
}

/* Demangled: _vp8_8440A6A59E0A2512CD3116D2296BD08160D61DE8F253949DD1BFB34A69524CAF */
extern "C" __attribute__((visibility("default"))) int _vp8_8440A6A59E0A2512CD3116D2296BD08160D61DE8F253949DD1BFB34A69524CAF(void) {
    ALOGD("_vp8_8440A6A59E0A2512CD3116D2296BD08160D61DE8F253949DD1BFB34A69524CAF() called");
    return 0;
}

/* Demangled: _vp8_A3A4176F61FFBA8379E3289EDEB8C56CCE27A3DA494EC92E40CCC5DF27AB7631 */
extern "C" __attribute__((visibility("default"))) int _vp8_A3A4176F61FFBA8379E3289EDEB8C56CCE27A3DA494EC92E40CCC5DF27AB7631(void) {
    ALOGD("_vp8_A3A4176F61FFBA8379E3289EDEB8C56CCE27A3DA494EC92E40CCC5DF27AB7631() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
