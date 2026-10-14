.class Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9907
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 9911
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 9912
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9926
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9921
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 9930
    const-string v0, "PCI"

    const-string v1, "RSCP"

    const-string v2, "ECN0"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9916
    const-string v0, "Intra-frequency neighbouring cell information (LTE TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9935
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9940
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 9941
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->clearData()V

    .line 9942
    const-string v2, "intra_info."

    .line 9943
    .local v2, "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "cell_num"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 9945
    .local v3, "cellNum":I
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_3

    const/16 v5, 0x10

    if-ge v4, v5, :cond_3

    .line 9946
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "intra_cell"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]."

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 9949
    .local v5, "coNameNew":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "valid"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 9951
    .local v6, "valid":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "pci"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 9953
    .local v7, "pci":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "rsrp"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x1

    invoke-virtual {v0, v1, v8, v9}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 9956
    .local v8, "rsrp":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rsrq"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 9959
    .local v10, "rsrq":I
    const/4 v11, 0x3

    new-array v11, v11, [Ljava/lang/Object;

    const/4 v12, 0x0

    const-string v13, ""

    if-lez v6, :cond_0

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    goto :goto_1

    :cond_0
    move-object v14, v13

    :goto_1
    aput-object v14, v11, v12

    .line 9960
    const/high16 v12, 0x40800000    # 4.0f

    const/4 v14, -0x1

    if-lez v6, :cond_1

    if-eq v8, v14, :cond_1

    int-to-float v15, v8

    div-float/2addr v15, v12

    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    goto :goto_2

    :cond_1
    move-object v15, v13

    :goto_2
    aput-object v15, v11, v9

    const/4 v9, 0x2

    .line 9961
    if-lez v6, :cond_2

    if-eq v10, v14, :cond_2

    int-to-float v13, v10

    div-float/2addr v13, v12

    invoke-static {v13}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v13

    :cond_2
    aput-object v13, v11, v9

    .line 9959
    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyNeighbouringCellInformationLteTdd;->addData([Ljava/lang/Object;)V

    .line 9945
    .end local v5    # "coNameNew":Ljava/lang/String;
    .end local v6    # "valid":I
    .end local v7    # "pci":I
    .end local v8    # "rsrp":I
    .end local v10    # "rsrq":I
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 9963
    .end local v4    # "i":I
    :cond_3
    return-void
.end method
