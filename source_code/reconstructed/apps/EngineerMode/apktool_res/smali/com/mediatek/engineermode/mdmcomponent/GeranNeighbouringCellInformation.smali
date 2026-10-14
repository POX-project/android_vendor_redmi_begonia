.class Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field bandMapping:Ljava/util/HashMap;
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

    .line 9666
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 9677
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 9668
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->bandMapping:Ljava/util/HashMap;

    .line 9678
    return-void
.end method


# virtual methods
.method getBandMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "bandidx"    # I

    .line 9681
    const-string v0, ""

    .line 9682
    .local v0, "bandidx_s":Ljava/lang/String;
    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    goto :goto_0

    .line 9685
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->bandMapping:Ljava/util/HashMap;

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 9683
    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->bandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 9686
    :goto_1
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9701
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9696
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 9705
    const-string v0, "BAND INDICATOR"

    const-string v1, "ARFCN"

    const-string v2, "BSIC"

    const-string v3, "RSSI"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9691
    const-string v0, "GERAN neighbouring cell information"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9710
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9715
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 9716
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->clearData()V

    .line 9717
    const-string v1, "gcell"

    .line 9718
    .local v1, "coName":Ljava/lang/String;
    const-string v2, "total_gcell_num"

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 9720
    .local v2, "cellNum":I
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v2, :cond_4

    const/4 v4, 0x6

    if-ge v3, v4, :cond_4

    .line 9721
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]."

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "valid"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 9723
    .local v4, "valid":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "band_ind"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 9725
    .local v7, "band":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "arfcn"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 9727
    .local v8, "arfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "bsic"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 9729
    .local v9, "bsic":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "rssi"

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 9731
    .local v5, "rssi":I
    const/4 v6, 0x4

    new-array v6, v6, [Ljava/lang/Object;

    const/4 v10, 0x0

    const-string v11, ""

    if-lez v4, :cond_0

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->getBandMapping(I)Ljava/lang/String;

    move-result-object v12

    goto :goto_1

    :cond_0
    move-object v12, v11

    :goto_1
    aput-object v12, v6, v10

    if-lez v4, :cond_1

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    goto :goto_2

    :cond_1
    move-object v10, v11

    :goto_2
    const/4 v12, 0x1

    aput-object v10, v6, v12

    const/4 v10, 0x2

    .line 9732
    if-lez v4, :cond_2

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    goto :goto_3

    :cond_2
    move-object v12, v11

    :goto_3
    aput-object v12, v6, v10

    const/4 v10, 0x3

    if-lez v4, :cond_3

    int-to-float v11, v5

    const/high16 v12, 0x40800000    # 4.0f

    div-float/2addr v11, v12

    invoke-static {v11}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v11

    goto :goto_4

    .line 9733
    :cond_3
    nop

    :goto_4
    aput-object v11, v6, v10

    .line 9731
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/mdmcomponent/GeranNeighbouringCellInformation;->addData([Ljava/lang/Object;)V

    .line 9720
    .end local v4    # "valid":I
    .end local v5    # "rssi":I
    .end local v7    # "band":I
    .end local v8    # "arfcn":I
    .end local v9    # "bsic":I
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    .line 9735
    .end local v3    # "i":I
    :cond_4
    return-void
.end method
