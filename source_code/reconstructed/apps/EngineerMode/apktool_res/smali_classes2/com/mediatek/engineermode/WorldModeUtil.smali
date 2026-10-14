.class public Lcom/mediatek/engineermode/WorldModeUtil;
.super Ljava/lang/Object;
.source "WorldModeUtil.java"


# static fields
.field public static final ACTION_WORLD_MODE_CHANGED:Ljava/lang/String; = "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED"

.field private static final ACTIVE_MD_TYPE_LTG:I = 0x4

.field private static final ACTIVE_MD_TYPE_LWCG:I = 0x5

.field private static final ACTIVE_MD_TYPE_LWG:I = 0x3

.field private static final ACTIVE_MD_TYPE_LfWG:I = 0x7

.field private static final ACTIVE_MD_TYPE_LtTG:I = 0x6

.field private static final ACTIVE_MD_TYPE_TG:I = 0x2

.field private static final ACTIVE_MD_TYPE_UNKNOWN:I = 0x0

.field private static final ACTIVE_MD_TYPE_WG:I = 0x1

.field private static final CDMA:Ljava/lang/String; = "C"

.field public static final EXTRA_WORLD_MODE_CHANGE_STATE:Ljava/lang/String; = "worldModeState"

.field private static final MASK_CDMA:I = 0x20

.field private static final MASK_GSM:I = 0x1

.field private static final MASK_LTEFDD:I = 0x10

.field private static final MASK_LTETDD:I = 0x8

.field private static final MASK_NR:I = 0x40

.field private static final MASK_TDSCDMA:I = 0x2

.field private static final MASK_WCDMA:I = 0x4

.field private static final MD_TYPE_FDD:I = 0x64

.field private static final MD_TYPE_LTG:I = 0x6

.field private static final MD_TYPE_LWG:I = 0x5

.field private static final MD_TYPE_TDD:I = 0x65

.field private static final MD_TYPE_TG:I = 0x4

.field private static final MD_TYPE_UNKNOWN:I = 0x0

.field private static final MD_TYPE_WG:I = 0x3

.field public static final MD_WM_CHANGED_END:I = 0x1

.field public static final MD_WM_CHANGED_START:I = 0x0

.field public static final MD_WM_CHANGED_UNKNOWN:I = -0x1

.field private static final MD_WORLD_MODE_LCTG:I = 0x10

.field private static final MD_WORLD_MODE_LFCTG:I = 0x15

.field private static final MD_WORLD_MODE_LFTG:I = 0x14

.field private static final MD_WORLD_MODE_LFWCG:I = 0xf

.field private static final MD_WORLD_MODE_LFWG:I = 0xe

.field private static final MD_WORLD_MODE_LTCTG:I = 0x11

.field private static final MD_WORLD_MODE_LTG:I = 0x8

.field private static final MD_WORLD_MODE_LTTG:I = 0xd

.field private static final MD_WORLD_MODE_LTWCG:I = 0x13

.field private static final MD_WORLD_MODE_LTWG:I = 0x12

.field private static final MD_WORLD_MODE_LWCG:I = 0xb

.field private static final MD_WORLD_MODE_LWCTG:I = 0xc

.field private static final MD_WORLD_MODE_LWG:I = 0x9

.field private static final MD_WORLD_MODE_LWTG:I = 0xa

.field private static final MD_WORLD_MODE_NLTCTG:I = 0x1a

.field private static final MD_WORLD_MODE_NLWCG:I = 0x19

.field private static final MD_WORLD_MODE_NLWCTG:I = 0x18

.field private static final MD_WORLD_MODE_NLWG:I = 0x16

.field private static final MD_WORLD_MODE_NLWTG:I = 0x17

.field private static final MD_WORLD_MODE_UNKNOWN:I = 0x0

.field private static final PROPERTY_ACTIVE_MD:Ljava/lang/String; = "vendor.ril.active.md"

.field private static final PROPERTY_MAJOR_SIM:Ljava/lang/String; = "persist.vendor.radio.simswitch"

.field private static final PROPERTY_RAT_CONFIG:Ljava/lang/String; = "ro.vendor.mtk_ps1_rat"

.field private static final STATUS_SYNC_PREFIX:Ljava/lang/String; = "STATUS_SYNC"

.field private static final TAG:Ljava/lang/String; = "WorldModeActivity"

.field private static final TDSCDMA:Ljava/lang/String; = "T"

.field private static final UTRAN_DIVISION_DUPLEX_MODE_FDD:I = 0x1

.field private static final UTRAN_DIVISION_DUPLEX_MODE_TDD:I = 0x2

.field private static final UTRAN_DIVISION_DUPLEX_MODE_UNKNOWN:I = 0x0

.field private static final WCDMA:Ljava/lang/String; = "W"

.field private static final WORLD_MODE_RESULT_ERROR:I = 0x65

.field private static final WORLD_MODE_RESULT_SUCCESS:I = 0x64

.field private static final WORLD_MODE_RESULT_WM_ID_NOT_SUPPORT:I = 0x66


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static checkWmCapability(II)Z
    .locals 4
    .param p0, "worldMode"    # I
    .param p1, "bandMode"    # I

    .line 295
    const/4 v0, 0x0

    .line 296
    .local v0, "iRat":I
    const/16 v1, 0x8

    if-ne p0, v1, :cond_0

    .line 297
    const/16 v0, 0x1b

    goto/16 :goto_0

    .line 301
    :cond_0
    const/16 v1, 0xd

    if-ne p0, v1, :cond_1

    .line 302
    const/16 v0, 0xb

    goto/16 :goto_0

    .line 305
    :cond_1
    const/16 v1, 0xa

    if-ne p0, v1, :cond_2

    .line 306
    const/16 v0, 0x1f

    goto/16 :goto_0

    .line 311
    :cond_2
    const/16 v1, 0xe

    if-ne p0, v1, :cond_3

    .line 312
    const/16 v0, 0x15

    goto/16 :goto_0

    .line 315
    :cond_3
    const/16 v1, 0x9

    if-ne p0, v1, :cond_4

    .line 316
    const/16 v0, 0x1d

    goto/16 :goto_0

    .line 320
    :cond_4
    const/16 v1, 0xc

    if-ne p0, v1, :cond_5

    .line 321
    const/16 v0, 0x3f

    goto/16 :goto_0

    .line 327
    :cond_5
    const/16 v1, 0x10

    if-ne p0, v1, :cond_6

    .line 328
    const/16 v0, 0x3b

    goto :goto_0

    .line 333
    :cond_6
    const/16 v1, 0x11

    if-ne p0, v1, :cond_7

    .line 334
    const/16 v0, 0x2b

    goto :goto_0

    .line 338
    :cond_7
    const/16 v1, 0xf

    if-ne p0, v1, :cond_8

    .line 339
    const/16 v0, 0x35

    goto :goto_0

    .line 343
    :cond_8
    const/16 v1, 0xb

    if-ne p0, v1, :cond_9

    .line 344
    const/16 v0, 0x3d

    goto :goto_0

    .line 349
    :cond_9
    const/16 v1, 0x12

    if-ne p0, v1, :cond_a

    .line 350
    const/16 v0, 0xd

    goto :goto_0

    .line 353
    :cond_a
    const/16 v1, 0x13

    if-ne p0, v1, :cond_b

    .line 354
    const/16 v0, 0x2d

    goto :goto_0

    .line 358
    :cond_b
    const/16 v1, 0x14

    if-ne p0, v1, :cond_c

    .line 359
    const/16 v0, 0x13

    goto :goto_0

    .line 362
    :cond_c
    const/16 v1, 0x15

    if-ne p0, v1, :cond_d

    .line 363
    const/16 v0, 0x33

    goto :goto_0

    .line 367
    :cond_d
    const/16 v1, 0x16

    if-ne p0, v1, :cond_e

    .line 368
    const/16 v0, 0x5d

    goto :goto_0

    .line 373
    :cond_e
    const/16 v1, 0x17

    if-ne p0, v1, :cond_f

    .line 374
    const/16 v0, 0x5f

    goto :goto_0

    .line 380
    :cond_f
    const/16 v1, 0x18

    if-ne p0, v1, :cond_10

    .line 381
    const/16 v0, 0x7f

    goto :goto_0

    .line 388
    :cond_10
    const/16 v1, 0x19

    if-ne p0, v1, :cond_11

    .line 389
    const/16 v0, 0x7d

    goto :goto_0

    .line 395
    :cond_11
    const/16 v1, 0x1a

    if-ne p0, v1, :cond_12

    .line 396
    const/16 v0, 0x6b

    .line 402
    :cond_12
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isNrSupported()Z

    move-result v1

    const/4 v2, 0x1

    if-ne v2, v1, :cond_13

    .line 403
    or-int/lit8 p1, p1, 0x40

    .line 405
    :cond_13
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isC2kSupport()Z

    move-result v1

    if-ne v2, v1, :cond_14

    .line 406
    or-int/lit8 p1, p1, 0x20

    .line 409
    :cond_14
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "checkWmCapab: modem="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " rat="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " bandMode="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "WorldModeActivity"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 414
    and-int v1, v0, p1

    if-ne v0, v1, :cond_16

    .line 415
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isNrSupported()Z

    move-result v1

    if-ne v2, v1, :cond_15

    .line 416
    return v2

    .line 417
    :cond_15
    and-int/lit8 v1, v0, 0x20

    and-int/lit8 v3, p1, 0x20

    if-ne v1, v3, :cond_16

    .line 418
    return v2

    .line 421
    :cond_16
    const/4 v1, 0x0

    return v1
.end method

.method public static get3GDivisionDuplexMode()I
    .locals 2

    .line 271
    const/4 v0, 0x0

    .line 272
    .local v0, "duplexMode":I
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->getActiveModemType()I

    move-result v1

    .line 274
    .local v1, "activeMdType":I
    packed-switch v1, :pswitch_data_0

    .line 287
    const/4 v0, 0x0

    goto :goto_0

    .line 284
    :pswitch_0
    const/4 v0, 0x2

    .line 285
    goto :goto_0

    .line 279
    :pswitch_1
    const/4 v0, 0x1

    .line 280
    nop

    .line 291
    :goto_0
    return v0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method private static getActiveModemType()I
    .locals 5

    .line 186
    const/4 v0, 0x0

    .line 187
    .local v0, "modemType":I
    const/4 v1, 0x0

    .line 188
    .local v1, "activeMdType":I
    const/4 v2, -0x1

    .line 189
    .local v2, "activeMode":I
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isWorldModeSupport()Z

    move-result v3

    if-nez v3, :cond_4

    .line 190
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->getWorldModeId()I

    move-result v0

    .line 191
    const/4 v3, 0x3

    if-eq v0, v3, :cond_3

    const/4 v3, 0x4

    if-eq v0, v3, :cond_2

    const/4 v3, 0x5

    if-eq v0, v3, :cond_1

    const/4 v3, 0x6

    if-eq v0, v3, :cond_0

    .line 205
    const/4 v1, 0x0

    .line 206
    goto :goto_0

    .line 202
    :cond_0
    const/4 v1, 0x4

    .line 203
    goto :goto_0

    .line 199
    :cond_1
    const/4 v1, 0x3

    .line 200
    goto :goto_0

    .line 196
    :cond_2
    const/4 v1, 0x2

    .line 197
    goto :goto_0

    .line 193
    :cond_3
    const/4 v1, 0x1

    .line 194
    goto :goto_0

    .line 209
    :cond_4
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->getWorldModeId()I

    move-result v0

    .line 210
    nop

    .line 211
    const-string v3, "vendor.ril.nw.worldmode.activemode"

    const-string v4, "0"

    invoke-static {v3, v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 210
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 212
    packed-switch v0, :pswitch_data_0

    .line 253
    const/4 v1, 0x0

    goto :goto_0

    .line 250
    :pswitch_0
    const/4 v1, 0x7

    .line 251
    goto :goto_0

    .line 247
    :pswitch_1
    const/4 v1, 0x6

    .line 248
    goto :goto_0

    .line 242
    :pswitch_2
    const/4 v1, 0x5

    .line 243
    goto :goto_0

    .line 228
    :pswitch_3
    if-lez v2, :cond_6

    .line 229
    const/4 v3, 0x1

    if-ne v2, v3, :cond_5

    .line 231
    const/4 v1, 0x3

    goto :goto_0

    .line 232
    :cond_5
    const/4 v3, 0x2

    if-ne v2, v3, :cond_6

    .line 234
    const/4 v1, 0x4

    goto :goto_0

    .line 222
    :pswitch_4
    const/4 v1, 0x3

    .line 223
    goto :goto_0

    .line 217
    :pswitch_5
    const/4 v1, 0x4

    .line 218
    nop

    .line 258
    :cond_6
    :goto_0
    return v1

    :pswitch_data_0
    .packed-switch 0x8
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_3
        :pswitch_1
        :pswitch_0
        :pswitch_2
        :pswitch_5
        :pswitch_1
        :pswitch_4
        :pswitch_2
        :pswitch_5
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method

.method public static getMajorSim()I
    .locals 4

    .line 466
    const-string v0, "persist.vendor.radio.simswitch"

    const-string v1, ""

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 467
    .local v0, "currMajorSim":Ljava/lang/String;
    const-string v2, "WorldModeActivity"

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 468
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getMajorSim]: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    add-int/lit8 v3, v3, -0x1

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 469
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    return v1

    .line 471
    :cond_0
    const-string v1, "[getMajorSim]: fail to get major SIM"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 472
    const/16 v1, -0x63

    return v1
.end method

.method public static getWorldModeId()I
    .locals 3

    .line 178
    const/4 v0, 0x0

    .line 179
    .local v0, "modemType":I
    nop

    .line 181
    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    .line 180
    const-string v2, "vendor.ril.active.md"

    invoke-static {v2, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 179
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 182
    return v0
.end method

.method public static isC2kSupport()Z
    .locals 2

    .line 155
    const-string v0, "ro.vendor.mtk_ps1_rat"

    const-string v1, ""

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 156
    .local v0, "rat":Ljava/lang/String;
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    .line 157
    const-string v1, "C"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 158
    const/4 v1, 0x1

    return v1

    .line 161
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public static isNrSupported()Z
    .locals 1

    .line 166
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isNrSupported()Z

    move-result v0

    return v0
.end method

.method public static isWorldModeSupport()Z
    .locals 3

    .line 150
    const-string v0, "ro.vendor.mtk_md_world_mode_support"

    const/4 v1, 0x0

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v1, v2

    :cond_0
    return v1
.end method

.method public static isWorldPhoneSupport()Z
    .locals 2

    .line 139
    const-string v0, "ro.vendor.mtk_ps1_rat"

    const-string v1, ""

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 140
    .local v0, "rat":Ljava/lang/String;
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    .line 141
    const-string v1, "W"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "T"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 142
    const/4 v1, 0x1

    return v1

    .line 145
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method private static setWorldMode(I)V
    .locals 7
    .param p0, "worldMode"    # I

    .line 477
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[setWorldMode] worldMode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WorldModeActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 478
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->getWorldModeId()I

    move-result v0

    .line 479
    .local v0, "currentWorldMode":I
    const/16 v2, 0x8

    if-ne p0, v0, :cond_13

    .line 480
    if-ne p0, v2, :cond_0

    .line 481
    const-string v2, "Already in uTLG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 482
    :cond_0
    const/16 v2, 0x9

    if-ne p0, v2, :cond_1

    .line 483
    const-string v2, "Already in uLWG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 484
    :cond_1
    const/16 v2, 0xa

    if-ne p0, v2, :cond_2

    .line 485
    const-string v2, "Already in uLWTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 486
    :cond_2
    const/16 v2, 0xb

    if-ne p0, v2, :cond_3

    .line 487
    const-string v2, "Already in uLWCG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 488
    :cond_3
    const/16 v2, 0xc

    if-ne p0, v2, :cond_4

    .line 489
    const-string v2, "Already in uLWTCG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 490
    :cond_4
    const/16 v2, 0xd

    if-ne p0, v2, :cond_5

    .line 491
    const-string v2, "Already in LtTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 492
    :cond_5
    const/16 v2, 0xe

    if-ne p0, v2, :cond_6

    .line 493
    const-string v2, "Already in LfWG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 494
    :cond_6
    const/16 v2, 0xf

    if-ne p0, v2, :cond_7

    .line 495
    const-string v2, "Already in uLfWCG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 496
    :cond_7
    const/16 v2, 0x10

    if-ne p0, v2, :cond_8

    .line 497
    const-string v2, "Already in uLCTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 498
    :cond_8
    const/16 v2, 0x11

    if-ne p0, v2, :cond_9

    .line 499
    const-string v2, "Already in uLtCTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 500
    :cond_9
    const/16 v2, 0x12

    if-ne p0, v2, :cond_a

    .line 501
    const-string v2, "Already in uLtWG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 502
    :cond_a
    const/16 v2, 0x13

    if-ne p0, v2, :cond_b

    .line 503
    const-string v2, "Already in uLtWCG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 504
    :cond_b
    const/16 v2, 0x14

    if-ne p0, v2, :cond_c

    .line 505
    const-string v2, "Already in uLfTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 506
    :cond_c
    const/16 v2, 0x15

    if-ne p0, v2, :cond_d

    .line 507
    const-string v2, "Already in uLfCTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 508
    :cond_d
    const/16 v2, 0x16

    if-ne p0, v2, :cond_e

    .line 509
    const-string v2, "Already in uNLWG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 510
    :cond_e
    const/16 v2, 0x17

    if-ne p0, v2, :cond_f

    .line 511
    const-string v2, "Already in uNLWTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 512
    :cond_f
    const/16 v2, 0x18

    if-ne p0, v2, :cond_10

    .line 513
    const-string v2, "Already in uNLWCTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 514
    :cond_10
    const/16 v2, 0x19

    if-ne p0, v2, :cond_11

    .line 515
    const-string v2, "Already in uNLWCG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 516
    :cond_11
    const/16 v2, 0x1a

    if-ne p0, v2, :cond_12

    .line 517
    const-string v2, "Already in uNLTCTG mode"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 519
    :cond_12
    :goto_0
    return-void

    .line 521
    :cond_13
    const/16 v3, 0x15

    .line 522
    .local v3, "maxMode":I
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isNrSupported()Z

    move-result v4

    const/4 v5, 0x1

    if-ne v5, v4, :cond_14

    .line 523
    const/16 v3, 0x1a

    .line 525
    :cond_14
    if-lt p0, v2, :cond_17

    if-gt p0, v3, :cond_17

    .line 526
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MTK worldmodeid,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 527
    .local v1, "str":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isC2kSupport()Z

    move-result v2

    if-eq v2, v5, :cond_16

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-ne v2, v5, :cond_15

    goto :goto_1

    .line 530
    :cond_15
    invoke-static {p0}, Lcom/mediatek/engineermode/EmUtils;->reloadModemType(I)V

    .line 531
    invoke-static {p0}, Lcom/mediatek/engineermode/EmUtils;->storeModemType(I)V

    .line 532
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->rebootModem()V

    goto :goto_2

    .line 528
    :cond_16
    :goto_1
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    const/4 v4, 0x0

    const-string v6, "STATUS_SYNC"

    aput-object v6, v2, v4

    aput-object v1, v2, v5

    const/4 v4, 0x0

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 534
    .end local v1    # "str":Ljava/lang/String;
    :goto_2
    nop

    .line 538
    return-void

    .line 535
    :cond_17
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Invalid world mode:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 536
    return-void
.end method

.method public static setWorldModeWithBand(II)I
    .locals 2
    .param p0, "worldMode"    # I
    .param p1, "bandMode"    # I

    .line 457
    invoke-static {p0, p1}, Lcom/mediatek/engineermode/WorldModeUtil;->checkWmCapability(II)Z

    move-result v0

    if-nez v0, :cond_0

    .line 458
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setWorldModeWithBand: not match, modem="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " bandMode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WorldModeActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 459
    const/16 v0, 0x66

    return v0

    .line 461
    :cond_0
    invoke-static {p0}, Lcom/mediatek/engineermode/WorldModeUtil;->setWorldMode(I)V

    .line 462
    const/16 v0, 0x64

    return v0
.end method

.method public static worldModeIdToString(I)Ljava/lang/String;
    .locals 6
    .param p0, "worldMode"    # I

    .line 546
    const-string v0, "unknown"

    .line 547
    .local v0, "worldModeString":Ljava/lang/String;
    const-string v1, "unknown"

    .line 548
    .local v1, "duplexMode":Ljava/lang/String;
    nop

    .line 549
    const-string v2, "vendor.ril.nw.worldmode.activemode"

    const-string v3, "0"

    invoke-static {v2, v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 548
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 550
    .local v2, "activeMode":I
    const/4 v3, 0x1

    if-ne v2, v3, :cond_0

    .line 551
    const-string v1, "FDD"

    goto :goto_0

    .line 552
    :cond_0
    const/4 v3, 0x2

    if-ne v2, v3, :cond_1

    .line 553
    const-string v1, "TDD"

    .line 555
    :cond_1
    :goto_0
    const-string v3, ")"

    packed-switch p0, :pswitch_data_0

    .line 614
    const-string v0, "unknown world mode id"

    goto/16 :goto_1

    .line 611
    :pswitch_0
    const-string v0, "NLTCTG"

    .line 612
    goto/16 :goto_1

    .line 608
    :pswitch_1
    const-string v0, "NLWCG"

    .line 609
    goto/16 :goto_1

    .line 605
    :pswitch_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "NLWCTG(Auto Mode:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 606
    goto/16 :goto_1

    .line 602
    :pswitch_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "NLWTG(Auto mode:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 603
    goto :goto_1

    .line 599
    :pswitch_4
    const-string v0, "NLWG"

    .line 600
    goto :goto_1

    .line 596
    :pswitch_5
    const-string v0, "LfCTG"

    .line 597
    goto :goto_1

    .line 593
    :pswitch_6
    const-string v0, "LfTG"

    .line 594
    goto :goto_1

    .line 590
    :pswitch_7
    const-string v0, "LtWCG"

    .line 591
    goto :goto_1

    .line 587
    :pswitch_8
    const-string v0, "LtWG"

    .line 588
    goto :goto_1

    .line 584
    :pswitch_9
    const-string v0, "LtCTG"

    .line 585
    goto :goto_1

    .line 581
    :pswitch_a
    const-string v0, "LCTG"

    .line 582
    goto :goto_1

    .line 578
    :pswitch_b
    const-string v0, "LfWCG"

    .line 579
    goto :goto_1

    .line 575
    :pswitch_c
    const-string v0, "LfWG"

    .line 576
    goto :goto_1

    .line 572
    :pswitch_d
    const-string v0, "LtTG"

    .line 573
    goto :goto_1

    .line 569
    :pswitch_e
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "LWCTG(Auto mode:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 570
    goto :goto_1

    .line 566
    :pswitch_f
    const-string v0, "LWCG"

    .line 567
    goto :goto_1

    .line 563
    :pswitch_10
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "LWTG(Auto mode:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 564
    goto :goto_1

    .line 560
    :pswitch_11
    const-string v0, "LWG"

    .line 561
    goto :goto_1

    .line 557
    :pswitch_12
    const-string v0, "LTG"

    .line 558
    nop

    .line 617
    :goto_1
    return-object v0

    :pswitch_data_0
    .packed-switch 0x8
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
