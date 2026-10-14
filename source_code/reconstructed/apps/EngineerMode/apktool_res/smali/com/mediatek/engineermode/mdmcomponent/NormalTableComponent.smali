.class abstract Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponent.java"


# instance fields
.field mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

.field mLabels:[Ljava/lang/String;

.field mListView:Landroid/widget/ListView;

.field scrollPos:I

.field scrollTop:I


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 910
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 911
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    if-nez v0, :cond_0

    .line 912
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    .line 914
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    if-nez v0, :cond_1

    .line 915
    new-instance v0, Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/widget/ListView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    .line 917
    :cond_1
    return-void
.end method


# virtual methods
.method addData(Ljava/lang/String;)V
    .locals 5
    .param p1, "data"    # Ljava/lang/String;

    .line 980
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 981
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    .line 982
    .local v0, "position":I
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v4, v3

    rem-int v4, v0, v4

    aget-object v3, v3, v4

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 983
    if-nez p1, :cond_0

    const-string v3, ""

    goto :goto_0

    :cond_0
    move-object v3, p1

    :goto_0
    const/4 v4, 0x1

    aput-object v3, v2, v4

    .line 982
    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 984
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 985
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v3

    sub-int/2addr v3, v4

    invoke-virtual {v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged(Landroid/widget/ListView;I)V

    .line 986
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollPos:I

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollTop:I

    invoke-virtual {v1, v2, v3}, Landroid/widget/ListView;->setSelectionFromTop(II)V

    .line 987
    return-void
.end method

.method varargs addData([Ljava/lang/Object;)V
    .locals 2
    .param p1, "data"    # [Ljava/lang/Object;

    .line 967
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 968
    aget-object v1, p1, v0

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->addData(Ljava/lang/String;)V

    .line 967
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 970
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method addDataAtPostion(ILjava/lang/String;)V
    .locals 6
    .param p1, "pos"    # I
    .param p2, "data"    # Ljava/lang/String;

    .line 1006
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1007
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 1009
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    .local v0, "i":I
    :goto_0
    const/4 v1, 0x1

    if-gt v0, p1, :cond_1

    .line 1010
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    aget-object v5, v5, v0

    aput-object v5, v3, v4

    const-string v4, ""

    aput-object v4, v3, v1

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1009
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1012
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    .line 1013
    .local v0, "item":[Ljava/lang/String;
    aput-object p2, v0, v1

    .line 1014
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1015
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    invoke-virtual {v1, v2, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged(Landroid/widget/ListView;I)V

    .line 1016
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollPos:I

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollTop:I

    invoke-virtual {v1, v2, v3}, Landroid/widget/ListView;->setSelectionFromTop(II)V

    .line 1017
    return-void
.end method

.method varargs addDataAtPostion(I[Ljava/lang/Object;)V
    .locals 2
    .param p1, "pos"    # I
    .param p2, "data"    # [Ljava/lang/Object;

    .line 973
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_0

    .line 974
    add-int/2addr p1, v0

    .line 975
    aget-object v1, p2, v0

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->addDataAtPostion(ILjava/lang/String;)V

    .line 973
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 977
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method clearData()V
    .locals 1

    .line 963
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 964
    return-void
.end method

.method abstract getLabels()[Ljava/lang/String;
.end method

.method getView()Landroid/view/View;
    .locals 5

    .line 921
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 922
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 924
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    if-nez v0, :cond_1

    .line 926
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 927
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v1, v1, v0

    aput-object v1, v3, v4

    const-string v1, ""

    const/4 v4, 0x1

    aput-object v1, v3, v4

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 926
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 930
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 931
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 932
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;)V

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setOnScrollListener(Landroid/widget/AbsListView$OnScrollListener;)V

    .line 954
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    return-object v0
.end method

.method notifyDataSetChanged()V
    .locals 5

    .line 1020
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_0

    .line 1021
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 1023
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v1, v1

    if-ge v0, v1, :cond_1

    .line 1025
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 1026
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v1, v1, v0

    aput-object v1, v3, v4

    const-string v1, ""

    const/4 v4, 0x1

    aput-object v1, v3, v4

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1025
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1029
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1030
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollPos:I

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollTop:I

    invoke-virtual {v0, v1, v2}, Landroid/widget/ListView;->setSelectionFromTop(II)V

    .line 1031
    return-void
.end method

.method removeView()V
    .locals 2

    .line 959
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 960
    return-void
.end method

.method setData(ILjava/lang/Object;)V
    .locals 7
    .param p1, "pos"    # I
    .param p2, "data"    # Ljava/lang/Object;

    .line 990
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    .line 991
    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 992
    .local v0, "value":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v1, v1

    if-lt p1, v1, :cond_0

    return-void

    .line 993
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v1

    const/4 v2, 0x1

    if-lt p1, v1, :cond_1

    .line 994
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v1

    .local v1, "i":I
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mLabels:[Ljava/lang/String;

    array-length v4, v3

    if-ge v1, v4, :cond_1

    .line 995
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/String;

    const/4 v6, 0x0

    aget-object v3, v3, v1

    aput-object v3, v5, v6

    const-string v3, ""

    aput-object v3, v5, v2

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 994
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 998
    .end local v1    # "i":I
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    .line 999
    .local v1, "items":[Ljava/lang/String;
    aput-object v0, v1, v2

    .line 1000
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v2, v3}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1001
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    invoke-virtual {v2, v3, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged(Landroid/widget/ListView;I)V

    .line 1002
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollPos:I

    iget v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollTop:I

    invoke-virtual {v2, v3, v4}, Landroid/widget/ListView;->setSelectionFromTop(II)V

    .line 1003
    return-void
.end method
