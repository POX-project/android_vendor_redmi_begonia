.class Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;
.super Ljava/util/HashMap;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/HashMap<",
        "Ljava/lang/Integer;",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;)V
    .locals 4
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;

    .line 11182
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 11184
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_MFBI_PRIORITIZATION"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11185
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_AC_BAR_SKIP_MMTEL_VOICE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11186
    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_AC_BAR_SKIP_MMTEL_VIDEO"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11187
    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_AC_BAR_SKIP_SMS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11188
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_PLMN_SPECIFIC_AC_BAR"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11189
    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_PLMN_SPECIFIC_SSAC"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11190
    const/4 v0, 0x6

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_RRC_CONN_TEMP_FAIL_OFFSET"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11191
    const/4 v0, 0x7

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_INCMON_EUTRA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11192
    const/16 v0, 0x8

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_INCMON_UTRA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11193
    const/16 v0, 0x9

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_CELL_SPECIFIC_TTT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11194
    const/16 v0, 0xa

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_FAST_RLF_REC_WITH_T312"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11195
    const/16 v0, 0xb

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_RSRQ_LOWER_VALUE_RANGE_EXT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11196
    const/16 v0, 0xc

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_ENH_HARQ_TTI_BUND_FOR_FDD"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11197
    const/16 v0, 0xd

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_LOG_CH_SR_PROHIBIT_TIMER"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11198
    const/16 v0, 0xe

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_MOB_HIST_REPORTING"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11199
    const/16 v0, 0xf

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_SHORTER_MCH_SCHED_PERIOD"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11200
    const/16 v0, 0x10

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_IDC_ENH_FOR_UL_CA"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11201
    const/16 v0, 0x11

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_LOGGED_MDT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11202
    const/16 v0, 0x12

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_IMMED_MDT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11203
    const/16 v0, 0x13

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_EICIC_SF_PATTERN"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11204
    const/16 v0, 0x14

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_EICIC_DEDICATED_SIB1"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11205
    const/16 v0, 0x15

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_MBSFN_AREA_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11206
    const/16 v0, 0x16

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_UL_64QAM_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11207
    const/16 v0, 0x17

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_EAB_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11208
    const/16 v0, 0x18

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_DL_256QAM"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11209
    const/16 v0, 0x19

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_4G_BAND"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11210
    const/16 v0, 0x1a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_OOS_CAUSE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11211
    const/16 v0, 0x1b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_LTE_INTER_FREQ_RESEL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11212
    const/16 v0, 0x1c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_LTE_FDD_TDD_RESEL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11213
    const/16 v0, 0x1d

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_LTE_FDD_TDD_REDIRECT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11214
    const/16 v0, 0x1e

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_4G3_CSFB_REDIRECT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11215
    const/16 v0, 0x1f

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_4G2_CSFB_REDIRECT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11216
    const/16 v0, 0x20

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_IMS_ECC_SUPPORT"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11217
    const/16 v0, 0x21

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_FOUR_LAYERS_MIMO_PCELL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11218
    const/16 v0, 0x22

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_FOUR_LAYERS_MIMO_SCELL"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11219
    const/16 v0, 0x23

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_CONN_REL_TRIGGER_A2"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11220
    const/16 v0, 0x24

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_TM8_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11221
    const/16 v0, 0x25

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_TM9_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11222
    const/16 v0, 0x26

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_SRS_TX_ANT_SWITCH_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11223
    const/16 v0, 0x27

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_SRS_ENHANCEMENT_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11224
    const/16 v0, 0x28

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_DMRS_ENHANCEMENT_DETECTED"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11225
    const/16 v0, 0x29

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "ERRC_FEAT_EICIC_DETECTED"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11226
    const/16 v0, 0x2a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v3, "ERRC_FEAT_FEICIC_DETECTED"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11227
    const/16 v0, 0x2b

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11228
    const/16 v0, 0x2c

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11229
    const/16 v0, 0x2d

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11230
    const/16 v0, 0x2e

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_TRANS_MODE"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11231
    const/16 v0, 0x2f

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ERRC_FEAT_DL_LAYERS"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ErrcFeatureDetection$1;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11232
    return-void
.end method
