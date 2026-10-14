.class public Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;
.super Ljava/lang/Object;
.source "SocketUtils.java"


# instance fields
.field private mBuff:[B

.field private mOffset:I


# direct methods
.method public constructor <init>(I)V
    .locals 1

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 35
    iput v0, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mOffset:I

    .line 36
    new-array p1, p1, [B

    iput-object p1, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mBuff:[B

    return-void
.end method


# virtual methods
.method public getBuff()[B
    .locals 0

    .line 56
    iget-object p0, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mBuff:[B

    return-object p0
.end method

.method public getOffset()I
    .locals 0

    .line 52
    iget p0, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mOffset:I

    return p0
.end method

.method public putBool(Z)V
    .locals 0

    .line 69
    invoke-virtual {p0, p1}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putByte(B)V

    return-void
.end method

.method public putByte(B)V
    .locals 2

    .line 73
    iget-object v0, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mBuff:[B

    iget v1, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mOffset:I

    aput-byte p1, v0, v1

    add-int/lit8 v1, v1, 0x1

    .line 74
    iput v1, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mOffset:I

    return-void
.end method

.method public putInt(I)V
    .locals 2

    const v0, 0xffff

    and-int v1, p1, v0

    int-to-short v1, v1

    .line 83
    invoke-virtual {p0, v1}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putShort(S)V

    shr-int/lit8 p1, p1, 0x10

    and-int/2addr p1, v0

    int-to-short p1, p1

    .line 84
    invoke-virtual {p0, p1}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putShort(S)V

    return-void
.end method

.method public putShort(S)V
    .locals 1

    and-int/lit16 v0, p1, 0xff

    int-to-byte v0, v0

    .line 78
    invoke-virtual {p0, v0}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putByte(B)V

    shr-int/lit8 p1, p1, 0x8

    and-int/lit16 p1, p1, 0xff

    int-to-byte p1, p1

    .line 79
    invoke-virtual {p0, p1}, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->putByte(B)V

    return-void
.end method

.method public setOffset(I)V
    .locals 0

    .line 48
    iput p1, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mOffset:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    .line 40
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseBuffer "

    .line 41
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 42
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "offset=["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mOffset:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 43
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "maxSize=["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/socket/base/SocketUtils$BaseBuffer;->mBuff:[B

    array-length p0, p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 44
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
