.class Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mMeasQtyMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mMeasQtyOtherMapping:Ljava/util/HashMap;
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

    .line 4819
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_CONFIG_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 4838
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4821
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->mMeasQtyMapping:Ljava/util/HashMap;

    .line 4828
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->mMeasQtyOtherMapping:Ljava/util/HashMap;

    .line 4839
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4853
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4848
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 4857
    const-string v0, "Event B2 meas ID"

    const-string v1, "LTE RAT meas quantity"

    const-string v2, "Other RAT meas quantity"

    const-string v3, "LTE RAT threshold"

    const-string v4, "Other RAT threshold"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4843
    const-string v0, "LTE ERRC Measurement config for event B2"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4864
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4869
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 4870
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "em_event_info["

    .line 4871
    .local v2, "coName":Ljava/lang/String;
    const-string v3, "num_event_info"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 4873
    .local v3, "num":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->clearData()V

    .line 4874
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_4

    const/4 v5, 0x2

    if-ge v4, v5, :cond_4

    .line 4875
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "]."

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "EventType"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 4881
    .local v6, "eventType":I
    if-ne v6, v5, :cond_3

    .line 4882
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "MeasId"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 4888
    .local v8, "measId":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "MeasQty"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 4894
    .local v9, "measQty":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "MeasQtyOtherRAT"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 4900
    .local v10, "measQtyOtherRat":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "ThresholdOwnSystem"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/4 v12, 0x1

    invoke-virtual {v0, v1, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 4908
    .local v11, "threshold":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "ThresholdOtherSystem"

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7, v12}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 4916
    .local v7, "thresholdOtherSystem":I
    const/4 v13, 0x5

    new-array v13, v13, [Ljava/lang/Object;

    const/4 v14, 0x0

    const-string v15, "-"

    if-nez v8, :cond_0

    move-object/from16 v16, v15

    goto :goto_1

    :cond_0
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    :goto_1
    aput-object v16, v13, v14

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->mMeasQtyMapping:Ljava/util/HashMap;

    .line 4917
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v14, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    aput-object v5, v13, v12

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->mMeasQtyOtherMapping:Ljava/util/HashMap;

    .line 4918
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v5, v12}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    const/4 v12, 0x2

    aput-object v5, v13, v12

    const/4 v5, 0x3

    .line 4919
    const/high16 v12, 0x40800000    # 4.0f

    if-nez v11, :cond_1

    move-object v14, v15

    goto :goto_2

    :cond_1
    int-to-float v14, v11

    div-float/2addr v14, v12

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v14

    :goto_2
    aput-object v14, v13, v5

    const/4 v5, 0x4

    .line 4920
    if-nez v7, :cond_2

    goto :goto_3

    .line 4921
    :cond_2
    int-to-float v14, v7

    div-float/2addr v14, v12

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    :goto_3
    aput-object v15, v13, v5

    .line 4916
    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB2;->addData([Ljava/lang/Object;)V

    .line 4874
    .end local v6    # "eventType":I
    .end local v7    # "thresholdOtherSystem":I
    .end local v8    # "measId":I
    .end local v9    # "measQty":I
    .end local v10    # "measQtyOtherRat":I
    .end local v11    # "threshold":I
    :cond_3
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 4924
    .end local v4    # "i":I
    :cond_4
    return-void
.end method
