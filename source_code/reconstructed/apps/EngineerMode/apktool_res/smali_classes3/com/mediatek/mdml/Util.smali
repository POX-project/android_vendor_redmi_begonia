.class Lcom/mediatek/mdml/Util;
.super Ljava/lang/Object;
.source "Util.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I
    .locals 7
    .param p0, "buffer"    # [B
    .param p1, "startPos"    # I
    .param p2, "offsetAndSize"    # Lcom/mediatek/mdml/OffsetAndSize;

    .line 31
    invoke-static {p0, p1, p2}, Lcom/mediatek/mdml/Util;->getValue([BILcom/mediatek/mdml/OffsetAndSize;)[B

    move-result-object v0

    .line 32
    .local v0, "byteArray":[B
    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 33
    return v1

    .line 36
    :cond_0
    array-length v2, v0

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eq v2, v4, :cond_4

    const/4 v5, 0x2

    if-eq v2, v5, :cond_3

    const/4 v6, 0x3

    if-eq v2, v6, :cond_2

    const/4 v3, 0x4

    if-eq v2, v3, :cond_1

    .line 46
    return v1

    .line 44
    :cond_1
    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v1

    sget-object v2, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v1, v2}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v1

    return v1

    .line 42
    :cond_2
    aget-byte v1, v0, v3

    aget-byte v2, v0, v4

    shl-int/lit8 v2, v2, 0x8

    add-int/2addr v1, v2

    aget-byte v2, v0, v5

    shl-int/lit8 v2, v2, 0x10

    add-int/2addr v1, v2

    return v1

    .line 40
    :cond_3
    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v1

    sget-object v2, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v1, v2}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getShort()S

    move-result v1

    return v1

    .line 38
    :cond_4
    aget-byte v1, v0, v3

    return v1
.end method

.method static getValue([BILcom/mediatek/mdml/OffsetAndSize;)[B
    .locals 4
    .param p0, "buffer"    # [B
    .param p1, "startPos"    # I
    .param p2, "offsetAndSize"    # Lcom/mediatek/mdml/OffsetAndSize;

    .line 10
    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 11
    return-object v0

    .line 14
    :cond_0
    iget v1, p2, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    .line 15
    .local v1, "size":I
    if-nez v1, :cond_1

    .line 16
    return-object v0

    .line 17
    :cond_1
    const/4 v2, -0x1

    if-ne v1, v2, :cond_2

    .line 18
    array-length v2, p0

    sub-int/2addr v2, p1

    iget v3, p2, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    sub-int v1, v2, v3

    .line 21
    :cond_2
    if-lez v1, :cond_4

    array-length v2, p0

    sub-int/2addr v2, p1

    iget v3, p2, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    add-int/2addr v3, v1

    if-ge v2, v3, :cond_3

    goto :goto_0

    .line 25
    :cond_3
    new-array v0, v1, [B

    .line 26
    .local v0, "b":[B
    iget v2, p2, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    add-int/2addr v2, p1

    const/4 v3, 0x0

    invoke-static {p0, v2, v0, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 27
    return-object v0

    .line 22
    .end local v0    # "b":[B
    :cond_4
    :goto_0
    return-object v0
.end method
