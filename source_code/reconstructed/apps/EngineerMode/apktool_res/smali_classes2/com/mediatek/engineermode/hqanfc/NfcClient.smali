.class public Lcom/mediatek/engineermode/hqanfc/NfcClient;
.super Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse$Stub;
.source "NfcClient.java"


# static fields
.field private static final DEBUG:Z = false

.field private static sInstance:Lcom/mediatek/engineermode/hqanfc/NfcClient;


# instance fields
.field private mContext:Landroid/content/Context;

.field private mEmService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

.field private mIsConnected:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse$Stub;-><init>()V

    .line 30
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z

    return-void
.end method

.method private static dumpHex(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 50
    .local p0, "data":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Byte;>;"
    return-void
.end method

.method public static getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;
    .locals 4

    .line 55
    sget-object v0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sInstance:Lcom/mediatek/engineermode/hqanfc/NfcClient;

    if-nez v0, :cond_1

    .line 56
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v0

    .line 57
    .local v0, "srv":Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 58
    return-object v1

    .line 61
    :cond_0
    new-instance v2, Lcom/mediatek/engineermode/hqanfc/NfcClient;

    invoke-direct {v2}, Lcom/mediatek/engineermode/hqanfc/NfcClient;-><init>()V

    .line 63
    .local v2, "r":Lcom/mediatek/engineermode/hqanfc/NfcClient;
    :try_start_0
    invoke-interface {v0, v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setNfcResponseFunction(Lvendor/mediatek/hardware/engineermode/V1_3/IEmNfcResponse;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 67
    nop

    .line 69
    iput-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mEmService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    .line 70
    sput-object v2, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sInstance:Lcom/mediatek/engineermode/hqanfc/NfcClient;

    goto :goto_0

    .line 65
    :catch_0
    move-exception v3

    .line 66
    .local v3, "e":Landroid/os/RemoteException;
    return-object v1

    .line 73
    .end local v0    # "srv":Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;
    .end local v2    # "r":Lcom/mediatek/engineermode/hqanfc/NfcClient;
    .end local v3    # "e":Landroid/os/RemoteException;
    :cond_1
    :goto_0
    sget-object v0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sInstance:Lcom/mediatek/engineermode/hqanfc/NfcClient;

    return-object v0
.end method


# virtual methods
.method public closeConnection()Z
    .locals 5

    .line 206
    const-string v0, "Nfc"

    const-string v1, "[NfcClient] closeConnection()."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 207
    iget-boolean v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z

    const/4 v2, 0x0

    if-nez v1, :cond_0

    .line 208
    return v2

    .line 212
    :cond_0
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mEmService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->disconnect()V

    .line 213
    iput-boolean v2, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 214
    const/4 v0, 0x1

    return v0

    .line 216
    :catch_0
    move-exception v1

    .line 217
    .local v1, "e":Landroid/os/RemoteException;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[NfcClient] createConnection finally RemoteException: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 218
    invoke-virtual {v1}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 217
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    .end local v1    # "e":Landroid/os/RemoteException;
    return v2
.end method

.method public createConnection(Landroid/content/Context;)Z
    .locals 5
    .param p1, "context"    # Landroid/content/Context;

    .line 226
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 227
    return v1

    .line 230
    :cond_0
    const-string v0, "Nfc"

    const-string v2, "[NfcClient] createConnection()."

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    :try_start_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mEmService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    invoke-interface {v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->connect()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 233
    const/4 v2, 0x1

    iput-boolean v2, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z

    .line 234
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mContext:Landroid/content/Context;
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 235
    return v2

    .line 241
    :cond_1
    goto :goto_0

    .line 238
    :catch_0
    move-exception v2

    .line 239
    .local v2, "e":Landroid/os/RemoteException;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[NfcClient] createConnection finally RemoteException: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 240
    invoke-virtual {v2}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 239
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 243
    .end local v2    # "e":Landroid/os/RemoteException;
    :goto_0
    return v1
.end method

.method public isConnected()Z
    .locals 1

    .line 247
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z

    return v0
.end method

.method public response(Ljava/util/ArrayList;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)V"
        }
    .end annotation

    .line 78
    .local p1, "message":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    invoke-static {p1}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->dumpHex(Ljava/util/List;)V

    .line 80
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v0

    new-array v0, v0, [B

    .line 81
    .local v0, "raw":[B
    nop

    .line 86
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_0

    .line 87
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Byte;

    invoke-virtual {v2}, Ljava/lang/Byte;->byteValue()B

    move-result v2

    aput-byte v2, v0, v1

    .line 86
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 90
    .end local v1    # "i":I
    :cond_0
    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v1

    .line 91
    .local v1, "buffer":Ljava/nio/ByteBuffer;
    const/4 v2, 0x4

    new-array v3, v2, [B

    .line 92
    .local v3, "type":[B
    nop

    .line 97
    invoke-virtual {v1, v3}, Ljava/nio/ByteBuffer;->get([B)Ljava/nio/ByteBuffer;

    .line 98
    invoke-static {v3}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->byteToInt([B)I

    move-result v4

    .line 99
    .local v4, "msgType":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "[NfcClient] rmsg type: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "Nfc"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    const/16 v5, 0xcc

    if-le v4, v5, :cond_1

    .line 102
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[NfcClient] incorrect rmsg: "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, v0}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 104
    :cond_1
    new-array v2, v2, [B

    .line 105
    .local v2, "lenght":[B
    nop

    .line 110
    invoke-virtual {v1, v2}, Ljava/nio/ByteBuffer;->get([B)Ljava/nio/ByteBuffer;

    .line 111
    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->byteToInt([B)I

    move-result v5

    .line 113
    .local v5, "msgLen":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "[NfcClient] length: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 115
    if-nez v5, :cond_2

    .line 116
    new-instance v7, Lcom/mediatek/engineermode/hqanfc/NfcCommand;

    const/4 v8, 0x0

    invoke-direct {v7, v4, v8}, Lcom/mediatek/engineermode/hqanfc/NfcCommand;-><init>(ILjava/nio/ByteBuffer;)V

    .line 117
    .local v7, "mainMessage":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    goto :goto_1

    .line 122
    .end local v7    # "mainMessage":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    :cond_2
    new-array v7, v5, [B

    .line 123
    .local v7, "bufferCont":[B
    nop

    .line 128
    invoke-virtual {v1, v7}, Ljava/nio/ByteBuffer;->get([B)Ljava/nio/ByteBuffer;

    .line 129
    new-instance v8, Lcom/mediatek/engineermode/hqanfc/NfcCommand;

    invoke-static {v7}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v9

    invoke-direct {v8, v4, v9}, Lcom/mediatek/engineermode/hqanfc/NfcCommand;-><init>(ILjava/nio/ByteBuffer;)V

    .line 130
    .local v8, "mainMessage":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    move-object v7, v8

    .line 136
    .end local v8    # "mainMessage":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    .local v7, "mainMessage":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    :goto_1
    iget-object v8, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mContext:Landroid/content/Context;

    invoke-static {v8}, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;->getInstance(Landroid/content/Context;)Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;

    move-result-object v8

    .line 137
    .local v8, "ch":Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;
    if-nez v8, :cond_3

    .line 138
    const-string v9, "[NfcClient] Cannot allocate NfcCommandHandler"

    invoke-static {v6, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    return-void

    .line 141
    :cond_3
    invoke-virtual {v8, v7}, Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;->execute(Lcom/mediatek/engineermode/hqanfc/NfcCommand;)Z

    .line 143
    .end local v2    # "lenght":[B
    .end local v5    # "msgLen":I
    .end local v7    # "mainMessage":Lcom/mediatek/engineermode/hqanfc/NfcCommand;
    .end local v8    # "ch":Lcom/mediatek/engineermode/hqanfc/NfcCommandHandler;
    :goto_2
    return-void
.end method

.method public declared-synchronized sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I
    .locals 8
    .param p1, "msgType"    # I
    .param p2, "cmdReq"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;

    monitor-enter p0

    .line 146
    :try_start_0
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mIsConnected:Z

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 147
    const-string v0, "Nfc"

    const-string v2, "[NfcClient] Not connected"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 148
    monitor-exit p0

    return v1

    .line 151
    .end local p0    # "this":Lcom/mediatek/engineermode/hqanfc/NfcClient;
    :cond_0
    :try_start_1
    const-string v0, "Nfc"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[NfcClient] Send command type: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    const/4 v0, 0x0

    .line 153
    .local v0, "buffer":Ljava/nio/ByteBuffer;
    const/16 v2, 0x8

    if-nez p2, :cond_2

    .line 154
    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v2

    move-object v0, v2

    .line 155
    if-nez v0, :cond_1

    .line 156
    const-string v2, "Nfc"

    const-string v3, "[NfcClient] Cannot alloc memory"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 157
    monitor-exit p0

    return v1

    .line 160
    :cond_1
    :try_start_2
    invoke-static {p1}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->intToLH(I)[B

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    .line 161
    const/4 v2, 0x0

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->intToLH(I)[B

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    goto :goto_0

    .line 163
    :cond_2
    invoke-virtual {p2}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;->getContentSize()I

    move-result v3

    add-int/2addr v3, v2

    invoke-static {v3}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v2

    move-object v0, v2

    .line 164
    if-nez v0, :cond_3

    .line 165
    const-string v2, "Nfc"

    const-string v3, "[NfcClient] Cannot alloc memory"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 166
    monitor-exit p0

    return v1

    .line 169
    :cond_3
    :try_start_3
    invoke-static {p1}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->intToLH(I)[B

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    .line 170
    invoke-virtual {p2}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;->getContentSize()I

    move-result v2

    .line 171
    .local v2, "msglen":I
    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->intToLH(I)[B

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    .line 172
    invoke-virtual {p2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;->writeRaw(Ljava/nio/ByteBuffer;)V

    .line 175
    .end local v2    # "msglen":I
    :goto_0
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v2

    .line 176
    .local v2, "raw":[B
    const-string v3, "Nfc"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[NfcClient] Send command type: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ",len: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v5, v2

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    new-instance v3, Ljava/util/ArrayList;

    array-length v4, v2

    invoke-direct {v3, v4}, Ljava/util/ArrayList;-><init>(I)V

    .line 180
    .local v3, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    nop

    .line 185
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_1
    array-length v5, v2

    if-ge v4, v5, :cond_4

    .line 186
    aget-byte v5, v2, v4

    invoke-static {v5}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    .line 185
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 190
    .end local v4    # "i":I
    :cond_4
    invoke-static {v3}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->dumpHex(Ljava/util/List;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 193
    :try_start_4
    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/NfcClient;->mEmService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    invoke-interface {v4, p1, v3}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->sendNfcRequest(ILjava/util/ArrayList;)V
    :try_end_4
    .catch Landroid/os/RemoteException; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 199
    nop

    .line 201
    monitor-exit p0

    return p1

    .line 195
    :catch_0
    move-exception v4

    .line 196
    .local v4, "e":Landroid/os/RemoteException;
    :try_start_5
    const-string v5, "Nfc"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "[NfcClient] sendCommand RemoteException: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 197
    invoke-virtual {v4}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 196
    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 198
    monitor-exit p0

    return v1

    .line 145
    .end local v0    # "buffer":Ljava/nio/ByteBuffer;
    .end local v2    # "raw":[B
    .end local v3    # "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v4    # "e":Landroid/os/RemoteException;
    .end local p1    # "msgType":I
    .end local p2    # "cmdReq":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;
    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
