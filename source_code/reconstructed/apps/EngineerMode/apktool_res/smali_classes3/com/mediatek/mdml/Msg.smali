.class public Lcom/mediatek/mdml/Msg;
.super Ljava/lang/Object;
.source "Msg.java"


# instance fields
.field baseMsg:Lcom/mediatek/mdml/BaseMsg;

.field buf:[B

.field globalID:Lcom/mediatek/mdml/GlobalID;

.field peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

.field simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

.field simInfo:Lcom/mediatek/mdml/SimInfo;

.field startPos:I

.field type:Lcom/mediatek/mdml/InfoType;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    return-void
.end method

.method private getOtaMsgExtHdrLen(I[B)I
    .locals 2
    .param p1, "extHdrSize"    # I
    .param p2, "otaMsgFieldValue"    # [B

    .line 217
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->type:Lcom/mediatek/mdml/InfoType;

    sget-object v1, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    if-ne v0, v1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    .line 221
    :cond_0
    new-instance v0, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v0}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    .line 222
    .local v0, "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    const/4 v1, 0x0

    iput v1, v0, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 223
    iput p1, v0, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    .line 224
    invoke-static {p2, v1, v0}, Lcom/mediatek/mdml/Util;->getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I

    move-result v1

    return v1

    .line 218
    .end local v0    # "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    :cond_1
    :goto_0
    const/4 v0, -0x1

    return v0
.end method

.method private getSimIdx(Ljava/lang/Integer;)I
    .locals 2
    .param p1, "id"    # Ljava/lang/Integer;

    .line 228
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->simInfo:Lcom/mediatek/mdml/SimInfo;

    if-nez v0, :cond_0

    .line 229
    const/4 v0, -0x1

    return v0

    .line 232
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/SimInfo;->getSimIdx(Ljava/lang/Integer;)Ljava/lang/Integer;

    move-result-object v0

    .line 233
    .local v0, "ret":Ljava/lang/Integer;
    if-nez v0, :cond_1

    .line 234
    const/4 v1, 0x1

    return v1

    .line 237
    :cond_1
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    return v1
.end method


# virtual methods
.method public getFieldList()[Ljava/lang/String;
    .locals 3

    .line 84
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/mediatek/mdml/BaseMsg;->fieldMap:Ljava/util/HashMap;

    if-nez v0, :cond_0

    goto :goto_0

    .line 88
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    iget-object v0, v0, Lcom/mediatek/mdml/BaseMsg;->fieldMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    .line 89
    .local v0, "mapKeySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v2

    if-nez v2, :cond_1

    .line 90
    return-object v1

    .line 93
    :cond_1
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    .line 94
    .local v1, "keyArray":[Ljava/lang/String;
    invoke-static {v1}, Ljava/util/Arrays;->sort([Ljava/lang/Object;)V

    .line 95
    return-object v1

    .line 85
    .end local v0    # "mapKeySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    .end local v1    # "keyArray":[Ljava/lang/String;
    :cond_2
    :goto_0
    return-object v1
.end method

.method public getFieldValue(Ljava/lang/String;)[B
    .locals 3
    .param p1, "fieldName"    # Ljava/lang/String;

    .line 34
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/mediatek/mdml/BaseMsg;->fieldMap:Ljava/util/HashMap;

    if-nez v0, :cond_0

    goto :goto_0

    .line 38
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    iget-object v0, v0, Lcom/mediatek/mdml/BaseMsg;->fieldMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/mdml/OffsetAndSize;

    .line 39
    .local v0, "fieldOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    if-nez v0, :cond_1

    .line 40
    return-object v1

    .line 43
    :cond_1
    iget-object v1, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    iget v2, p0, Lcom/mediatek/mdml/Msg;->startPos:I

    invoke-static {v1, v2, v0}, Lcom/mediatek/mdml/Util;->getValue([BILcom/mediatek/mdml/OffsetAndSize;)[B

    move-result-object v1

    return-object v1

    .line 35
    .end local v0    # "fieldOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    :cond_2
    :goto_0
    return-object v1
.end method

.method public final getMsgName()Ljava/lang/String;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    if-nez v0, :cond_0

    .line 106
    const/4 v0, 0x0

    return-object v0

    .line 109
    :cond_0
    iget-object v0, v0, Lcom/mediatek/mdml/BaseMsg;->msgName:Ljava/lang/String;

    return-object v0
.end method

.method public getOtaMsgAirMsgRawDataBufLength([B)I
    .locals 5
    .param p1, "otaMsgFieldValue"    # [B

    .line 169
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->type:Lcom/mediatek/mdml/InfoType;

    sget-object v1, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    const/4 v2, -0x1

    if-ne v0, v1, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    .line 173
    :cond_0
    const/4 v0, 0x2

    .line 174
    .local v0, "extHdrSize":I
    const/4 v1, 0x2

    invoke-direct {p0, v1, p1}, Lcom/mediatek/mdml/Msg;->getOtaMsgExtHdrLen(I[B)I

    move-result v3

    .line 175
    .local v3, "extHdrLen":I
    if-gtz v3, :cond_1

    .line 176
    return v2

    .line 179
    :cond_1
    new-instance v2, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v2}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    .line 180
    .local v2, "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    add-int/lit8 v4, v3, 0x2

    iput v4, v2, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 181
    iput v1, v2, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    .line 182
    const/4 v1, 0x0

    invoke-static {p1, v1, v2}, Lcom/mediatek/mdml/Util;->getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I

    move-result v1

    return v1

    .line 170
    .end local v0    # "extHdrSize":I
    .end local v2    # "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    .end local v3    # "extHdrLen":I
    :cond_2
    :goto_0
    return v2
.end method

.method public getOtaMsgAirMsgRawDataBufOffset([B)I
    .locals 4
    .param p1, "otaMsgFieldValue"    # [B

    .line 147
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->type:Lcom/mediatek/mdml/InfoType;

    sget-object v1, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    const/4 v2, -0x1

    if-ne v0, v1, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    .line 151
    :cond_0
    const/4 v0, 0x2

    .line 152
    .local v0, "extHdrSize":I
    const/4 v1, 0x2

    invoke-direct {p0, v1, p1}, Lcom/mediatek/mdml/Msg;->getOtaMsgExtHdrLen(I[B)I

    move-result v3

    .line 153
    .local v3, "extHdrLen":I
    if-gtz v3, :cond_1

    .line 154
    return v2

    .line 157
    :cond_1
    add-int/lit8 v2, v3, 0x2

    add-int/2addr v2, v1

    return v2

    .line 148
    .end local v0    # "extHdrSize":I
    .end local v3    # "extHdrLen":I
    :cond_2
    :goto_0
    return v2
.end method

.method public getOtaMsgFieldValue()[B
    .locals 1

    .line 135
    const-string v0, "OTA_MSG_OFFSET"

    invoke-virtual {p0, v0}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method public getOtaMsgGlobalID([B)Ljava/lang/String;
    .locals 6
    .param p1, "otaMsgFieldValue"    # [B

    .line 194
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->type:Lcom/mediatek/mdml/InfoType;

    sget-object v1, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    const/4 v2, 0x0

    if-ne v0, v1, :cond_3

    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->globalID:Lcom/mediatek/mdml/GlobalID;

    if-eqz v0, :cond_3

    if-nez p1, :cond_0

    goto :goto_0

    .line 198
    :cond_0
    const/4 v0, 0x2

    .line 199
    .local v0, "extHdrSize":I
    const/4 v1, 0x2

    invoke-direct {p0, v1, p1}, Lcom/mediatek/mdml/Msg;->getOtaMsgExtHdrLen(I[B)I

    move-result v3

    .line 200
    .local v3, "extHdrLen":I
    if-gtz v3, :cond_1

    .line 201
    return-object v2

    .line 205
    :cond_1
    new-instance v4, Lcom/mediatek/mdml/OffsetAndSize;

    invoke-direct {v4}, Lcom/mediatek/mdml/OffsetAndSize;-><init>()V

    .line 206
    .local v4, "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    iput v1, v4, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 207
    iput v3, v4, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    .line 208
    const/4 v1, 0x0

    invoke-static {p1, v1, v4}, Lcom/mediatek/mdml/Util;->getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I

    move-result v1

    .line 209
    .local v1, "tmp":I
    const/4 v5, -0x1

    if-ne v1, v5, :cond_2

    .line 210
    return-object v2

    .line 213
    :cond_2
    iget-object v2, p0, Lcom/mediatek/mdml/Msg;->globalID:Lcom/mediatek/mdml/GlobalID;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v2, v5}, Lcom/mediatek/mdml/GlobalID;->getName(Ljava/lang/Integer;)Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 195
    .end local v0    # "extHdrSize":I
    .end local v1    # "tmp":I
    .end local v3    # "extHdrLen":I
    .end local v4    # "tmpOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    :cond_3
    :goto_0
    return-object v2
.end method

.method public getPeerBufferLength()I
    .locals 3

    .line 65
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    if-eqz v0, :cond_2

    iget v0, v0, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    if-gtz v0, :cond_0

    goto :goto_0

    .line 69
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    iget v1, p0, Lcom/mediatek/mdml/Msg;->startPos:I

    iget-object v2, p0, Lcom/mediatek/mdml/Msg;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-static {v0, v1, v2}, Lcom/mediatek/mdml/Util;->getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I

    move-result v0

    .line 70
    .local v0, "peerBufferSize":I
    if-lez v0, :cond_1

    iget-object v1, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    iget-boolean v1, v1, Lcom/mediatek/mdml/BaseMsg;->hasPeerBufferHeader:Z

    if-eqz v1, :cond_1

    .line 71
    iget-object v1, p0, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    iget v1, v1, Lcom/mediatek/mdml/BaseMsg;->peerBufferHeaderSize:I

    sub-int/2addr v0, v1

    .line 74
    :cond_1
    return v0

    .line 66
    .end local v0    # "peerBufferSize":I
    :cond_2
    :goto_0
    const/4 v0, -0x1

    return v0
.end method

.method public getPeerBufferValue()[B
    .locals 1

    .line 54
    const-string v0, "PEER_OFFSET"

    invoke-virtual {p0, v0}, Lcom/mediatek/mdml/Msg;->getFieldValue(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method public getSimIdx()I
    .locals 3

    .line 120
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    if-eqz v0, :cond_1

    iget v0, v0, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    if-gtz v0, :cond_0

    goto :goto_0

    .line 124
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/Msg;->buf:[B

    iget v1, p0, Lcom/mediatek/mdml/Msg;->startPos:I

    iget-object v2, p0, Lcom/mediatek/mdml/Msg;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    invoke-static {v0, v1, v2}, Lcom/mediatek/mdml/Util;->getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/mdml/Msg;->getSimIdx(Ljava/lang/Integer;)I

    move-result v0

    return v0

    .line 121
    :cond_1
    :goto_0
    const/4 v0, -0x1

    return v0
.end method
