.class public Lcom/mediatek/engineermode/vilte/VilteMenuMedia;
.super Landroid/app/Activity;
.source "VilteMenuMedia.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private final PROP_VILTE_OPTEST_MA:Ljava/lang/String;

.field private final PROP_VILTE_OPTEST_MM:Ljava/lang/String;

.field private final PROP_VILTE_OPTEST_RTP:Ljava/lang/String;

.field private final PROP_VILTE_VT_DE_DIFF:Ljava/lang/String;

.field private final PROP_VILTE_VT_DE_START:Ljava/lang/String;

.field private final PROP_VILTE_VT_DOWN_GRADE_TH:Ljava/lang/String;

.field private final PROP_VILTE_VT_RTP_QDURHW:Ljava/lang/String;

.field private final PROP_VILTE_VT_RTP_RES1:Ljava/lang/String;

.field private final PROP_VILTE_VT_RTP_RES2:Ljava/lang/String;

.field private final TAG:Ljava/lang/String;

.field private mVilte_Reserved1_view:Landroid/widget/TextView;

.field private mVilte_Reserved2_view:Landroid/widget/TextView;

.field private mVilte_TX_fallback_queue_time_view:Landroid/widget/TextView;

.field private mVilte_customize_status_view:Landroid/widget/TextView;

.field private mVilte_downgrade_packetlost_view:Landroid/widget/TextView;

.field private mVilte_ma_view:Landroid/widget/TextView;

.field private mVilte_operator_media_customize_mode_disable:Landroid/widget/Button;

.field private mVilte_operator_media_customize_mode_enable:Landroid/widget/Button;

.field private mVilte_operator_media_downgrade_packetlost_set:Landroid/widget/Button;

.field private mVilte_operator_media_downgrade_packetlost_values:Landroid/widget/EditText;

.field private mVilte_operator_media_ma_set:Landroid/widget/Button;

.field private mVilte_operator_media_ma_values:Landroid/widget/EditText;

.field private mVilte_operator_media_rtp_set:Landroid/widget/Button;

.field private mVilte_operator_media_rtp_values:Landroid/widget/EditText;

.field private mVilte_operator_media_tmmbr_decrease_diff_set:Landroid/widget/Button;

.field private mVilte_operator_media_tmmbr_decrease_diff_values:Landroid/widget/EditText;

.field private mVilte_operator_media_tmmbr_decrease_start_set:Landroid/widget/Button;

.field private mVilte_operator_media_tmmbr_decrease_start_values:Landroid/widget/EditText;

.field private mVilte_operator_media_tmmbr_reserved1_set:Landroid/widget/Button;

.field private mVilte_operator_media_tmmbr_reserved1_values:Landroid/widget/EditText;

.field private mVilte_operator_media_tmmbr_reserved2_set:Landroid/widget/Button;

.field private mVilte_operator_media_tmmbr_reserved2_values:Landroid/widget/EditText;

.field private mVilte_operator_media_tx_fallback_set:Landroid/widget/Button;

.field private mVilte_operator_media_tx_fallback_values:Landroid/widget/EditText;

.field private mVilte_rtp_view:Landroid/widget/TextView;

.field private mVilte_tmmbr_decrease_diff_view:Landroid/widget/TextView;

.field private mVilte_tmmbr_decrease_start_view:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 16
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 17
    const-string v0, "Vilte/MenuMedia"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->TAG:Ljava/lang/String;

    .line 19
    const-string v0, "persist.vendor.vt.OPTest_MM"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_OPTEST_MM:Ljava/lang/String;

    .line 20
    const-string v0, "persist.vendor.vt.OPTest_RTP"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_OPTEST_RTP:Ljava/lang/String;

    .line 21
    const-string v0, "persist.vendor.vt.OPTest_MA"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_OPTEST_MA:Ljava/lang/String;

    .line 22
    const-string v0, "persist.vendor.vt.rtpQDurHW"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_VT_RTP_QDURHW:Ljava/lang/String;

    .line 23
    const-string v0, "persist.vendor.vt.DownGradeTH"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_VT_DOWN_GRADE_TH:Ljava/lang/String;

    .line 24
    const-string v0, "persist.vendor.vt.de_start"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_VT_DE_START:Ljava/lang/String;

    .line 25
    const-string v0, "persist.vendor.vt.de_diff"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_VT_DE_DIFF:Ljava/lang/String;

    .line 26
    const-string v0, "persist.vendor.vt.rtp_res1"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_VT_RTP_RES1:Ljava/lang/String;

    .line 27
    const-string v0, "persist.vendor.vt.rtp_res2"

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->PROP_VILTE_VT_RTP_RES2:Ljava/lang/String;

    return-void
.end method

.method private bindViews()V
    .locals 1

    .line 265
    const v0, 0x7f060793

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_customize_mode_enable:Landroid/widget/Button;

    .line 267
    const v0, 0x7f060792

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_customize_mode_disable:Landroid/widget/Button;

    .line 269
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_customize_mode_enable:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_customize_mode_disable:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 272
    const v0, 0x7f060799

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_values:Landroid/widget/EditText;

    .line 274
    const v0, 0x7f060798

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_set:Landroid/widget/Button;

    .line 275
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 277
    const v0, 0x7f060797

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_values:Landroid/widget/EditText;

    .line 279
    const v0, 0x7f060796

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_set:Landroid/widget/Button;

    .line 280
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 282
    const v0, 0x7f0607a3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tx_fallback_values:Landroid/widget/EditText;

    .line 284
    const v0, 0x7f0607a2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tx_fallback_set:Landroid/widget/Button;

    .line 286
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 289
    const v0, 0x7f060795

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_values:Landroid/widget/EditText;

    .line 291
    const v0, 0x7f060794

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_set:Landroid/widget/Button;

    .line 293
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 295
    const v0, 0x7f06079d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_values:Landroid/widget/EditText;

    .line 297
    const v0, 0x7f06079c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_set:Landroid/widget/Button;

    .line 299
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 302
    const v0, 0x7f06079b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_values:Landroid/widget/EditText;

    .line 304
    const v0, 0x7f06079a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_set:Landroid/widget/Button;

    .line 306
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 309
    const v0, 0x7f06079f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved1_values:Landroid/widget/EditText;

    .line 311
    const v0, 0x7f06079e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved1_set:Landroid/widget/Button;

    .line 313
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 315
    const v0, 0x7f0607a1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved2_values:Landroid/widget/EditText;

    .line 317
    const v0, 0x7f0607a0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved2_set:Landroid/widget/Button;

    .line 319
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 321
    const v0, 0x7f060782

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_customize_status_view:Landroid/widget/TextView;

    .line 322
    const v0, 0x7f0607a5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_rtp_view:Landroid/widget/TextView;

    .line 323
    const v0, 0x7f06078a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_ma_view:Landroid/widget/TextView;

    .line 324
    const v0, 0x7f06077b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_TX_fallback_queue_time_view:Landroid/widget/TextView;

    .line 326
    const v0, 0x7f060789

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_downgrade_packetlost_view:Landroid/widget/TextView;

    .line 328
    const v0, 0x7f0607b0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_tmmbr_decrease_start_view:Landroid/widget/TextView;

    .line 330
    const v0, 0x7f0607af

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_tmmbr_decrease_diff_view:Landroid/widget/TextView;

    .line 332
    const v0, 0x7f060779

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_Reserved1_view:Landroid/widget/TextView;

    .line 333
    const v0, 0x7f06077a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_Reserved2_view:Landroid/widget/TextView;

    .line 334
    return-void
.end method

.method private queryCurrentValue()V
    .locals 12

    .line 72
    const-string v0, "persist.vendor.vt.OPTest_MM"

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 73
    .local v0, "mm":Ljava/lang/String;
    const-string v2, "persist.vendor.vt.OPTest_RTP"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 74
    .local v2, "rtp":Ljava/lang/String;
    const-string v3, "persist.vendor.vt.OPTest_MA"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 75
    .local v3, "ma":Ljava/lang/String;
    const-string v4, "persist.vendor.vt.rtpQDurHW"

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 76
    .local v4, "rtp_qdurhw":Ljava/lang/String;
    const-string v5, "persist.vendor.vt.DownGradeTH"

    invoke-static {v5, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 77
    .local v5, "down_grade_th":Ljava/lang/String;
    const-string v6, "persist.vendor.vt.de_start"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 78
    .local v6, "de_start":Ljava/lang/String;
    const-string v7, "persist.vendor.vt.de_diff"

    invoke-static {v7, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 79
    .local v7, "de_diff":Ljava/lang/String;
    const-string v8, "persist.vendor.vt.rtp_res1"

    invoke-static {v8, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 80
    .local v8, "rtp_res1":Ljava/lang/String;
    const-string v9, "persist.vendor.vt.rtp_res2"

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 82
    .local v1, "rtp_res2":Ljava/lang/String;
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_customize_status_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.OPTest_MM = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 84
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_rtp_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.OPTest_RTP = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 85
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_values:Landroid/widget/EditText;

    invoke-virtual {v9, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 87
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_ma_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.OPTest_MA = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 88
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_values:Landroid/widget/EditText;

    invoke-virtual {v9, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 91
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_TX_fallback_queue_time_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.rtpQDurHW = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 92
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tx_fallback_values:Landroid/widget/EditText;

    invoke-virtual {v9, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 95
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_downgrade_packetlost_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.DownGradeTH = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 97
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_values:Landroid/widget/EditText;

    invoke-virtual {v9, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 100
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_tmmbr_decrease_start_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.de_start = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 101
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_values:Landroid/widget/EditText;

    invoke-virtual {v9, v6}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 104
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_tmmbr_decrease_diff_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.de_diff = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 105
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_values:Landroid/widget/EditText;

    invoke-virtual {v9, v7}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 108
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_Reserved1_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.rtp_res1 = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 109
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved1_values:Landroid/widget/EditText;

    invoke-virtual {v9, v8}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 111
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_Reserved2_view:Landroid/widget/TextView;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "persist.vendor.vt.rtp_res2 = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 112
    iget-object v9, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved2_values:Landroid/widget/EditText;

    invoke-virtual {v9, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 114
    return-void
.end method


# virtual methods
.method checkValue(Landroid/view/View;Ljava/lang/String;)Z
    .locals 4
    .param p1, "v"    # Landroid/view/View;
    .param p2, "values"    # Ljava/lang/String;

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_set:Landroid/widget/Button;

    const-string v1, "value should be 16 HEX"

    const/4 v2, 0x0

    if-eq p1, v0, :cond_4

    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_0

    goto :goto_0

    .line 125
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_set:Landroid/widget/Button;

    if-eq p1, v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_set:Landroid/widget/Button;

    if-eq p1, v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_5

    .line 128
    :cond_1
    const-string v0, ""

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 129
    return v2

    .line 131
    :cond_2
    const/16 v0, 0xa

    invoke-static {p2, v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v0

    .line 132
    .local v0, "value":I
    if-ltz v0, :cond_3

    const/16 v3, 0x64

    if-le v0, v3, :cond_5

    .line 133
    :cond_3
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 134
    return v2

    .line 120
    .end local v0    # "value":I
    :cond_4
    :goto_0
    const/16 v0, 0x10

    :try_start_0
    invoke-static {p2, v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 124
    nop

    .line 137
    :cond_5
    const/4 v0, 0x1

    return v0

    .line 121
    :catch_0
    move-exception v0

    .line 122
    .local v0, "e":Ljava/lang/NumberFormatException;
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 123
    return v2
.end method

.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 142
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_customize_mode_enable:Landroid/widget/Button;

    const-string v1, "persist.vendor.vt.OPTest_MM"

    const-string v2, "set property failed ..."

    const-string v3, "Vilte/MenuMedia"

    if-ne p1, v0, :cond_0

    .line 143
    const-string v0, "Set persist.vendor.vt.OPTest_MM = 1"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v4, "1"

    invoke-interface {v0, v1, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 147
    :catch_0
    move-exception v0

    .line 148
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 149
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    goto/16 :goto_e

    .line 151
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_customize_mode_disable:Landroid/widget/Button;

    if-ne p1, v0, :cond_1

    .line 152
    const-string v0, "Set persist.vendor.vt.OPTest_MM = 0"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v4, "0"

    invoke-interface {v0, v1, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    .line 156
    :catch_1
    move-exception v0

    .line 157
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 158
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    goto/16 :goto_e

    .line 160
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_set:Landroid/widget/Button;

    const-string v1, "Input value format error "

    const/4 v4, 0x1

    if-ne p1, v0, :cond_3

    .line 161
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 162
    .local v0, "value":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_rtp_set:Landroid/widget/Button;

    invoke-virtual {p0, v5, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->checkValue(Landroid/view/View;Ljava/lang/String;)Z

    move-result v5

    if-ne v5, v4, :cond_2

    .line 163
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.OPTest_RTP = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    :try_start_2
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.OPTest_RTP"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    .line 167
    :catch_2
    move-exception v1

    .line 168
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 169
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_2
    goto :goto_3

    .line 172
    :cond_2
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    .end local v0    # "value":Ljava/lang/String;
    :goto_3
    goto/16 :goto_e

    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_5

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 176
    .restart local v0    # "value":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_ma_set:Landroid/widget/Button;

    invoke-virtual {p0, v5, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->checkValue(Landroid/view/View;Ljava/lang/String;)Z

    move-result v5

    if-ne v5, v4, :cond_4

    .line 177
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.OPTest_MA = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    :try_start_3
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.OPTest_MA"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_4

    .line 181
    :catch_3
    move-exception v1

    .line 182
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 183
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_4
    goto :goto_5

    .line 186
    :cond_4
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    .end local v0    # "value":Ljava/lang/String;
    :goto_5
    goto/16 :goto_e

    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tx_fallback_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_6

    .line 189
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tx_fallback_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 190
    .restart local v0    # "value":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.rtpQDurHW = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    :try_start_4
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.rtpQDurHW"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    .line 197
    goto :goto_6

    .line 194
    :catch_4
    move-exception v1

    .line 195
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 196
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    .end local v0    # "value":Ljava/lang/String;
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_6
    goto/16 :goto_e

    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_8

    .line 199
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 200
    .restart local v0    # "value":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_downgrade_packetlost_set:Landroid/widget/Button;

    invoke-virtual {p0, v5, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->checkValue(Landroid/view/View;Ljava/lang/String;)Z

    move-result v5

    if-ne v5, v4, :cond_7

    .line 201
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.DownGradeTH = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    :try_start_5
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.DownGradeTH"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    goto :goto_7

    .line 205
    :catch_5
    move-exception v1

    .line 206
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 207
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 208
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_7
    goto :goto_8

    .line 210
    :cond_7
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    .end local v0    # "value":Ljava/lang/String;
    :goto_8
    goto/16 :goto_e

    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_a

    .line 213
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 214
    .restart local v0    # "value":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_start_set:Landroid/widget/Button;

    invoke-virtual {p0, v5, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->checkValue(Landroid/view/View;Ljava/lang/String;)Z

    move-result v5

    if-ne v5, v4, :cond_9

    .line 215
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.de_start = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 217
    :try_start_6
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.de_start"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6

    goto :goto_9

    .line 219
    :catch_6
    move-exception v1

    .line 220
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 221
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_9
    goto :goto_a

    .line 224
    :cond_9
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 226
    .end local v0    # "value":Ljava/lang/String;
    :goto_a
    goto/16 :goto_e

    :cond_a
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_c

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 228
    .restart local v0    # "value":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_decrease_diff_set:Landroid/widget/Button;

    invoke-virtual {p0, v5, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->checkValue(Landroid/view/View;Ljava/lang/String;)Z

    move-result v5

    if-ne v5, v4, :cond_b

    .line 229
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.de_diff = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 231
    :try_start_7
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.de_diff"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_7

    goto :goto_b

    .line 233
    :catch_7
    move-exception v1

    .line 234
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 235
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_b
    goto :goto_c

    .line 238
    :cond_b
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    .end local v0    # "value":Ljava/lang/String;
    :goto_c
    goto :goto_e

    :cond_c
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved1_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_d

    .line 241
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved1_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 242
    .restart local v0    # "value":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.rtp_res1 = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 244
    :try_start_8
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.rtp_res1"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_8

    .line 249
    goto :goto_d

    .line 246
    :catch_8
    move-exception v1

    .line 247
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 248
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_d

    .line 250
    .end local v0    # "value":Ljava/lang/String;
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_d
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved2_set:Landroid/widget/Button;

    if-ne p1, v0, :cond_e

    .line 251
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->mVilte_operator_media_tmmbr_reserved2_values:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 252
    .restart local v0    # "value":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.rtp_res2 = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 254
    :try_start_9
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v4, "persist.vendor.vt.rtp_res2"

    invoke-interface {v1, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_9

    .line 259
    goto :goto_e

    .line 256
    :catch_9
    move-exception v1

    .line 257
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 258
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_e

    .line 250
    .end local v0    # "value":Ljava/lang/String;
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_e
    :goto_d
    nop

    .line 261
    :goto_e
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->queryCurrentValue()V

    .line 262
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 59
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 60
    const v0, 0x7f0800ef

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->setContentView(I)V

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->bindViews()V

    .line 62
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 66
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 67
    const-string v0, "Vilte/MenuMedia"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteMenuMedia;->queryCurrentValue()V

    .line 69
    return-void
.end method
