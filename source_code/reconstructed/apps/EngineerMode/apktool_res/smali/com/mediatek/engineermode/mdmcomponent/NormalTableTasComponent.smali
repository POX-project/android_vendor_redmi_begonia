.class abstract Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# instance fields
.field private infoValid:I


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1040
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1037
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->infoValid:I

    .line 1041
    return-void
.end method


# virtual methods
.method getView()Landroid/view/View;
    .locals 7

    .line 1045
    const-string v0, "EmInfo/MDMComponent"

    const-string v1, "getView"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1046
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->isInfoValid()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    .line 1047
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->clearData()V

    .line 1048
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v2, v2, [Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Use "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->getName()Ljava/lang/String;

    move-result-object v4

    const-string v5, "TAS"

    const-string v6, "UTAS"

    invoke-virtual {v4, v5, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v1

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    goto :goto_1

    .line 1050
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mLabels:[Ljava/lang/String;

    if-nez v0, :cond_1

    .line 1051
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->getLabels()[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mLabels:[Ljava/lang/String;

    .line 1053
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    if-nez v0, :cond_2

    .line 1055
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mLabels:[Ljava/lang/String;

    array-length v3, v3

    if-ge v0, v3, :cond_2

    .line 1056
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/String;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mLabels:[Ljava/lang/String;

    aget-object v5, v5, v0

    aput-object v5, v4, v1

    const-string v5, ""

    aput-object v5, v4, v2

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1055
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1060
    .end local v0    # "i":I
    :cond_2
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mListView:Landroid/widget/ListView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1061
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1062
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mListView:Landroid/widget/ListView;

    return-object v0
.end method

.method public isInfoValid()Z
    .locals 2

    .line 1066
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->infoValid:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 1067
    return v1

    .line 1068
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method removeView()V
    .locals 2

    .line 1077
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->mListView:Landroid/widget/ListView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1078
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->setInfoValid(I)V

    .line 1079
    return-void
.end method

.method public setInfoValid(I)V
    .locals 0
    .param p1, "infoValid"    # I

    .line 1072
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;->infoValid:I

    .line 1073
    return-void
.end method
