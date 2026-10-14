.class Lcom/mediatek/mdml/MCPHandler;
.super Ljava/lang/Object;
.source "MCPHandler.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/mdml/MCPHandler$TypeMagic;
    }
.end annotation


# static fields
.field private static final HEADER_MAGIC:[B

.field private static final PAYLOAD_LEN_BYTES:I = 0x4

.field private static final TAG:Ljava/lang/String; = "MDML/MCPHandler"

.field private static final TYPE_MAGIC_BYTES:I = 0x2

.field private static final m_typeMagicTable:[Lcom/mediatek/mdml/MCPHandler$TypeMagic;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 392
    const/4 v0, 0x4

    new-array v0, v0, [B

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    .line 432
    const/4 v0, 0x3

    new-array v0, v0, [Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    new-instance v1, Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD:Lcom/mediatek/mdml/MCP_TYPE;

    const/4 v3, 0x2

    new-array v4, v3, [B

    fill-array-data v4, :array_1

    invoke-direct {v1, v2, v4}, Lcom/mediatek/mdml/MCPHandler$TypeMagic;-><init>(Lcom/mediatek/mdml/MCP_TYPE;[B)V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_JSON_CMD_RESP:Lcom/mediatek/mdml/MCP_TYPE;

    new-array v4, v3, [B

    fill-array-data v4, :array_2

    invoke-direct {v1, v2, v4}, Lcom/mediatek/mdml/MCPHandler$TypeMagic;-><init>(Lcom/mediatek/mdml/MCP_TYPE;[B)V

    const/4 v2, 0x1

    aput-object v1, v0, v2

    new-instance v1, Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    sget-object v2, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_TRAP:Lcom/mediatek/mdml/MCP_TYPE;

    new-array v4, v3, [B

    fill-array-data v4, :array_3

    invoke-direct {v1, v2, v4}, Lcom/mediatek/mdml/MCPHandler$TypeMagic;-><init>(Lcom/mediatek/mdml/MCP_TYPE;[B)V

    aput-object v1, v0, v3

    sput-object v0, Lcom/mediatek/mdml/MCPHandler;->m_typeMagicTable:[Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    return-void

    nop

    :array_0
    .array-data 1
        -0x52t
        -0x33t
        -0x18t
        -0xct
    .end array-data

    :array_1
    .array-data 1
        0x75t
        0x57t
    .end array-data

    nop

    :array_2
    .array-data 1
        0x75t
        0x58t
    .end array-data

    nop

    :array_3
    .array-data 1
        -0x54t
        -0x36t
    .end array-data
.end method

.method constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static GetTypeMagic(Lcom/mediatek/mdml/MCP_TYPE;)[B
    .locals 4
    .param p0, "type"    # Lcom/mediatek/mdml/MCP_TYPE;

    .line 365
    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 366
    return-object v0

    .line 368
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/mediatek/mdml/MCPHandler;->m_typeMagicTable:[Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    array-length v3, v2

    if-ge v1, v3, :cond_2

    .line 369
    aget-object v2, v2, v1

    iget-object v2, v2, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    invoke-virtual {p0, v2}, Lcom/mediatek/mdml/MCP_TYPE;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 370
    sget-object v0, Lcom/mediatek/mdml/MCPHandler;->m_typeMagicTable:[Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    aget-object v0, v0, v1

    iget-object v0, v0, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_magic:[B

    return-object v0

    .line 368
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 373
    .end local v1    # "i":I
    :cond_2
    return-object v0
.end method

.method private static IsHeaderMagic([BI)Z
    .locals 4
    .param p0, "buffer"    # [B
    .param p1, "startOffset"    # I

    .line 322
    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 323
    return v0

    .line 325
    :cond_0
    array-length v1, p0

    sub-int/2addr v1, p1

    sget-object v2, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    array-length v3, v2

    if-ge v1, v3, :cond_1

    .line 326
    return v0

    .line 328
    :cond_1
    array-length v1, v2

    invoke-static {p0, p1, v1}, Ljava/nio/ByteBuffer;->wrap([BII)Ljava/nio/ByteBuffer;

    move-result-object v1

    sget-object v2, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    array-length v3, v2

    .line 329
    invoke-static {v2, v0, v3}, Ljava/nio/ByteBuffer;->wrap([BII)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 328
    invoke-virtual {v1, v0}, Ljava/nio/ByteBuffer;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method private static IsPayloadLenValid(I)Z
    .locals 1
    .param p0, "len"    # I

    .line 386
    const/high16 v0, 0x20000

    if-gt p0, v0, :cond_0

    if-lez p0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private static IsTypeMagic([BI)Lcom/mediatek/mdml/MCP_TYPE;
    .locals 8
    .param p0, "data"    # [B
    .param p1, "startOffset"    # I

    .line 343
    sget-object v0, Lcom/mediatek/mdml/MCPHandler;->m_typeMagicTable:[Lcom/mediatek/mdml/MCPHandler$TypeMagic;

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_2

    aget-object v4, v0, v3

    .line 344
    .local v4, "aM_typeMagicTable":Lcom/mediatek/mdml/MCPHandler$TypeMagic;
    array-length v5, p0

    sub-int/2addr v5, p1

    iget-object v6, v4, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_magic:[B

    array-length v6, v6

    if-ge v5, v6, :cond_0

    .line 345
    goto :goto_1

    .line 347
    :cond_0
    iget-object v5, v4, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_magic:[B

    array-length v5, v5

    invoke-static {p0, p1, v5}, Ljava/nio/ByteBuffer;->wrap([BII)Ljava/nio/ByteBuffer;

    move-result-object v5

    iget-object v6, v4, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_magic:[B

    iget-object v7, v4, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_magic:[B

    array-length v7, v7

    .line 348
    invoke-static {v6, v2, v7}, Ljava/nio/ByteBuffer;->wrap([BII)Ljava/nio/ByteBuffer;

    move-result-object v6

    .line 347
    invoke-virtual {v5, v6}, Ljava/nio/ByteBuffer;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 349
    iget-object v0, v4, Lcom/mediatek/mdml/MCPHandler$TypeMagic;->m_type:Lcom/mediatek/mdml/MCP_TYPE;

    return-object v0

    .line 343
    .end local v4    # "aM_typeMagicTable":Lcom/mediatek/mdml/MCPHandler$TypeMagic;
    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 352
    :cond_2
    const/4 v0, 0x0

    return-object v0
.end method

.method static SearchHeader(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/DataQueue;)Z
    .locals 8
    .param p0, "mcpInfo"    # Lcom/mediatek/mdml/MCPInfo;
    .param p1, "dataQ"    # Lcom/mediatek/mdml/DataQueue;

    .line 254
    sget-object v0, Lcom/mediatek/mdml/MCP_TYPE;->MCP_TYPE_UNDEFINED:Lcom/mediatek/mdml/MCP_TYPE;

    .line 258
    .local v0, "type_r":Lcom/mediatek/mdml/MCP_TYPE;
    const/4 v1, 0x0

    const-string v2, "MDML/MCPHandler"

    if-eqz p0, :cond_5

    if-nez p1, :cond_0

    goto/16 :goto_1

    .line 263
    :cond_0
    :goto_0
    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v3

    sget-object v4, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    array-length v4, v4

    const/4 v5, 0x2

    add-int/2addr v4, v5

    const/4 v6, 0x4

    add-int/2addr v4, v6

    if-lt v3, v4, :cond_4

    .line 265
    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v3

    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->FrontOffset()I

    move-result v4

    invoke-static {v3, v4}, Lcom/mediatek/mdml/MCPHandler;->IsHeaderMagic([BI)Z

    move-result v3

    const/4 v4, 0x1

    if-nez v3, :cond_1

    .line 267
    const-string v3, "Not magic header. Pop(1)"

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 269
    invoke-virtual {p1, v4}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 270
    goto :goto_0

    .line 273
    :cond_1
    sget-object v3, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    array-length v3, v3

    invoke-virtual {p1, v3}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 277
    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v3

    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->FrontOffset()I

    move-result v7

    invoke-static {v3, v7}, Lcom/mediatek/mdml/MCPHandler;->IsTypeMagic([BI)Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v3

    move-object v0, v3

    if-nez v3, :cond_2

    .line 279
    const-string v3, "Type magic is invalid!"

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 281
    goto :goto_0

    .line 284
    :cond_2
    invoke-virtual {p1, v5}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 288
    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v3

    invoke-virtual {p1}, Lcom/mediatek/mdml/DataQueue;->FrontOffset()I

    move-result v5

    invoke-static {v3, v5, v6}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v3

    .line 290
    .local v3, "packetLen_r":I
    invoke-static {v3}, Lcom/mediatek/mdml/MCPHandler;->IsPayloadLenValid(I)Z

    move-result v5

    if-nez v5, :cond_3

    .line 292
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Command length is invalid! len = ["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "]"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 293
    goto :goto_0

    .line 296
    :cond_3
    invoke-virtual {p1, v6}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 300
    const/4 v1, 0x0

    invoke-virtual {p0, v0, v3, v1}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[B)V

    .line 303
    return v4

    .line 306
    .end local v3    # "packetLen_r":I
    :cond_4
    const-string v3, "MCPHandler::SearchHeader failed!"

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 307
    return v1

    .line 259
    :cond_5
    :goto_1
    const-string v3, "mcpInfo is null || dataQ is null."

    invoke-static {v2, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 260
    return v1
.end method

.method static WriteToArrayList(Ljava/util/ArrayList;[BI)Z
    .locals 2
    .param p1, "data"    # [B
    .param p2, "len"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;[BI)Z"
        }
    .end annotation

    .line 132
    .local p0, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    if-ge v0, p2, :cond_0

    .line 133
    aget-byte v1, p1, v0

    invoke-static {v1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 132
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 135
    .end local v0    # "i":I
    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method static WriteToConnection(Lcom/mediatek/mdml/SocketConnection;Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z
    .locals 10
    .param p0, "connection"    # Lcom/mediatek/mdml/SocketConnection;
    .param p1, "cmd"    # Lcom/mediatek/mdml/MCPInfo;
    .param p2, "reply"    # Lcom/mediatek/mdml/MCPInfo;

    .line 36
    const/4 v0, 0x0

    const-string v1, "MDML/MCPHandler"

    if-eqz p0, :cond_11

    if-nez p1, :cond_0

    goto/16 :goto_6

    .line 40
    :cond_0
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetData()[B

    move-result-object v2

    const/4 v3, 0x1

    if-eqz v2, :cond_10

    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v2

    if-eqz v2, :cond_10

    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v2

    if-nez v2, :cond_1

    goto/16 :goto_5

    .line 46
    :cond_1
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/mdml/MCPHandler;->GetTypeMagic(Lcom/mediatek/mdml/MCP_TYPE;)[B

    move-result-object v2

    move-object v4, v2

    .local v4, "typeMagic":[B
    const-string v5, "]. DROP."

    if-nez v2, :cond_2

    .line 47
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Undefined type! type = ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/mdml/MCP_TYPE;->name()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 48
    return v3

    .line 51
    :cond_2
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v2

    .line 52
    .local v2, "len":I
    invoke-static {v2}, Lcom/mediatek/mdml/MCPHandler;->IsPayloadLenValid(I)Z

    move-result v6

    if-nez v6, :cond_3

    .line 53
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Payload length is invalid! len = ["

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 54
    return v3

    .line 58
    :cond_3
    sget-object v5, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    array-length v6, v5

    invoke-virtual {p0, v5, v6}, Lcom/mediatek/mdml/SocketConnection;->Write([BI)Z

    move-result v5

    if-nez v5, :cond_4

    .line 59
    const-string v3, "MCPHandler::WriteToConnection (HEADER_MAGIC) failed!"

    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 60
    return v0

    .line 63
    :cond_4
    const/4 v5, 0x2

    invoke-virtual {p0, v4, v5}, Lcom/mediatek/mdml/SocketConnection;->Write([BI)Z

    move-result v5

    if-nez v5, :cond_5

    .line 64
    const-string v3, "MCPHandler::WriteToConnection (TYPE_Magic) failed!"

    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 65
    return v0

    .line 68
    :cond_5
    invoke-static {v2}, Lcom/mediatek/mdml/MonitorUtils;->IntToByteArray(I)[B

    move-result-object v5

    .line 69
    .local v5, "lenByteArray":[B
    array-length v6, v5

    invoke-virtual {p0, v5, v6}, Lcom/mediatek/mdml/SocketConnection;->Write([BI)Z

    move-result v6

    if-nez v6, :cond_6

    .line 70
    const-string v3, "MCPHandler::WriteToConnection (Len) failed!"

    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 71
    return v0

    .line 74
    :cond_6
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetData()[B

    move-result-object v6

    invoke-virtual {p0, v6, v2}, Lcom/mediatek/mdml/SocketConnection;->Write([BI)Z

    move-result v6

    if-nez v6, :cond_7

    .line 75
    const-string v3, "MCPHandler::WriteToConnection (Data) failed!"

    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 76
    return v0

    .line 82
    :cond_7
    if-nez p2, :cond_8

    .line 83
    return v3

    .line 86
    :cond_8
    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->Reset()V

    .line 88
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    const/16 v7, 0xa

    if-gt v6, v7, :cond_f

    .line 89
    invoke-virtual {p0}, Lcom/mediatek/mdml/SocketConnection;->ReadToBuffer()Z

    move-result v7

    if-nez v7, :cond_9

    .line 90
    const-string v0, "Failed to refresh buffer. (read error)"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 91
    goto/16 :goto_4

    .line 95
    :cond_9
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/mdml/SocketConnection;->GetDataQueue()Lcom/mediatek/mdml/DataQueue;

    move-result-object v7

    .line 96
    .local v7, "dataQ":Lcom/mediatek/mdml/DataQueue;
    invoke-virtual {v7}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v8

    if-nez v8, :cond_a

    .line 97
    goto :goto_2

    .line 99
    :cond_a
    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v8

    if-nez v8, :cond_c

    .line 100
    invoke-static {p2, v7}, Lcom/mediatek/mdml/MCPHandler;->SearchHeader(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/DataQueue;)Z

    move-result v8

    if-nez v8, :cond_b

    .line 102
    goto :goto_2

    .line 104
    :cond_b
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Header is found! Type = ["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v9, "] Payload length = ["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "]"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v1, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 119
    .end local v7    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    goto :goto_1

    .line 106
    .restart local v7    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    :cond_c
    invoke-virtual {v7}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v8

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v9

    if-ge v8, v9, :cond_d

    .line 108
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Data size ["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "] < Payload length ["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "]. Wait for next time."

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v1, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 109
    nop

    .line 120
    .end local v7    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    :goto_2
    const-string v7, "No packet is processed. RETRY."

    invoke-static {v1, v7}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    const-wide/16 v7, 0x64

    :try_start_0
    invoke-static {v7, v8}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 125
    goto :goto_3

    .line 123
    :catch_0
    move-exception v7

    .line 88
    :goto_3
    add-int/lit8 v6, v6, 0x1

    goto/16 :goto_0

    .line 112
    .restart local v7    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    :cond_d
    invoke-virtual {v7}, Lcom/mediatek/mdml/DataQueue;->FrontOffset()I

    move-result v1

    if-eqz v1, :cond_e

    .line 113
    invoke-virtual {v7, v0}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 115
    :cond_e
    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v1

    invoke-virtual {v7}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v8

    invoke-virtual {p2, v0, v1, v8, v3}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[BZ)V

    .line 116
    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v0

    invoke-virtual {v7, v0}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 117
    return v3

    .line 127
    .end local v6    # "i":I
    .end local v7    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    :cond_f
    :goto_4
    return v3

    .line 41
    .end local v2    # "len":I
    .end local v4    # "typeMagic":[B
    .end local v5    # "lenByteArray":[B
    :cond_10
    :goto_5
    const-string v0, "cmd data/type is null or length is 0."

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 42
    return v3

    .line 37
    :cond_11
    :goto_6
    const-string v2, "connection or cmd is null"

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 38
    return v0
.end method

.method static WriteToHIDLService(Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/MCPInfo;)Z
    .locals 11
    .param p0, "connection"    # Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;
    .param p1, "cmd"    # Lcom/mediatek/mdml/MCPInfo;
    .param p2, "reply"    # Lcom/mediatek/mdml/MCPInfo;

    .line 140
    const-string v0, "MDML/MCPHandler"

    const-string v1, "WriteToHIDLService start"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 141
    const/4 v1, 0x0

    if-eqz p0, :cond_f

    if-nez p1, :cond_0

    goto/16 :goto_1

    .line 145
    :cond_0
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetData()[B

    move-result-object v2

    const/4 v3, 0x1

    if-eqz v2, :cond_e

    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v2

    if-eqz v2, :cond_e

    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v2

    if-nez v2, :cond_1

    goto/16 :goto_0

    .line 151
    :cond_1
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/mdml/MCPHandler;->GetTypeMagic(Lcom/mediatek/mdml/MCP_TYPE;)[B

    move-result-object v2

    move-object v4, v2

    .local v4, "typeMagic":[B
    const-string v5, "]. DROP."

    if-nez v2, :cond_2

    .line 152
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Undefined type! type = ["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/mdml/MCP_TYPE;->name()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 153
    return v3

    .line 156
    :cond_2
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v2

    .line 157
    .local v2, "len":I
    invoke-static {v2}, Lcom/mediatek/mdml/MCPHandler;->IsPayloadLenValid(I)Z

    move-result v6

    if-nez v6, :cond_3

    .line 158
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Payload length is invalid! len = ["

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 159
    return v3

    .line 162
    :cond_3
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 163
    .local v5, "inputList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const/4 v6, 0x0

    .line 166
    .local v6, "resultList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    sget-object v7, Lcom/mediatek/mdml/MCPHandler;->HEADER_MAGIC:[B

    array-length v8, v7

    invoke-static {v5, v7, v8}, Lcom/mediatek/mdml/MCPHandler;->WriteToArrayList(Ljava/util/ArrayList;[BI)Z

    move-result v7

    if-nez v7, :cond_4

    .line 167
    const-string v3, "MCPHandler::WriteToConnection (HEADER_MAGIC) failed!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 168
    return v1

    .line 171
    :cond_4
    const/4 v7, 0x2

    invoke-static {v5, v4, v7}, Lcom/mediatek/mdml/MCPHandler;->WriteToArrayList(Ljava/util/ArrayList;[BI)Z

    move-result v7

    if-nez v7, :cond_5

    .line 172
    const-string v3, "MCPHandler::WriteToConnection (TYPE_Magic) failed!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 173
    return v1

    .line 176
    :cond_5
    invoke-static {v2}, Lcom/mediatek/mdml/MonitorUtils;->IntToByteArray(I)[B

    move-result-object v7

    .line 177
    .local v7, "lenByteArray":[B
    array-length v8, v7

    invoke-static {v5, v7, v8}, Lcom/mediatek/mdml/MCPHandler;->WriteToArrayList(Ljava/util/ArrayList;[BI)Z

    move-result v8

    if-nez v8, :cond_6

    .line 178
    const-string v3, "MCPHandler::WriteToConnection (Len) failed!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 179
    return v1

    .line 182
    :cond_6
    invoke-virtual {p1}, Lcom/mediatek/mdml/MCPInfo;->GetData()[B

    move-result-object v8

    invoke-static {v5, v8, v2}, Lcom/mediatek/mdml/MCPHandler;->WriteToArrayList(Ljava/util/ArrayList;[BI)Z

    move-result v8

    if-nez v8, :cond_7

    .line 183
    const-string v3, "MCPHandler::WriteToConnection (Data) failed!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 184
    return v1

    .line 187
    :cond_7
    if-eqz p0, :cond_d

    .line 188
    const-string v8, "Write MCP Payload to HIDL connection."

    invoke-static {v0, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 190
    :try_start_0
    invoke-interface {p0, v5}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->sendMCPData(Ljava/util/ArrayList;)Ljava/util/ArrayList;

    move-result-object v8
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v6, v8

    .line 195
    nop

    .line 203
    const-string v8, "WriteToHIDLService send done"

    invoke-static {v0, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 205
    if-nez p2, :cond_8

    .line 206
    return v3

    .line 209
    :cond_8
    const-string v8, "WriteToHIDLService wait reply start"

    invoke-static {v0, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 211
    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->Reset()V

    .line 213
    if-eqz v6, :cond_c

    invoke-virtual {v6}, Ljava/util/ArrayList;->size()I

    move-result v8

    if-lez v8, :cond_c

    .line 214
    new-instance v8, Lcom/mediatek/mdml/DataQueue;

    invoke-direct {v8}, Lcom/mediatek/mdml/DataQueue;-><init>()V

    .line 215
    .local v8, "dataQ":Lcom/mediatek/mdml/DataQueue;
    invoke-virtual {v8, v6}, Lcom/mediatek/mdml/DataQueue;->PushArrayList(Ljava/util/ArrayList;)Z

    .line 217
    invoke-static {p2, v8}, Lcom/mediatek/mdml/MCPHandler;->SearchHeader(Lcom/mediatek/mdml/MCPInfo;Lcom/mediatek/mdml/DataQueue;)Z

    move-result v9

    if-nez v9, :cond_9

    .line 218
    const-string v3, "HIDL return data have no MCP header!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 219
    return v1

    .line 221
    :cond_9
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Header is found! Type = ["

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v10, "] Payload length = ["

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, "]"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v0, v9}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 223
    invoke-virtual {v8}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v9

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v10

    if-ge v9, v10, :cond_a

    .line 224
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Data size ["

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Lcom/mediatek/mdml/DataQueue;->Size()I

    move-result v9

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "] < Payload length ["

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v9

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "]."

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 225
    return v1

    .line 228
    :cond_a
    invoke-virtual {v8}, Lcom/mediatek/mdml/DataQueue;->FrontOffset()I

    move-result v9

    if-eqz v9, :cond_b

    .line 229
    invoke-virtual {v8, v1}, Lcom/mediatek/mdml/DataQueue;->Pop(I)V

    .line 231
    :cond_b
    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetType()Lcom/mediatek/mdml/MCP_TYPE;

    move-result-object v1

    invoke-virtual {p2}, Lcom/mediatek/mdml/MCPInfo;->GetLen()I

    move-result v9

    invoke-virtual {v8}, Lcom/mediatek/mdml/DataQueue;->GetData()[B

    move-result-object v10

    invoke-virtual {p2, v1, v9, v10, v3}, Lcom/mediatek/mdml/MCPInfo;->SetData(Lcom/mediatek/mdml/MCP_TYPE;I[BZ)V

    .line 233
    .end local v8    # "dataQ":Lcom/mediatek/mdml/DataQueue;
    nop

    .line 238
    const-string v1, "WriteToHIDLService wait reply done"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 240
    return v3

    .line 234
    :cond_c
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "HIDL Return Data size ["

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/util/ArrayList;->size()I

    move-result v8

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "] is 0 or null."

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 235
    return v1

    .line 191
    :catch_0
    move-exception v3

    .line 192
    .local v3, "e":Landroid/os/RemoteException;
    invoke-virtual {v3}, Landroid/os/RemoteException;->printStackTrace()V

    .line 193
    const-string v8, "MCPHandler::WriteToConnection HIDL call failed with RemoteException exception!"

    invoke-static {v0, v8}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 194
    return v1

    .line 197
    .end local v3    # "e":Landroid/os/RemoteException;
    :cond_d
    const-string v3, "MCPHandler::WriteToConnection HIDL connection is null!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 198
    return v1

    .line 146
    .end local v2    # "len":I
    .end local v4    # "typeMagic":[B
    .end local v5    # "inputList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v6    # "resultList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    .end local v7    # "lenByteArray":[B
    :cond_e
    :goto_0
    const-string v1, "cmd data/type is null or length is 0."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 147
    return v3

    .line 142
    :cond_f
    :goto_1
    const-string v2, "connection or cmd is null"

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 143
    return v1
.end method
