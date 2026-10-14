.class Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8919
    const-string v0, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 8923
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 8924
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8938
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8933
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 8942
    const-string v0, "RSRP (LTE)"

    const-string v1, "Earfcn"

    const-string v2, "PCI"

    const-string v3, "RSRP"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8928
    const-string v0, "RSRP (LTE candidate cell)(UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8947
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8952
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8953
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "RAT_type"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 8955
    .local v1, "rat":I
    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 8956
    const-string v3, "neigh_cell_count"

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 8958
    .local v3, "num":I
    const-string v4, "choice.LTE_neigh_cells["

    .line 8960
    .local v4, "coName":Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    if-ge v5, v3, :cond_0

    const/16 v6, 0x10

    if-ge v5, v6, :cond_0

    .line 8961
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "]."

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "earfcn"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 8963
    .local v6, "earfcn":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "pci"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 8965
    .local v8, "pci":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "rsrp"

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v9, 0x1

    invoke-virtual {p0, v0, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    const/high16 v10, 0x45800000    # 4096.0f

    div-float/2addr v7, v10

    .line 8967
    .local v7, "rsrp":F
    const/4 v10, 0x3

    new-array v10, v10, [Ljava/lang/Object;

    const/4 v11, 0x0

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v10, v11

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v10, v9

    invoke-static {v7}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v9

    aput-object v9, v10, v2

    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/mdmcomponent/RsrpLteCandidateCellUmtsFddArray;->addData([Ljava/lang/Object;)V

    .line 8960
    .end local v6    # "earfcn":I
    .end local v7    # "rsrp":F
    .end local v8    # "pci":I
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 8970
    .end local v3    # "num":I
    .end local v4    # "coName":Ljava/lang/String;
    .end local v5    # "i":I
    :cond_0
    return-void
.end method
