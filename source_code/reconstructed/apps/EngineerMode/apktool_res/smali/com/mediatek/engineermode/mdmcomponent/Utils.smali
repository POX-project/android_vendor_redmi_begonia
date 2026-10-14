.class public Lcom/mediatek/engineermode/mdmcomponent/Utils;
.super Ljava/lang/Object;
.source "Utils.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "EmInfo/MDMLUtils"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getBoolFromByte([B)Z
    .locals 7
    .param p0, "data"    # [B

    .line 77
    const/4 v0, 0x0

    .line 78
    .local v0, "result":Z
    array-length v1, p0

    const/4 v2, 0x0

    invoke-static {p0, v2, v1}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([BII)J

    move-result-wide v3

    const-wide/16 v5, 0x1

    cmp-long v1, v3, v5

    if-nez v1, :cond_0

    const/4 v2, 0x1

    :cond_0
    move v0, v2

    .line 79
    return v0
.end method

.method public static getIntFromByte([B)J
    .locals 4
    .param p0, "data"    # [B

    .line 59
    const-wide/16 v0, 0x0

    .line 60
    .local v0, "result":J
    if-eqz p0, :cond_1

    array-length v2, p0

    if-gtz v2, :cond_0

    goto :goto_0

    .line 63
    :cond_0
    const/4 v2, 0x0

    array-length v3, p0

    invoke-static {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getIntFromByte([BII)J

    move-result-wide v0

    .line 64
    return-wide v0

    .line 61
    :cond_1
    :goto_0
    const-wide/16 v2, 0x0

    return-wide v2
.end method

.method public static getIntFromByte([BII)J
    .locals 5
    .param p0, "data"    # [B
    .param p1, "startpos"    # I
    .param p2, "len"    # I

    .line 6
    const-wide/16 v0, 0x0

    .line 8
    .local v0, "ret":J
    add-int v2, p1, p2

    array-length v3, p0

    if-le v2, v3, :cond_0

    .line 9
    const-wide/16 v2, -0x1

    return-wide v2

    .line 11
    :cond_0
    add-int/lit8 v2, p2, -0x1

    .local v2, "i":I
    :goto_0
    if-ltz v2, :cond_2

    .line 12
    add-int v3, p1, v2

    aget-byte v3, p0, v3

    and-int/lit16 v3, v3, 0xff

    int-to-long v3, v3

    add-long/2addr v0, v3

    .line 13
    if-eqz v2, :cond_1

    .line 14
    const/16 v3, 0x8

    shl-long/2addr v0, v3

    .line 11
    :cond_1
    add-int/lit8 v2, v2, -0x1

    goto :goto_0

    .line 17
    .end local v2    # "i":I
    :cond_2
    return-wide v0
.end method

.method public static getIntFromByte([BZ)J
    .locals 4
    .param p0, "data"    # [B
    .param p1, "sign"    # Z

    .line 67
    const-wide/16 v0, 0x0

    .line 69
    .local v0, "result":J
    if-eqz p0, :cond_1

    array-length v2, p0

    if-gtz v2, :cond_0

    goto :goto_0

    .line 73
    :cond_0
    const/4 v2, 0x0

    array-length v3, p0

    invoke-static {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/Utils;->getNegLongFromByte([BII)J

    move-result-wide v0

    .line 74
    return-wide v0

    .line 70
    :cond_1
    :goto_0
    const-wide/16 v2, 0x0

    return-wide v2
.end method

.method public static getNegLongFromByte([BII)J
    .locals 15
    .param p0, "data"    # [B
    .param p1, "startpos"    # I
    .param p2, "len"    # I

    .line 21
    move-object v0, p0

    const-wide/16 v1, 0x0

    .line 22
    .local v1, "ret":J
    const-wide/16 v3, 0x1

    .line 23
    .local v3, "sign":J
    const-wide/16 v5, 0x0

    .line 24
    .local v5, "temp":J
    const-wide/16 v7, 0x0

    .line 25
    .local v7, "value":J
    const-wide/16 v9, 0x0

    .line 27
    .local v9, "a":J
    add-int v11, p1, p2

    array-length v12, v0

    if-le v11, v12, :cond_0

    .line 28
    const-wide/16 v11, -0x1

    return-wide v11

    .line 31
    :cond_0
    add-int v11, p1, p2

    add-int/lit8 v11, v11, -0x1

    aget-byte v11, v0, v11

    and-int/lit16 v11, v11, 0x80

    if-eqz v11, :cond_1

    .line 32
    const-wide/16 v3, -0x1

    .line 36
    :cond_1
    add-int/lit8 v11, p2, -0x1

    .local v11, "i":I
    :goto_0
    const/16 v12, 0x8

    if-ltz v11, :cond_3

    .line 37
    add-int v13, p1, v11

    aget-byte v13, v0, v13

    and-int/lit16 v13, v13, 0xff

    int-to-long v13, v13

    add-long/2addr v1, v13

    .line 38
    if-eqz v11, :cond_2

    .line 39
    shl-long/2addr v1, v12

    .line 36
    :cond_2
    add-int/lit8 v11, v11, -0x1

    goto :goto_0

    .line 42
    .end local v11    # "i":I
    :cond_3
    const-wide/16 v13, 0x1

    cmp-long v11, v3, v13

    if-eqz v11, :cond_6

    .line 43
    rsub-int/lit8 v11, p2, 0x8

    .restart local v11    # "i":I
    :goto_1
    if-ltz v11, :cond_5

    .line 44
    const-wide/16 v13, 0xff

    add-long/2addr v5, v13

    .line 45
    if-eqz v11, :cond_4

    .line 46
    shl-long/2addr v5, v12

    .line 43
    :cond_4
    add-int/lit8 v11, v11, -0x1

    goto :goto_1

    .line 49
    .end local v11    # "i":I
    :cond_5
    add-int/lit8 v11, p2, -0x1

    .restart local v11    # "i":I
    :goto_2
    if-ltz v11, :cond_6

    .line 50
    shl-long/2addr v5, v12

    .line 49
    add-int/lit8 v11, v11, -0x1

    goto :goto_2

    .line 53
    .end local v11    # "i":I
    :cond_6
    or-long/2addr v1, v5

    .line 55
    return-wide v1
.end method
