.class Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 9808
    const-string v0, "MSG_ID_TDD_EM_MEME_DCH_LTE_CELL_INFO_IND"

    const-string v1, "MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 9813
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 9814
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9828
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9823
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 9832
    const-string v0, "EARFCN"

    const-string v1, "PCI"

    const-string v2, "RSRP"

    const-string v3, "RSRQ"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9818
    const-string v0, "E-UTRAN Neighbor Cell Info (UMTS TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9837
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 21
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9842
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 9843
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "MSG_ID_TDD_EM_MEME_DCH_LTE_CELL_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v5, 0x0

    const/4 v6, 0x4

    const/4 v8, 0x1

    const-string v9, "]."

    const-string v10, "["

    if-eqz v3, :cond_1

    .line 9844
    const-string v3, "lte_cell_list"

    .line 9845
    .local v3, "coName":Ljava/lang/String;
    const-string v11, "num_cells"

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 9846
    .local v11, "num":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->clearData()V

    .line 9847
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_0
    if-ge v12, v11, :cond_0

    const/16 v13, 0x20

    if-ge v12, v13, :cond_0

    .line 9848
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "EARFCN"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 9850
    .local v13, "arfcn":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "PCI"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 9852
    .local v14, "pci":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "RSRP"

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v2, v4, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 9854
    .local v4, "rsrp":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "RSRQ"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 9856
    .local v7, "rsrq":I
    new-array v15, v6, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    aput-object v18, v15, v5

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    aput-object v18, v15, v8

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v17, 0x2

    aput-object v18, v15, v17

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v16, 0x3

    aput-object v18, v15, v16

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->addData([Ljava/lang/Object;)V

    .line 9847
    .end local v4    # "rsrp":I
    .end local v7    # "rsrq":I
    .end local v13    # "arfcn":I
    .end local v14    # "pci":I
    add-int/lit8 v12, v12, 0x1

    goto/16 :goto_0

    .line 9858
    .end local v3    # "coName":Ljava/lang/String;
    .end local v11    # "num":I
    .end local v12    # "i":I
    :cond_0
    goto/16 :goto_2

    :cond_1
    nop

    .line 9859
    const-string v3, "MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 9860
    const-string v3, "choice.LTE_neigh_cells"

    .line 9862
    .restart local v3    # "coName":Ljava/lang/String;
    const-string v4, "neigh_cell_count"

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 9863
    .local v4, "num":I
    const-string v7, "RAT_type"

    invoke-virtual {v0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 9865
    .local v7, "rat":I
    const/4 v11, 0x2

    if-ne v7, v11, :cond_2

    .line 9866
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->clearData()V

    .line 9867
    const/4 v11, 0x0

    .local v11, "i":I
    :goto_1
    if-ge v11, v4, :cond_2

    const/16 v12, 0x10

    if-ge v11, v12, :cond_2

    .line 9868
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "earfcn"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 9875
    .local v12, "arfcn":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "pci"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 9882
    .local v13, "pci":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "rsrp"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v2, v14, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 9890
    .local v14, "rsrp":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "rsrq"

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v2, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 9898
    .local v5, "rsrq":I
    new-array v15, v6, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    const/16 v18, 0x0

    aput-object v19, v15, v18

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    aput-object v19, v15, v8

    int-to-float v6, v14

    const/high16 v20, 0x40800000    # 4.0f

    div-float v6, v6, v20

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/16 v17, 0x2

    aput-object v6, v15, v17

    int-to-float v6, v5

    div-float v6, v6, v20

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/16 v16, 0x3

    aput-object v6, v15, v16

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfoUmtsTdd;->addData([Ljava/lang/Object;)V

    .line 9867
    .end local v5    # "rsrq":I
    .end local v12    # "arfcn":I
    .end local v13    # "pci":I
    .end local v14    # "rsrp":I
    add-int/lit8 v11, v11, 0x1

    move/from16 v5, v18

    const/4 v6, 0x4

    goto/16 :goto_1

    .line 9902
    .end local v3    # "coName":Ljava/lang/String;
    .end local v4    # "num":I
    .end local v7    # "rat":I
    .end local v11    # "i":I
    :cond_2
    :goto_2
    return-void
.end method
