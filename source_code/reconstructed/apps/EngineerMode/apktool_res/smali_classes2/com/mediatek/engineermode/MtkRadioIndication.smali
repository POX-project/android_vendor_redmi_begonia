.class public Lcom/mediatek/engineermode/MtkRadioIndication;
.super Lvendor/mediatek/hardware/mtkradioex/V2_0/IEmRadioIndication$Stub;
.source "MtkRadioIndication.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "MtkRadioIndication"


# direct methods
.method public constructor <init>(Lcom/android/internal/telephony/RIL;)V
    .locals 0
    .param p1, "ril"    # Lcom/android/internal/telephony/RIL;

    .line 51
    invoke-direct {p0}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IEmRadioIndication$Stub;-><init>()V

    .line 52
    return-void
.end method

.method public static arrayListToPrimitiveArray(Ljava/util/List;)[B
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Byte;",
            ">;)[B"
        }
    .end annotation

    .line 55
    .local p0, "bytes":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Byte;>;"
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [B

    .line 56
    .local v0, "ret":[B
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 57
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Byte;

    invoke-virtual {v2}, Ljava/lang/Byte;->byteValue()B

    move-result v2

    aput-byte v2, v0, v1

    .line 56
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 59
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method public static arrayListToPrimitiveArrayInt(Ljava/util/List;)[I
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)[I"
        }
    .end annotation

    .line 63
    .local p0, "value":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Integer;>;"
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [I

    .line 64
    .local v0, "ret":[I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 65
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    aput v2, v0, v1

    .line 64
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 67
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method public static arrayListToPrimitiveArrayString(Ljava/util/List;)[Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)[",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 71
    .local p0, "info":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 72
    .local v0, "ret":[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 73
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    aput-object v2, v0, v1

    .line 72
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 75
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method private sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;
    .param p2, "ret"    # Ljava/lang/Object;

    .line 80
    const-string v0, "MtkRadioIndication"

    const/4 v1, 0x0

    :try_start_0
    invoke-static {p1, p2, v1}, Landroid/os/AsyncResult;->forMessage(Landroid/os/Message;Ljava/lang/Object;Ljava/lang/Throwable;)Landroid/os/AsyncResult;

    .line 81
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 82
    const-string v1, "msg send"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 85
    goto :goto_0

    .line 83
    :catch_0
    move-exception v1

    .line 84
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendMessageResponse: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 86
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method


# virtual methods
.method public networkInfoInd(ILjava/util/ArrayList;)V
    .locals 3
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 89
    .local p2, "info":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-static {p2}, Lcom/mediatek/engineermode/MtkRadioIndication;->arrayListToPrimitiveArrayString(Ljava/util/List;)[Ljava/lang/String;

    move-result-object v0

    .line 90
    .local v0, "response":[Ljava/lang/String;
    sget v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    .line 91
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mHandler:Landroid/os/Handler;

    sget v2, Lcom/mediatek/engineermode/EmRadioHidl;->mWhat:I

    invoke-virtual {v1, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 92
    .local v1, "msg":Landroid/os/Message;
    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/MtkRadioIndication;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    .line 93
    .end local v1    # "msg":Landroid/os/Message;
    goto :goto_0

    .line 94
    :cond_0
    const-string v1, "MtkRadioIndication"

    const-string v2, "networkInfoInd not send to app"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    :goto_0
    return-void
.end method

.method public oemHookRaw(ILjava/util/ArrayList;)V
    .locals 4
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 111
    .local p2, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-static {p2}, Lcom/mediatek/engineermode/MtkRadioIndication;->arrayListToPrimitiveArray(Ljava/util/List;)[B

    move-result-object v0

    .line 112
    .local v0, "response":[B
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v0}, Ljava/lang/String;-><init>([B)V

    .line 113
    .local v1, "str":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "oemHookRaw:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MtkRadioIndication"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    sget v2, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    if-nez v2, :cond_0

    .line 115
    sget-object v2, Lcom/mediatek/engineermode/EmRadioHidl;->mHandler:Landroid/os/Handler;

    sget v3, Lcom/mediatek/engineermode/EmRadioHidl;->mWhat:I

    invoke-virtual {v2, v3}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    .line 116
    .local v2, "msg":Landroid/os/Message;
    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/MtkRadioIndication;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    .line 117
    .end local v2    # "msg":Landroid/os/Message;
    goto :goto_0

    .line 118
    :cond_0
    const-string v2, "oemHookRaw not send to app"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 121
    :goto_0
    return-void
.end method

.method public onTxPowerIndication(ILjava/util/ArrayList;)V
    .locals 4
    .param p1, "indicationType"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 99
    .local p2, "indPower":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Integer;>;"
    invoke-static {p2}, Lcom/mediatek/engineermode/MtkRadioIndication;->arrayListToPrimitiveArrayInt(Ljava/util/List;)[I

    move-result-object v0

    .line 100
    .local v0, "response":[I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onTxPowerIndication: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/util/ArrayList;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MtkRadioIndication"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    sget v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    const/4 v3, 0x2

    if-ne v1, v3, :cond_0

    .line 102
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mHandler:Landroid/os/Handler;

    sget v2, Lcom/mediatek/engineermode/EmRadioHidl;->mWhat:I

    invoke-virtual {v1, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 103
    .local v1, "msg":Landroid/os/Message;
    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/MtkRadioIndication;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    .line 104
    .end local v1    # "msg":Landroid/os/Message;
    goto :goto_0

    .line 105
    :cond_0
    const-string v1, "onTxPowerIndication not send to app"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    :goto_0
    return-void
.end method
