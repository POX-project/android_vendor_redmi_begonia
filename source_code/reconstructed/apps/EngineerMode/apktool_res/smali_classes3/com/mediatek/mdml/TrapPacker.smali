.class Lcom/mediatek/mdml/TrapPacker;
.super Ljava/lang/Object;
.source "TrapPacker.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/TrapPacker"


# instance fields
.field private m_discardCount:[I

.field private m_isInitialized:Z

.field private m_rawData:[B

.field private m_rawLen:I

.field private m_trapDataOffset:I

.field private m_trapLen:I

.field private m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;


# direct methods
.method public constructor <init>(Lcom/mediatek/mdml/TRAP_TYPE;[BI)V
    .locals 7
    .param p1, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p2, "trapData"    # [B
    .param p3, "trapLen"    # I

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 85
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    .line 86
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    .line 87
    iput v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawLen:I

    .line 88
    iput v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapDataOffset:I

    .line 89
    iput v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    .line 90
    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_UNDEFINED:Lcom/mediatek/mdml/TRAP_TYPE;

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 91
    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v1

    new-array v1, v1, [I

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_discardCount:[I

    .line 93
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/mdml/TrapPacker;->m_discardCount:[I

    array-length v3, v2

    if-ge v1, v3, :cond_0

    .line 94
    aput v0, v2, v1

    .line 93
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 97
    .end local v1    # "i":I
    :cond_0
    if-eqz p2, :cond_2

    if-eqz p3, :cond_2

    const/high16 v1, 0x10000

    if-le p3, v1, :cond_1

    goto :goto_1

    .line 102
    :cond_1
    sget-object v2, Lcom/mediatek/mdml/TrapPacker$1;->$SwitchMap$com$mediatek$mdml$TRAP_TYPE:[I

    invoke-virtual {p1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v3

    aget v2, v2, v3

    const-string v3, "]"

    const-string v4, "MDML/TrapPacker"

    packed-switch v2, :pswitch_data_0

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Invalid trap type: ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 112
    return-void

    .line 109
    :pswitch_0
    nop

    .line 114
    iput-object p1, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 115
    iput p3, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    .line 116
    sget v2, Lcom/mediatek/mdml/MonitorDefs;->MAX_RAWDATA_LEN:I

    sub-int/2addr v2, v1

    add-int/2addr v2, p3

    new-array v1, v2, [B

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    .line 119
    const/4 v2, 0x0

    .line 122
    .local v2, "currentOffset":I
    nop

    .line 123
    invoke-virtual {p1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v5

    .line 122
    const/4 v6, 0x1

    invoke-static {v1, v2, v5, v6}, Lcom/mediatek/mdml/MonitorUtils;->SetIntToByteArray([BIII)Z

    .line 124
    add-int/2addr v2, v6

    .line 125
    iget-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    const/4 v5, 0x4

    invoke-static {v1, v2, p3, v5}, Lcom/mediatek/mdml/MonitorUtils;->SetIntToByteArray([BIII)Z

    .line 126
    add-int/2addr v2, v5

    .line 129
    iput v2, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapDataOffset:I

    .line 130
    iget-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    invoke-static {p2, v0, v1, v2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 131
    add-int/2addr v2, p3

    .line 133
    iput v2, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawLen:I

    .line 134
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "After TrapPacker::TrapPacker: type: ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "], len: ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 136
    iput-boolean v6, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    .line 137
    return-void

    .line 99
    .end local v2    # "currentOffset":I
    :cond_2
    :goto_1
    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method public constructor <init>([BI)V
    .locals 4
    .param p1, "rawData"    # [B
    .param p2, "rawLen"    # I

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 40
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    .line 41
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    .line 42
    iput v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawLen:I

    .line 43
    iput v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapDataOffset:I

    .line 44
    iput v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    .line 45
    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_UNDEFINED:Lcom/mediatek/mdml/TRAP_TYPE;

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 46
    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v1

    new-array v1, v1, [I

    iput-object v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_discardCount:[I

    .line 48
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/mdml/TrapPacker;->m_discardCount:[I

    array-length v3, v2

    if-ge v1, v3, :cond_0

    .line 49
    aput v0, v2, v1

    .line 48
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 52
    .end local v1    # "i":I
    :cond_0
    const-string v1, "MDML/TrapPacker"

    if-eqz p1, :cond_3

    if-eqz p2, :cond_3

    sget v2, Lcom/mediatek/mdml/MonitorDefs;->MAX_RAWDATA_LEN:I

    if-le p2, v2, :cond_1

    goto :goto_2

    .line 59
    :cond_1
    new-array v2, p2, [B

    iput-object v2, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    .line 60
    invoke-static {p1, v0, v2, v0, p2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 61
    iput p2, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawLen:I

    .line 62
    invoke-direct {p0}, Lcom/mediatek/mdml/TrapPacker;->Parse()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 63
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    goto :goto_1

    .line 65
    :cond_2
    const-string v0, "Parse rawData failed."

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 67
    :goto_1
    return-void

    .line 54
    :cond_3
    :goto_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Bad parameters. rawData is null or raw len = ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 56
    return-void
.end method

.method private Parse()Z
    .locals 12

    .line 216
    const/4 v0, 0x0

    .line 217
    .local v0, "i":I
    const/4 v1, 0x0

    .line 218
    .local v1, "currentOffset":I
    iget v2, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawLen:I

    .line 219
    .local v2, "totalLen":I
    const/4 v3, 0x0

    .line 223
    .local v3, "discard_count":I
    :goto_0
    const/4 v4, 0x1

    if-ge v1, v2, :cond_4

    .line 224
    iget-object v5, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    invoke-static {v5, v1, v4}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v5

    .line 225
    .local v5, "type":I
    const/4 v6, 0x0

    const-string v7, "Undefined type: ["

    const-string v8, "]"

    const-string v9, "MDML/TrapPacker"

    if-ltz v5, :cond_3

    sget-object v10, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v10}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v10

    if-lt v5, v10, :cond_0

    goto/16 :goto_4

    .line 229
    :cond_0
    add-int/lit8 v1, v1, 0x1

    .line 230
    sget-object v10, Lcom/mediatek/mdml/TrapPacker$1;->$SwitchMap$com$mediatek$mdml$TRAP_TYPE:[I

    invoke-static {}, Lcom/mediatek/mdml/TRAP_TYPE;->values()[Lcom/mediatek/mdml/TRAP_TYPE;

    move-result-object v11

    aget-object v11, v11, v5

    invoke-virtual {v11}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v11

    aget v10, v10, v11

    const/4 v11, 0x4

    packed-switch v10, :pswitch_data_0

    .line 270
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    .line 272
    invoke-static {v7, v1, v4}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v4

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 270
    invoke-static {v9, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 274
    return v6

    .line 232
    :pswitch_0
    iget-object v6, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    invoke-static {v6, v1, v11}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v3

    .line 234
    add-int/lit8 v1, v1, 0x4

    .line 235
    const/4 v0, 0x0

    :goto_1
    if-ge v0, v3, :cond_2

    .line 236
    iget-object v6, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    invoke-static {v6, v1, v4}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v6

    .line 238
    .local v6, "discard_type":I
    add-int/lit8 v1, v1, 0x1

    .line 239
    sget-object v7, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v7}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v7

    if-ge v6, v7, :cond_1

    .line 240
    iget-object v7, p0, Lcom/mediatek/mdml/TrapPacker;->m_discardCount:[I

    iget-object v10, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    .line 241
    invoke-static {v10, v1, v11}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v10

    aput v10, v7, v6

    goto :goto_2

    .line 243
    :cond_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Invalid discard info type: ["

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v9, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 246
    :goto_2
    nop

    .end local v6    # "discard_type":I
    add-int/lit8 v1, v1, 0x4

    .line 235
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 248
    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Parse discard info done! count = ["

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v9, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 250
    goto :goto_3

    .line 257
    :pswitch_1
    invoke-static {}, Lcom/mediatek/mdml/TRAP_TYPE;->values()[Lcom/mediatek/mdml/TRAP_TYPE;

    move-result-object v4

    aget-object v4, v4, v5

    iput-object v4, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 258
    iget-object v4, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    invoke-static {v4, v1, v11}, Lcom/mediatek/mdml/MonitorUtils;->ByteArrayToInt([BII)I

    move-result v4

    iput v4, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    .line 261
    add-int/lit8 v1, v1, 0x4

    .line 262
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Trap parsed: type: ["

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v6}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "], len: ["

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v9, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 264
    iput v1, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapDataOffset:I

    .line 265
    iget v4, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    add-int/2addr v1, v4

    .line 268
    nop

    .line 276
    .end local v5    # "type":I
    :goto_3
    goto/16 :goto_0

    .line 226
    .restart local v5    # "type":I
    :cond_3
    :goto_4
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v9, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 227
    return v6

    .line 278
    .end local v5    # "type":I
    :cond_4
    return v4

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method


# virtual methods
.method public GetDiscardInfo(Lcom/mediatek/mdml/TRAP_TYPE;)I
    .locals 2
    .param p1, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;

    .line 199
    invoke-virtual {p1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v0

    if-ltz v0, :cond_1

    .line 200
    invoke-virtual {p1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v0

    sget-object v1, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    invoke-virtual {v1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v1

    if-lt v0, v1, :cond_0

    goto :goto_0

    .line 203
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_discardCount:[I

    invoke-virtual {p1}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v1

    aget v0, v0, v1

    return v0

    .line 201
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method public GetRawData()[B
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawData:[B

    return-object v0
.end method

.method public GetRawLen()I
    .locals 1

    .line 155
    iget-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_rawLen:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public GetTrapDataOffset()I
    .locals 1

    .line 165
    iget-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapDataOffset:I

    goto :goto_0

    :cond_0
    const/4 v0, -0x1

    :goto_0
    return v0
.end method

.method public GetTrapLen()I
    .locals 1

    .line 175
    iget-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapLen:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public GetTrapType()Lcom/mediatek/mdml/TRAP_TYPE;
    .locals 1

    .line 186
    iget-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_trapType:Lcom/mediatek/mdml/TRAP_TYPE;

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_UNDEFINED:Lcom/mediatek/mdml/TRAP_TYPE;

    :goto_0
    return-object v0
.end method

.method public IsInitialized()Z
    .locals 1

    .line 294
    iget-boolean v0, p0, Lcom/mediatek/mdml/TrapPacker;->m_isInitialized:Z

    return v0
.end method
