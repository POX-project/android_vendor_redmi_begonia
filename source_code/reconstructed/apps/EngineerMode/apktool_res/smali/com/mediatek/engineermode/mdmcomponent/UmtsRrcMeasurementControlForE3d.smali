.class Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;
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

    .line 4223
    const-string v0, "MSG_ID_TDD_EM_MEME_EVENT_TYPE_3_PARAMETER_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 4244
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4226
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->mQtyMapping:Ljava/util/HashMap;

    .line 4234
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->mQtyOtherRatMapping:Ljava/util/HashMap;

    .line 4245
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4259
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4254
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 4263
    const-string v0, "e3d meas ID"

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

    .line 4249
    const-string v0, "UMTS RRC Measurement control for e3d (UMTS TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4270
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4275
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 4276
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "em_event_info["

    .line 4277
    .local v2, "coName":Ljava/lang/String;
    const-string v3, "num_event_info"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 4279
    .local v3, "num":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->clearData()V

    .line 4280
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_4

    const/4 v5, 0x4

    if-ge v4, v5, :cond_4

    .line 4281
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "]."

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "MeasId"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 4283
    .local v6, "measId":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "EventType"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 4285
    .local v8, "eventType":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "MeasQty"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 4287
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

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 4289
    .local v10, "measQtyOtherRAT":I
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

    invoke-virtual {v0, v1, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 4292
    .local v11, "thresholdOwnSystem":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "ThresholdOtherSystem"

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 4295
    .local v7, "thresholdOtherSystem":I
    if-ne v8, v5, :cond_3

    .line 4296
    const-string v5, "-"

    const/4 v13, 0x0

    if-nez v6, :cond_0

    .line 4297
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData(Ljava/lang/String;)V

    goto :goto_1

    .line 4299
    :cond_0
    new-array v14, v12, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v13

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData([Ljava/lang/Object;)V

    .line 4301
    :goto_1
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->mQtyMapping:Ljava/util/HashMap;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v14, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData(Ljava/lang/String;)V

    .line 4302
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->mQtyOtherRatMapping:Ljava/util/HashMap;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    invoke-virtual {v14, v15}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Ljava/lang/String;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData(Ljava/lang/String;)V

    .line 4303
    const/high16 v14, 0x40800000    # 4.0f

    const v15, 0xffff

    if-ne v11, v15, :cond_1

    .line 4304
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData(Ljava/lang/String;)V

    goto :goto_2

    .line 4306
    :cond_1
    new-array v15, v12, [Ljava/lang/Object;

    int-to-float v12, v11

    div-float/2addr v12, v14

    invoke-static {v12}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v12

    aput-object v12, v15, v13

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData([Ljava/lang/Object;)V

    .line 4308
    :goto_2
    const v12, 0xffff

    if-ne v7, v12, :cond_2

    .line 4309
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData(Ljava/lang/String;)V

    goto :goto_3

    .line 4311
    :cond_2
    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/Object;

    int-to-float v12, v7

    div-float/2addr v12, v14

    invoke-static {v12}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v12

    aput-object v12, v5, v13

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->addData([Ljava/lang/Object;)V

    .line 4280
    .end local v6    # "measId":I
    .end local v7    # "thresholdOtherSystem":I
    .end local v8    # "eventType":I
    .end local v9    # "measQty":I
    .end local v10    # "measQtyOtherRAT":I
    .end local v11    # "thresholdOwnSystem":I
    :cond_3
    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 4315
    .end local v4    # "i":I
    :cond_4
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementControlForE3d;->notifyDataSetChanged()V

    .line 4316
    return-void
.end method
