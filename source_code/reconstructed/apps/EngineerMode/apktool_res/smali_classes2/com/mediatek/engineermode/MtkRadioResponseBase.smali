.class public Lcom/mediatek/engineermode/MtkRadioResponseBase;
.super Lvendor/mediatek/hardware/mtkradioex/V2_0/IEmRadioResponse$Stub;
.source "MtkRadioResponseBase.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "MtkRadioResponseBase"


# direct methods
.method public constructor <init>(Lcom/android/internal/telephony/RIL;)V
    .locals 0
    .param p1, "ril"    # Lcom/android/internal/telephony/RIL;

    .line 51
    invoke-direct {p0}, Lvendor/mediatek/hardware/mtkradioex/V2_0/IEmRadioResponse$Stub;-><init>()V

    .line 52
    return-void
.end method

.method public static arrayListToPrimitiveArray(Ljava/util/ArrayList;)[B
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)[B"
        }
    .end annotation

    .line 58
    .local p0, "bytes":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v0

    new-array v0, v0, [B

    .line 59
    .local v0, "ret":[B
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 60
    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Byte;

    invoke-virtual {v2}, Ljava/lang/Byte;->byteValue()B

    move-result v2

    aput-byte v2, v0, v1

    .line 59
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 62
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method private responseStringArrayList(Lcom/android/internal/telephony/RIL;Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 4
    .param p1, "ril"    # Lcom/android/internal/telephony/RIL;
    .param p2, "responseInfo"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/android/internal/telephony/RIL;",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 83
    .local p3, "strings":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    invoke-virtual {p3}, Ljava/util/ArrayList;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 84
    .local v0, "ret":[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {p3}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 85
    invoke-virtual {p3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    aput-object v2, v0, v1

    .line 84
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 87
    .end local v1    # "i":I
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRequestList:Landroid/util/SparseArray;

    iget v2, p2, Landroid/hardware/radio/V1_0/RadioResponseInfo;->serial:I

    invoke-virtual {v1, v2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/Message;

    .line 88
    .local v1, "msg":Landroid/os/Message;
    if-eqz v1, :cond_1

    .line 89
    sget-object v2, Lcom/mediatek/engineermode/EmRadioHidl;->mRequestList:Landroid/util/SparseArray;

    iget v3, p2, Landroid/hardware/radio/V1_0/RadioResponseInfo;->serial:I

    invoke-virtual {v2, v3}, Landroid/util/SparseArray;->remove(I)V

    .line 91
    :cond_1
    iget v2, p2, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    if-nez v2, :cond_2

    .line 92
    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/MtkRadioResponseBase;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    goto :goto_1

    .line 94
    :cond_2
    iget v2, p2, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    invoke-direct {p0, v1, v2, v0}, Lcom/mediatek/engineermode/MtkRadioResponseBase;->sendMessageResponseError(Landroid/os/Message;ILjava/lang/Object;)V

    .line 96
    :goto_1
    return-void
.end method

.method private sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V
    .locals 1
    .param p1, "msg"    # Landroid/os/Message;
    .param p2, "ret"    # Ljava/lang/Object;

    .line 66
    if-eqz p1, :cond_0

    .line 67
    const/4 v0, 0x0

    invoke-static {p1, p2, v0}, Landroid/os/AsyncResult;->forMessage(Landroid/os/Message;Ljava/lang/Object;Ljava/lang/Throwable;)Landroid/os/AsyncResult;

    .line 68
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 70
    :cond_0
    return-void
.end method

.method private sendMessageResponseError(Landroid/os/Message;ILjava/lang/Object;)V
    .locals 1
    .param p1, "msg"    # Landroid/os/Message;
    .param p2, "error"    # I
    .param p3, "ret"    # Ljava/lang/Object;

    .line 74
    invoke-static {p2}, Lcom/android/internal/telephony/CommandException;->fromRilErrno(I)Lcom/android/internal/telephony/CommandException;

    move-result-object v0

    .line 75
    .local v0, "ex":Lcom/android/internal/telephony/CommandException;
    if-eqz p1, :cond_0

    .line 76
    invoke-static {p1, p3, v0}, Landroid/os/AsyncResult;->forMessage(Landroid/os/Message;Ljava/lang/Object;Ljava/lang/Throwable;)Landroid/os/AsyncResult;

    .line 77
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 79
    :cond_0
    return-void
.end method


# virtual methods
.method public sendRequestRawResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 4
    .param p1, "responseInfo"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 99
    .local p2, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const-string v0, "MtkRadioResponseBase"

    const-string v1, "rsp data = ***"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 100
    const/4 v0, 0x0

    .line 101
    .local v0, "ret":[B
    sget-object v1, Lcom/mediatek/engineermode/EmRadioHidl;->mRequestList:Landroid/util/SparseArray;

    iget v2, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->serial:I

    invoke-virtual {v1, v2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/Message;

    .line 102
    .local v1, "msg":Landroid/os/Message;
    if-eqz v1, :cond_0

    .line 103
    sget-object v2, Lcom/mediatek/engineermode/EmRadioHidl;->mRequestList:Landroid/util/SparseArray;

    iget v3, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->serial:I

    invoke-virtual {v2, v3}, Landroid/util/SparseArray;->remove(I)V

    .line 105
    :cond_0
    iget v2, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    if-nez v2, :cond_1

    .line 106
    invoke-static {p2}, Lcom/mediatek/engineermode/MtkRadioResponseBase;->arrayListToPrimitiveArray(Ljava/util/ArrayList;)[B

    move-result-object v0

    .line 107
    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/MtkRadioResponseBase;->sendMessageResponse(Landroid/os/Message;Ljava/lang/Object;)V

    goto :goto_0

    .line 109
    :cond_1
    iget v2, p1, Landroid/hardware/radio/V1_0/RadioResponseInfo;->error:I

    invoke-direct {p0, v1, v2, v0}, Lcom/mediatek/engineermode/MtkRadioResponseBase;->sendMessageResponseError(Landroid/os/Message;ILjava/lang/Object;)V

    .line 111
    :goto_0
    return-void
.end method

.method public sendRequestStringsResponse(Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V
    .locals 2
    .param p1, "responseInfo"    # Landroid/hardware/radio/V1_0/RadioResponseInfo;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/hardware/radio/V1_0/RadioResponseInfo;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 115
    .local p2, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const-string v0, "MtkRadioResponseBase"

    const-string v1, "rsp data = ***"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    const/4 v0, 0x0

    invoke-direct {p0, v0, p1, p2}, Lcom/mediatek/engineermode/MtkRadioResponseBase;->responseStringArrayList(Lcom/android/internal/telephony/RIL;Landroid/hardware/radio/V1_0/RadioResponseInfo;Ljava/util/ArrayList;)V

    .line 117
    return-void
.end method
