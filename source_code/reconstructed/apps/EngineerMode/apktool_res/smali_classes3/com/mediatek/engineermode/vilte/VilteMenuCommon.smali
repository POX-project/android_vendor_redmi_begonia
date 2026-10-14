.class public Lcom/mediatek/engineermode/vilte/VilteMenuCommon;
.super Landroid/app/Activity;
.source "VilteMenuCommon.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private final PROFILE_LABLE:[Ljava/lang/String;

.field private final PROFILE_VALUES:[Ljava/lang/String;

.field private final PROPERTY_VIDEOCALL_AUDIO_OUTPUT:Ljava/lang/String;

.field private final PROP_VILTE_CAMERA:Ljava/lang/String;

.field private final PROP_VILTE_DEBUG_INFO_DISPLAY:Ljava/lang/String;

.field private final PROP_VILTE_DOWN_GRADE:Ljava/lang/String;

.field private final PROP_VILTE_SINK_BITSTREAM:Ljava/lang/String;

.field private final PROP_VILTE_SOURCE_BITSTREAM:Ljava/lang/String;

.field private final PROP_VILTE_VFORMAT:Ljava/lang/String;

.field private final PROP_VILTE_VHEIGHT:Ljava/lang/String;

.field private final PROP_VILTE_VIDEO_FPS:Ljava/lang/String;

.field private final PROP_VILTE_VIDEO_IDR_PERIOD:Ljava/lang/String;

.field private final PROP_VILTE_VIDEO_LEVEL:Ljava/lang/String;

.field private final PROP_VILTE_VIDEO_LEVEL_BIT_RATE:Ljava/lang/String;

.field private final PROP_VILTE_VIDEO_PROFILE:Ljava/lang/String;

.field private final PROP_VILTE_VIDEO_VENC_BITRATE_RATIO:Ljava/lang/String;

.field private final PROP_VILTE_VWIDTH:Ljava/lang/String;

.field private final TAG:Ljava/lang/String;

.field private mButtonDisableDebugInfoDisplay:Landroid/widget/Button;

.field private mButtonDisableDownGrade:Landroid/widget/Button;

.field private mButtonDisableSinkBitstream:Landroid/widget/Button;

.field private mButtonDisableSourceBitstream:Landroid/widget/Button;

.field private mButtonDisabletAudioOutput:Landroid/widget/Button;

.field private mButtonEnableCamera:Landroid/widget/Button;

.field private mButtonEnableDebugInfoDisplay:Landroid/widget/Button;

.field private mButtonEnableDownGrade:Landroid/widget/Button;

.field private mButtonEnableSinkBitstream:Landroid/widget/Button;

.field private mButtonEnableSourceBitstream:Landroid/widget/Button;

.field private mButtonEnabletAudioOutput:Landroid/widget/Button;

.field private mButtonSetBitRate:Landroid/widget/Button;

.field private mButtonSetBitrateRatio:Landroid/widget/Button;

.field private mButtonSetFps:Landroid/widget/Button;

.field private mButtonSetIperiod:Landroid/widget/Button;

.field private mButtonSetLevel:Landroid/widget/Button;

.field private mButtonSetProfile:Landroid/widget/Button;

.field private mButtonVformat:Landroid/widget/Button;

.field private mButtonVheight:Landroid/widget/Button;

.field private mButtonVwidth:Landroid/widget/Button;

.field private mEdittextBitRate:Landroid/widget/EditText;

.field private mEdittextBitrateRatio:Landroid/widget/EditText;

.field private mEdittextIperiod:Landroid/widget/EditText;

.field private mEdittextVheight:Landroid/widget/EditText;

.field private mEdittextVwidth:Landroid/widget/EditText;

.field private mSpinner:Landroid/widget/Spinner;

.field private mSpinnerCamera:Landroid/widget/Spinner;

.field private mSpinnerLevel:Landroid/widget/Spinner;

.field private mSpinnerProfile:Landroid/widget/Spinner;

.field private mSpinnerVformat:Landroid/widget/Spinner;

.field private mTextviewBitrate:Landroid/widget/TextView;

.field private mTextviewBitrateRatio:Landroid/widget/TextView;

.field private mTextviewCamera:Landroid/widget/TextView;

.field private mTextviewDebugInfoDisplay:Landroid/widget/TextView;

.field private mTextviewDownGrade:Landroid/widget/TextView;

.field private mTextviewIPeriod:Landroid/widget/TextView;

.field private mTextviewLevel:Landroid/widget/TextView;

.field private mTextviewProfile:Landroid/widget/TextView;

.field private mTextviewVformat:Landroid/widget/TextView;

.field private mTextviewVheight:Landroid/widget/TextView;

.field private mTextviewVwidth:Landroid/widget/TextView;

.field private mVilteAudioOutput:Landroid/widget/TextView;

.field private mVilteSinkBitstream:Landroid/widget/TextView;

.field private mVilteSourceBitstream:Landroid/widget/TextView;

.field private mVilteVideoFps:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 19

    .line 19
    move-object/from16 v0, p0

    invoke-direct/range {p0 .. p0}, Landroid/app/Activity;-><init>()V

    .line 20
    const-string v1, "Vilte/MenuCommon"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->TAG:Ljava/lang/String;

    .line 21
    const-string v1, "persist.vendor.vt.vfps"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VIDEO_FPS:Ljava/lang/String;

    .line 22
    const-string v1, "persist.vendor.vt.dump_source"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_SOURCE_BITSTREAM:Ljava/lang/String;

    .line 23
    const-string v1, "persist.vendor.vt.dump_sink"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_SINK_BITSTREAM:Ljava/lang/String;

    .line 24
    const-string v1, "persist.vendor.vt.vlevel"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VIDEO_LEVEL:Ljava/lang/String;

    .line 25
    const-string v1, "persist.vendor.vt.vprofile"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VIDEO_PROFILE:Ljava/lang/String;

    .line 26
    const-string v1, "persist.vendor.vt.RTPInfo"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_DEBUG_INFO_DISPLAY:Ljava/lang/String;

    .line 27
    const-string v1, "persist.vendor.vt.downgrade"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_DOWN_GRADE:Ljava/lang/String;

    .line 29
    const-string v1, "persist.vendor.vt.vbitrate"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VIDEO_LEVEL_BIT_RATE:Ljava/lang/String;

    .line 30
    const-string v1, "persist.vendor.vt.bitrate_ratio"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VIDEO_VENC_BITRATE_RATIO:Ljava/lang/String;

    .line 32
    const-string v1, "persist.vendor.vt.viperiod"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VIDEO_IDR_PERIOD:Ljava/lang/String;

    .line 33
    const-string v1, "persist.vendor.vt.camera"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_CAMERA:Ljava/lang/String;

    .line 34
    const-string v1, "persist.vendor.vt.vformat"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VFORMAT:Ljava/lang/String;

    .line 35
    const-string v1, "persist.vendor.vt.vwidth"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VWIDTH:Ljava/lang/String;

    .line 36
    const-string v1, "persist.vendor.vt.vheight"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROP_VILTE_VHEIGHT:Ljava/lang/String;

    .line 38
    const-string v1, "persist.radio.call.audio.output"

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROPERTY_VIDEOCALL_AUDIO_OUTPUT:Ljava/lang/String;

    .line 40
    const-string v1, "0"

    const-string v2, "1"

    const-string v3, "4"

    const-string v4, "16"

    filled-new-array {v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROFILE_VALUES:[Ljava/lang/String;

    .line 41
    const-string v2, "Default"

    const-string v3, "Baseline 1"

    const-string v4, ""

    const-string v5, ""

    const-string v6, "Main 4"

    const-string v7, ""

    const-string v8, ""

    const-string v9, ""

    const-string v10, ""

    const-string v11, ""

    const-string v12, ""

    const-string v13, ""

    const-string v14, ""

    const-string v15, ""

    const-string v16, ""

    const-string v17, ""

    const-string v18, "High 16"

    filled-new-array/range {v2 .. v18}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROFILE_LABLE:[Ljava/lang/String;

    return-void
.end method

.method private queryCurrentValue()V
    .locals 20

    .line 370
    move-object/from16 v0, p0

    const-string v1, "persist.vendor.vt.vfps"

    const-string v2, "0"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 371
    .local v1, "fps":Ljava/lang/String;
    const-string v3, "persist.vendor.vt.vlevel"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 372
    .local v3, "level":Ljava/lang/String;
    const-string v4, "persist.vendor.vt.vprofile"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 373
    .local v4, "profile":Ljava/lang/String;
    const-string v5, "persist.vendor.vt.vbitrate"

    const-string v6, ""

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 374
    .local v5, "bitrate":Ljava/lang/String;
    const-string v7, "persist.vendor.vt.bitrate_ratio"

    invoke-static {v7, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 375
    .local v7, "bitrateRatio":Ljava/lang/String;
    const-string v8, "persist.vendor.vt.viperiod"

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 376
    .local v8, "iPeriod":Ljava/lang/String;
    const-string v9, "persist.vendor.vt.dump_source"

    invoke-static {v9, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 377
    .local v9, "source":Ljava/lang/String;
    const-string v10, "persist.vendor.vt.dump_sink"

    invoke-static {v10, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 379
    .local v10, "sink":Ljava/lang/String;
    const-string v11, "persist.vendor.vt.RTPInfo"

    invoke-static {v11, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 380
    .local v11, "debugInfoDisplay":Ljava/lang/String;
    const-string v12, "persist.vendor.vt.downgrade"

    invoke-static {v12, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 381
    .local v12, "downGrade":Ljava/lang/String;
    const-string v13, "persist.vendor.vt.camera"

    invoke-static {v13, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 383
    .local v13, "camera":Ljava/lang/String;
    const-string v14, "persist.vendor.vt.vformat"

    invoke-static {v14, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    .line 384
    .local v14, "format":Ljava/lang/String;
    const-string v15, "persist.vendor.vt.vwidth"

    invoke-static {v15, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    .line 385
    .local v15, "width":Ljava/lang/String;
    move-object/from16 v16, v12

    .end local v12    # "downGrade":Ljava/lang/String;
    .local v16, "downGrade":Ljava/lang/String;
    const-string v12, "persist.vendor.vt.vheight"

    invoke-static {v12, v6}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 386
    .local v6, "height":Ljava/lang/String;
    const-string v12, "persist.radio.call.audio.output"

    invoke-static {v12, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 389
    .local v2, "audioOutput":Ljava/lang/String;
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteVideoFps:Landroid/widget/TextView;

    move-object/from16 v17, v2

    .end local v2    # "audioOutput":Ljava/lang/String;
    .local v17, "audioOutput":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v18, v11

    .end local v11    # "debugInfoDisplay":Ljava/lang/String;
    .local v18, "debugInfoDisplay":Ljava/lang/String;
    const-string v11, "persist.vendor.vt.vfps = "

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v12, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 390
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteSourceBitstream:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.dump_source = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 391
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteSinkBitstream:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.dump_sink = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 393
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewLevel:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.vlevel = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 394
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewProfile:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.vprofile = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 395
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewBitrate:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.vbitrate = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 396
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewBitrateRatio:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.bitrate_ratio = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 397
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewIPeriod:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.viperiod = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 399
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v11}, Landroid/widget/Spinner;->getCount()I

    move-result v11

    if-ge v2, v11, :cond_1

    .line 400
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v11, v2}, Landroid/widget/Spinner;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_0

    .line 401
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v11, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 402
    goto :goto_1

    .line 399
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 405
    .end local v2    # "i":I
    :cond_1
    :goto_1
    iget-object v2, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROFILE_LABLE:[Ljava/lang/String;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    aget-object v2, v2, v11

    .line 406
    .local v2, "profile_label":Ljava/lang/String;
    const/4 v11, 0x0

    .local v11, "i":I
    :goto_2
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerProfile:Landroid/widget/Spinner;

    invoke-virtual {v12}, Landroid/widget/Spinner;->getCount()I

    move-result v12

    if-ge v11, v12, :cond_3

    .line 407
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerProfile:Landroid/widget/Spinner;

    invoke-virtual {v12, v11}, Landroid/widget/Spinner;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v12, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_2

    .line 408
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerProfile:Landroid/widget/Spinner;

    invoke-virtual {v12, v11}, Landroid/widget/Spinner;->setSelection(I)V

    .line 409
    goto :goto_3

    .line 406
    :cond_2
    add-int/lit8 v11, v11, 0x1

    goto :goto_2

    .line 413
    .end local v11    # "i":I
    :cond_3
    :goto_3
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerLevel:Landroid/widget/Spinner;

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v11, v12}, Landroid/widget/Spinner;->setSelection(I)V

    .line 414
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerVformat:Landroid/widget/Spinner;

    invoke-static {v14}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v11, v12}, Landroid/widget/Spinner;->setSelection(I)V

    .line 416
    const/4 v11, 0x0

    .restart local v11    # "i":I
    :goto_4
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerCamera:Landroid/widget/Spinner;

    invoke-virtual {v12}, Landroid/widget/Spinner;->getCount()I

    move-result v12

    if-ge v11, v12, :cond_5

    .line 417
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerCamera:Landroid/widget/Spinner;

    invoke-virtual {v12, v11}, Landroid/widget/Spinner;->getItemAtPosition(I)Ljava/lang/Object;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v12, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_4

    .line 418
    iget-object v12, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerCamera:Landroid/widget/Spinner;

    invoke-virtual {v12, v11}, Landroid/widget/Spinner;->setSelection(I)V

    .line 419
    goto :goto_5

    .line 416
    :cond_4
    add-int/lit8 v11, v11, 0x1

    goto :goto_4

    .line 423
    .end local v11    # "i":I
    :cond_5
    :goto_5
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitRate:Landroid/widget/EditText;

    invoke-virtual {v11, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 424
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitrateRatio:Landroid/widget/EditText;

    invoke-virtual {v11, v7}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 425
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextIperiod:Landroid/widget/EditText;

    invoke-virtual {v11, v8}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 426
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVwidth:Landroid/widget/EditText;

    invoke-virtual {v11, v15}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 427
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVheight:Landroid/widget/EditText;

    invoke-virtual {v11, v6}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 429
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewDebugInfoDisplay:Landroid/widget/TextView;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v19, v1

    .end local v1    # "fps":Ljava/lang/String;
    .local v19, "fps":Ljava/lang/String;
    const-string v1, "persist.vendor.vt.RTPInfo = "

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, v18

    .end local v18    # "debugInfoDisplay":Ljava/lang/String;
    .local v1, "debugInfoDisplay":Ljava/lang/String;
    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 430
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewDownGrade:Landroid/widget/TextView;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    .end local v1    # "debugInfoDisplay":Ljava/lang/String;
    .restart local v18    # "debugInfoDisplay":Ljava/lang/String;
    const-string v1, "persist.vendor.vt.downgrade = "

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v1, v16

    .end local v16    # "downGrade":Ljava/lang/String;
    .local v1, "downGrade":Ljava/lang/String;
    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 431
    iget-object v11, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewCamera:Landroid/widget/TextView;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    .end local v1    # "downGrade":Ljava/lang/String;
    .restart local v16    # "downGrade":Ljava/lang/String;
    const-string v1, "persist.vendor.vt.camera = "

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 432
    iget-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewVformat:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.vformat = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v1, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 433
    iget-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewVwidth:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.vwidth = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v1, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 434
    iget-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewVheight:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.vendor.vt.vheight = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v1, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 435
    iget-object v1, v0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteAudioOutput:Landroid/widget/TextView;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "persist.radio.call.audio.output = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v12, v17

    .end local v17    # "audioOutput":Ljava/lang/String;
    .local v12, "audioOutput":Ljava/lang/String;
    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v1, v11}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 436
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 180
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetFps:Landroid/widget/Button;

    const-string v1, "set property failed ..."

    const-string v2, "Vilte/MenuCommon"

    if-ne p1, v0, :cond_0

    .line 181
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 182
    .local v0, "fps":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.vfps = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v3

    const-string v4, "persist.vendor.vt.vfps"

    invoke-interface {v3, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 189
    goto :goto_0

    .line 186
    :catch_0
    move-exception v3

    .line 187
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 188
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    .end local v0    # "fps":Ljava/lang/String;
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    goto/16 :goto_12

    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableSourceBitstream:Landroid/widget/Button;

    const-string v3, "persist.vendor.vt.dump_source"

    const-string v4, "1"

    if-ne p1, v0, :cond_1

    .line 191
    const-string v0, "Set persist.vendor.vt.dump_source = 1"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 193
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    .line 195
    :catch_1
    move-exception v0

    .line 196
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 197
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    goto/16 :goto_12

    .line 199
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableSourceBitstream:Landroid/widget/Button;

    const-string v5, "0"

    if-ne p1, v0, :cond_2

    .line 200
    const-string v0, "Set persist.vendor.vt.dump_source = 0"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    :try_start_2
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v5}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    .line 204
    :catch_2
    move-exception v0

    .line 205
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 206
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 207
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_2
    goto/16 :goto_12

    .line 208
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableSinkBitstream:Landroid/widget/Button;

    const-string v3, "persist.vendor.vt.dump_sink"

    if-ne p1, v0, :cond_3

    .line 209
    const-string v0, "Set persist.vendor.vt.dump_sink = 1"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 211
    :try_start_3
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_3

    .line 213
    :catch_3
    move-exception v0

    .line 214
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 215
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_3
    goto/16 :goto_12

    .line 217
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableSinkBitstream:Landroid/widget/Button;

    if-ne p1, v0, :cond_4

    .line 218
    const-string v0, "Set persist.vendor.vt.dump_sink = 0"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    :try_start_4
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v5}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_4

    .line 222
    :catch_4
    move-exception v0

    .line 223
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 224
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_4
    goto/16 :goto_12

    .line 226
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetLevel:Landroid/widget/Button;

    if-ne p1, v0, :cond_5

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerLevel:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 228
    .local v0, "level":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.vlevel = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 230
    :try_start_5
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v3

    const-string v4, "persist.vendor.vt.vlevel"

    invoke-interface {v3, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    .line 235
    goto :goto_5

    .line 232
    :catch_5
    move-exception v3

    .line 233
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 234
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    .end local v0    # "level":Ljava/lang/String;
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_5
    goto/16 :goto_12

    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetBitRate:Landroid/widget/Button;

    if-ne p1, v0, :cond_6

    .line 237
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.vt.vbitrate = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitRate:Landroid/widget/EditText;

    .line 238
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 237
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    :try_start_6
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v3, "persist.vendor.vt.vbitrate"

    iget-object v4, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitRate:Landroid/widget/EditText;

    .line 241
    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 240
    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6

    goto :goto_6

    .line 243
    :catch_6
    move-exception v0

    .line 244
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 245
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_6
    goto/16 :goto_12

    .line 247
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetBitrateRatio:Landroid/widget/Button;

    if-ne p1, v0, :cond_7

    .line 248
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.vt.bitrate_ratio = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitrateRatio:Landroid/widget/EditText;

    .line 249
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 248
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    :try_start_7
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v3, "persist.vendor.vt.bitrate_ratio"

    iget-object v4, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitrateRatio:Landroid/widget/EditText;

    .line 252
    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 251
    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_7

    goto :goto_7

    .line 254
    :catch_7
    move-exception v0

    .line 255
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 256
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_7
    goto/16 :goto_12

    .line 258
    :cond_7
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetIperiod:Landroid/widget/Button;

    if-ne p1, v0, :cond_8

    .line 259
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.vt.viperiod = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextIperiod:Landroid/widget/EditText;

    .line 260
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 259
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    :try_start_8
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v3, "persist.vendor.vt.viperiod"

    iget-object v4, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextIperiod:Landroid/widget/EditText;

    .line 263
    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 262
    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_8

    goto :goto_8

    .line 265
    :catch_8
    move-exception v0

    .line 266
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 267
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_8
    goto/16 :goto_12

    .line 269
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetProfile:Landroid/widget/Button;

    if-ne p1, v0, :cond_9

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->PROFILE_VALUES:[Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerProfile:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    aget-object v0, v0, v3

    .line 271
    .local v0, "values":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.vprofile = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    :try_start_9
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v3

    const-string v4, "persist.vendor.vt.vprofile"

    invoke-interface {v3, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_9

    .line 278
    goto :goto_9

    .line 275
    :catch_9
    move-exception v3

    .line 276
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 277
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    .end local v0    # "values":Ljava/lang/String;
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_9
    goto/16 :goto_12

    :cond_9
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableDebugInfoDisplay:Landroid/widget/Button;

    const-string v3, "persist.vendor.vt.RTPInfo"

    if-ne p1, v0, :cond_a

    .line 280
    const-string v0, "Set persist.vendor.vt.RTPInfo = 1"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    :try_start_a
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_a

    goto :goto_a

    .line 284
    :catch_a
    move-exception v0

    .line 285
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 286
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 287
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_a
    goto/16 :goto_12

    .line 288
    :cond_a
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableDebugInfoDisplay:Landroid/widget/Button;

    if-ne p1, v0, :cond_b

    .line 289
    const-string v0, "Set persist.vendor.vt.RTPInfo = 0"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 291
    :try_start_b
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v5}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_b

    goto :goto_b

    .line 293
    :catch_b
    move-exception v0

    .line 294
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 295
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_b
    goto/16 :goto_12

    .line 297
    :cond_b
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableDownGrade:Landroid/widget/Button;

    const-string v3, "persist.vendor.vt.downgrade"

    if-ne p1, v0, :cond_c

    .line 298
    const-string v0, "Set persist.vendor.vt.downgrade = 1"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 300
    :try_start_c
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_c

    goto :goto_c

    .line 302
    :catch_c
    move-exception v0

    .line 303
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 304
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 305
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_c
    goto/16 :goto_12

    .line 306
    :cond_c
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableDownGrade:Landroid/widget/Button;

    if-ne p1, v0, :cond_d

    .line 307
    const-string v0, "Set persist.vendor.vt.downgrade = 0"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 309
    :try_start_d
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    invoke-interface {v0, v3, v5}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_d

    goto :goto_d

    .line 311
    :catch_d
    move-exception v0

    .line 312
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 313
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_d
    goto/16 :goto_12

    .line 315
    :cond_d
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableCamera:Landroid/widget/Button;

    if-ne p1, v0, :cond_e

    .line 316
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.vt.camera"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerCamera:Landroid/widget/Spinner;

    .line 317
    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 316
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 319
    :try_start_e
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v3, "persist.vendor.vt.camera"

    iget-object v4, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerCamera:Landroid/widget/Spinner;

    .line 320
    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 319
    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_e

    goto :goto_e

    .line 322
    :catch_e
    move-exception v0

    .line 323
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 324
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_e
    goto/16 :goto_12

    .line 326
    :cond_e
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVformat:Landroid/widget/Button;

    if-ne p1, v0, :cond_f

    .line 327
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerVformat:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 328
    .local v0, "format":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Set persist.vendor.vt.vformat"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    :try_start_f
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v3

    const-string v4, "persist.vendor.vt.vformat"

    invoke-interface {v3, v4, v0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_f

    .line 335
    goto :goto_f

    .line 332
    :catch_f
    move-exception v3

    .line 333
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 334
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 336
    .end local v0    # "format":Ljava/lang/String;
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_f
    goto/16 :goto_12

    :cond_f
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVwidth:Landroid/widget/Button;

    if-ne p1, v0, :cond_10

    .line 337
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.vt.vwidth"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVwidth:Landroid/widget/EditText;

    .line 338
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 337
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 340
    :try_start_10
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v3, "persist.vendor.vt.vwidth"

    iget-object v4, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVwidth:Landroid/widget/EditText;

    .line 341
    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 340
    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_10

    goto :goto_10

    .line 343
    :catch_10
    move-exception v0

    .line 344
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 345
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 346
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_10
    goto :goto_12

    .line 347
    :cond_10
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVheight:Landroid/widget/Button;

    if-ne p1, v0, :cond_11

    .line 348
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Set persist.vendor.vt.vheight"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVheight:Landroid/widget/EditText;

    .line 349
    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 348
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 351
    :try_start_11
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v3, "persist.vendor.vt.vheight"

    iget-object v4, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVheight:Landroid/widget/EditText;

    .line 352
    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 351
    invoke-interface {v0, v3, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_11

    goto :goto_11

    .line 354
    :catch_11
    move-exception v0

    .line 355
    .restart local v0    # "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 356
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 357
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_11
    goto :goto_12

    .line 358
    :cond_11
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnabletAudioOutput:Landroid/widget/Button;

    const-string v1, "persist.radio.call.audio.output"

    if-ne p1, v0, :cond_12

    .line 359
    const-string v0, "Set persist.radio.call.audio.output = 0"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 360
    invoke-static {v1, v5}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    goto :goto_12

    .line 361
    :cond_12
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisabletAudioOutput:Landroid/widget/Button;

    if-ne p1, v0, :cond_13

    .line 362
    const-string v0, "Set persist.radio.call.audio.output = 1"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 363
    invoke-static {v1, v4}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    .line 365
    :cond_13
    :goto_12
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->queryCurrentValue()V

    .line 366
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 93
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 94
    const v0, 0x7f0800ee

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->setContentView(I)V

    .line 95
    const-string v0, "Vilte/MenuCommon"

    const-string v1, "onCreate()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    const v0, 0x7f0607bb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteVideoFps:Landroid/widget/TextView;

    .line 97
    const v0, 0x7f0607ab

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteSourceBitstream:Landroid/widget/TextView;

    .line 98
    const v0, 0x7f0607a8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteSinkBitstream:Landroid/widget/TextView;

    .line 99
    const v0, 0x7f0607c6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewLevel:Landroid/widget/TextView;

    .line 100
    const v0, 0x7f0607c9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewProfile:Landroid/widget/TextView;

    .line 101
    const v0, 0x7f0607b5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewBitrate:Landroid/widget/TextView;

    .line 102
    const v0, 0x7f0607b3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewBitrateRatio:Landroid/widget/TextView;

    .line 103
    const v0, 0x7f0607c2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewIPeriod:Landroid/widget/TextView;

    .line 104
    const v0, 0x7f060785

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewDebugInfoDisplay:Landroid/widget/TextView;

    .line 105
    const v0, 0x7f060788

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewDownGrade:Landroid/widget/TextView;

    .line 106
    const v0, 0x7f060780

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewCamera:Landroid/widget/TextView;

    .line 108
    const v0, 0x7f0607b7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewVformat:Landroid/widget/TextView;

    .line 109
    const v0, 0x7f0607cc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewVwidth:Landroid/widget/TextView;

    .line 110
    const v0, 0x7f0607bd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mTextviewVheight:Landroid/widget/TextView;

    .line 112
    const v0, 0x7f0607bc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinner:Landroid/widget/Spinner;

    .line 113
    const v0, 0x7f0607c7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerLevel:Landroid/widget/Spinner;

    .line 114
    const v0, 0x7f0607ca

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerProfile:Landroid/widget/Spinner;

    .line 115
    const v0, 0x7f060781

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerCamera:Landroid/widget/Spinner;

    .line 116
    const v0, 0x7f0607b9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mSpinnerVformat:Landroid/widget/Spinner;

    .line 118
    const v0, 0x7f0607c4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitRate:Landroid/widget/EditText;

    .line 119
    const v0, 0x7f0607b4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextBitrateRatio:Landroid/widget/EditText;

    .line 120
    const v0, 0x7f0607c1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextIperiod:Landroid/widget/EditText;

    .line 121
    const v0, 0x7f0607ce

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVwidth:Landroid/widget/EditText;

    .line 122
    const v0, 0x7f0607bf

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mEdittextVheight:Landroid/widget/EditText;

    .line 123
    const v0, 0x7f06077e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mVilteAudioOutput:Landroid/widget/TextView;

    .line 126
    const v0, 0x7f0607ba

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetFps:Landroid/widget/Button;

    .line 127
    const v0, 0x7f0607c5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetLevel:Landroid/widget/Button;

    .line 128
    const v0, 0x7f0607c8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetProfile:Landroid/widget/Button;

    .line 129
    const v0, 0x7f0607c3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetBitRate:Landroid/widget/Button;

    .line 130
    const v0, 0x7f0607cb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetBitrateRatio:Landroid/widget/Button;

    .line 131
    const v0, 0x7f0607c0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetIperiod:Landroid/widget/Button;

    .line 132
    const v0, 0x7f0607aa

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableSourceBitstream:Landroid/widget/Button;

    .line 133
    const v0, 0x7f0607a9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableSourceBitstream:Landroid/widget/Button;

    .line 134
    const v0, 0x7f0607a7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableSinkBitstream:Landroid/widget/Button;

    .line 135
    const v0, 0x7f0607a6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableSinkBitstream:Landroid/widget/Button;

    .line 136
    const v0, 0x7f060784

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableDebugInfoDisplay:Landroid/widget/Button;

    .line 137
    const v0, 0x7f060783

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableDebugInfoDisplay:Landroid/widget/Button;

    .line 139
    const v0, 0x7f060787

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableDownGrade:Landroid/widget/Button;

    .line 140
    const v0, 0x7f06077f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableCamera:Landroid/widget/Button;

    .line 141
    const v0, 0x7f060786

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableDownGrade:Landroid/widget/Button;

    .line 142
    const v0, 0x7f0607b8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVformat:Landroid/widget/Button;

    .line 143
    const v0, 0x7f0607cd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVwidth:Landroid/widget/Button;

    .line 144
    const v0, 0x7f0607be

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVheight:Landroid/widget/Button;

    .line 145
    const v0, 0x7f06077d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnabletAudioOutput:Landroid/widget/Button;

    .line 146
    const v0, 0x7f06077c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisabletAudioOutput:Landroid/widget/Button;

    .line 148
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetFps:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 149
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableSourceBitstream:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 150
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableSourceBitstream:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableSinkBitstream:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 152
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableSinkBitstream:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 153
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetLevel:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 154
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetProfile:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 155
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetBitRate:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 156
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetBitrateRatio:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonSetIperiod:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 158
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableDebugInfoDisplay:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableDebugInfoDisplay:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 160
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableDownGrade:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 161
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisableDownGrade:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 162
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnableCamera:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 163
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVformat:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 164
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVwidth:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonVheight:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 166
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonEnabletAudioOutput:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 167
    iget-object v0, p0, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->mButtonDisabletAudioOutput:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 169
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 173
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 174
    const-string v0, "Vilte/MenuCommon"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    invoke-direct {p0}, Lcom/mediatek/engineermode/vilte/VilteMenuCommon;->queryCurrentValue()V

    .line 176
    return-void
.end method
