.class Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;
.super Lcom/mediatek/engineermode/siminfo/NormalTableComponent;
.source "SimInfoUpdate.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 196
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 197
    return-void
.end method


# virtual methods
.method public compareTo(Lcom/mediatek/engineermode/siminfo/NormalTableComponent;)I
    .locals 1
    .param p1, "another"    # Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    .line 218
    const/4 v0, 0x0

    return v0
.end method

.method public bridge synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    .line 193
    check-cast p1, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;->compareTo(Lcom/mediatek/engineermode/siminfo/NormalTableComponent;)I

    move-result p1

    return p1
.end method

.method getLabels()[Ljava/lang/String;
    .locals 15

    .line 200
    const-string v0, "CDR-PER-512"

    const-string v1, "CDR-PER-514"

    const-string v2, "CDR-PER-516"

    const-string v3, "CDR-PER-518"

    const-string v4, "CDR-PER-520"

    const-string v5, "CDR-PER-522"

    const-string v6, "CDR-PER-524"

    const-string v7, "CDR-PER-526"

    const-string v8, "CDR-PER-528"

    const-string v9, "CDR-PER-530"

    const-string v10, "CDR-PER-536"

    const-string v11, "CDR-PER-538"

    const-string v12, "CDR-PER-540"

    const-string v13, "CDR-PER-542"

    const-string v14, "CDR-PER-544"

    filled-new-array/range {v0 .. v14}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method update(ILjava/lang/String;)V
    .locals 1
    .param p1, "type"    # I
    .param p2, "data"    # Ljava/lang/String;

    .line 207
    if-nez p1, :cond_0

    .line 208
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;->clearData()V

    goto :goto_0

    .line 209
    :cond_0
    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    .line 210
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;->addData(Ljava/lang/String;)V

    goto :goto_0

    .line 212
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/SimInfoUpdate;->notifyDataSetChanged()V

    .line 213
    :goto_0
    return-void
.end method
