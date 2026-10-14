.class Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field mQtyMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mQtyOtherRatMapping:Ljava/util/HashMap;
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

    .line 4126
    const-string v0, "MSG_ID_TDD_EM_MEME_EVENT_TYPE_3_PARAMETER_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 4147
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4129
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->mQtyMapping:Ljava/util/HashMap;

    .line 4137
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->mQtyOtherRatMapping:Ljava/util/HashMap;

    .line 4148
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4162
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4157
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 4166
    const-string v0, "e3c meas ID"

    const-string v1, "UMTS RAT meas quantity"

    const-string v2, "Other RAT meas quantity"

    const-string v3, "UMTS RAT threshold"

    const-string v4, "Other RAT threshold"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4152
    const-string v0, "UMTS RRC Measurement control for e3c (UMTS TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4173
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4178
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 4179
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "em_event_info["

    .line 4180
    .local v2, "coName":Ljava/lang/String;
    const-string v3, "num_event_info"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 4182
    .local v3, "num":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->clearData()V

    .line 4183
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_4

    const/4 v5, 0x4

    if-ge v4, v5, :cond_4

    .line 4184
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "]."

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "MeasId"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 4186
    .local v5, "measId":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "EventType"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 4188
    .local v7, "eventType":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "MeasQty"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 4190
    .local v8, "measQty":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "MeasQtyOtherRAT"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 4192
    .local v9, "measQtyOtherRAT":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "ThresholdOwnSystem"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v11, 0x1

    invoke-virtual {v0, v1, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 4195
    .local v10, "thresholdOwnSystem":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "ThresholdOtherSystem"

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 4198
    .local v6, "thresholdOtherSystem":I
    const/4 v12, 0x3

    if-ne v7, v12, :cond_3

    .line 4199
    const-string v12, "-"

    const/4 v13, 0x0

    if-nez v5, :cond_0

    .line 4200
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData(Ljava/lang/String;)V

    goto :goto_1

    .line 4202
    :cond_0
    new-array v14, v11, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v13

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData([Ljava/lang/Object;)V

    .line 4204
    :goto_1
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->mQtyMapping:Ljava/util/HashMap;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v14, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData(Ljava/lang/String;)V

    .line 4205
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->mQtyOtherRatMapping:Ljava/util/HashMap;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v14, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData(Ljava/lang/String;)V

    .line 4206
    const/high16 v14, 0x40800000    # 4.0f

    const v15, 0xffff

    if-ne v10, v15, :cond_1

    .line 4207
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData(Ljava/lang/String;)V

    goto :goto_2

    .line 4209
    :cond_1
    new-array v15, v11, [Ljava/lang/Object;

    int-to-float v11, v10

    div-float/2addr v11, v14

    invoke-static {v11}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v11

    aput-object v11, v15, v13

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData([Ljava/lang/Object;)V

    .line 4211
    :goto_2
    const v11, 0xffff

    if-ne v6, v11, :cond_2

    .line 4212
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData(Ljava/lang/String;)V

    goto :goto_3

    .line 4214
    :cond_2
    const/4 v11, 0x1

    new-array v11, v11, [Ljava/lang/Object;

    int-to-float v12, v6

    div-float/2addr v12, v14

    invoke-static {v12}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v12

    aput-object v12, v11, v13

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->addData([Ljava/lang/Object;)V

    .line 4183
    .end local v5    # "measId":I
    .end local v6    # "thresholdOtherSystem":I
    .end local v7    # "eventType":I
    .end local v8    # "measQty":I
    .end local v9    # "measQtyOtherRAT":I
    .end local v10    # "thresholdOwnSystem":I
    :cond_3
    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 4218
    .end local v4    # "i":I
    :cond_4
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3c;->notifyDataSetChanged()V

    .line 4219
    return-void
.end method
