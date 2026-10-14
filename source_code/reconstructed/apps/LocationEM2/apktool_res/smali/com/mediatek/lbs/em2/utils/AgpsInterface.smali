.class public Lcom/mediatek/lbs/em2/utils/AgpsInterface;
.super Ljava/lang/Object;
.source "AgpsInterface.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;,
        Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlCallback;
    }
.end annotation


# instance fields
.field protected in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

.field mData:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;"
        }
    .end annotation
.end field

.field mLLbsHidlDeathRecipient:Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;

.field mLbsHidlCallback:Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlCallback;

.field mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

.field protected out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;


# direct methods
.method public constructor <init>()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 276
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 207
    new-instance v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x4000

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    .line 208
    new-instance v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    .line 230
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mData:Ljava/util/ArrayList;

    .line 232
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlCallback;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlCallback;-><init>(Lcom/mediatek/lbs/em2/utils/AgpsInterface;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLbsHidlCallback:Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlCallback;

    .line 240
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;-><init>(Lcom/mediatek/lbs/em2/utils/AgpsInterface;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLLbsHidlDeathRecipient:Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;

    .line 277
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->checkVersion()V

    return-void
.end method

.method public static convertByteArrayToArrayList([BI)Ljava/util/ArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([BI)",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;"
        }
    .end annotation

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 215
    :cond_0
    array-length v0, p0

    if-ge p1, v0, :cond_1

    goto :goto_0

    :cond_1
    array-length p1, p0

    .line 216
    :goto_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    :goto_1
    if-ge v1, p1, :cond_2

    .line 218
    aget-byte v2, p0, v1

    invoke-static {v2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_2
    return-object v0
.end method

.method public static covertArrayListToByteArray(Ljava/util/ArrayList;[B)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;[B)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 224
    :goto_0
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 225
    invoke-virtual {p0, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Byte;

    invoke-virtual {v1}, Ljava/lang/Byte;->byteValue()B

    move-result v1

    aput-byte v1, p1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private doHidl(Ljava/lang/String;[BI)V
    .locals 3

    .line 251
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    if-nez v0, :cond_0

    .line 252
    invoke-static {p1}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->getService(Ljava/lang/String;)Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    .line 253
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLLbsHidlDeathRecipient:Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;

    const-wide/16 v1, 0x0

    invoke-interface {p1, v0, v1, v2}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z

    .line 256
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLbsHidlCallback:Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlCallback;

    .line 257
    invoke-static {p2, p3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->convertByteArrayToArrayList([BI)Ljava/util/ArrayList;

    move-result-object p2

    .line 256
    invoke-interface {p1, v0, p2}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->sendToServerWithCallback(Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;Ljava/util/ArrayList;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 258
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mData:Ljava/util/ArrayList;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mBuff:[B

    invoke-static {p1, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->covertArrayListToByteArray(Ljava/util/ArrayList;[B)V

    goto :goto_0

    .line 261
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mBuff:[B

    const/4 p1, 0x0

    invoke-static {p0, p1}, Ljava/util/Arrays;->fill([BB)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 264
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private getAgpsConfigInt(ILcom/mediatek/lbs/em2/utils/AgpsConfig;)V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 899
    invoke-virtual {p2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v0

    .line 900
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    .line 901
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v1

    iput v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    .line 902
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->gpevt:Z

    .line 904
    invoke-virtual {p2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v1

    .line 905
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v2

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    .line 906
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v2

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    .line 907
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    .line 908
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v2

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    .line 909
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    .line 910
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v2

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    .line 911
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v2

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->epcMolrLppPayloadEnable:Z

    .line 912
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)[B

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->epcMolrLppPayload:[B

    .line 914
    invoke-virtual {p2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v2

    .line 915
    invoke-virtual {p2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v3

    .line 916
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    .line 917
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    .line 918
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    .line 919
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    .line 920
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    .line 921
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    .line 922
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->tlsVersion:I

    .line 923
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    .line 924
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    .line 925
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    .line 926
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    .line 927
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    .line 928
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    .line 929
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    .line 930
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    .line 931
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    const/16 v4, 0x69

    if-lt p1, v4, :cond_0

    .line 933
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->lppEnable:Z

    :cond_0
    const/16 v4, 0x6a

    if-lt p1, v4, :cond_1

    .line 936
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->certFromSdcard:Z

    :cond_1
    const/16 v4, 0x6b

    if-lt p1, v4, :cond_2

    .line 939
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->autoProfileEnable:Z

    :cond_2
    const/16 v4, 0x6c

    if-lt p1, v4, :cond_3

    .line 942
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v4

    iput-byte v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ut2:B

    .line 943
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v4

    iput-byte v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ut3:B

    :cond_3
    const/16 v4, 0x6d

    if-lt p1, v4, :cond_4

    .line 946
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->apnEnable:Z

    :cond_4
    const/16 v4, 0x6e

    if-lt p1, v4, :cond_5

    .line 949
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->syncToslp:Z

    :cond_5
    const/16 v4, 0x6f

    if-lt p1, v4, :cond_6

    .line 952
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->udpEnable:Z

    :cond_6
    const/16 v4, 0x70

    if-lt p1, v4, :cond_7

    .line 955
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->autonomousEnable:Z

    .line 956
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->afltEnable:Z

    :cond_7
    const/16 v4, 0x71

    if-lt p1, v4, :cond_8

    .line 959
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->imsiEnable:Z

    :cond_8
    const/16 v4, 0x72

    if-lt p1, v4, :cond_9

    .line 962
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->sib8sib16Enable:Z

    .line 963
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->gpsSatelliteEnable:Z

    .line 964
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->glonassSatelliteEnable:Z

    .line 965
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->beidouSatelliteEnable:Z

    .line 966
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->galileoSatelliteEnable:Z

    .line 967
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->gpsSatelliteSupport:Z

    .line 968
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->glonassSatelliteSupport:Z

    .line 969
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->beidousSatelliteSupport:Z

    .line 970
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->galileoSatelliteSupport:Z

    :cond_9
    const/16 v4, 0x73

    if-lt p1, v4, :cond_a

    .line 973
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v4

    iput-byte v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVerMinor:B

    .line 974
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v4

    iput-byte v4, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVerSerInd:B

    :cond_a
    const/16 v4, 0x74

    if-lt p1, v4, :cond_b

    .line 977
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aGlonassSatelliteEnable:Z

    .line 980
    :cond_b
    invoke-virtual {p2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCurSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;

    move-result-object v4

    .line 981
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    .line 982
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    .line 983
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v5

    iput v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 984
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v5

    iput-boolean v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    .line 985
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    .line 986
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    .line 987
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    .line 988
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    .line 989
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    .line 990
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    .line 991
    iget-object v5, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    const/16 v4, 0x75

    if-lt p1, v4, :cond_c

    .line 994
    invoke-virtual {p2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCdmaProfile()Lcom/mediatek/lbs/em2/utils/CdmaProfile;

    move-result-object p2

    .line 995
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->name:Ljava/lang/String;

    .line 996
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->mcpEnable:Z

    .line 997
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->mcpAddr:Ljava/lang/String;

    .line 998
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->mcpPort:I

    .line 999
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeAddrValid:Z

    .line 1000
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeIpType:I

    .line 1001
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeAddr:Ljava/lang/String;

    .line 1002
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    iput v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdePort:I

    .line 1003
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v4

    iput-boolean v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeUrlValid:Z

    .line 1004
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p2, Lcom/mediatek/lbs/em2/utils/CdmaProfile;->pdeUrlAddr:Ljava/lang/String;

    :cond_c
    const/16 p2, 0x76

    if-lt p1, p2, :cond_d

    .line 1007
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->e911GpsIconEnable:Z

    :cond_d
    const/16 p2, 0x77

    if-lt p1, p2, :cond_e

    .line 1010
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->e911OpenGpsEnable:Z

    :cond_e
    const/16 p2, 0x78

    if-lt p1, p2, :cond_f

    .line 1013
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aGpsSatelliteEnable:Z

    .line 1014
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aBeidouSatelliteEnable:Z

    .line 1015
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aGalileoSatelliteEnable:Z

    :cond_f
    const/16 p2, 0x79

    if-lt p1, p2, :cond_10

    .line 1018
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p2

    iput p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->shaVersion:I

    .line 1019
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p2

    iput p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->preferred2g3gCellAge:I

    .line 1020
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result p2

    iput-byte p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ut1:B

    .line 1021
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->noSensitiveLog:Z

    .line 1022
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->tlsReuseEnable:Z

    .line 1023
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->imsiCacheEnable:Z

    .line 1024
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplRawDataEnable:Z

    .line 1025
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->tc10Enable:Z

    .line 1026
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->tc10UseApn:Z

    .line 1027
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->tc10UseFwDns:Z

    .line 1028
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->allowNiForGpsOff:Z

    .line 1029
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->forceOtdoaAssistReq:Z

    .line 1030
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->rejectNon911NilrEnable:Z

    .line 1031
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cp2gDisable:Z

    .line 1032
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cp3gDisable:Z

    .line 1033
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cp4gDisable:Z

    .line 1034
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->tc10IgnoreFwConfig:Z

    .line 1035
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lppeHideWifiBtStatus:Z

    :cond_10
    const/16 p2, 0x7a

    if-lt p1, p2, :cond_11

    .line 1038
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lppeNetworkLocationDisable:Z

    .line 1039
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeEnable:Z

    .line 1040
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeEnable:Z

    :cond_11
    const/16 p2, 0x7b

    if-lt p1, p2, :cond_12

    .line 1043
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeSupport:Z

    .line 1044
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->lppeSupport:Z

    :cond_12
    const/16 p2, 0x7c

    if-lt p1, p2, :cond_13

    .line 1047
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsNvramEnable:Z

    .line 1048
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lbsLogEnable:Z

    .line 1049
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p2

    iput p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lppeCrowdSourceConfident:I

    .line 1051
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p2

    iput p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->esuplApnMode:I

    .line 1052
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p2

    iput p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->tcpKeepAlive:I

    .line 1053
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->aospProfileEnable:Z

    .line 1054
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->bindNlpSettingToSupl:Z

    :cond_13
    const/16 p2, 0x7d

    if-lt p1, p2, :cond_14

    .line 1057
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->ignoreSiForE911:Z

    .line 1058
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeWlanEnable:Z

    .line 1059
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeSrnEnable:Z

    .line 1060
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeSensorEnable:Z

    .line 1061
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeDbhEnable:Z

    .line 1063
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeWlanEnable:Z

    .line 1064
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeSrnEnable:Z

    .line 1065
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeSensorEnable:Z

    .line 1066
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeDbhEnable:Z

    .line 1067
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p2

    iput p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ipVersionPrefer:I

    .line 1068
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppIn2g3gDisable:Z

    .line 1069
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upRrlpIn4gDisable:Z

    .line 1070
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->upSiDisable:Z

    :cond_14
    const/16 p2, 0x7e

    if-lt p1, p2, :cond_15

    .line 1073
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->useNiSlp:Z

    .line 1074
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->useTc10Config:Z

    .line 1075
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p2

    iput-boolean p2, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->defaultNlpEnable:Z

    :cond_15
    const/16 p2, 0x7f

    if-lt p1, p2, :cond_16

    .line 1078
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p1

    iput p1, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->emergencyExtSecs:I

    .line 1079
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result p1

    iput-boolean p1, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->aospPosModeEnable:Z

    .line 1080
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p0

    iput p0, v2, Lcom/mediatek/lbs/em2/utils/UpSetting;->privacyOverrideMode:I

    :cond_16
    return-void
.end method

.method protected static log(Ljava/lang/String;)V
    .locals 1

    const-string v0, "AgpsInterface [agps]"

    .line 3152
    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected static msleep(I)V
    .locals 2

    int-to-long v0, p0

    .line 3145
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 3147
    invoke-virtual {p0}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private writeToHidl()V
    .locals 3

    .line 269
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mBuff:[B

    iget v0, v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mOffset:I

    const-string v2, "AgpsInterface"

    invoke-direct {p0, v2, v1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->doHidl(Ljava/lang/String;[BI)V

    .line 270
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->flush()V

    .line 271
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->clear()V

    return-void
.end method


# virtual methods
.method public checkVersion()V
    .locals 4

    .line 363
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 365
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 366
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;S)V

    .line 367
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;S)V

    .line 369
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 371
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)S

    move-result v0

    .line 372
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)S

    move-result v2

    if-ne v0, v1, :cond_1

    if-lt v2, v1, :cond_0

    .line 384
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 388
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    .line 379
    :cond_0
    :try_start_1
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "app min ver=1 is greater than AGPSD\'s min ver="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 375
    :cond_1
    new-instance v1, Ljava/io/IOException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "app maj ver=1 is not equal to AGPSD\'s maj ver="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 386
    :try_start_2
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 388
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 389
    throw v0
.end method

.method protected close()V
    .locals 0

    .line 3103
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->clear()V

    return-void
.end method

.method public coderTest()V
    .locals 14
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "string"

    .line 282
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 285
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 286
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v3, 0x12

    invoke-static {v1, v3}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 287
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v3, 0x1234

    invoke-static {v1, v3}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;S)V

    .line 288
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const v3, 0x12345678

    invoke-static {v1, v3}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 289
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const-wide v3, 0x1234567890abcdefL    # 5.626349108908516E-221

    invoke-static {v1, v3, v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;J)V

    .line 290
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-static {v1, v5}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putFloat(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;F)V

    .line 291
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const-wide/high16 v6, 0x4000000000000000L    # 2.0

    invoke-static {v1, v6, v7}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putDouble(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;D)V

    .line 292
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 293
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v8, 0x9

    new-array v9, v8, [B

    aput-byte v2, v9, v2

    const/4 v10, 0x1

    aput-byte v10, v9, v10

    const/4 v10, 0x2

    aput-byte v10, v9, v10

    const/4 v10, 0x3

    aput-byte v10, v9, v10

    const/4 v10, 0x4

    aput-byte v10, v9, v10

    const/4 v10, 0x5

    aput-byte v10, v9, v10

    const/4 v10, 0x6

    aput-byte v10, v9, v10

    const/4 v10, 0x7

    aput-byte v10, v9, v10

    const/16 v10, 0x8

    aput-byte v10, v9, v10

    invoke-static {v1, v9}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;[B)V

    .line 294
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 298
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-long v9, v1

    const-wide/16 v11, 0x12

    cmp-long v1, v9, v11

    const-string v13, " actually="

    if-nez v1, :cond_a

    .line 304
    :try_start_1
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)S

    move-result v1

    int-to-long v9, v1

    const-wide/16 v11, 0x1234

    cmp-long v1, v9, v11

    if-nez v1, :cond_9

    .line 310
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v1

    int-to-long v9, v1

    const-wide/32 v11, 0x12345678

    cmp-long v1, v9, v11

    if-nez v1, :cond_8

    .line 316
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)J

    move-result-wide v9

    cmp-long v1, v9, v3

    if-nez v1, :cond_7

    .line 322
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getFloat(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)F

    move-result v1

    cmpl-float v3, v1, v5

    if-nez v3, :cond_6

    .line 327
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getDouble(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)D

    move-result-wide v3

    cmpl-double v1, v3, v6

    if-nez v1, :cond_5

    .line 332
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    .line 333
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 337
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)[B

    move-result-object v0

    if-eqz v0, :cond_3

    .line 341
    array-length v1, v0

    if-ne v1, v8, :cond_2

    :goto_0
    if-ge v2, v8, :cond_1

    .line 346
    aget-byte v1, v0, v2

    if-ne v1, v2, :cond_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 347
    :cond_0
    new-instance v1, Ljava/io/IOException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getBinary failed, data["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "] expected="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-byte v0, v0, v2

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 353
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 357
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    .line 342
    :cond_2
    :try_start_2
    new-instance v1, Ljava/io/IOException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getBinary failed, length expected=9 actually="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 339
    :cond_3
    new-instance v0, Ljava/io/IOException;

    const-string v1, "getBinary failed, get null"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 334
    :cond_4
    new-instance v0, Ljava/io/IOException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getString failed expected="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 329
    :cond_5
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getDouble failed expected=2 actually="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 324
    :cond_6
    new-instance v0, Ljava/io/IOException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getFloat failed expected=1.0 actually="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 318
    :cond_7
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getLong failed expected="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 319
    invoke-static {v3, v4}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 320
    invoke-static {v9, v10}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 312
    :cond_8
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getInt failed expected="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 313
    invoke-static {v11, v12}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 314
    invoke-static {v9, v10}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 306
    :cond_9
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getShort failed expected="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 307
    invoke-static {v11, v12}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 308
    invoke-static {v9, v10}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 300
    :cond_a
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getByte failed expected="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 301
    invoke-static {v11, v12}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 302
    invoke-static {v9, v10}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    move-exception v0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 355
    :try_start_3
    new-instance v1, Ljava/io/IOException;

    invoke-direct {v1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 357
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 358
    throw v0
.end method

.method protected connect()V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    return-void
.end method

.method public getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;
    .locals 3

    .line 393
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;-><init>()V

    const/16 v1, 0x64

    .line 396
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 398
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 399
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 402
    invoke-direct {p0, v1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfigInt(ILcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 405
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 409
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 407
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 409
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 410
    throw v0
.end method

.method public getAgpsConfigV17()Lcom/mediatek/lbs/em2/utils/AgpsConfig;
    .locals 3

    .line 723
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;-><init>()V

    const/16 v1, 0x78

    .line 726
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 728
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 729
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 732
    invoke-direct {p0, v1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfigInt(ILcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 735
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 739
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 737
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 739
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 740
    throw v0
.end method

.method public getAgpsConfigV24()Lcom/mediatek/lbs/em2/utils/AgpsConfig;
    .locals 3

    .line 855
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;-><init>()V

    const/16 v1, 0x7f

    .line 858
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 860
    iget-object v2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v2, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 861
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 864
    invoke-direct {p0, v1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfigInt(ILcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 867
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 871
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 869
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 871
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 872
    throw v0
.end method

.method public getAgpsProfilingInfo()Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;
    .locals 7

    .line 1139
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;-><init>()V

    .line 1141
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1143
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v2, 0x67

    invoke-static {v1, v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1144
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1147
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    .line 1149
    iget-object v3, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v3}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v3

    .line 1150
    iget-object v4, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)J

    move-result-wide v4

    .line 1151
    iget-object v6, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v6}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v6

    .line 1152
    invoke-virtual {v0, v3, v4, v5, v6}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;->addElement(IJLjava/lang/String;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 1156
    :cond_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1160
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1158
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1160
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1161
    throw v0
.end method

.method public getEmulatorMode()I
    .locals 2

    .line 1174
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1176
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x68

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1177
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1180
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v0

    .line 1183
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1187
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1185
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1187
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1188
    throw v0
.end method

.method public getSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;
    .locals 3

    .line 1085
    new-instance v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/SuplProfile;-><init>()V

    .line 1087
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1089
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v2, 0x65

    invoke-static {v1, v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1090
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1093
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    .line 1094
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    .line 1095
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v1

    iput v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 1096
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    .line 1097
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    .line 1098
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    .line 1099
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    .line 1100
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    .line 1101
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    .line 1102
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    .line 1103
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    .line 1106
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1110
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1108
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1110
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1111
    throw v0
.end method

.method public getSystemProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 1118
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1120
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x66

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1121
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 1122
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 1123
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1126
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object p1

    .line 1129
    iget-object p2, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1133
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-object p1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1131
    :try_start_1
    new-instance p2, Ljava/lang/RuntimeException;

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1133
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1134
    throw p1
.end method

.method public resetAgpsd()V
    .locals 2

    .line 2994
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2996
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x192

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2997
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    const-string v0, "resetAgpsd() before sleep 1 sec"

    .line 3001
    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->log(Ljava/lang/String;)V

    const/16 v0, 0x3e8

    .line 3002
    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->msleep(I)V

    const-string v0, "resetAgpsd() after sleep 1 sec"

    .line 3003
    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->log(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 3016
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3014
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 3016
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 3017
    throw v0
.end method

.method public setAbeidouSatelliteEnable(Z)V
    .locals 2

    .line 1498
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1500
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xfb

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1501
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1502
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1505
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1509
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1507
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1509
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1510
    throw p1
.end method

.method public setAgalileoSatelliteEnable(Z)V
    .locals 2

    .line 1532
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1534
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xfc

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1535
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1536
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1539
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1543
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1541
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1543
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1544
    throw p1
.end method

.method public setAglonassSatelliteEnable(Z)V
    .locals 2

    .line 1464
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1466
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf6

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1467
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1468
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1471
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1475
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1473
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1475
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1476
    throw p1
.end method

.method public setAgpsEnabled(Z)V
    .locals 2

    .line 1194
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1196
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xc8

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1197
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1198
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1201
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1205
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1203
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1205
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1206
    throw p1
.end method

.method public setAgpsSatelliteEnable(Z)V
    .locals 2

    .line 1430
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1432
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xfa

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1433
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1434
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1437
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1441
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1439
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1441
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1442
    throw p1
.end method

.method public setAllowNI(Z)V
    .locals 2

    .line 1960
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1962
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd7

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1963
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1964
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1967
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1971
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1969
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1971
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1972
    throw p1
.end method

.method public setAllowNiForGpsOff(Z)V
    .locals 2

    .line 2294
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2296
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x106

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2297
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2298
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2301
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2305
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2303
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2305
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2306
    throw p1
.end method

.method public setAllowRoaming(Z)V
    .locals 2

    .line 1977
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1979
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd8

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1980
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1981
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1984
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1988
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1986
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1988
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1989
    throw p1
.end method

.method public setAospPosModeEnable(Z)V
    .locals 2

    .line 2855
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2857
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x129

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2858
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2859
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2862
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2866
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2864
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2866
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2867
    throw p1
.end method

.method public setAospProfileEnable(Z)V
    .locals 2

    .line 2498
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2500
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x112

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2501
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2502
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2505
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2509
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2507
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2509
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2510
    throw p1
.end method

.method public setAutoProfileEnable(Z)V
    .locals 2

    .line 1694
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1696
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe4

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1697
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1698
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1701
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1705
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1703
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1705
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1706
    throw p1
.end method

.method public setBeidouSatelliteEnable(Z)V
    .locals 2

    .line 1481
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1483
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf0

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1484
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1485
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1488
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1492
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1490
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1492
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1493
    throw p1
.end method

.method public setBindNlpSettingToSupl(Z)V
    .locals 2

    .line 2515
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2517
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x113

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2518
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2519
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2522
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2526
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2524
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2526
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2527
    throw p1
.end method

.method public setCdmaPref(I)V
    .locals 2

    .line 1237
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1239
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xca

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1240
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1241
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1244
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1248
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1246
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1248
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1249
    throw p1
.end method

.method public setCertFromSdcard(Z)V
    .locals 2

    .line 1677
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1679
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe3

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1680
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1681
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1684
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1688
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1686
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1688
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1689
    throw p1
.end method

.method public setCertVerify(Z)V
    .locals 2

    .line 1627
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1629
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe0

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1630
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1631
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1634
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1638
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1636
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1638
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1639
    throw p1
.end method

.method public setCpAutoReset(Z)V
    .locals 2

    .line 1943
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1945
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd6

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1946
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1947
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1950
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1954
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1952
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1954
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1955
    throw p1
.end method

.method public setDefaultNlpEnable(Z)V
    .locals 2

    .line 2838
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2840
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x128

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2841
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2842
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2845
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2849
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2847
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2849
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2850
    throw p1
.end method

.method public setE911GpsIconEnable(Z)V
    .locals 2

    .line 2124
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2126
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf8

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2127
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2128
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2131
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2135
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2133
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2135
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2136
    throw p1
.end method

.method public setE911OpenGpsEnable(Z)V
    .locals 2

    .line 2141
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2143
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf9

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2144
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2145
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2148
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2152
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2150
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2152
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2153
    throw p1
.end method

.method public setEpcMolrPduEnable(Z)V
    .locals 2

    .line 2072
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2074
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xdd

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2075
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2076
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2079
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2083
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2081
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2083
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2084
    throw p1
.end method

.method public setExternalAddr(ZLjava/lang/String;)V
    .locals 2

    .line 1907
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1909
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd4

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1910
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1911
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 1912
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1915
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1919
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1917
    :try_start_1
    new-instance p2, Ljava/lang/RuntimeException;

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1919
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1920
    throw p1
.end method

.method public setForceOtdoaAssistReq(Z)V
    .locals 2

    .line 2311
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2313
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x107

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2314
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2315
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2318
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2322
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2320
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2322
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2323
    throw p1
.end method

.method public setGalileoSatelliteEnable(Z)V
    .locals 2

    .line 1515
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1517
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1518
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1519
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1522
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1526
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1524
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1526
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1527
    throw p1
.end method

.method public setGlonassSatelliteEnable(Z)V
    .locals 2

    .line 1447
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1449
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xef

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1450
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1451
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1454
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1458
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1456
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1458
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1459
    throw p1
.end method

.method public setGpsSatelliteEnable(Z)V
    .locals 2

    .line 1413
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1415
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xee

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1416
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1417
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1420
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1424
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1422
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1424
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1425
    throw p1
.end method

.method public setImsiEnable(Z)V
    .locals 2

    .line 1379
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1381
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xec

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1382
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1383
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1386
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1390
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1388
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1390
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1391
    throw p1
.end method

.method public setIngoreSiForE911(Z)V
    .locals 2

    .line 2617
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2619
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x119

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2620
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2621
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2624
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2628
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2626
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2628
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2629
    throw p1
.end method

.method public setIpVersionPrefer(I)V
    .locals 2

    .line 2770
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2772
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x122

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2773
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2774
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2777
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2781
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2779
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2781
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2782
    throw p1
.end method

.method public setLbsLogEnable(Z)V
    .locals 2

    .line 2583
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2585
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x117

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2586
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2587
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2590
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2594
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2592
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2594
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2595
    throw p1
.end method

.method public setLppEnable(Z)V
    .locals 2

    .line 1660
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1662
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe2

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1663
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1664
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1667
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1671
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1669
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1671
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1672
    throw p1
.end method

.method public setLppeCpDbhEnable(Z)V
    .locals 2

    .line 2685
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2687
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x11d

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2688
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2689
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2692
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2696
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2694
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2696
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2697
    throw p1
.end method

.method public setLppeCpEnable(Z)V
    .locals 2

    .line 2447
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2449
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x10f

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2450
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2451
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2454
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2458
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2456
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2458
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2459
    throw p1
.end method

.method public setLppeCpSensorEnable(Z)V
    .locals 2

    .line 2668
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2670
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x11c

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2671
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2672
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2675
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2679
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2677
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2679
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2680
    throw p1
.end method

.method public setLppeCpSrnEnable(Z)V
    .locals 2

    .line 2651
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2653
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x11b

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2654
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2655
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2658
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2662
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2660
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2662
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2663
    throw p1
.end method

.method public setLppeCpWlanEnable(Z)V
    .locals 2

    .line 2634
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2636
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x11a

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2637
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2638
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2641
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2645
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2643
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2645
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2646
    throw p1
.end method

.method public setLppeCrowdSourceConfident(I)V
    .locals 2

    .line 2600
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2602
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x118

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2603
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2604
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2607
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2611
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2609
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2611
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2612
    throw p1
.end method

.method public setLppeHideWifiBtStatus(Z)V
    .locals 2

    .line 2413
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2415
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x10d

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2416
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2417
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2420
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2424
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2422
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2424
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2425
    throw p1
.end method

.method public setLppeNetworkLocationDisable(Z)V
    .locals 2

    .line 2430
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2432
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x10e

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2433
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2434
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2437
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2441
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2439
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2441
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2442
    throw p1
.end method

.method public setLppeUpDbhEnable(Z)V
    .locals 2

    .line 2753
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2755
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x121

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2756
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2757
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2760
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2764
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2762
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2764
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2765
    throw p1
.end method

.method public setLppeUpEnable(Z)V
    .locals 2

    .line 2464
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2466
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x110

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2467
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2468
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2471
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2475
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2473
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2475
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2476
    throw p1
.end method

.method public setLppeUpSensorEnable(Z)V
    .locals 2

    .line 2736
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2738
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x120

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2739
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2740
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2743
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2747
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2745
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2747
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2748
    throw p1
.end method

.method public setLppeUpSrnEnable(Z)V
    .locals 2

    .line 2719
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2721
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x11f

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2722
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2723
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2726
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2730
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2728
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2730
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2731
    throw p1
.end method

.method public setLppeUpWlanEnable(Z)V
    .locals 2

    .line 2702
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2704
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x11e

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2705
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2706
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2709
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2713
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2711
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2713
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2714
    throw p1
.end method

.method public setMlcNumber(ZLjava/lang/String;)V
    .locals 2

    .line 1925
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1927
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd5

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1928
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1929
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 1930
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1933
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1937
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1935
    :try_start_1
    new-instance p2, Ljava/lang/RuntimeException;

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1937
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1938
    throw p1
.end method

.method public setMolrPosMethod(I)V
    .locals 2

    .line 1890
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1892
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd3

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1893
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1894
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1897
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1901
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1899
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1901
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1902
    throw p1
.end method

.method public setNiRequest(I[B)V
    .locals 2

    .line 2054
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2056
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xdc

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2057
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2058
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;[B)V

    .line 2059
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2062
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2066
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2064
    :try_start_1
    new-instance p2, Ljava/lang/RuntimeException;

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2066
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2067
    throw p1
.end method

.method public setNiStatisticEnable(Z)V
    .locals 2

    .line 3050
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 3052
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x1fd

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 3053
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 3054
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 3057
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 3061
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3059
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 3061
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 3062
    throw p1
.end method

.method public setNoSensitiveLog(Z)V
    .locals 2

    .line 2175
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2177
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xff

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2178
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2179
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2182
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2186
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2184
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2186
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2187
    throw p1
.end method

.method public setPosTechnologyAFLT(Z)V
    .locals 2

    .line 1362
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1364
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xeb

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1365
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1366
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1369
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1373
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1371
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1373
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1374
    throw p1
.end method

.method public setPosTechnologyAutonomous(Z)V
    .locals 2

    .line 1345
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1347
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xea

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1348
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1349
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1352
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1356
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1354
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1356
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1357
    throw p1
.end method

.method public setPosTechnologyECID(Z)V
    .locals 2

    .line 1310
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1312
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xce

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1313
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1314
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1317
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1321
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1319
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1321
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1322
    throw p1
.end method

.method public setPosTechnologyMSA(Z)V
    .locals 2

    .line 1276
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1278
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xcc

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1279
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1280
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1283
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1287
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1285
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1287
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1288
    throw p1
.end method

.method public setPosTechnologyMSB(Z)V
    .locals 2

    .line 1293
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1295
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xcd

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1296
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1297
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1300
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1304
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1302
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1304
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1305
    throw p1
.end method

.method public setPosTechnologyOTDOA(Z)V
    .locals 2

    .line 1327
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1329
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xcf

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1330
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1331
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1334
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1338
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1336
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1338
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1339
    throw p1
.end method

.method public setPrivacyOverrideMode(I)V
    .locals 2

    .line 2872
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2874
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x12a

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2875
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2876
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2879
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2883
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2881
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2883
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2884
    throw p1
.end method

.method public setProtocol(I)V
    .locals 2

    .line 1215
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1217
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xc9

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1218
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1219
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1222
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1226
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1224
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1226
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1227
    throw p1
.end method

.method public setQop(IIII)V
    .locals 2

    .line 1866
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1868
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd2

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1869
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1870
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1871
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p3}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1872
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p4}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1873
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1876
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1880
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1878
    :try_start_1
    new-instance p2, Ljava/lang/RuntimeException;

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1880
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1881
    throw p1
.end method

.method public setResetToDefault()V
    .locals 2

    .line 2011
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2013
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xda

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2014
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2017
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2021
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2019
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2021
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2022
    throw v0
.end method

.method public setSib8Sib16Enable(Z)V
    .locals 2

    .line 1396
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1398
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xed

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1399
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1400
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1403
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1407
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1405
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1407
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1408
    throw p1
.end method

.method public setSupl2file(Z)V
    .locals 2

    .line 1994
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1996
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd9

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1997
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1998
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2001
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2005
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2003
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2005
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2006
    throw p1
.end method

.method public setSuplDedicatedApnEnable(Z)V
    .locals 2

    .line 1796
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1798
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe7

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1799
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1800
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1803
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1807
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1805
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1807
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1808
    throw p1
.end method

.method public setSuplProfile(Lcom/mediatek/lbs/em2/utils/SuplProfile;)V
    .locals 2

    .line 2027
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2029
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xdb

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2030
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2031
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2032
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2033
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-boolean v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2034
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2035
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2036
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2037
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2038
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2039
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2040
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 2041
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2044
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2048
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2046
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2048
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2049
    throw p1
.end method

.method public setSuplProfile(Ljava/lang/String;IZ)V
    .locals 2

    .line 1847
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1849
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd1

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1850
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V

    .line 1851
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1852
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1, p3}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1853
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1856
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1860
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1858
    :try_start_1
    new-instance p2, Ljava/lang/RuntimeException;

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1860
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1861
    throw p1
.end method

.method public setSuplUt2(I)V
    .locals 2

    .line 1728
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1730
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe5

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1731
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1732
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1735
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1739
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1737
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1739
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1740
    throw p1
.end method

.method public setSuplUt3(I)V
    .locals 2

    .line 1745
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1747
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe6

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1748
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1749
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1752
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1756
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1754
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1756
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1757
    throw p1
.end method

.method public setSuplVerMinor(I)V
    .locals 2

    .line 1762
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1764
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf4

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1765
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1766
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1769
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1773
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1771
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1773
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1774
    throw p1
.end method

.method public setSuplVerSerInd(I)V
    .locals 2

    .line 1779
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1781
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xf5

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1782
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1783
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1786
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1790
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1788
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1790
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1791
    throw p1
.end method

.method public setSuplVersion(I)V
    .locals 2

    .line 1593
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1595
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xd0

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1596
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1597
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1600
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1604
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1602
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1604
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1605
    throw p1
.end method

.method public setSyncToSlpEnable(Z)V
    .locals 2

    .line 1813
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1815
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe8

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1816
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1817
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1820
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1824
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1822
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1824
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1825
    throw p1
.end method

.method public setTcpKeepAlive(I)V
    .locals 2

    .line 2549
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2551
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x115

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2552
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2553
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2556
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2560
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2558
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2560
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2561
    throw p1
.end method

.method public setTlsVersion(I)V
    .locals 2

    .line 1610
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1612
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xdf

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1613
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1614
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1617
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1621
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1619
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1621
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1622
    throw p1
.end method

.method public setUdpEnable(Z)V
    .locals 2

    .line 1830
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1832
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xe9

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1833
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 1834
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1837
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1841
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1839
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1841
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1842
    throw p1
.end method

.method public setUpLppIn2g3gDisable(Z)V
    .locals 2

    .line 2787
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2789
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x123

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2790
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2791
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2794
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2798
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2796
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2798
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2799
    throw p1
.end method

.method public setUpPrefMethod(I)V
    .locals 2

    .line 1259
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 1261
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0xcb

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 1262
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    int-to-byte p1, p1

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 1263
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 1266
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1270
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1268
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1270
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 1271
    throw p1
.end method

.method public setUpRrlpIn4gDisable(Z)V
    .locals 2

    .line 2804
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2806
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x124

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2807
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2808
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2811
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2815
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2813
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2815
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2816
    throw p1
.end method

.method public setUpSiDisable(Z)V
    .locals 2

    .line 2821
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2823
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x125

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2824
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2825
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2828
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2832
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2830
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2832
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2833
    throw p1
.end method

.method public setVzwDebugScreenEnable(Z)V
    .locals 2

    .line 2481
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2483
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x111

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2484
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V

    .line 2485
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2488
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2492
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2490
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2492
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2493
    throw p1
.end method

.method public startAreaEvent(I)V
    .locals 2

    .line 2927
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2929
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x12e

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2930
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2931
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2934
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2938
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2936
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2938
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2939
    throw p1
.end method

.method public startEmulatorMode(I)V
    .locals 2

    .line 3022
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 3024
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x193

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 3025
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 3026
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    const-string p1, "startEmulatorMode() before sleep 1 sec"

    .line 3030
    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->log(Ljava/lang/String;)V

    const/16 p1, 0x3e8

    .line 3031
    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->msleep(I)V

    const-string p1, "startEmulatorMode() after sleep 1 sec"

    .line 3032
    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->log(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 3044
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3042
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 3044
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 3045
    throw p1
.end method

.method public startPeriodic()V
    .locals 2

    .line 2889
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2891
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x12c

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2892
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2895
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2899
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2897
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2899
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2900
    throw v0
.end method

.method public stopAreaEvent()V
    .locals 2

    .line 2944
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2946
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x12f

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2947
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2950
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2954
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2952
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2954
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2955
    throw v0
.end method

.method public stopPeriodic()V
    .locals 2

    .line 2905
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2907
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x12d

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2908
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2911
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2915
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2913
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2915
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2916
    throw v0
.end method

.method public testButton(I)V
    .locals 2

    .line 2977
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2979
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x191

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2980
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2981
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2984
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2988
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2986
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2988
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2989
    throw p1
.end method

.method public testCase(I)V
    .locals 2

    .line 2960
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->connect()V

    .line 2962
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x190

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2963
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->out:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 2964
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->writeToHidl()V

    .line 2967
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2971
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2969
    :try_start_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2971
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->close()V

    .line 2972
    throw p1
.end method
