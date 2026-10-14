.class public Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
.super Ljava/lang/Object;
.source "AntennaEgmcInfo.java"


# instance fields
.field private cssFollowPcc:Z

.field private forceRx:Z

.field private pCell2Rx:[Z

.field private pCell4Rx:[Z

.field private sCell2Rx:[Z

.field private sCell4Rx:[Z

.field private showStatus:Z


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    const/4 v0, 0x2

    new-array v1, v0, [Z

    iput-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    .line 10
    const/4 v1, 0x4

    new-array v2, v1, [Z

    iput-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    .line 11
    new-array v0, v0, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    .line 12
    new-array v0, v1, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    .line 13
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->showStatus:Z

    .line 92
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(I)V

    .line 93
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(I)V

    .line 94
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell2Rx(I)V

    .line 95
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell4Rx(I)V

    .line 96
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell2Rx(I)V

    .line 97
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell4Rx(I)V

    .line 98
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    .line 99
    return-void
.end method

.method public constructor <init>(IIIIII)V
    .locals 3
    .param p1, "forceRx"    # I
    .param p2, "cssFollowPcc"    # I
    .param p3, "pCell2Rx"    # I
    .param p4, "pCell4Rx"    # I
    .param p5, "sCell2Rx"    # I
    .param p6, "sCell4Rx"    # I

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    const/4 v0, 0x2

    new-array v1, v0, [Z

    iput-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    .line 10
    const/4 v1, 0x4

    new-array v2, v1, [Z

    iput-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    .line 11
    new-array v0, v0, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    .line 12
    new-array v0, v1, [Z

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    .line 13
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->showStatus:Z

    .line 54
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(I)V

    .line 55
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(I)V

    .line 56
    invoke-virtual {p0, p3}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell2Rx(I)V

    .line 57
    invoke-virtual {p0, p4}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell4Rx(I)V

    .line 58
    invoke-virtual {p0, p5}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell2Rx(I)V

    .line 59
    invoke-virtual {p0, p6}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell4Rx(I)V

    .line 60
    return-void
.end method

.method public constructor <init>([I)V
    .locals 3
    .param p1, "egmcInfoArray"    # [I

    .line 62
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    const/4 v0, 0x2

    new-array v1, v0, [Z

    iput-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    .line 10
    const/4 v1, 0x4

    new-array v2, v1, [Z

    iput-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    .line 11
    new-array v2, v0, [Z

    iput-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    .line 12
    new-array v2, v1, [Z

    iput-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    .line 13
    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->showStatus:Z

    .line 63
    aget v2, p1, v2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(I)V

    .line 64
    const/4 v2, 0x1

    aget v2, p1, v2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(I)V

    .line 65
    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell2Rx(I)V

    .line 66
    const/4 v0, 0x3

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell4Rx(I)V

    .line 67
    aget v0, p1, v1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell2Rx(I)V

    .line 68
    const/4 v0, 0x5

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell4Rx(I)V

    .line 69
    return-void
.end method

.method public static booleanToInt([Z)I
    .locals 4
    .param p0, "data"    # [Z

    .line 16
    const/4 v0, 0x0

    .line 17
    .local v0, "intValue":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_1

    .line 18
    aget-boolean v2, p0, v1

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    .line 19
    shl-int v2, v3, v1

    or-int/2addr v0, v2

    goto :goto_1

    .line 21
    :cond_0
    shl-int v2, v3, v1

    not-int v2, v2

    and-int/2addr v0, v2

    .line 17
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 24
    .end local v1    # "i":I
    :cond_1
    return v0
.end method

.method public static intToBoolean(II)[Z
    .locals 9
    .param p0, "data"    # I
    .param p1, "length"    # I

    .line 28
    invoke-static {p0}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v0

    .line 29
    .local v0, "boolConfig":Ljava/lang/String;
    new-array v1, p1, [Z

    .line 30
    .local v1, "boolResults":[Z
    invoke-virtual {v0}, Ljava/lang/String;->toCharArray()[C

    move-result-object v2

    .line 31
    .local v2, "results":[C
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    array-length v4, v2

    sub-int v4, p1, v4

    const/4 v5, 0x0

    if-ge v3, v4, :cond_0

    .line 32
    add-int/lit8 v4, p1, -0x1

    sub-int/2addr v4, v3

    aput-boolean v5, v1, v4

    .line 31
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 34
    .end local v3    # "i":I
    :cond_0
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_1
    array-length v4, v2

    if-ge v3, v4, :cond_2

    .line 35
    array-length v4, v2

    const/4 v6, 0x1

    sub-int/2addr v4, v6

    sub-int/2addr v4, v3

    aget-char v7, v2, v3

    const/16 v8, 0x31

    if-ne v7, v8, :cond_1

    goto :goto_2

    :cond_1
    move v6, v5

    :goto_2
    aput-boolean v6, v1, v4

    .line 34
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 37
    .end local v3    # "i":I
    :cond_2
    return-object v1
.end method


# virtual methods
.method public CloseForceRxFor()V
    .locals 1

    .line 102
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(Z)V

    .line 103
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(Z)V

    .line 104
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell2Rx(I)V

    .line 105
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell4Rx(I)V

    .line 106
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell2Rx(I)V

    .line 107
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell4Rx(I)V

    .line 108
    return-void
.end method

.method public getBoolArrayPCell2Rx()[Z
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    return-object v0
.end method

.method public getBoolArrayPCell4Rx()[Z
    .locals 1

    .line 169
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    return-object v0
.end method

.method public getBoolArraySCell2Rx()[Z
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    return-object v0
.end method

.method public getBoolArraySCell4Rx()[Z
    .locals 1

    .line 205
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    return-object v0
.end method

.method public getCssFollowPcc()Z
    .locals 1

    .line 129
    iget-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->cssFollowPcc:Z

    return v0
.end method

.method public getForceRx()Z
    .locals 1

    .line 111
    iget-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->forceRx:Z

    return v0
.end method

.method public getIntCssFollowPcc()I
    .locals 1

    .line 133
    iget-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->cssFollowPcc:Z

    if-eqz v0, :cond_0

    .line 134
    const/4 v0, 0x1

    return v0

    .line 135
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getIntForceRx()I
    .locals 1

    .line 115
    iget-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->forceRx:Z

    if-eqz v0, :cond_0

    .line 116
    const/4 v0, 0x1

    return v0

    .line 117
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getPCell2Rx()I
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->booleanToInt([Z)I

    move-result v0

    return v0
.end method

.method public getPCell4Rx()I
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->booleanToInt([Z)I

    move-result v0

    return v0
.end method

.method public getSCell2Rx()I
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->booleanToInt([Z)I

    move-result v0

    return v0
.end method

.method public getSCell4Rx()I
    .locals 1

    .line 201
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    invoke-static {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->booleanToInt([Z)I

    move-result v0

    return v0
.end method

.method public hide()V
    .locals 1

    .line 49
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->showStatus:Z

    .line 50
    return-void
.end method

.method public isShow()Z
    .locals 1

    .line 41
    iget-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->showStatus:Z

    return v0
.end method

.method public setCssFollowPcc(I)V
    .locals 1
    .param p1, "cssFollowPcc"    # I

    .line 143
    if-nez p1, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    :goto_0
    iput-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->cssFollowPcc:Z

    .line 144
    return-void
.end method

.method public setCssFollowPcc(Z)V
    .locals 0
    .param p1, "cssFollowPcc"    # Z

    .line 139
    iput-boolean p1, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->cssFollowPcc:Z

    .line 140
    return-void
.end method

.method public setForceRx(I)V
    .locals 1
    .param p1, "forceRx"    # I

    .line 125
    if-nez p1, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    :goto_0
    iput-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->forceRx:Z

    .line 126
    return-void
.end method

.method public setForceRx(Z)V
    .locals 0
    .param p1, "forceRx"    # Z

    .line 121
    iput-boolean p1, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->forceRx:Z

    .line 122
    return-void
.end method

.method public setPCell2Rx(I)V
    .locals 1
    .param p1, "pCell2Rx"    # I

    .line 155
    const/4 v0, 0x2

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->intToBoolean(II)[Z

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    .line 156
    return-void
.end method

.method public setPCell4Rx(I)V
    .locals 1
    .param p1, "pCell4Rx"    # I

    .line 173
    const/4 v0, 0x4

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->intToBoolean(II)[Z

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    .line 174
    return-void
.end method

.method public setSCell2Rx(I)V
    .locals 1
    .param p1, "sCell2Rx"    # I

    .line 191
    const/4 v0, 0x2

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->intToBoolean(II)[Z

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    .line 192
    return-void
.end method

.method public setSCell4Rx(I)V
    .locals 1
    .param p1, "sCell4Rx"    # I

    .line 209
    const/4 v0, 0x4

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->intToBoolean(II)[Z

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    .line 210
    return-void
.end method

.method public show()V
    .locals 1

    .line 45
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->showStatus:Z

    .line 46
    return-void
.end method

.method public updateAntennaEgmcInfo(IIIIII)V
    .locals 0
    .param p1, "forceRx"    # I
    .param p2, "cssFollowPcc"    # I
    .param p3, "pCell2Rx"    # I
    .param p4, "pCell4Rx"    # I
    .param p5, "sCell2Rx"    # I
    .param p6, "sCell4Rx"    # I

    .line 82
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(I)V

    .line 83
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(I)V

    .line 84
    invoke-virtual {p0, p3}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell2Rx(I)V

    .line 85
    invoke-virtual {p0, p4}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell4Rx(I)V

    .line 86
    invoke-virtual {p0, p5}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell2Rx(I)V

    .line 87
    invoke-virtual {p0, p6}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell4Rx(I)V

    .line 88
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    .line 89
    return-void
.end method

.method public updateAntennaEgmcInfo([I)V
    .locals 1
    .param p1, "egmcInfoArray"    # [I

    .line 72
    const/4 v0, 0x0

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setForceRx(I)V

    .line 73
    const/4 v0, 0x1

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setCssFollowPcc(I)V

    .line 74
    const/4 v0, 0x2

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell2Rx(I)V

    .line 75
    const/4 v0, 0x3

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setPCell4Rx(I)V

    .line 76
    const/4 v0, 0x4

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell2Rx(I)V

    .line 77
    const/4 v0, 0x5

    aget v0, p1, v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->setSCell4Rx(I)V

    .line 78
    return-void
.end method

.method public updatePCell2Rx(ZI)V
    .locals 2
    .param p1, "value"    # Z
    .param p2, "pos"    # I

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell2Rx:[Z

    array-length v1, v0

    if-lt p2, v1, :cond_0

    .line 160
    return-void

    .line 161
    :cond_0
    aput-boolean p1, v0, p2

    .line 162
    return-void
.end method

.method public updatePCell4Rx(ZI)V
    .locals 2
    .param p1, "value"    # Z
    .param p2, "pos"    # I

    .line 177
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->pCell4Rx:[Z

    array-length v1, v0

    if-lt p2, v1, :cond_0

    .line 178
    return-void

    .line 179
    :cond_0
    aput-boolean p1, v0, p2

    .line 180
    return-void
.end method

.method public updateSCell2Rx(ZI)V
    .locals 2
    .param p1, "value"    # Z
    .param p2, "pos"    # I

    .line 195
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell2Rx:[Z

    array-length v1, v0

    if-lt p2, v1, :cond_0

    .line 196
    return-void

    .line 197
    :cond_0
    aput-boolean p1, v0, p2

    .line 198
    return-void
.end method

.method public updateSCell4Rx(ZI)V
    .locals 2
    .param p1, "value"    # Z
    .param p2, "pos"    # I

    .line 213
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->sCell4Rx:[Z

    array-length v1, v0

    if-lt p2, v1, :cond_0

    .line 214
    return-void

    .line 215
    :cond_0
    aput-boolean p1, v0, p2

    .line 216
    return-void
.end method
