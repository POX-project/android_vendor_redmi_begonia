.class public Lcom/mediatek/ygps/SatelliteInfoManager;
.super Ljava/lang/Object;
.source "SatelliteInfoManager.java"


# instance fields
.field mSatelInfoList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/ygps/SatelliteInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    return-void
.end method


# virtual methods
.method clearSatelInfos()V
    .locals 0

    .line 87
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->clear()V

    return-void
.end method

.method getSatelInfoList()Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/ygps/SatelliteInfo;",
            ">;"
        }
    .end annotation

    .line 63
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    return-object p0
.end method

.method isUsedInFix(I)Z
    .locals 6

    const/4 v0, 0x1

    const/4 v1, -0x2

    const/4 v2, 0x0

    if-ne p1, v1, :cond_0

    .line 92
    iget-object v3, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    move v3, v0

    goto :goto_0

    :cond_0
    move v3, v2

    .line 95
    :goto_0
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/ygps/SatelliteInfo;

    if-ne p1, v1, :cond_2

    .line 97
    iget-boolean v4, v4, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    if-nez v4, :cond_1

    move v0, v2

    goto :goto_1

    :cond_2
    const/4 v5, -0x1

    if-ne p1, v5, :cond_3

    .line 102
    iget-boolean v4, v4, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    if-eqz v4, :cond_1

    goto :goto_1

    .line 106
    :cond_3
    iget v5, v4, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    if-ne p1, v5, :cond_1

    .line 107
    iget-boolean v0, v4, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    goto :goto_1

    :cond_4
    move v0, v3

    :goto_1
    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 77
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{Satellite Count:"

    .line 78
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 79
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/ygps/SatelliteInfo;

    .line 80
    invoke-virtual {v1}, Lcom/mediatek/ygps/SatelliteInfo;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    const-string p0, "}"

    .line 82
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 83
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method updateSatelliteInfo(Lcom/mediatek/ygps/NmeaParser;)V
    .locals 11

    .line 115
    iget-object v0, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 116
    invoke-static {}, Lcom/mediatek/ygps/SatelliteInfo;->getTalker()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 117
    invoke-virtual {p1, v1}, Lcom/mediatek/ygps/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v2

    .line 118
    new-instance v3, Lcom/mediatek/ygps/SatelliteInfoManager$1;

    invoke-direct {v3, p0}, Lcom/mediatek/ygps/SatelliteInfoManager$1;-><init>(Lcom/mediatek/ygps/SatelliteInfoManager;)V

    invoke-static {v2, v3}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 125
    iget-object v3, p0, Lcom/mediatek/ygps/SatelliteInfoManager;->mSatelInfoList:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 131
    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, 0x0

    move v5, v3

    move v6, v4

    move v7, v6

    :cond_1
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/mediatek/ygps/SatelliteInfo;

    .line 132
    invoke-virtual {v8}, Lcom/mediatek/ygps/SatelliteInfo;->getFq()Ljava/lang/String;

    move-result-object v9

    const-string v10, "L1"

    invoke-virtual {v10, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_2

    .line 133
    iget v8, v8, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    cmpl-float v9, v8, v4

    if-eqz v9, :cond_1

    add-float/2addr v6, v8

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 139
    :cond_2
    iget v8, v8, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    cmpl-float v9, v8, v4

    if-eqz v9, :cond_1

    add-float/2addr v7, v8

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_3
    if-eqz v3, :cond_4

    int-to-float v2, v3

    div-float/2addr v6, v2

    .line 148
    invoke-static {v1}, Lcom/mediatek/ygps/SatelliteInfo;->getSystem(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    move-result-object v2

    invoke-virtual {v2, v6}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->setAveL1Cnr(F)V

    :cond_4
    if-eqz v5, :cond_0

    int-to-float v2, v5

    div-float/2addr v7, v2

    .line 152
    invoke-static {v1}, Lcom/mediatek/ygps/SatelliteInfo;->getSystem(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    move-result-object v1

    invoke-virtual {v1, v7}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->setAveL5Cnr(F)V

    goto :goto_0

    :cond_5
    return-void
.end method
