.class Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 4928
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_REPORT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 4932
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4933
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4947
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4942
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 4951
    const-string v0, "Event B1 meas ID"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4937
    const-string v0, "LTE ERRC Measurement report for event B1"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4956
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4961
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 4962
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;->clearData()V

    .line 4963
    const-string v1, "em_report_info."

    .line 4964
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "EventType"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 4966
    .local v2, "eventType":I
    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    .line 4967
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "MeasId"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 4969
    .local v4, "measId":I
    new-array v3, v3, [Ljava/lang/Object;

    const/4 v5, 0x0

    if-nez v4, :cond_0

    const-string v6, "-"

    goto :goto_0

    :cond_0
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    :goto_0
    aput-object v6, v3, v5

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcMeasurementReportForEventB1;->addData([Ljava/lang/Object;)V

    .line 4971
    .end local v4    # "measId":I
    :cond_1
    return-void
.end method
