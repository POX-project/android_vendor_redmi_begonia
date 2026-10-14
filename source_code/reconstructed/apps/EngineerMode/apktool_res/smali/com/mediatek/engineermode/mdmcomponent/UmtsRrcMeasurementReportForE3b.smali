.class Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 4372
    const-string v0, "MSG_ID_TDD_EM_MEME_REPORT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 4376
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4377
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4391
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4386
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 4395
    const-string v0, "e3b meas ID"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4381
    const-string v0, "UMTS RRC Measurement report for e3b (UMTS TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4400
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4405
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 4406
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "em_report_info."

    .line 4407
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "MeasId"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 4409
    .local v2, "measId":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "EventType"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 4411
    .local v3, "eventType":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->clearData()V

    .line 4412
    const/4 v4, 0x2

    if-ne v3, v4, :cond_1

    .line 4413
    if-nez v2, :cond_0

    .line 4414
    const-string v4, "-"

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->addData(Ljava/lang/String;)V

    goto :goto_0

    .line 4416
    :cond_0
    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v5

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->addData([Ljava/lang/Object;)V

    .line 4419
    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRrcMeasurementReportForE3b;->notifyDataSetChanged()V

    .line 4420
    return-void
.end method
