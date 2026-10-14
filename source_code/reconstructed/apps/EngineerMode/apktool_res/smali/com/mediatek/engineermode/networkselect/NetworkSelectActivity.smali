.class public Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
.super Landroid/app/Activity;
.source "NetworkSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;,
        Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;
    }
.end annotation


# static fields
.field private static final CDMA_ONLY:I = 0x5

.field private static final EVENT_QUERY_NETWORKMODE_DONE:I = 0x65

.field private static final EVENT_SET_NETWORKMODE_DONE:I = 0x66

.field private static final GSM_ONLY:I = 0x1

.field private static final GSM_TDSCDMA_AUTO:I = 0x10

.field private static final GSM_WCDMA_AUTO:I = 0x3

.field private static final INDEX_CDMA_ONLY:I = 0x7

.field private static final INDEX_EM_UI_NOT_SUPPORT_TYPE:I = 0xa

.field private static final INDEX_GSM_ONLY:I = 0x1

.field private static final INDEX_GSM_TDSCDMA_AUTO:I = 0x5

.field private static final INDEX_GSM_WCDMA_AUTO:I = 0x4

.field private static final INDEX_LTE_ONLY:I = 0x6

.field private static final INDEX_LTE_TDSCDMA_GSM_WCDMA:I = 0x8

.field private static final INDEX_LTE_WCDMA:I = 0x9

.field private static final INDEX_TDSCDMA_ONLY:I = 0x3

.field private static final INDEX_WCDMA_ONLY:I = 0x2

.field private static final INDEX_WCDMA_PREFERRED:I = 0x0

.field private static final LTE_CDMA_EVDO_GSM_WCDMA:I = 0xa

.field private static final LTE_GSM_WCDMA:I = 0x9

.field private static final LTE_ONLY:I = 0xb

.field private static final LTE_TDSCDMA_GSM:I = 0x11

.field private static final LTE_TDSCDMA_GSM_WCDMA:I = 0x14

.field private static final LTE_WCDMA:I = 0xc

.field private static final TAG:Ljava/lang/String; = "NetworkMode"

.field private static final TDSCDMA_ONLY:I = 0xd

.field private static final WCDMA_ONLY:I = 0x2

.field private static final WCDMA_PREFERRED:I


# instance fields
.field private mCurrentSelected:I

.field private mHandler:Landroid/os/Handler;

.field private mModemType:I

.field private mNetworkTypeValues:[I

.field private mPreferredNetworkListener:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mPreferredNetworkSpinner:Landroid/widget/Spinner;

.field private mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

.field private mSubId:I

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 28
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 59
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 62
    const/4 v1, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSubId:I

    .line 63
    const/16 v1, 0xa

    new-array v1, v1, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mNetworkTypeValues:[I

    .line 66
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mCurrentSelected:I

    .line 67
    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    .line 69
    new-instance v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$1;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    .line 103
    new-instance v0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$2;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mHandler:Landroid/os/Handler;

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
        0x5
        0x14
        0xc
    .end array-data
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mCurrentSelected:I

    return v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
    .param p1, "x1"    # I

    .line 28
    iput p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mCurrentSelected:I

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mNetworkTypeValues:[I

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSubId:I

    return v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)Landroid/telephony/TelephonyManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
    .param p1, "x1"    # I

    .line 28
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->isAvailable(I)Z

    move-result v0

    return v0
.end method

.method private findSpinnerIndexByType(I)I
    .locals 3
    .param p1, "type"    # I

    .line 339
    const/4 v0, 0x2

    if-eqz p1, :cond_0

    const/4 v1, 0x3

    if-ne p1, v1, :cond_1

    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mModemType:I

    if-ne v1, v0, :cond_1

    .line 341
    const/16 p1, 0x10

    .line 344
    :cond_1
    if-nez p1, :cond_2

    .line 345
    const-string v1, "ro.vendor.mtk_rat_wcdma_preferred"

    invoke-static {v1}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 346
    const/4 p1, 0x3

    .line 349
    :cond_2
    if-ne p1, v0, :cond_3

    iget v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mModemType:I

    if-ne v1, v0, :cond_3

    .line 350
    const/16 p1, 0xd

    .line 353
    :cond_3
    const/16 v0, 0x9

    if-eq p1, v0, :cond_4

    const/16 v0, 0x11

    if-ne p1, v0, :cond_5

    .line 354
    :cond_4
    const/16 p1, 0x14

    .line 356
    :cond_5
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mNetworkTypeValues:[I

    array-length v2, v1

    if-ge v0, v2, :cond_7

    .line 357
    aget v1, v1, v0

    if-ne v1, p1, :cond_6

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->isAvailable(I)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 358
    return v0

    .line 356
    :cond_6
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 361
    .end local v0    # "i":I
    :cond_7
    const/4 v0, -0x1

    return v0
.end method

.method private isAvailable(I)Z
    .locals 11
    .param p1, "index"    # I

    .line 210
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isCapabilitySim()Z

    move-result v0

    const/4 v1, 0x7

    const/4 v2, 0x5

    const-string v3, "ro.vendor.mtk_rat_wcdma_preferred"

    const/4 v4, 0x3

    const/16 v5, 0x9

    const/16 v6, 0x8

    const/4 v7, 0x6

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-eqz v0, :cond_8

    .line 211
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mModemType:I

    const/4 v10, 0x2

    if-ne v0, v10, :cond_1

    if-eqz p1, :cond_0

    if-eq p1, v10, :cond_0

    const/4 v0, 0x4

    if-ne p1, v0, :cond_1

    .line 214
    :cond_0
    return v9

    .line 216
    :cond_1
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mModemType:I

    if-ne v0, v8, :cond_3

    if-eq p1, v4, :cond_2

    if-ne p1, v2, :cond_3

    .line 218
    :cond_2
    return v9

    .line 220
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v0

    if-nez v0, :cond_5

    if-eq p1, v7, :cond_4

    if-eq p1, v6, :cond_4

    if-ne p1, v5, :cond_5

    .line 223
    :cond_4
    return v9

    .line 225
    :cond_5
    invoke-static {v3}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    if-nez p1, :cond_6

    .line 227
    return v9

    .line 229
    :cond_6
    if-ne p1, v1, :cond_7

    .line 230
    return v9

    .line 232
    :cond_7
    return v8

    .line 235
    :cond_8
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isLteCapabilityViceSim()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 236
    if-eq p1, v7, :cond_9

    if-eq p1, v6, :cond_9

    if-ne p1, v5, :cond_b

    .line 238
    :cond_9
    return v8

    .line 241
    :cond_a
    if-eq p1, v7, :cond_11

    if-eq p1, v6, :cond_11

    if-ne p1, v5, :cond_b

    goto :goto_1

    .line 248
    :cond_b
    iget-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isWCapabilityViceSim()Z

    move-result v0

    if-eqz v0, :cond_f

    .line 249
    if-eq p1, v4, :cond_e

    if-eq p1, v2, :cond_e

    if-ne p1, v1, :cond_c

    goto :goto_0

    .line 253
    :cond_c
    invoke-static {v3}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_d

    if-nez p1, :cond_d

    .line 255
    return v9

    .line 257
    :cond_d
    return v8

    .line 251
    :cond_e
    :goto_0
    return v9

    .line 259
    :cond_f
    if-ne p1, v8, :cond_10

    .line 260
    return v8

    .line 262
    :cond_10
    return v9

    .line 243
    :cond_11
    :goto_1
    return v9
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 270
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 271
    const v0, 0x7f0800a9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->setContentView(I)V

    .line 272
    const v0, 0x7f0605b2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    .line 273
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v0

    const/16 v1, 0x8

    if-nez v0, :cond_0

    .line 274
    const v0, 0x7f0605b3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 276
    :cond_0
    const v0, 0x7f060326

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 277
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 278
    return-void
.end method

.method protected onResume()V
    .locals 6

    .line 282
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 283
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v1

    const-string v2, "mSimType"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 284
    .local v0, "mSimType":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mSimType "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NetworkMode"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    new-instance v1, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

    .line 286
    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->getSimType()I

    move-result v1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v1

    const/4 v3, 0x0

    if-nez v1, :cond_0

    .line 287
    const-string v1, "The card is not ready,please check it"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 288
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 289
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 290
    return-void

    .line 292
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSimCard:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->getSimType()I

    move-result v1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->getSubIdBySlot(I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mSubId:I

    .line 293
    if-gez v1, :cond_1

    .line 294
    const-string v1, "Invalid sub id"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    return-void

    .line 297
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    const/4 v4, 0x1

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 300
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mModemType:I

    .line 302
    const/4 v5, 0x3

    if-eq v1, v5, :cond_2

    .line 303
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f010072

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v1

    .local v1, "labels":[Ljava/lang/String;
    goto :goto_0

    .line 305
    .end local v1    # "labels":[Ljava/lang/String;
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Isn\'t TD/WCDMA modem: "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mModemType:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 306
    const-string v1, "GSM only"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    .line 307
    .restart local v1    # "labels":[Ljava/lang/String;
    new-array v2, v4, [I

    aput v4, v2, v3

    iput-object v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mNetworkTypeValues:[I

    .line 309
    :goto_0
    new-instance v2, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;

    const v3, 0x1090008

    invoke-direct {v2, p0, p0, v3, v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;Landroid/content/Context;I[Ljava/lang/String;)V

    .line 311
    .local v2, "adapter":Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;
    const v3, 0x1090009

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$CustomAdapter;->setDropDownViewResource(I)V

    .line 312
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 313
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_1
    iget-object v5, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mNetworkTypeValues:[I

    array-length v5, v5

    if-ge v3, v5, :cond_4

    .line 314
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->isAvailable(I)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 315
    iput v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mCurrentSelected:I

    .line 316
    iget-object v5, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v5, v3, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 317
    goto :goto_2

    .line 313
    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 320
    .end local v3    # "i":I
    :cond_4
    :goto_2
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 322
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$3;-><init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 335
    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    .line 336
    return-void
.end method

.method updateNetworkType(I)V
    .locals 5
    .param p1, "type"    # I

    .line 364
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->findSpinnerIndexByType(I)I

    move-result v0

    .line 365
    .local v0, "index":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Index = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "NetworkMode"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 366
    const/4 v1, 0x1

    if-ltz v0, :cond_0

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getCount()I

    move-result v3

    if-ge v0, v3, :cond_0

    .line 367
    iput v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mCurrentSelected:I

    .line 368
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v0, v1}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 369
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Netwok select type is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 370
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 372
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Netwok select not support the type: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 373
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 374
    const/16 v2, 0xa

    iput v2, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mCurrentSelected:I

    .line 375
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->mPreferredNetworkSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v2, v1}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 378
    :goto_0
    return-void
.end method
