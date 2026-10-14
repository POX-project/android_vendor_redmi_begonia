.class Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
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
    .locals 1

    .line 4735
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_CONFIG_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 4747
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4737
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->mMapping:Ljava/util/HashMap;

    .line 4748
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4762
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4757
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 4766
    const-string v0, "Event B1 meas ID"

    const-string v1, "Other RAT meas quantity"

    const-string v2, "Other RAT threshold"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4752
    const-string v0, "LTE ERRC Measurement config for event B1"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4772
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 15
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4777
    move-object v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 4778
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "em_event_info["

    .line 4779
    .local v2, "coName":Ljava/lang/String;
    const-string v3, "num_event_info"

    invoke-virtual {p0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 4781
    .local v3, "num":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->clearData()V

    .line 4782
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_3

    const/4 v5, 0x2

    if-ge v4, v5, :cond_3

    .line 4783
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

    invoke-virtual {p0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 4789
    .local v6, "eventType":I
    const/4 v8, 0x1

    if-ne v6, v8, :cond_2

    .line 4790
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "MeasId"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 4796
    .local v9, "measId":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "MeasQtyOtherRAT"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 4802
    .local v10, "measQtyOtherRat":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "ThresholdOtherSystem"

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v1, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 4810
    .local v7, "threshold":I
    const/4 v11, 0x3

    new-array v11, v11, [Ljava/lang/Object;

    const/4 v12, 0x0

    const-string v13, "-"

    if-nez v9, :cond_0

    move-object v14, v13

    goto :goto_1

    :cond_0
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    :goto_1
    aput-object v14, v11, v12

    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->mMapping:Ljava/util/HashMap;

    .line 4811
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v12, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    aput-object v12, v11, v8

    if-nez v7, :cond_1

    goto :goto_2

    .line 4812
    :cond_1
    int-to-float v8, v7

    const/high16 v12, 0x40800000    # 4.0f

    div-float/2addr v8, v12

    invoke-static {v8}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v13

    :goto_2
    aput-object v13, v11, v5

    .line 4810
    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementConfigForEventB1;->addData([Ljava/lang/Object;)V

    .line 4782
    .end local v6    # "eventType":I
    .end local v7    # "threshold":I
    .end local v9    # "measId":I
    .end local v10    # "measQtyOtherRat":I
    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 4815
    .end local v4    # "i":I
    :cond_3
    return-void
.end method
