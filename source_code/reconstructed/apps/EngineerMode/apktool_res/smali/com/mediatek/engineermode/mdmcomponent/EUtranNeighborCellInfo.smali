.class Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mBandTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mCellTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mFailTypeMapping:Ljava/util/HashMap;
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
    .locals 1

    .line 2667
    const-string v0, "MSG_ID_EM_RRM_IR_4G_NEIGHBOR_MEAS_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 2703
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2669
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->mCellTypeMapping:Ljava/util/HashMap;

    .line 2676
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->mBandTypeMapping:Ljava/util/HashMap;

    .line 2683
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->mFailTypeMapping:Ljava/util/HashMap;

    .line 2704
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2718
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2713
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 9

    .line 2722
    const-string v0, "Type"

    const-string v1, "EARFCN"

    const-string v2, "PCI"

    const-string v3, "Band"

    const-string v4, "RSRP"

    const-string v5, "RSRQ"

    const-string v6, "Report"

    const-string v7, "Non-Report"

    const-string v8, "Barred"

    filled-new-array/range {v0 .. v8}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2708
    const-string v0, "E-UTRAN Neighbor Cell Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2728
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 22
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2733
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 2734
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "ir_4g_neighbor_meas_status["

    .line 2735
    .local v2, "coName":Ljava/lang/String;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->clearData()V

    .line 2736
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/4 v4, 0x6

    if-ge v3, v4, :cond_1

    .line 2737
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "]."

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "is_valid"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 2739
    .local v4, "isValid":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "cell_type"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 2741
    .local v6, "cellType":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "earfcn"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 2743
    .local v7, "earfcn":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "pci"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2745
    .local v8, "pci":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "band_type"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2747
    .local v9, "bandType":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rsrp"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v11, 0x1

    invoke-virtual {v0, v1, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 2749
    .local v10, "rsrp":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "rsrq"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 2751
    .local v12, "rsrq":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "rep_value"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2753
    .local v13, "repValue":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "non_rep_value"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 2755
    .local v14, "nonRepValue":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "fail_type"

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 2757
    .local v5, "failType":I
    if-lez v4, :cond_0

    .line 2758
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->mCellTypeMapping:Ljava/util/HashMap;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v15, v11}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    .line 2759
    .local v11, "cell":Ljava/lang/String;
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->mBandTypeMapping:Ljava/util/HashMap;

    move-object/from16 v17, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v17, "data":Lcom/mediatek/mdml/Msg;
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v15, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 2760
    .local v1, "band":Ljava/lang/String;
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->mFailTypeMapping:Ljava/util/HashMap;

    move-object/from16 v18, v2

    .end local v2    # "coName":Ljava/lang/String;
    .local v18, "coName":Ljava/lang/String;
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v15, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 2761
    .local v2, "fail":Ljava/lang/String;
    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData(Ljava/lang/String;)V

    .line 2762
    move/from16 v16, v4

    const/4 v15, 0x1

    .end local v4    # "isValid":I
    .local v16, "isValid":I
    new-array v4, v15, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    const/16 v20, 0x0

    aput-object v19, v4, v20

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData([Ljava/lang/Object;)V

    .line 2763
    new-array v4, v15, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    aput-object v19, v4, v20

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData([Ljava/lang/Object;)V

    .line 2764
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData(Ljava/lang/String;)V

    .line 2765
    new-array v4, v15, [Ljava/lang/Object;

    int-to-float v15, v10

    const/high16 v21, 0x40800000    # 4.0f

    div-float v15, v15, v21

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    aput-object v15, v4, v20

    const-string v15, "%.2f"

    invoke-static {v15, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData(Ljava/lang/String;)V

    .line 2766
    move-object/from16 v19, v1

    const/4 v4, 0x1

    .end local v1    # "band":Ljava/lang/String;
    .local v19, "band":Ljava/lang/String;
    new-array v1, v4, [Ljava/lang/Object;

    int-to-float v4, v12

    div-float v4, v4, v21

    invoke-static {v4}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v4

    aput-object v4, v1, v20

    invoke-static {v15, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData(Ljava/lang/String;)V

    .line 2767
    const/4 v1, 0x1

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v4, v20

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData([Ljava/lang/Object;)V

    .line 2768
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v1, v20

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData([Ljava/lang/Object;)V

    .line 2769
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->addData(Ljava/lang/String;)V

    goto :goto_1

    .line 2757
    .end local v11    # "cell":Ljava/lang/String;
    .end local v16    # "isValid":I
    .end local v17    # "data":Lcom/mediatek/mdml/Msg;
    .end local v18    # "coName":Ljava/lang/String;
    .end local v19    # "band":Ljava/lang/String;
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    .local v2, "coName":Ljava/lang/String;
    .restart local v4    # "isValid":I
    :cond_0
    move-object/from16 v17, v1

    move-object/from16 v18, v2

    move/from16 v16, v4

    .line 2736
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "coName":Ljava/lang/String;
    .end local v4    # "isValid":I
    .end local v5    # "failType":I
    .end local v6    # "cellType":I
    .end local v7    # "earfcn":I
    .end local v8    # "pci":I
    .end local v9    # "bandType":I
    .end local v10    # "rsrp":I
    .end local v12    # "rsrq":I
    .end local v13    # "repValue":I
    .end local v14    # "nonRepValue":I
    .restart local v17    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v18    # "coName":Ljava/lang/String;
    :goto_1
    add-int/lit8 v3, v3, 0x1

    move-object/from16 v1, v17

    move-object/from16 v2, v18

    goto/16 :goto_0

    .line 2772
    .end local v3    # "i":I
    .end local v17    # "data":Lcom/mediatek/mdml/Msg;
    .end local v18    # "coName":Ljava/lang/String;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "coName":Ljava/lang/String;
    :cond_1
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EUtranNeighborCellInfo;->notifyDataSetChanged()V

    .line 2773
    return-void
.end method
