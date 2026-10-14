.class Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
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

    .line 4528
    const-string v0, "MSG_ID_EM_RRM_IR_3G_NEIGHBOR_MEAS_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 4555
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4530
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->mCellTypeMapping:Ljava/util/HashMap;

    .line 4537
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->mFailTypeMapping:Ljava/util/HashMap;

    .line 4556
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4570
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4565
    const-string v0, "2. GSM EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 8

    .line 4574
    const-string v0, "cell_type"

    const-string v1, "uarfcn"

    const-string v2, "phy_id"

    const-string v3, "strength"

    const-string v4, "quailty"

    const-string v5, "rep_value"

    const-string v6, "non_rep_value"

    const-string v7, "fail_type"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4560
    const-string v0, "UMTS Neighbor Cell Info (GSM TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4580
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 15
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4585
    move-object v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 4586
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "ir_3g_neighbor_meas_status["

    .line 4587
    .local v2, "coName":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->clearData()V

    .line 4588
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/4 v4, 0x6

    if-ge v3, v4, :cond_1

    .line 4589
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

    invoke-virtual {p0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 4591
    .local v4, "isValid":I
    if-lez v4, :cond_0

    .line 4592
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "cell_type"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 4594
    .local v6, "cellType":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "fail_type"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 4596
    .local v7, "failType":I
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->mCellTypeMapping:Ljava/util/HashMap;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    .line 4597
    .local v8, "cell":Ljava/lang/String;
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->mFailTypeMapping:Ljava/util/HashMap;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    .line 4598
    .local v9, "fail":Ljava/lang/String;
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData(Ljava/lang/String;)V

    .line 4599
    const/4 v10, 0x1

    new-array v11, v10, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "uarfcn"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {p0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    const/4 v13, 0x0

    aput-object v12, v11, v13

    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData([Ljava/lang/Object;)V

    .line 4601
    new-array v11, v10, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "phy_id"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {p0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v11, v13

    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData([Ljava/lang/Object;)V

    .line 4603
    new-array v11, v10, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "strength"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {p0, v1, v12, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v11, v13

    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData([Ljava/lang/Object;)V

    .line 4606
    new-array v11, v10, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "quailty"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {p0, v1, v12, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v11, v13

    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData([Ljava/lang/Object;)V

    .line 4609
    new-array v11, v10, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "rep_value"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {p0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v11, v13

    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData([Ljava/lang/Object;)V

    .line 4611
    new-array v10, v10, [Ljava/lang/Object;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "non_rep_value"

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v10, v13

    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData([Ljava/lang/Object;)V

    .line 4617
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->addData(Ljava/lang/String;)V

    .line 4588
    .end local v4    # "isValid":I
    .end local v6    # "cellType":I
    .end local v7    # "failType":I
    .end local v8    # "cell":Ljava/lang/String;
    .end local v9    # "fail":Ljava/lang/String;
    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    .line 4620
    .end local v3    # "i":I
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsNeighborCellInfoGsmTdd;->notifyDataSetChanged()V

    .line 4621
    return-void
.end method
