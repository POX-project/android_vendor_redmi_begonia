.class public Lcom/mediatek/ygps/CepCal;
.super Ljava/lang/Object;
.source "CepCal.java"


# direct methods
.method static calCEP(DDDD)D
    .locals 8

    .line 14
    invoke-static {p0, p1}, Lcom/mediatek/ygps/CepCal;->rad(D)D

    move-result-wide p0

    .line 15
    invoke-static {p2, p3}, Lcom/mediatek/ygps/CepCal;->rad(D)D

    move-result-wide p2

    .line 16
    invoke-static {p4, p5}, Lcom/mediatek/ygps/CepCal;->rad(D)D

    move-result-wide p4

    .line 17
    invoke-static {p6, p7}, Lcom/mediatek/ygps/CepCal;->rad(D)D

    move-result-wide p6

    const-wide/16 v0, 0x0

    cmpl-double v2, p0, v0

    const-wide v3, 0x3ff921fb54442d18L    # 1.5707963267948966

    if-eqz v2, :cond_0

    sub-double p0, v3, p0

    :cond_0
    cmpg-double v2, p2, v0

    if-gez v2, :cond_1

    add-double/2addr p2, v3

    :cond_1
    cmpl-double v2, p4, v0

    if-eqz v2, :cond_2

    sub-double p4, v3, p4

    :cond_2
    cmpg-double v0, p6, v0

    if-gez v0, :cond_3

    add-double/2addr p6, v3

    .line 30
    :cond_3
    invoke-static {p2, p3}, Ljava/lang/Math;->cos(D)D

    move-result-wide v0

    const-wide v2, 0x415854a640000000L    # 6378137.0

    mul-double/2addr v0, v2

    invoke-static {p0, p1}, Ljava/lang/Math;->sin(D)D

    move-result-wide v4

    mul-double/2addr v0, v4

    .line 31
    invoke-static {p2, p3}, Ljava/lang/Math;->sin(D)D

    move-result-wide p2

    mul-double/2addr p2, v2

    invoke-static {p0, p1}, Ljava/lang/Math;->sin(D)D

    move-result-wide v4

    mul-double/2addr p2, v4

    .line 32
    invoke-static {p0, p1}, Ljava/lang/Math;->cos(D)D

    move-result-wide p0

    mul-double/2addr p0, v2

    .line 34
    invoke-static {p6, p7}, Ljava/lang/Math;->cos(D)D

    move-result-wide v4

    mul-double/2addr v4, v2

    invoke-static {p4, p5}, Ljava/lang/Math;->sin(D)D

    move-result-wide v6

    mul-double/2addr v4, v6

    .line 35
    invoke-static {p6, p7}, Ljava/lang/Math;->sin(D)D

    move-result-wide p6

    mul-double/2addr p6, v2

    invoke-static {p4, p5}, Ljava/lang/Math;->sin(D)D

    move-result-wide v6

    mul-double/2addr p6, v6

    .line 36
    invoke-static {p4, p5}, Ljava/lang/Math;->cos(D)D

    move-result-wide p4

    mul-double/2addr p4, v2

    sub-double/2addr v0, v4

    mul-double/2addr v0, v0

    sub-double/2addr p2, p6

    mul-double/2addr p2, p2

    add-double/2addr v0, p2

    sub-double/2addr p0, p4

    mul-double/2addr p0, p0

    add-double/2addr v0, p0

    .line 38
    invoke-static {v0, v1}, Ljava/lang/Math;->sqrt(D)D

    move-result-wide p0

    mul-double/2addr p0, p0

    const-wide p2, 0x42d27fd94c2fb880L    # 8.1361263181538E13

    sub-double p0, p2, p0

    div-double/2addr p0, p2

    .line 39
    invoke-static {p0, p1}, Ljava/lang/Math;->acos(D)D

    move-result-wide p0

    mul-double/2addr p0, v2

    return-wide p0
.end method

.method private static rad(D)D
    .locals 2

    const-wide v0, 0x400921fb54442d18L    # Math.PI

    mul-double/2addr p0, v0

    const-wide v0, 0x4066800000000000L    # 180.0

    div-double/2addr p0, v0

    return-wide p0
.end method
