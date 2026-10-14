.class abstract Lcom/mediatek/engineermode/siminfo/NormalTableComponent;
.super Ljava/lang/Object;
.source "SimInfoUpdate.java"

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/mediatek/engineermode/siminfo/NormalTableComponent;",
        ">;"
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "siminfo"


# instance fields
.field protected mActivity:Landroid/app/Activity;

.field mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

.field mLabels:[Ljava/lang/String;

.field mListView:Landroid/widget/ListView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 106
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 107
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mActivity:Landroid/app/Activity;

    .line 108
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    if-nez v0, :cond_0

    .line 109
    new-instance v0, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    .line 111
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mListView:Landroid/widget/ListView;

    if-nez v0, :cond_1

    .line 112
    new-instance v0, Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/widget/ListView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mListView:Landroid/widget/ListView;

    .line 114
    :cond_1
    return-void
.end method


# virtual methods
.method addData(Ljava/lang/String;)V
    .locals 5
    .param p1, "data"    # Ljava/lang/String;

    .line 155
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 157
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getCount()I

    move-result v0

    .line 158
    .local v0, "position":I
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v4, v3

    rem-int v4, v0, v4

    aget-object v3, v3, v4

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 159
    if-nez p1, :cond_0

    const-string v3, ""

    goto :goto_0

    :cond_0
    move-object v3, p1

    :goto_0
    const/4 v4, 0x1

    aput-object v3, v2, v4

    .line 158
    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 160
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->notifyDataSetChanged()V

    .line 161
    return-void
.end method

.method varargs addData([Ljava/lang/Object;)V
    .locals 2
    .param p1, "data"    # [Ljava/lang/Object;

    .line 142
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 143
    aget-object v1, p1, v0

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->addData(Ljava/lang/String;)V

    .line 142
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 145
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method addDataAtPostion(ILjava/lang/String;)V
    .locals 6
    .param p1, "pos"    # I
    .param p2, "data"    # Ljava/lang/String;

    .line 164
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 165
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 167
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getCount()I

    move-result v0

    .local v0, "i":I
    :goto_0
    const/4 v1, 0x1

    if-gt v0, p1, :cond_1

    .line 168
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    aget-object v5, v5, v0

    aput-object v5, v3, v4

    const-string v4, ""

    aput-object v4, v3, v1

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 167
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 170
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    .line 171
    .local v0, "item":[Ljava/lang/String;
    aput-object p2, v0, v1

    .line 172
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->notifyDataSetChanged()V

    .line 173
    return-void
.end method

.method varargs addDataAtPostion(I[Ljava/lang/Object;)V
    .locals 2
    .param p1, "pos"    # I
    .param p2, "data"    # [Ljava/lang/Object;

    .line 148
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_0

    .line 149
    aget-object v1, p2, v0

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->addDataAtPostion(ILjava/lang/String;)V

    .line 148
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 151
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method clearData()V
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->clear()V

    .line 139
    return-void
.end method

.method abstract getLabels()[Ljava/lang/String;
.end method

.method getView()Landroid/view/View;
    .locals 5

    .line 117
    const-string v0, "siminfo"

    const-string v1, "getView"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 119
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 121
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getCount()I

    move-result v0

    if-nez v0, :cond_1

    .line 123
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 124
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v1, v1, v0

    aput-object v1, v3, v4

    const-string v1, ""

    const/4 v4, 0x1

    aput-object v1, v3, v4

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 123
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 127
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 128
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->notifyDataSetChanged()V

    .line 129
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mListView:Landroid/widget/ListView;

    return-object v0
.end method

.method notifyDataSetChanged()V
    .locals 5

    .line 176
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 177
    invoke-virtual {p0}, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 179
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getCount()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v1, v1

    if-ge v0, v1, :cond_1

    .line 181
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getCount()I

    move-result v0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 182
    iget-object v2, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v1, v1, v0

    aput-object v1, v3, v4

    const-string v1, ""

    const/4 v4, 0x1

    aput-object v1, v3, v4

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 181
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 185
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->notifyDataSetChanged()V

    .line 186
    return-void
.end method

.method removeView()V
    .locals 2

    .line 133
    const-string v0, "siminfo"

    const-string v1, "removeView"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/NormalTableComponent;->mListView:Landroid/widget/ListView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 135
    return-void
.end method

.method abstract update(ILjava/lang/String;)V
.end method
