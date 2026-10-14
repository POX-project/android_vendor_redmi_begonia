.class Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9968
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 9972
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 9973
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9987
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9982
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 9991
    const-string v0, "EARFCN"

    const-string v1, "PCI"

    const-string v2, "RSCP"

    const-string v3, "ECN0"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9977
    const-string v0, "Inter-frequency neighbouring cell information (LTE TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9996
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 22
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 10001
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 10002
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->clearData()V

    .line 10003
    const-string v2, "inter_info."

    .line 10004
    .local v2, "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "freq_num"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 10006
    .local v3, "freqNum":I
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_5

    const/4 v5, 0x4

    if-ge v4, v5, :cond_5

    .line 10007
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "inter_freq"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "]."

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 10010
    .local v6, "coNameNew":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "valid"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 10012
    .local v9, "valid":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "earfcn"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 10014
    .local v10, "earfcn":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "cell_num"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 10016
    .local v11, "cellNum":I
    const/4 v12, 0x0

    .local v12, "j":I
    :goto_1
    if-ge v12, v11, :cond_4

    const/4 v13, 0x6

    if-ge v12, v13, :cond_4

    .line 10017
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "inter_cell"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    .line 10020
    .local v13, "interName":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "pci"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 10024
    .local v14, "pci":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "rsrp"

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v15, 0x1

    invoke-virtual {v0, v1, v5, v15}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 10029
    .local v5, "rsrp":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v18, v2

    .end local v2    # "coName":Ljava/lang/String;
    .local v18, "coName":Ljava/lang/String;
    const-string v2, "rsrq"

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v15, 0x1

    invoke-virtual {v0, v1, v2, v15}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 10034
    .local v2, "rsrq":I
    move-object/from16 v16, v1

    const/4 v15, 0x4

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v16, "data":Lcom/mediatek/mdml/Msg;
    new-array v1, v15, [Ljava/lang/Object;

    const/16 v19, 0x0

    const-string v20, ""

    if-lez v9, :cond_0

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v21

    goto :goto_2

    :cond_0
    move-object/from16 v21, v20

    :goto_2
    aput-object v21, v1, v19

    if-lez v9, :cond_1

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    goto :goto_3

    :cond_1
    move-object/from16 v19, v20

    :goto_3
    const/16 v17, 0x1

    aput-object v19, v1, v17

    const/16 v17, 0x2

    .line 10035
    const/high16 v19, 0x40800000    # 4.0f

    const/4 v15, -0x1

    if-lez v9, :cond_2

    if-eq v5, v15, :cond_2

    int-to-float v15, v5

    div-float v15, v15, v19

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    goto :goto_4

    .line 10036
    :cond_2
    move-object/from16 v15, v20

    :goto_4
    aput-object v15, v1, v17

    .line 10037
    if-lez v9, :cond_3

    const/4 v15, -0x1

    if-eq v2, v15, :cond_3

    int-to-float v15, v2

    div-float v15, v15, v19

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v20

    goto :goto_5

    .line 10038
    :cond_3
    nop

    :goto_5
    const/4 v15, 0x3

    aput-object v20, v1, v15

    .line 10034
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/InterFrequencyNeighbouringCellInformationLteTdd;->addData([Ljava/lang/Object;)V

    .line 10016
    .end local v2    # "rsrq":I
    .end local v5    # "rsrp":I
    .end local v13    # "interName":Ljava/lang/String;
    .end local v14    # "pci":I
    add-int/lit8 v12, v12, 0x1

    move-object/from16 v1, v16

    move-object/from16 v2, v18

    const/4 v5, 0x4

    goto/16 :goto_1

    .end local v16    # "data":Lcom/mediatek/mdml/Msg;
    .end local v18    # "coName":Ljava/lang/String;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "coName":Ljava/lang/String;
    :cond_4
    move-object/from16 v16, v1

    move-object/from16 v18, v2

    .line 10006
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "coName":Ljava/lang/String;
    .end local v6    # "coNameNew":Ljava/lang/String;
    .end local v9    # "valid":I
    .end local v10    # "earfcn":I
    .end local v11    # "cellNum":I
    .end local v12    # "j":I
    .restart local v16    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v18    # "coName":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    move-object/from16 v1, v16

    move-object/from16 v2, v18

    goto/16 :goto_0

    .end local v16    # "data":Lcom/mediatek/mdml/Msg;
    .end local v18    # "coName":Ljava/lang/String;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "coName":Ljava/lang/String;
    :cond_5
    move-object/from16 v16, v1

    move-object/from16 v18, v2

    .line 10041
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "coName":Ljava/lang/String;
    .end local v4    # "i":I
    .restart local v16    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v18    # "coName":Ljava/lang/String;
    return-void
.end method
