.class public Lcom/mediatek/lbs/em2/utils/DataCoder2;
.super Ljava/lang/Object;
.source "DataCoder2.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;
    }
.end annotation


# direct methods
.method public static getBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)[B
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 155
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v0

    .line 156
    new-array v1, v0, [B

    const/4 v2, 0x0

    .line 157
    invoke-virtual {p0, v1, v2, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->readFully([BII)V

    return-object v1
.end method

.method public static getBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 103
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    goto :goto_0

    :cond_0
    const/4 p0, 0x1

    :goto_0
    return p0
.end method

.method public static getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 107
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mBuff:[B

    iget v1, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mOffset:I

    aget-byte v0, v0, v1

    add-int/lit8 v1, v1, 0x1

    .line 108
    iput v1, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mOffset:I

    return v0
.end method

.method public static getDouble(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)D
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 139
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)J

    move-result-wide v0

    .line 140
    invoke-static {v0, v1}, Ljava/lang/Double;->longBitsToDouble(J)D

    move-result-wide v0

    return-wide v0
.end method

.method public static getFloat(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)F
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 134
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p0

    .line 135
    invoke-static {p0}, Ljava/lang/Float;->intBitsToFloat(I)F

    move-result p0

    return p0
.end method

.method public static getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 121
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)S

    move-result v0

    const v1, 0xffff

    and-int/2addr v0, v1

    or-int/lit8 v0, v0, 0x0

    .line 122
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)S

    move-result p0

    shl-int/lit8 p0, p0, 0x10

    or-int/2addr p0, v0

    return p0
.end method

.method public static getLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)J
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 128
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v0

    int-to-long v0, v0

    const-wide v2, 0xffffffffL

    and-long/2addr v0, v2

    const-wide/16 v2, 0x0

    or-long/2addr v0, v2

    .line 129
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result p0

    int-to-long v2, p0

    const/16 p0, 0x20

    shl-long/2addr v2, p0

    or-long/2addr v0, v2

    return-wide v0
.end method

.method public static getShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)S
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 114
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v0

    and-int/lit16 v0, v0, 0xff

    or-int/lit8 v0, v0, 0x0

    int-to-short v0, v0

    .line 115
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result p0

    shl-int/lit8 p0, p0, 0x8

    or-int/2addr p0, v0

    int-to-short p0, p0

    return p0
.end method

.method public static getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 144
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)B

    move-result v0

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 147
    :cond_0
    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v0

    .line 148
    new-array v1, v0, [B

    const/4 v2, 0x0

    .line 149
    invoke-virtual {p0, v1, v2, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->readFully([BII)V

    .line 150
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v1}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static putBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;[B)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 98
    array-length v0, p1

    invoke-static {p0, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 99
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->write([B)V

    return-void
.end method

.method public static putBoolean(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 45
    :goto_0
    invoke-static {p0, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    return-void
.end method

.method public static putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 50
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mBuff:[B

    iget v1, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mOffset:I

    aput-byte p1, v0, v1

    add-int/lit8 v1, v1, 0x1

    .line 51
    iput v1, p0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mOffset:I

    return-void
.end method

.method public static putDouble(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;D)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 79
    invoke-static {p1, p2}, Ljava/lang/Double;->doubleToLongBits(D)J

    move-result-wide p1

    invoke-static {p0, p1, p2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;J)V

    return-void
.end method

.method public static putFloat(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;F)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 74
    invoke-static {p1}, Ljava/lang/Float;->floatToIntBits(F)I

    move-result p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    return-void
.end method

.method public static putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const v0, 0xffff

    and-int v1, p1, v0

    int-to-short v1, v1

    .line 62
    invoke-static {p0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;S)V

    shr-int/lit8 p1, p1, 0x10

    and-int/2addr p1, v0

    int-to-short p1, p1

    .line 63
    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;S)V

    return-void
.end method

.method public static putLong(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;J)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-wide/16 v0, -0x1

    and-long v2, p1, v0

    long-to-int v2, v2

    .line 68
    invoke-static {p0, v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    const/16 v2, 0x20

    shr-long/2addr p1, v2

    and-long/2addr p1, v0

    long-to-int p1, p1

    .line 69
    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    return-void
.end method

.method public static putShort(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;S)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    and-int/lit16 v0, p1, 0xff

    int-to-byte v0, v0

    .line 56
    invoke-static {p0, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    shr-int/lit8 p1, p1, 0x8

    and-int/lit16 p1, p1, 0xff

    int-to-byte p1, p1

    .line 57
    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    return-void
.end method

.method public static putString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;Ljava/lang/String;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 85
    invoke-static {p0, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    .line 87
    invoke-static {p0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    .line 88
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    .line 89
    array-length v2, p1

    add-int/2addr v2, v1

    invoke-static {p0, v2}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;I)V

    .line 90
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->write([B)V

    .line 91
    invoke-static {p0, v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->putByte(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;B)V

    :goto_0
    return-void
.end method
