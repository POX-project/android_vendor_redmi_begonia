/*
 * Reverse-Engineered Source for: libstagefright_amrnb_common.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_amrnb_common"

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
#include "libstagefright_amrnb_common.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: bitno_MR515 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR515 = NULL;

/* Demangled: Copy */
extern "C" __attribute__((visibility("default"))) int Copy(void) {
    ALOGD("Copy() called");
    return 0;
}

/* Demangled: Q_plsf_5 */
extern "C" __attribute__((visibility("default"))) int Q_plsf_5(void) {
    ALOGD("Q_plsf_5() called");
    return 0;
}

/* Demangled: Set_zero */
extern "C" __attribute__((visibility("default"))) int Set_zero(void) {
    ALOGD("Set_zero() called");
    return 0;
}

/* Exported Object: numCompressedBytes */
extern "C" __attribute__((visibility("default"))) void* numCompressedBytes = NULL;

/* Demangled: gc_pred_reset */
extern "C" __attribute__((visibility("default"))) int gc_pred_reset(void) {
    ALOGD("gc_pred_reset() called");
    return 0;
}

/* Exported Object: table */
extern "C" __attribute__((visibility("default"))) void* table = NULL;

/* Demangled: Pow2 */
extern "C" __attribute__((visibility("default"))) int Pow2(void) {
    ALOGD("Pow2() called");
    return 0;
}

/* Exported Object: pred_fac_3 */
extern "C" __attribute__((visibility("default"))) void* pred_fac_3 = NULL;

/* Demangled: Chebps_Wrapper(short, short*, short, int*) */
extern "C" __attribute__((visibility("default"))) int _Z14Chebps_WrappersPssPi(void) {
    ALOGD("_Z14Chebps_WrappersPssPi() called");
    return 0;
}

/* Demangled: Int_lpc_1and3 */
extern "C" __attribute__((visibility("default"))) int Int_lpc_1and3(void) {
    ALOGD("Int_lpc_1and3() called");
    return 0;
}

/* Exported Object: mean_lsf_3 */
extern "C" __attribute__((visibility("default"))) void* mean_lsf_3 = NULL;

/* Demangled: vad1_exit */
extern "C" __attribute__((visibility("default"))) int vad1_exit(void) {
    ALOGD("vad1_exit() called");
    return 0;
}

/* Exported Object: startPos */
extern "C" __attribute__((visibility("default"))) void* startPos = NULL;

/* Demangled: Int_lpc_1to3_2 */
extern "C" __attribute__((visibility("default"))) int Int_lpc_1to3_2(void) {
    ALOGD("Int_lpc_1to3_2() called");
    return 0;
}

/* Demangled: Q_plsf_init */
extern "C" __attribute__((visibility("default"))) int Q_plsf_init(void) {
    ALOGD("Q_plsf_init() called");
    return 0;
}

/* Exported Object: mr795_1_lsf */
extern "C" __attribute__((visibility("default"))) void* mr795_1_lsf = NULL;

/* Exported Object: table_gain_lowrates */
extern "C" __attribute__((visibility("default"))) void* table_gain_lowrates = NULL;

/* Demangled: vad1 */
extern "C" __attribute__((visibility("default"))) int vad1(void) {
    ALOGD("vad1() called");
    return 0;
}

/* Exported Object: reorderBits_MR475 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR475 = NULL;

/* Demangled: Div_32 */
extern "C" __attribute__((visibility("default"))) int Div_32(void) {
    ALOGD("Div_32() called");
    return 0;
}

/* Exported Object: qua_gain_code */
extern "C" __attribute__((visibility("default"))) void* qua_gain_code = NULL;

/* Demangled: Lsf_lsp */
extern "C" __attribute__((visibility("default"))) int Lsf_lsp(void) {
    ALOGD("Lsf_lsp() called");
    return 0;
}

/* Exported Object: mean_lsf_5 */
extern "C" __attribute__((visibility("default"))) void* mean_lsf_5 = NULL;

/* Demangled: norm_s */
extern "C" __attribute__((visibility("default"))) int norm_s(void) {
    ALOGD("norm_s() called");
    return 0;
}

/* Exported Object: bitno_MRDTX */
extern "C" __attribute__((visibility("default"))) void* bitno_MRDTX = NULL;

/* Exported Object: table_gain_highrates */
extern "C" __attribute__((visibility("default"))) void* table_gain_highrates = NULL;

/* Demangled: Residu */
extern "C" __attribute__((visibility("default"))) int Residu(void) {
    ALOGD("Residu() called");
    return 0;
}

/* Demangled: div_s */
extern "C" __attribute__((visibility("default"))) int div_s(void) {
    ALOGD("div_s() called");
    return 0;
}

/* Demangled: L_shr_r */
extern "C" __attribute__((visibility("default"))) int L_shr_r(void) {
    ALOGD("L_shr_r() called");
    return 0;
}

/* Exported Object: pow2_tbl */
extern "C" __attribute__((visibility("default"))) void* pow2_tbl = NULL;

/* Demangled: Test_Vq_subvec3(short*, short const*, short*, short, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15Test_Vq_subvec3PsPKsS_siPi(void) {
    ALOGD("_Z15Test_Vq_subvec3PsPKsS_siPi() called");
    return 0;
}

/* Exported Object: dico4_lsf_5 */
extern "C" __attribute__((visibility("default"))) void* dico4_lsf_5 = NULL;

/* Exported Object: reorderBits_MR795 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR795 = NULL;

/* Exported Object: qua_gain_pitch */
extern "C" __attribute__((visibility("default"))) void* qua_gain_pitch = NULL;

/* Exported Object: prmnofsf */
extern "C" __attribute__((visibility("default"))) void* prmnofsf = NULL;

/* Demangled: gc_pred_average_limited */
extern "C" __attribute__((visibility("default"))) int gc_pred_average_limited(void) {
    ALOGD("gc_pred_average_limited() called");
    return 0;
}

/* Demangled: pv_round */
extern "C" __attribute__((visibility("default"))) int pv_round(void) {
    ALOGD("pv_round() called");
    return 0;
}

/* Demangled: Weight_Ai */
extern "C" __attribute__((visibility("default"))) int Weight_Ai(void) {
    ALOGD("Weight_Ai() called");
    return 0;
}

/* Exported Object: window_160_80 */
extern "C" __attribute__((visibility("default"))) void* window_160_80 = NULL;

/* Exported Object: bitno_MR475 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR475 = NULL;

/* Demangled: vad1_reset */
extern "C" __attribute__((visibility("default"))) int vad1_reset(void) {
    ALOGD("vad1_reset() called");
    return 0;
}

/* Demangled: add */
extern "C" __attribute__((visibility("default"))) int add(void) {
    ALOGD("add() called");
    return 0;
}

/* Demangled: Lsp_Az */
extern "C" __attribute__((visibility("default"))) int Lsp_Az(void) {
    ALOGD("Lsp_Az() called");
    return 0;
}

/* Exported Object: log2_tbl */
extern "C" __attribute__((visibility("default"))) void* log2_tbl = NULL;

/* Demangled: Test_Vq_subvec4(short*, short const*, short*, short, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15Test_Vq_subvec4PsPKsS_sPi(void) {
    ALOGD("_Z15Test_Vq_subvec4PsPKsS_sPi() called");
    return 0;
}

/* Exported Object: prmno */
extern "C" __attribute__((visibility("default"))) void* prmno = NULL;

/* Demangled: sub */
extern "C" __attribute__((visibility("default"))) int sub(void) {
    ALOGD("sub() called");
    return 0;
}

/* Exported Object: mr515_3_lsf */
extern "C" __attribute__((visibility("default"))) void* mr515_3_lsf = NULL;

/* Demangled: vad_complex_detection_update */
extern "C" __attribute__((visibility("default"))) int vad_complex_detection_update(void) {
    ALOGD("vad_complex_detection_update() called");
    return 0;
}

/* Demangled: Az_lsp */
extern "C" __attribute__((visibility("default"))) int Az_lsp(void) {
    ALOGD("Az_lsp() called");
    return 0;
}

/* Demangled: Bits2prm */
extern "C" __attribute__((visibility("default"))) int Bits2prm(void) {
    ALOGD("Bits2prm() called");
    return 0;
}

/* Demangled: L_abs */
extern "C" __attribute__((visibility("default"))) int L_abs(void) {
    ALOGD("L_abs() called");
    return 0;
}

/* Exported Object: bitno_MR59 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR59 = NULL;

/* Exported Object: reorderBits_MR102 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR102 = NULL;

/* Demangled: extract_h */
extern "C" __attribute__((visibility("default"))) int extract_h(void) {
    ALOGD("extract_h() called");
    return 0;
}

/* Exported Object: bitno_MR67 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR67 = NULL;

/* Exported Object: bitno_MR74 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR74 = NULL;

/* Exported Object: reorderBits */
extern "C" __attribute__((visibility("default"))) void* reorderBits = NULL;

/* Exported Object: reorderBits_MR59 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR59 = NULL;

/* Exported Object: ph_imp_low_MR795 */
extern "C" __attribute__((visibility("default"))) void* ph_imp_low_MR795 = NULL;

/* Demangled: Pred_lt_3or6 */
extern "C" __attribute__((visibility("default"))) int Pred_lt_3or6(void) {
    ALOGD("Pred_lt_3or6() called");
    return 0;
}

/* Exported Object: reorderBits_MR67 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR67 = NULL;

/* Exported Object: reorderBits_MR74 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR74 = NULL;

/* Demangled: gmed_n */
extern "C" __attribute__((visibility("default"))) int gmed_n(void) {
    ALOGD("gmed_n() called");
    return 0;
}

/* Demangled: Q_plsf_exit */
extern "C" __attribute__((visibility("default"))) int Q_plsf_exit(void) {
    ALOGD("Q_plsf_exit() called");
    return 0;
}

/* Exported Object: dico5_lsf_5 */
extern "C" __attribute__((visibility("default"))) void* dico5_lsf_5 = NULL;

/* Demangled: Lsf_wt */
extern "C" __attribute__((visibility("default"))) int Lsf_wt(void) {
    ALOGD("Lsf_wt() called");
    return 0;
}

/* Demangled: Q_plsf_reset */
extern "C" __attribute__((visibility("default"))) int Q_plsf_reset(void) {
    ALOGD("Q_plsf_reset() called");
    return 0;
}

/* Demangled: lsp */
extern "C" __attribute__((visibility("default"))) int lsp(void) {
    ALOGD("lsp() called");
    return 0;
}

/* Demangled: Get_lsp_pol_wrapper(short*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z19Get_lsp_pol_wrapperPsPiS0_(void) {
    ALOGD("_Z19Get_lsp_pol_wrapperPsPiS0_() called");
    return 0;
}

/* Exported Object: slope */
extern "C" __attribute__((visibility("default"))) void* slope = NULL;

/* Exported Object: dico2_lsf_3 */
extern "C" __attribute__((visibility("default"))) void* dico2_lsf_3 = NULL;

/* Demangled: sqrt_l_exp */
extern "C" __attribute__((visibility("default"))) int sqrt_l_exp(void) {
    ALOGD("sqrt_l_exp() called");
    return 0;
}

/* Exported Object: window_232_8 */
extern "C" __attribute__((visibility("default"))) void* window_232_8 = NULL;

/* Exported Object: bitno */
extern "C" __attribute__((visibility("default"))) void* bitno = NULL;

/* Demangled: extract_l */
extern "C" __attribute__((visibility("default"))) int extract_l(void) {
    ALOGD("extract_l() called");
    return 0;
}

/* Demangled: Inv_sqrt */
extern "C" __attribute__((visibility("default"))) int Inv_sqrt(void) {
    ALOGD("Inv_sqrt() called");
    return 0;
}

/* Demangled: lsp_init */
extern "C" __attribute__((visibility("default"))) int lsp_init(void) {
    ALOGD("lsp_init() called");
    return 0;
}

/* Demangled: shr_r */
extern "C" __attribute__((visibility("default"))) int shr_r(void) {
    ALOGD("shr_r() called");
    return 0;
}

/* Exported Object: bitno_MR102 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR102 = NULL;

/* Demangled: Log2_norm */
extern "C" __attribute__((visibility("default"))) int Log2_norm(void) {
    ALOGD("Log2_norm() called");
    return 0;
}

/* Exported Object: dgray */
extern "C" __attribute__((visibility("default"))) void* dgray = NULL;

/* Demangled: shr */
extern "C" __attribute__((visibility("default"))) int shr(void) {
    ALOGD("shr() called");
    return 0;
}

/* Exported Object: lsp_init_data */
extern "C" __attribute__((visibility("default"))) void* lsp_init_data = NULL;

/* Demangled: Reorder_lsf */
extern "C" __attribute__((visibility("default"))) int Reorder_lsf(void) {
    ALOGD("Reorder_lsf() called");
    return 0;
}

/* Exported Object: dico2_lsf_5 */
extern "C" __attribute__((visibility("default"))) void* dico2_lsf_5 = NULL;

/* Exported Object: reorderBits_MR122 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR122 = NULL;

/* Demangled: gc_pred_update */
extern "C" __attribute__((visibility("default"))) int gc_pred_update(void) {
    ALOGD("gc_pred_update() called");
    return 0;
}

/* Demangled: vad_pitch_detection */
extern "C" __attribute__((visibility("default"))) int vad_pitch_detection(void) {
    ALOGD("vad_pitch_detection() called");
    return 0;
}

/* Demangled: vad1_init */
extern "C" __attribute__((visibility("default"))) int vad1_init(void) {
    ALOGD("vad1_init() called");
    return 0;
}

/* Demangled: L_deposit_h */
extern "C" __attribute__((visibility("default"))) int L_deposit_h(void) {
    ALOGD("L_deposit_h() called");
    return 0;
}

/* Exported Object: sqrt_l_tbl */
extern "C" __attribute__((visibility("default"))) void* sqrt_l_tbl = NULL;

/* Demangled: vad_tone_detection */
extern "C" __attribute__((visibility("default"))) int vad_tone_detection(void) {
    ALOGD("vad_tone_detection() called");
    return 0;
}

/* Exported Object: numOfBits */
extern "C" __attribute__((visibility("default"))) void* numOfBits = NULL;

/* Demangled: gc_pred */
extern "C" __attribute__((visibility("default"))) int gc_pred(void) {
    ALOGD("gc_pred() called");
    return 0;
}

/* Exported Object: dico1_lsf_3 */
extern "C" __attribute__((visibility("default"))) void* dico1_lsf_3 = NULL;

/* Exported Object: window_200_40 */
extern "C" __attribute__((visibility("default"))) void* window_200_40 = NULL;

/* Exported Object: bitno_MR122 */
extern "C" __attribute__((visibility("default"))) void* bitno_MR122 = NULL;

/* Exported Object: gray */
extern "C" __attribute__((visibility("default"))) void* gray = NULL;

/* Demangled: Int_lpc_1to3 */
extern "C" __attribute__((visibility("default"))) int Int_lpc_1to3(void) {
    ALOGD("Int_lpc_1to3() called");
    return 0;
}

/* Demangled: Lsp_lsf */
extern "C" __attribute__((visibility("default"))) int Lsp_lsf(void) {
    ALOGD("Lsp_lsf() called");
    return 0;
}

/* Exported Object: ph_imp_mid_MR795 */
extern "C" __attribute__((visibility("default"))) void* ph_imp_mid_MR795 = NULL;

/* Exported Object: past_rq_init */
extern "C" __attribute__((visibility("default"))) void* past_rq_init = NULL;

/* Exported Object: reorderBits_MR515 */
extern "C" __attribute__((visibility("default"))) void* reorderBits_MR515 = NULL;

/* Demangled: Log2 */
extern "C" __attribute__((visibility("default"))) int Log2(void) {
    ALOGD("Log2() called");
    return 0;
}

/* Demangled: L_deposit_l */
extern "C" __attribute__((visibility("default"))) int L_deposit_l(void) {
    ALOGD("L_deposit_l() called");
    return 0;
}

/* Exported Object: dico3_lsf_3 */
extern "C" __attribute__((visibility("default"))) void* dico3_lsf_3 = NULL;

/* Exported Object: dico1_lsf_5 */
extern "C" __attribute__((visibility("default"))) void* dico1_lsf_5 = NULL;

/* Exported Object: grid */
extern "C" __attribute__((visibility("default"))) void* grid = NULL;

/* Demangled: Int_lpc_1and3_2 */
extern "C" __attribute__((visibility("default"))) int Int_lpc_1and3_2(void) {
    ALOGD("Int_lpc_1and3_2() called");
    return 0;
}

/* Exported Object: ph_imp_low */
extern "C" __attribute__((visibility("default"))) void* ph_imp_low = NULL;

/* Exported Object: dico3_lsf_5 */
extern "C" __attribute__((visibility("default"))) void* dico3_lsf_5 = NULL;

/* Demangled: vad_tone_detection_update */
extern "C" __attribute__((visibility("default"))) int vad_tone_detection_update(void) {
    ALOGD("vad_tone_detection_update() called");
    return 0;
}

/* Demangled: norm_l */
extern "C" __attribute__((visibility("default"))) int norm_l(void) {
    ALOGD("norm_l() called");
    return 0;
}

/* Exported Object: inv_sqrt_tbl */
extern "C" __attribute__((visibility("default"))) void* inv_sqrt_tbl = NULL;

/* Demangled: Q_plsf_3 */
extern "C" __attribute__((visibility("default"))) int Q_plsf_3(void) {
    ALOGD("Q_plsf_3() called");
    return 0;
}

/* Demangled: lsp_reset */
extern "C" __attribute__((visibility("default"))) int lsp_reset(void) {
    ALOGD("lsp_reset() called");
    return 0;
}

/* Demangled: mult_r */
extern "C" __attribute__((visibility("default"))) int mult_r(void) {
    ALOGD("mult_r() called");
    return 0;
}

/* Demangled: lsp_exit */
extern "C" __attribute__((visibility("default"))) int lsp_exit(void) {
    ALOGD("lsp_exit() called");
    return 0;
}

/* Exported Object: ph_imp_mid */
extern "C" __attribute__((visibility("default"))) void* ph_imp_mid = NULL;

/* Demangled: Syn_filt */
extern "C" __attribute__((visibility("default"))) int Syn_filt(void) {
    ALOGD("Syn_filt() called");
    return 0;
}
