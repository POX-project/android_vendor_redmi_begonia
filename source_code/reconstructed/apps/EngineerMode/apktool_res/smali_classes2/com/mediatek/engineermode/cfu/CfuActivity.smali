.class public Lcom/mediatek/engineermode/cfu/CfuActivity;
.super Landroid/app/Activity;
.source "CfuActivity.java"


# static fields
.field private static final EF_INVALID:I = 0x0

.field private static final EF_VALID:I = 0x1

.field private static final EVENT_EF_CFF_CPHS_SIM_INFO_UPDATE:I = 0x3

.field private static final EVENT_EF_CFIS_SIM_INFO_UPDATE:I = 0x2

.field private static final EVENT_ICC_READY:I = 0x1

.field private static final TAG:Ljava/lang/String; = "CFU"


# instance fields
.field private btRefresh:Landroid/widget/Button;

.field mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

.field mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

.field private final mHandler:Landroid/os/Handler;

.field private mIccCardType:I

.field private mIccCardTypes:[Ljava/lang/String;

.field private mIccRecords:Lcom/android/internal/telephony/uicc/IccRecords;

.field private mSlot:I

.field private mSubId:I

.field private mTvEfCffCphsStatus:Landroid/widget/TextView;

.field private mTvEfcfisStatus:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 76
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 90
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSlot:I

    .line 91
    const/4 v1, -0x1

    iput v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSubId:I

    .line 92
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccRecords:Lcom/android/internal/telephony/uicc/IccRecords;

    .line 95
    iput v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    .line 96
    const-string v0, "SIM"

    const-string v2, "USIM"

    const-string v3, "UNSUPPORT"

    filled-new-array {v0, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardTypes:[Ljava/lang/String;

    .line 99
    iput-object v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    .line 102
    iput-object v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    .line 160
    new-instance v0, Lcom/mediatek/engineermode/cfu/CfuActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/cfu/CfuActivity$2;-><init>(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/cfu/CfuActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->refreshPage()V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfcfisStatus:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfCffCphsStatus:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/cfu/CfuActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->loadSubId()V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/cfu/CfuActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->loadIccCardType()V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/cfu/CfuActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    iget v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    return v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/cfu/CfuActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->loadCfuSimInfoData()V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/cfu/CfuActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/cfu/CfuActivity;

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private createCfuSimInfoData()V
    .locals 14

    .line 145
    new-instance v6, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    const-string v7, "7F20"

    const-string v0, "7FFF"

    filled-new-array {v7, v0}, [Ljava/lang/String;

    move-result-object v3

    const-string v1, "EF_CFIS"

    const/16 v2, 0x6fcb

    const/4 v4, 0x1

    const-string v5, "linear fixed"

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;-><init>(Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;)V

    iput-object v6, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    .line 152
    new-instance v0, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    filled-new-array {v7, v7}, [Ljava/lang/String;

    move-result-object v11

    const-string v9, "EF_CFF_CPHS"

    const/16 v10, 0x6f13

    const/4 v12, 0x1

    const-string v13, "transparent"

    move-object v8, v0

    invoke-direct/range {v8 .. v13}, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;-><init>(Ljava/lang/String;I[Ljava/lang/String;ILjava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    .line 158
    return-void
.end method

.method private loadCfuSimInfoData()V
    .locals 16

    .line 244
    move-object/from16 v0, p0

    const/4 v1, 0x0

    .line 245
    .local v1, "cfisValid":I
    iget-object v2, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v2, v2, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_Path:[Ljava/lang/String;

    iget v3, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    aget-object v2, v2, v3

    const-string v3, "x"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const-string v4, ")"

    const-string v5, "Valid ("

    const-string v6, ": is empty"

    const-string v8, "CFU"

    const/4 v9, 0x2

    const-string v10, "Not Valid"

    const/4 v11, 0x0

    if-eqz v2, :cond_0

    .line 246
    iget-object v2, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v2, v9, v11, v11, v10}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v9

    invoke-virtual {v2, v9}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto/16 :goto_2

    .line 249
    :cond_0
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v2

    iget v12, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSlot:I

    iget-object v13, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget v13, v13, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->Family:I

    iget-object v14, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget v14, v14, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_id:I

    iget-object v15, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v15, v15, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_Path:[Ljava/lang/String;

    iget v7, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    aget-object v7, v15, v7

    invoke-virtual {v2, v12, v13, v14, v7}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->loadEFLinearFixedAll(IIILjava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 252
    .local v2, "data":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    if-eqz v2, :cond_3

    .line 253
    const/4 v7, 0x0

    .local v7, "j":I
    :goto_0
    if-eqz v2, :cond_1

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v12

    if-ge v7, v12, :cond_1

    .line 254
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v13, v13, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "["

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, "] : "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 255
    invoke-interface {v2, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    invoke-virtual {v13}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 254
    invoke-static {v8, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 253
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 259
    .end local v7    # "j":I
    :cond_1
    invoke-interface {v2, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-static {v7}, Lcom/android/internal/telephony/uicc/IccUtils;->hexStringToBytes(Ljava/lang/String;)[B

    move-result-object v7

    .line 260
    .local v7, "cfisBytes":[B
    if-eqz v7, :cond_2

    array-length v12, v7

    const/16 v13, 0x10

    if-ne v12, v13, :cond_2

    .line 261
    iget-object v12, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 262
    invoke-interface {v2, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    .line 261
    const/4 v14, 0x1

    invoke-virtual {v12, v9, v14, v11, v13}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v9

    invoke-virtual {v12, v9}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_1

    .line 264
    :cond_2
    iget-object v12, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v12, v9, v11, v11, v10}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v9

    invoke-virtual {v12, v9}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 267
    .end local v7    # "cfisBytes":[B
    :goto_1
    goto :goto_2

    .line 268
    :cond_3
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCfisSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v12, v12, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    iget-object v7, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v7, v9, v11, v11, v10}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v9

    invoke-virtual {v7, v9}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 275
    .end local v2    # "data":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    :goto_2
    const-string v2, ""

    .line 276
    .local v2, "cffString":Ljava/lang/String;
    iget-object v7, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v7, v7, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_Path:[Ljava/lang/String;

    iget v9, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    aget-object v7, v7, v9

    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v7, 0x3

    if-eqz v3, :cond_4

    .line 277
    iget-object v3, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v3, v7, v11, v11, v10}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto/16 :goto_3

    .line 280
    :cond_4
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v3

    iget v9, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSlot:I

    iget-object v12, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget v12, v12, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->Family:I

    iget-object v13, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget v13, v13, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_id:I

    iget-object v14, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v14, v14, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->EF_Path:[Ljava/lang/String;

    iget v15, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    aget-object v14, v14, v15

    invoke-virtual {v3, v9, v12, v13, v14}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->loadEFTransparent(IIILjava/lang/String;)[B

    move-result-object v3

    .line 283
    .local v3, "data":[B
    if-eqz v3, :cond_5

    .line 284
    invoke-static {v3}, Lcom/android/internal/telephony/uicc/IccUtils;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v2

    .line 285
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v9, v9, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ":"

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 286
    iget-object v6, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    invoke-virtual {v6, v7, v5, v11, v4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v6, v4}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_3

    .line 289
    :cond_5
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mCffCphsSimInfoData:Lcom/mediatek/engineermode/cfu/CfuSimInfoData;

    iget-object v5, v5, Lcom/mediatek/engineermode/cfu/CfuSimInfoData;->name:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 290
    iget-object v4, v0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mHandler:Landroid/os/Handler;

    invoke-virtual {v4, v7, v11, v11, v10}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 294
    .end local v3    # "data":[B
    :goto_3
    return-void
.end method

.method private loadIccCardType()V
    .locals 3

    .line 225
    invoke-static {}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getDefault()Lcom/mediatek/telephony/MtkTelephonyManagerEx;

    move-result-object v0

    iget v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSubId:I

    invoke-virtual {v0, v1}, Lcom/mediatek/telephony/MtkTelephonyManagerEx;->getIccCardType(I)Ljava/lang/String;

    move-result-object v0

    .line 227
    .local v0, "iccCardType":Ljava/lang/String;
    const/4 v1, 0x2

    if-nez v0, :cond_0

    .line 228
    iput v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    .line 229
    return-void

    .line 232
    :cond_0
    const-string v2, "SIM"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 233
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    goto :goto_0

    .line 234
    :cond_1
    const-string v2, "USIM"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 235
    const/4 v1, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    goto :goto_0

    .line 237
    :cond_2
    iput v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    .line 239
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "IccCardType: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mIccCardType:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "CFU"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    return-void
.end method

.method private loadInCardInfoBackground()V
    .locals 1

    .line 192
    new-instance v0, Lcom/mediatek/engineermode/cfu/CfuActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/cfu/CfuActivity$3;-><init>(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    .line 206
    invoke-virtual {v0}, Lcom/mediatek/engineermode/cfu/CfuActivity$3;->start()V

    .line 207
    return-void
.end method

.method private loadSubId()V
    .locals 5

    .line 210
    iget v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSlot:I

    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getSubId(I)[I

    move-result-object v0

    .line 211
    .local v0, "subId":[I
    const-string v1, "CFU"

    if-eqz v0, :cond_0

    .line 212
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v0

    if-ge v2, v3, :cond_0

    .line 213
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "subId["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v4, v0, v2

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 216
    .end local v2    # "i":I
    :cond_0
    if-eqz v0, :cond_2

    array-length v2, v0

    if-eqz v2, :cond_2

    const/4 v2, 0x0

    aget v3, v0, v2

    .line 217
    invoke-static {v3}, Landroid/telephony/SubscriptionManager;->isValidSubscriptionId(I)Z

    move-result v3

    if-nez v3, :cond_1

    goto :goto_1

    .line 220
    :cond_1
    aget v1, v0, v2

    iput v1, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSubId:I

    goto :goto_2

    .line 218
    :cond_2
    :goto_1
    const-string v2, "Invalid sub id"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    :goto_2
    return-void
.end method

.method private refreshPage()V
    .locals 3

    .line 127
    iget v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mSlot:I

    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 128
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->loadInCardInfoBackground()V

    goto :goto_0

    .line 130
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfcfisStatus:Landroid/widget/TextView;

    const-string v1, "#000000"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 131
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfcfisStatus:Landroid/widget/TextView;

    const-string v2, "N/A"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 133
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfCffCphsStatus:Landroid/widget/TextView;

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 134
    iget-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfCffCphsStatus:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 136
    :goto_0
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 106
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 107
    const v0, 0x7f08002d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->setContentView(I)V

    .line 109
    const-string v0, "CFU"

    const-string v1, "onCreate"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    const v0, 0x7f060279

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfcfisStatus:Landroid/widget/TextView;

    .line 112
    const v0, 0x7f060277

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->mTvEfCffCphsStatus:Landroid/widget/TextView;

    .line 114
    const v0, 0x7f06027a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/cfu/CfuActivity;->btRefresh:Landroid/widget/Button;

    .line 115
    new-instance v1, Lcom/mediatek/engineermode/cfu/CfuActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/cfu/CfuActivity$1;-><init>(Lcom/mediatek/engineermode/cfu/CfuActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 122
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->createCfuSimInfoData()V

    .line 123
    invoke-direct {p0}, Lcom/mediatek/engineermode/cfu/CfuActivity;->refreshPage()V

    .line 124
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 140
    const-string v0, "CFU"

    const-string v1, "onDestroy()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 142
    return-void
.end method
