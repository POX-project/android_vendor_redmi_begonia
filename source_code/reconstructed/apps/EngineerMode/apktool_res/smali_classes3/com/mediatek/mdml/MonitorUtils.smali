.class Lcom/mediatek/mdml/MonitorUtils;
.super Ljava/lang/Object;
.source "MonitorUtils.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static ByteArrayToInt([BII)I
    .locals 3
    .param p0, "b"    # [B
    .param p1, "offset"    # I
    .param p2, "bytes"    # I

    .line 12
    const/4 v0, 0x0

    .line 14
    .local v0, "val":I
    if-eqz p0, :cond_5

    array-length v1, p0

    if-gt v1, p1, :cond_0

    goto :goto_0

    .line 18
    :cond_0
    array-length v1, p0

    sub-int/2addr v1, p1

    const/4 v2, 0x4

    if-gt v2, v1, :cond_1

    if-lt p2, v2, :cond_1

    .line 19
    add-int/lit8 v1, p1, 0x3

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    or-int/2addr v0, v1

    .line 20
    shl-int/lit8 v0, v0, 0x8

    .line 22
    :cond_1
    array-length v1, p0

    sub-int/2addr v1, p1

    const/4 v2, 0x3

    if-gt v2, v1, :cond_2

    if-lt p2, v2, :cond_2

    .line 23
    add-int/lit8 v1, p1, 0x2

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    or-int/2addr v0, v1

    .line 24
    shl-int/lit8 v0, v0, 0x8

    .line 26
    :cond_2
    array-length v1, p0

    sub-int/2addr v1, p1

    const/4 v2, 0x2

    if-gt v2, v1, :cond_3

    if-lt p2, v2, :cond_3

    .line 27
    add-int/lit8 v1, p1, 0x1

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    or-int/2addr v0, v1

    .line 28
    shl-int/lit8 v0, v0, 0x8

    .line 30
    :cond_3
    array-length v1, p0

    sub-int/2addr v1, p1

    const/4 v2, 0x1

    if-gt v2, v1, :cond_4

    if-lt p2, v2, :cond_4

    .line 31
    aget-byte v1, p0, p1

    and-int/lit16 v1, v1, 0xff

    or-int/2addr v0, v1

    .line 34
    :cond_4
    return v0

    .line 15
    :cond_5
    :goto_0
    const/4 v1, 0x0

    return v1
.end method

.method public static ByteArrayToLong([BII)J
    .locals 5
    .param p0, "b"    # [B
    .param p1, "offset"    # I
    .param p2, "bytes"    # I

    .line 41
    const-wide/16 v0, 0x0

    .line 43
    .local v0, "val":J
    if-eqz p0, :cond_5

    array-length v2, p0

    if-gt v2, p1, :cond_0

    goto :goto_0

    .line 47
    :cond_0
    array-length v2, p0

    sub-int/2addr v2, p1

    const/4 v3, 0x4

    const/16 v4, 0x8

    if-gt v3, v2, :cond_1

    if-lt p2, v3, :cond_1

    .line 48
    add-int/lit8 v2, p1, 0x3

    aget-byte v2, p0, v2

    and-int/lit16 v2, v2, 0xff

    int-to-long v2, v2

    or-long/2addr v0, v2

    .line 49
    shl-long/2addr v0, v4

    .line 51
    :cond_1
    array-length v2, p0

    sub-int/2addr v2, p1

    const/4 v3, 0x3

    if-gt v3, v2, :cond_2

    if-lt p2, v3, :cond_2

    .line 52
    add-int/lit8 v2, p1, 0x2

    aget-byte v2, p0, v2

    and-int/lit16 v2, v2, 0xff

    int-to-long v2, v2

    or-long/2addr v0, v2

    .line 53
    shl-long/2addr v0, v4

    .line 55
    :cond_2
    array-length v2, p0

    sub-int/2addr v2, p1

    const/4 v3, 0x2

    if-gt v3, v2, :cond_3

    if-lt p2, v3, :cond_3

    .line 56
    add-int/lit8 v2, p1, 0x1

    aget-byte v2, p0, v2

    and-int/lit16 v2, v2, 0xff

    int-to-long v2, v2

    or-long/2addr v0, v2

    .line 57
    shl-long/2addr v0, v4

    .line 59
    :cond_3
    array-length v2, p0

    sub-int/2addr v2, p1

    const/4 v3, 0x1

    if-gt v3, v2, :cond_4

    if-lt p2, v3, :cond_4

    .line 60
    aget-byte v2, p0, p1

    and-int/lit16 v2, v2, 0xff

    int-to-long v2, v2

    or-long/2addr v0, v2

    .line 63
    :cond_4
    return-wide v0

    .line 44
    :cond_5
    :goto_0
    const-wide/16 v2, 0x0

    return-wide v2
.end method

.method public static IntToByteArray(I)[B
    .locals 3
    .param p0, "a"    # I

    .line 70
    const/4 v0, 0x4

    new-array v0, v0, [B

    and-int/lit16 v1, p0, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x0

    aput-byte v1, v0, v2

    shr-int/lit8 v1, p0, 0x8

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x1

    aput-byte v1, v0, v2

    shr-int/lit8 v1, p0, 0x10

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x2

    aput-byte v1, v0, v2

    shr-int/lit8 v1, p0, 0x18

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    const/4 v2, 0x3

    aput-byte v1, v0, v2

    return-object v0
.end method

.method public static SetIntToByteArray([BIII)Z
    .locals 4
    .param p0, "data"    # [B
    .param p1, "offset"    # I
    .param p2, "a"    # I
    .param p3, "bytes"    # I

    .line 82
    if-eqz p0, :cond_2

    const/4 v0, 0x1

    if-ge p3, v0, :cond_0

    goto :goto_1

    .line 85
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, p3, :cond_1

    .line 86
    add-int v2, p1, v1

    and-int/lit16 v3, p2, 0xff

    int-to-byte v3, v3

    aput-byte v3, p0, v2

    .line 87
    shr-int/lit8 p2, p2, 0x8

    .line 85
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 89
    .end local v1    # "i":I
    :cond_1
    return v0

    .line 83
    :cond_2
    :goto_1
    const/4 v0, 0x0

    return v0
.end method
