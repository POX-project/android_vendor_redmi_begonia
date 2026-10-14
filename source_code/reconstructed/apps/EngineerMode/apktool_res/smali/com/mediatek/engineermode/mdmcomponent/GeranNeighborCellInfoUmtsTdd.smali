.class Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 9567
    const-string v0, "MSG_ID_TDD_EM_MEME_DCH_GSM_CELL_INFO_IND"

    const-string v1, "MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 9578
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 9570
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->mMapping:Ljava/util/HashMap;

    .line 9579
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9593
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9588
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 9597
    const-string v0, "BSIC"

    const-string v1, "Frequency band"

    const-string v2, "BCCH ARFCN"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9583
    const-string v0, "GERAN Neighbor Cell Info (UMTS TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9602
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 25
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9607
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 9608
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "MSG_ID_TDD_EM_MEME_DCH_GSM_CELL_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v5, ""

    const-string v6, " ncc: "

    const-string v7, "bcc: "

    const-string v9, "bsic"

    const-string v10, "arfcn"

    const-string v13, "]."

    const-string v14, "["

    if-eqz v3, :cond_2

    .line 9609
    const-string v3, "gsm_cell_list"

    .line 9610
    .local v3, "coName":Ljava/lang/String;
    const-string v15, "num_cells"

    invoke-virtual {v0, v2, v15}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 9611
    .local v15, "num":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->clearData()V

    .line 9612
    const/16 v16, 0x0

    move/from16 v4, v16

    .local v4, "i":I
    :goto_0
    if-ge v4, v15, :cond_1

    const/4 v11, 0x6

    if-ge v4, v11, :cond_1

    .line 9613
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "frequency_band"

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 9615
    .local v8, "band":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 9617
    .local v11, "arfcn":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 9619
    .local v12, "bsic":I
    move-object/from16 v20, v3

    .end local v3    # "coName":Ljava/lang/String;
    .local v20, "coName":Ljava/lang/String;
    and-int/lit8 v3, v12, 0x7

    .line 9620
    .local v3, "bcc":I
    shr-int/lit8 v21, v12, 0x3

    move-object/from16 v22, v5

    and-int/lit8 v5, v21, 0x7

    .line 9621
    .local v5, "ncc":I
    move/from16 v21, v12

    .end local v12    # "bsic":I
    .local v21, "bsic":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->mMapping:Ljava/util/HashMap;

    move/from16 v23, v15

    .end local v15    # "num":I
    .local v23, "num":I
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v12, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/String;

    .line 9622
    .local v12, "bandString":Ljava/lang/String;
    move/from16 v24, v8

    const/4 v15, 0x3

    .end local v8    # "band":I
    .local v24, "band":I
    new-array v8, v15, [Ljava/lang/Object;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    const/16 v18, 0x0

    aput-object v15, v8, v18

    .line 9623
    if-nez v12, :cond_0

    move-object/from16 v15, v22

    goto :goto_1

    :cond_0
    move-object v15, v12

    :goto_1
    const/16 v16, 0x1

    aput-object v15, v8, v16

    .line 9624
    invoke-static {v11}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v15

    const/16 v17, 0x2

    aput-object v15, v8, v17

    .line 9622
    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->addData([Ljava/lang/Object;)V

    .line 9612
    .end local v3    # "bcc":I
    .end local v5    # "ncc":I
    .end local v11    # "arfcn":I
    .end local v12    # "bandString":Ljava/lang/String;
    .end local v21    # "bsic":I
    .end local v24    # "band":I
    add-int/lit8 v4, v4, 0x1

    move-object/from16 v3, v20

    move-object/from16 v5, v22

    move/from16 v15, v23

    goto/16 :goto_0

    .end local v20    # "coName":Ljava/lang/String;
    .end local v23    # "num":I
    .local v3, "coName":Ljava/lang/String;
    .restart local v15    # "num":I
    :cond_1
    move-object/from16 v20, v3

    move/from16 v23, v15

    .line 9626
    .end local v3    # "coName":Ljava/lang/String;
    .end local v4    # "i":I
    .end local v15    # "num":I
    move-object/from16 v20, v2

    goto/16 :goto_4

    :cond_2
    move-object/from16 v22, v5

    .line 9627
    const-string v3, "MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 9628
    const-string v3, "choice.GSM_neigh_cells"

    .line 9630
    .restart local v3    # "coName":Ljava/lang/String;
    const-string v4, "neigh_cell_count"

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 9631
    .local v4, "num":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->clearData()V

    .line 9632
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_2
    if-ge v5, v4, :cond_4

    const/16 v8, 0x10

    if-ge v5, v8, :cond_4

    .line 9633
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 9640
    .local v8, "arfcn":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 9647
    .local v11, "bsic":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "freq_band"

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 9654
    .local v12, "band":I
    and-int/lit8 v15, v11, 0x7

    .line 9655
    .local v15, "bcc":I
    shr-int/lit8 v20, v11, 0x3

    and-int/lit8 v1, v20, 0x7

    .line 9656
    .local v1, "ncc":I
    move-object/from16 v20, v2

    .end local v2    # "data":Lcom/mediatek/mdml/Msg;
    .local v20, "data":Lcom/mediatek/mdml/Msg;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->mMapping:Ljava/util/HashMap;

    move-object/from16 v21, v3

    .end local v3    # "coName":Ljava/lang/String;
    .local v21, "coName":Ljava/lang/String;
    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 9657
    .local v2, "bandString":Ljava/lang/String;
    move/from16 v19, v4

    const/4 v3, 0x3

    .end local v4    # "num":I
    .local v19, "num":I
    new-array v4, v3, [Ljava/lang/Object;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/16 v18, 0x0

    aput-object v3, v4, v18

    .line 9658
    if-nez v2, :cond_3

    move-object/from16 v3, v22

    goto :goto_3

    :cond_3
    move-object v3, v2

    :goto_3
    const/16 v16, 0x1

    aput-object v3, v4, v16

    .line 9659
    invoke-static {v8}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    const/16 v17, 0x2

    aput-object v3, v4, v17

    .line 9657
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighborCellInfoUmtsTdd;->addData([Ljava/lang/Object;)V

    .line 9632
    .end local v1    # "ncc":I
    .end local v2    # "bandString":Ljava/lang/String;
    .end local v8    # "arfcn":I
    .end local v11    # "bsic":I
    .end local v12    # "band":I
    .end local v15    # "bcc":I
    add-int/lit8 v5, v5, 0x1

    move-object/from16 v1, p1

    move/from16 v4, v19

    move-object/from16 v2, v20

    move-object/from16 v3, v21

    goto/16 :goto_2

    .end local v19    # "num":I
    .end local v20    # "data":Lcom/mediatek/mdml/Msg;
    .end local v21    # "coName":Ljava/lang/String;
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    .restart local v3    # "coName":Ljava/lang/String;
    .restart local v4    # "num":I
    :cond_4
    move-object/from16 v20, v2

    move-object/from16 v21, v3

    move/from16 v19, v4

    .end local v2    # "data":Lcom/mediatek/mdml/Msg;
    .end local v3    # "coName":Ljava/lang/String;
    .end local v4    # "num":I
    .restart local v19    # "num":I
    .restart local v20    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v21    # "coName":Ljava/lang/String;
    goto :goto_4

    .line 9627
    .end local v5    # "i":I
    .end local v19    # "num":I
    .end local v20    # "data":Lcom/mediatek/mdml/Msg;
    .end local v21    # "coName":Ljava/lang/String;
    .restart local v2    # "data":Lcom/mediatek/mdml/Msg;
    :cond_5
    move-object/from16 v20, v2

    .line 9662
    .end local v2    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v20    # "data":Lcom/mediatek/mdml/Msg;
    :goto_4
    return-void
.end method
