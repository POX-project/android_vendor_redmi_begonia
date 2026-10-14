.class public Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
.super Landroid/app/Activity;
.source "NetworkSelectActivity93.java"

# interfaces
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;,
        Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$CustomAdapter;
    }
.end annotation


# static fields
.field private static final CARD_TYPE_CDMA_ONLY:I = 0x3

.field private static final CARD_TYPE_GSM_CDMA:I = 0x2

.field private static final CARD_TYPE_GSM_ONLY:I = 0x1

.field public static final CDMA_EVDO:I = 0x4

.field public static final CDMA_EVDO_GSM_UMTS:I = 0x15

.field public static final CDMA_EVDO_GSM_WCDMA:I = 0x7

.field public static final CDMA_ONLY:I = 0x5

.field public static final EVDO_ONLY:I = 0x6

.field private static final EVENT_QUERY_EHRPD_ENABLE_DONE:I = 0x67

.field private static final EVENT_QUERY_NETWORKMODE_DONE:I = 0x65

.field private static final EVENT_SET_EHRPD_ENABLE_DONE:I = 0x68

.field private static final EVENT_SET_NETWORKMODE_DONE:I = 0x66

.field public static final FK_MTK_C2K_CAPABILITY:Ljava/lang/String; = "persist.vendor.radio.disable_c2k_cap"

.field public static final GSM_ONLY:I = 0x1

.field public static final GSM_TDSCDMA_AUTO:I = 0x10

.field public static final GSM_WCDMA_AUTO:I = 0x3

.field private static final INDEX_CDMA_EVDO:I = 0x9

.field private static final INDEX_CDMA_EVDO_UMTS_GSM:I = 0xe

.field private static final INDEX_CDMA_ONLY:I = 0xa

.field private static final INDEX_EM_UI_NOT_SUPPORT_TYPE:I = 0x15

.field private static final INDEX_EVDO_ONLY:I = 0xb

.field private static final INDEX_GSM_ONLY:I = 0x1

.field private static final INDEX_GSM_TDSCDMA_AUTO:I = 0x5

.field private static final INDEX_GSM_WCDMA_AUTO:I = 0x4

.field private static final INDEX_LTE_CDMA_EVDO:I = 0xd

.field private static final INDEX_LTE_CDMA_EVDO_UMTS_GSM:I = 0xc

.field private static final INDEX_LTE_GSM_UMTS:I = 0x7

.field private static final INDEX_LTE_ONLY:I = 0x6

.field private static final INDEX_LTE_UMTS:I = 0x8

.field private static final INDEX_NR_LTE:I = 0x10

.field private static final INDEX_NR_LTE_CDMA_EVDO:I = 0x13

.field private static final INDEX_NR_LTE_UMTS:I = 0x11

.field private static final INDEX_NR_LTE_UMTS_GSM:I = 0x12

.field private static final INDEX_NR_LTE_UMTS_GSM_CDMA:I = 0x14

.field private static final INDEX_NR_ONLY:I = 0xf

.field private static final INDEX_TDSCDMA_ONLY:I = 0x3

.field private static final INDEX_WCDMA_ONLY:I = 0x2

.field private static final INDEX_WCDMA_PREFERRED:I = 0x0

.field public static final LTE_CDMA_EVDO:I = 0x8

.field public static final LTE_CDMA_EVDO_GSM_UMTS:I = 0x16

.field public static final LTE_CDMA_EVDO_GSM_WCDMA:I = 0xa

.field public static final LTE_GSM_WCDMA:I = 0x9

.field public static final LTE_ONLY:I = 0xb

.field public static final LTE_TDSCDMA:I = 0xf

.field public static final LTE_TDSCDMA_GSM:I = 0x11

.field public static final LTE_TDSCDMA_GSM_WCDMA:I = 0x14

.field public static final LTE_TDSCDMA_WCDMA:I = 0x13

.field public static final LTE_WCDMA:I = 0xc

.field public static final NR_LTE:I = 0x18

.field public static final NR_LTE_CDMA_EVDO:I = 0x19

.field public static final NR_LTE_CDMA_EVDO_GSM_UMTS:I = 0x21

.field public static final NR_LTE_CDMA_EVDO_GSM_WCDMA:I = 0x1b

.field public static final NR_LTE_GSM_WCDMA:I = 0x1a

.field public static final NR_LTE_TDSCDMA:I = 0x1d

.field public static final NR_LTE_TDSCDMA_GSM:I = 0x1e

.field public static final NR_LTE_UMTS:I = 0x1f

.field public static final NR_LTE_UMTS_GSM:I = 0x20

.field public static final NR_LTE_WCDMA:I = 0x1c

.field public static final NR_ONLY:I = 0x17

.field private static final REBOOT_DIALOG:I = 0x7d0

.field public static final TAG:Ljava/lang/String; = "NetworkMode93"

.field public static final TDSCDMA_GSM_WCDMA:I = 0x12

.field public static final TDSCDMA_ONLY:I = 0xd

.field public static final TDSCDMA_WCDMA_ONLY:I = 0xe

.field public static final WCDMA_ONLY:I = 0x2

.field public static final WCDMA_PREFERRED:I


# instance fields
.field private mCardTypeValues:[Ljava/lang/String;

.field private mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

.field private mCurrentSelected:I

.field private mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

.field private mEHRPDFirstEnter:Z

.field private mFirstEntry:Z

.field private mHandler:Landroid/os/Handler;

.field private mModemType:I

.field private mNetworkTypeLabel:[Ljava/lang/String;

.field private mNetworkTypeValues:[I

.field private mPreferredNetworkListener:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mPreferredNetworkSpinner:Landroid/widget/Spinner;

.field private mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

.field private mSimType:I

.field private mSubId:I

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;

.field private network_mode_labels:[Ljava/lang/String;

.field private selectNetworkMode:I


# direct methods
.method public constructor <init>()V
    .locals 25

    .line 34
    move-object/from16 v0, p0

    invoke-direct/range {p0 .. p0}, Landroid/app/Activity;-><init>()V

    .line 112
    const/4 v1, 0x0

    iput-object v1, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 113
    const-string v2, "gsm_only_card"

    const-string v3, "gsm_cdma_card"

    const-string v4, "cdma_only_card"

    filled-new-array {v2, v3, v4}, [Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCardTypeValues:[Ljava/lang/String;

    .line 115
    const-string v3, "GSM/WCDMA (WCDMA preferred)"

    const-string v4, "GSM only"

    const-string v5, "WCDMA only"

    const-string v6, "TD-SCDMA only"

    const-string v7, "GSM/WCDMA (auto)"

    const-string v8, "GSM/TD-SCDMA (auto)"

    const-string v9, "LTE only"

    const-string v10, "LTE/UMTS/GSM"

    const-string v11, "LTE/UMTS"

    const-string v12, "CDMA/EVDO"

    const-string v13, "CDMA only"

    const-string v14, "EVDO only"

    const-string v15, "LTE/CDMA/EVDO/UMTS/GSM"

    const-string v16, "LTE/CDMA/EVDO"

    const-string v17, "CDMA/EVDO/UMTS/GSM"

    const-string v18, "NR only"

    const-string v19, "NR/LTE"

    const-string v20, "NR/LTE/UMTS"

    const-string v21, "NR/LTE/UMTS/GSM"

    const-string v22, "NR/LTE/CDMA/EVDO"

    const-string v23, "NR/LTE/UMTS/GSM/C2K"

    const-string v24, "EM UI not support this type"

    filled-new-array/range {v3 .. v24}, [Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeLabel:[Ljava/lang/String;

    .line 139
    const/16 v2, 0x15

    new-array v2, v2, [I

    fill-array-data v2, :array_0

    iput-object v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeValues:[I

    .line 164
    const/4 v2, 0x1

    iput-boolean v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mFirstEntry:Z

    .line 165
    iput-boolean v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mEHRPDFirstEnter:Z

    .line 167
    iput v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSubId:I

    .line 169
    const/4 v2, 0x0

    iput v2, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCurrentSelected:I

    .line 170
    iput-object v1, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    .line 171
    iput-object v1, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

    .line 172
    iput-object v1, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    .line 174
    new-instance v1, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mHandler:Landroid/os/Handler;

    .line 237
    new-instance v1, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$2;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-void

    :array_0
    .array-data 4
        0x0
        0x1
        0x2
        0xd
        0x3
        0x10
        0xb
        0x14
        0x13
        0x4
        0x5
        0x6
        0x16
        0x8
        0x15
        0x17
        0x18
        0x1f
        0x20
        0x19
        0x21
    .end array-data
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->selectNetworkMode:I

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
    .param p1, "x1"    # I

    .line 34
    iput p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->selectNetworkMode:I

    return p1
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
    .param p1, "x1"    # I

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->isAvailable(I)Z

    move-result v0

    return v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
    .param p1, "x1"    # Z

    .line 34
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mEHRPDFirstEnter:Z

    return p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCardTypeValues:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCurrentSelected:I

    return v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
    .param p1, "x1"    # I

    .line 34
    iput p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCurrentSelected:I

    return p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeLabel:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeValues:[I

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
    .param p1, "x1"    # I

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->filterTypeByCapability(I)I

    move-result v0

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSubId:I

    return v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)Landroid/telephony/TelephonyManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private filterTypeByCapability(I)I
    .locals 6
    .param p1, "type"    # I

    .line 377
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSupportedRadioAccessFamily()J

    move-result-wide v0

    .line 378
    .local v0, "supportedRadioBitmask":J
    const-wide/32 v2, 0x10000

    and-long/2addr v2, v0

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    .line 380
    .local v2, "mHasTDSCapability":Z
    :goto_0
    if-nez v2, :cond_7

    .line 381
    const/16 v3, 0x14

    if-ne p1, v3, :cond_1

    .line 382
    const/16 v3, 0x9

    return v3

    .line 383
    :cond_1
    const/16 v3, 0x13

    if-ne p1, v3, :cond_2

    .line 384
    const/16 v3, 0xc

    return v3

    .line 385
    :cond_2
    const/16 v3, 0x16

    if-ne p1, v3, :cond_3

    .line 386
    const/16 v3, 0xa

    return v3

    .line 387
    :cond_3
    const/16 v3, 0x15

    if-ne p1, v3, :cond_4

    .line 388
    const/4 v3, 0x7

    return v3

    .line 389
    :cond_4
    const/16 v3, 0x1f

    if-ne p1, v3, :cond_5

    .line 390
    const/16 v3, 0x1c

    return v3

    .line 391
    :cond_5
    const/16 v3, 0x20

    if-ne p1, v3, :cond_6

    .line 392
    const/16 v3, 0x1a

    return v3

    .line 393
    :cond_6
    const/16 v3, 0x21

    if-ne p1, v3, :cond_7

    .line 394
    const/16 v3, 0x1b

    return v3

    .line 397
    :cond_7
    return p1
.end method

.method private findSpinnerIndexByType(I)I
    .locals 3
    .param p1, "type"    # I

    .line 413
    const/4 v0, 0x7

    if-ne p1, v0, :cond_0

    .line 414
    const/16 p1, 0x15

    .line 418
    :cond_0
    const/16 v0, 0x9

    if-eq p1, v0, :cond_1

    const/16 v0, 0x11

    if-ne p1, v0, :cond_2

    .line 419
    :cond_1
    const/16 p1, 0x14

    .line 421
    :cond_2
    const/16 v0, 0xc

    if-eq p1, v0, :cond_3

    const/16 v0, 0xf

    if-ne p1, v0, :cond_4

    .line 422
    :cond_3
    const/16 p1, 0x13

    .line 424
    :cond_4
    const/16 v0, 0xa

    if-ne p1, v0, :cond_5

    .line 425
    const/16 p1, 0x16

    .line 429
    :cond_5
    const/16 v0, 0x1c

    if-eq p1, v0, :cond_6

    const/16 v0, 0x1d

    if-ne p1, v0, :cond_7

    .line 430
    :cond_6
    const/16 p1, 0x1f

    .line 432
    :cond_7
    const/16 v0, 0x1a

    if-eq p1, v0, :cond_8

    const/16 v0, 0x1e

    if-ne p1, v0, :cond_9

    .line 433
    :cond_8
    const/16 p1, 0x20

    .line 435
    :cond_9
    const/16 v0, 0x1b

    if-ne p1, v0, :cond_a

    .line 436
    const/16 p1, 0x21

    .line 438
    :cond_a
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeValues:[I

    array-length v2, v1

    if-ge v0, v2, :cond_c

    .line 439
    aget v1, v1, v0

    if-ne v1, p1, :cond_b

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->isAvailable(I)Z

    move-result v1

    if-eqz v1, :cond_b

    .line 440
    return v0

    .line 438
    :cond_b
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 443
    .end local v0    # "i":I
    :cond_c
    const/4 v0, -0x1

    return v0
.end method

.method private handleQueryCdmaCapability()V
    .locals 3

    .line 576
    const-string v0, "persist.vendor.radio.disable_c2k_cap"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 577
    .local v0, "enabled":Ljava/lang/String;
    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "NetworkMode93"

    if-eqz v1, :cond_0

    .line 578
    const-string v1, "QueryCdmaCapability set true"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 579
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mFirstEntry:Z

    .line 580
    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 582
    :cond_0
    const-string v1, "QueryCdmaCapability set false"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 583
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mFirstEntry:Z

    .line 584
    iget-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 586
    :goto_0
    return-void
.end method

.method private isAvailable(I)Z
    .locals 16
    .param p1, "index"    # I

    .line 448
    move-object/from16 v0, p0

    move/from16 v1, p1

    const/4 v2, 0x0

    const/16 v3, 0x15

    if-ne v3, v1, :cond_0

    .line 449
    return v2

    .line 452
    :cond_0
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isNRCapabilityViceSim()Z

    move-result v3

    const/16 v4, 0x14

    const/16 v5, 0x13

    if-nez v3, :cond_2

    .line 453
    const/16 v3, 0xf

    if-eq v1, v3, :cond_1

    const/16 v3, 0x10

    if-eq v1, v3, :cond_1

    const/16 v3, 0x11

    if-eq v1, v3, :cond_1

    const/16 v3, 0x12

    if-eq v1, v3, :cond_1

    if-eq v1, v5, :cond_1

    if-ne v1, v4, :cond_2

    .line 459
    :cond_1
    return v2

    .line 463
    :cond_2
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isCapabilitySim()Z

    move-result v3

    const-string v6, "ro.vendor.mtk_rat_wcdma_preferred"

    const/16 v7, 0xe

    const/4 v8, 0x4

    const/16 v12, 0xb

    const/16 v14, 0x9

    const/16 v15, 0xc

    const/16 v9, 0xd

    const/16 v10, 0xa

    const/4 v11, 0x3

    const/4 v13, 0x1

    if-eqz v3, :cond_10

    .line 465
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType()I

    move-result v3

    if-ne v3, v11, :cond_4

    if-eq v1, v10, :cond_3

    if-eq v1, v12, :cond_3

    if-ne v1, v14, :cond_4

    .line 469
    :cond_3
    return v13

    .line 470
    :cond_4
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType()I

    move-result v3

    if-ne v3, v11, :cond_5

    .line 471
    return v2

    .line 474
    :cond_5
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType()I

    move-result v3

    if-ne v3, v13, :cond_7

    if-eq v1, v10, :cond_6

    if-eq v1, v12, :cond_6

    if-eq v1, v14, :cond_6

    if-eq v1, v9, :cond_6

    if-eq v1, v15, :cond_6

    if-eq v1, v7, :cond_6

    if-eq v1, v5, :cond_6

    if-ne v1, v4, :cond_7

    .line 483
    :cond_6
    return v2

    .line 488
    :cond_7
    iget v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mModemType:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_9

    if-eqz v1, :cond_8

    if-eq v1, v4, :cond_8

    if-ne v1, v8, :cond_9

    .line 491
    :cond_8
    return v2

    .line 494
    :cond_9
    iget v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mModemType:I

    if-ne v3, v13, :cond_b

    if-eq v1, v11, :cond_a

    const/4 v3, 0x5

    if-ne v1, v3, :cond_b

    .line 496
    :cond_a
    return v2

    .line 500
    :cond_b
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v3

    if-nez v3, :cond_d

    const/4 v3, 0x6

    if-eq v1, v3, :cond_c

    const/4 v3, 0x7

    if-eq v1, v3, :cond_c

    const/16 v3, 0x8

    if-eq v1, v3, :cond_c

    if-eq v1, v15, :cond_c

    if-ne v1, v9, :cond_d

    .line 505
    :cond_c
    return v2

    .line 509
    :cond_d
    invoke-static {v6}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_f

    if-eq v1, v8, :cond_e

    const/4 v3, 0x5

    if-ne v1, v3, :cond_f

    .line 512
    :cond_e
    return v2

    .line 515
    :cond_f
    return v13

    .line 519
    :cond_10
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType()I

    move-result v3

    if-ne v3, v11, :cond_11

    if-ne v1, v10, :cond_11

    .line 521
    return v13

    .line 522
    :cond_11
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType()I

    move-result v3

    if-ne v3, v11, :cond_12

    .line 523
    return v2

    .line 526
    :cond_12
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType()I

    move-result v3

    if-ne v3, v13, :cond_14

    if-eq v1, v10, :cond_13

    if-eq v1, v12, :cond_13

    if-eq v1, v14, :cond_13

    if-eq v1, v9, :cond_13

    if-eq v1, v15, :cond_13

    if-eq v1, v7, :cond_13

    if-eq v1, v5, :cond_13

    if-ne v1, v4, :cond_14

    .line 535
    :cond_13
    return v2

    .line 540
    :cond_14
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isLteCapabilityViceSim()Z

    move-result v3

    if-eqz v3, :cond_16

    .line 541
    const/4 v3, 0x6

    if-eq v1, v3, :cond_15

    const/4 v3, 0x7

    if-eq v1, v3, :cond_15

    const/16 v3, 0x8

    if-eq v1, v3, :cond_15

    if-eq v1, v15, :cond_15

    if-ne v1, v9, :cond_17

    .line 544
    :cond_15
    return v13

    .line 547
    :cond_16
    const/4 v3, 0x6

    if-eq v1, v3, :cond_1f

    const/4 v3, 0x7

    if-eq v1, v3, :cond_1f

    const/16 v3, 0x8

    if-eq v1, v3, :cond_1f

    if-eq v1, v15, :cond_1f

    if-ne v1, v9, :cond_17

    goto :goto_2

    .line 554
    :cond_17
    iget-object v3, v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isWCapabilityViceSim()Z

    move-result v3

    if-eqz v3, :cond_1c

    .line 555
    if-eq v1, v11, :cond_1b

    const/4 v3, 0x5

    if-ne v1, v3, :cond_18

    goto :goto_0

    .line 558
    :cond_18
    invoke-static {v6}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1a

    if-eq v1, v8, :cond_19

    if-ne v1, v3, :cond_1a

    .line 561
    :cond_19
    return v2

    .line 563
    :cond_1a
    return v13

    .line 556
    :cond_1b
    :goto_0
    return v2

    .line 565
    :cond_1c
    if-eq v1, v13, :cond_1e

    if-eq v1, v10, :cond_1e

    if-eq v1, v14, :cond_1e

    if-ne v1, v7, :cond_1d

    goto :goto_1

    .line 569
    :cond_1d
    return v2

    .line 567
    :cond_1e
    :goto_1
    return v13

    .line 550
    :cond_1f
    :goto_2
    return v2
.end method

.method private queryeHRPDStatus()V
    .locals 3

    .line 631
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 632
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+eHRPD?"

    aput-object v2, v0, v1

    .line 633
    const/4 v1, 0x1

    const-string v2, "+EHRPD:"

    aput-object v2, v0, v1

    .line 634
    const/4 v1, 0x2

    const-string v2, "DESTRILD:C2K"

    aput-object v2, v0, v1

    .line 635
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 636
    .local v1, "cmd_s":[Ljava/lang/String;
    const/16 v2, 0x67

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->sendAtCommand([Ljava/lang/String;I)V

    .line 637
    return-void
.end method

.method private sendAtCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 660
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendAtCommand: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkMode93"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 661
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimType:I

    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 662
    return-void
.end method

.method private seteHRPDStatus(I)V
    .locals 4
    .param p1, "state"    # I

    .line 640
    const/4 v0, 0x0

    .line 641
    .local v0, "atCommand":Ljava/lang/String;
    const/4 v1, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 646
    :cond_0
    const-string v0, "AT+eHRPD=1"

    goto :goto_0

    .line 643
    :cond_1
    const-string v0, "AT+eHRPD=0"

    .line 644
    nop

    .line 650
    :goto_0
    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/String;

    .line 651
    .local v2, "cmd":[Ljava/lang/String;
    const/4 v3, 0x0

    aput-object v0, v2, v3

    .line 652
    const-string v3, ""

    aput-object v3, v2, v1

    .line 653
    const/4 v1, 0x2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v2, v1

    .line 654
    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 656
    .local v1, "cmd_s":[Ljava/lang/String;
    const/16 v3, 0x68

    invoke-direct {p0, v1, v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->sendAtCommand([Ljava/lang/String;I)V

    .line 657
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 4
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 604
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    const v3, 0x7f060325

    if-ne v0, v3, :cond_2

    .line 605
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mFirstEntry:Z

    if-ne v0, v2, :cond_0

    .line 606
    iput-boolean v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mFirstEntry:Z

    .line 607
    return-void

    .line 610
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 611
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v1, "1"

    invoke-interface {v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setDisableC2kCap(Ljava/lang/String;)Z

    goto :goto_0

    .line 613
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    const-string v1, "0"

    invoke-interface {v0, v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setDisableC2kCap(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 618
    :goto_0
    goto :goto_1

    .line 615
    :catch_0
    move-exception v0

    .line 616
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 617
    const-string v1, "NetworkMode93"

    const-string v2, "set property failed ..."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 619
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    const/16 v0, 0x7d0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->showDialog(I)V

    goto :goto_2

    .line 620
    :cond_2
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v3, 0x7f060326

    if-ne v0, v3, :cond_4

    .line 621
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mEHRPDFirstEnter:Z

    if-ne v0, v2, :cond_3

    .line 622
    iput-boolean v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mEHRPDFirstEnter:Z

    .line 623
    return-void

    .line 625
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    invoke-virtual {v0, p2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 626
    xor-int/lit8 v0, p2, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->seteHRPDStatus(I)V

    .line 628
    :cond_4
    :goto_2
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 280
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 281
    const v0, 0x7f0800a9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->setContentView(I)V

    .line 282
    const v0, 0x7f0605b2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    .line 283
    const v0, 0x7f0605b3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 284
    const v0, 0x7f060326

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/view/View;->setVisibility(I)V

    .line 286
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getIntent()Landroid/content/Intent;

    move-result-object v2

    const-string v3, "mSimType"

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimType:I

    .line 287
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSimType "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimType:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "NetworkMode93"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 289
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v2

    .line 290
    .local v2, "isCdma":Z
    if-eqz v2, :cond_0

    .line 291
    const v1, 0x7f060325

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

    .line 292
    invoke-virtual {v1, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 293
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCbDisableC2kCapabilit:Landroid/widget/CheckBox;

    invoke-virtual {v1, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 294
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->handleQueryCdmaCapability()V

    .line 295
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mDisableeHRPDCheckBox:Landroid/widget/CheckBox;

    .line 296
    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    goto :goto_0

    .line 298
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 301
    :goto_0
    new-instance v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$CustomAdapter;

    const v1, 0x1090008

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeLabel:[Ljava/lang/String;

    invoke-direct {v0, p0, p0, v1, v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$CustomAdapter;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;Landroid/content/Context;I[Ljava/lang/String;)V

    .line 304
    .local v0, "adapter":Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$CustomAdapter;
    const v1, 0x1090009

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$CustomAdapter;->setDropDownViewResource(I)V

    .line 305
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 306
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 307
    const-string v1, "phone"

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    iput-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 308
    if-eqz v2, :cond_1

    .line 309
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->queryeHRPDStatus()V

    .line 311
    :cond_1
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I

    .line 590
    const/4 v0, 0x0

    .line 591
    .local v0, "dialog":Landroid/app/Dialog;
    const/4 v1, 0x0

    .line 592
    .local v1, "builder":Landroid/app/AlertDialog$Builder;
    const/16 v2, 0x7d0

    if-eq p1, v2, :cond_0

    .line 598
    return-object v0

    .line 594
    :cond_0
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v3, "Disable c2k capability"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 595
    const-string v3, "Please reboot the phone!"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    const/4 v3, 0x0

    .line 596
    const-string v4, "OK"

    invoke-virtual {v2, v4, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v2

    .line 594
    return-object v2
.end method

.method protected onResume()V
    .locals 4

    .line 315
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 317
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 318
    .local v0, "mSimType":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSimType "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "NetworkMode93"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 319
    new-instance v1, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    .line 321
    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getSimType()I

    move-result v1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v1

    if-nez v1, :cond_0

    .line 322
    const-string v1, "The card is not ready,please check it"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 323
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 324
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 325
    return-void

    .line 328
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getSimType()I

    move-result v1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->getSubIdBySlot(I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSubId:I

    .line 329
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mSubId = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSubId:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    iget v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mSubId:I

    if-gez v1, :cond_1

    .line 331
    const-string v1, "Invalid sub id"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 332
    return-void

    .line 334
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 337
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mModemType:I

    .line 338
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mModemType = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mModemType:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 340
    new-instance v1, Ljava/lang/Thread;

    new-instance v2, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$3;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$3;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)V

    invoke-direct {v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 353
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    .line 355
    return-void
.end method

.method updateNetworkType(I)V
    .locals 5
    .param p1, "type"    # I

    .line 358
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->findSpinnerIndexByType(I)I

    move-result v0

    .line 359
    .local v0, "index":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Index = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NetworkMode93"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 360
    const/4 v1, 0x1

    if-ltz v0, :cond_0

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getCount()I

    move-result v3

    if-ge v0, v3, :cond_0

    .line 361
    iput v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCurrentSelected:I

    .line 362
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v0, v1}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 363
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "The NetworkSpinner show: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mNetworkTypeLabel:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 365
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Netwok select type is: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 367
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Netwok select not support the type: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 368
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 369
    const/16 v2, 0x15

    iput v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mCurrentSelected:I

    .line 370
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v2, v1}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 373
    :goto_0
    return-void
.end method
