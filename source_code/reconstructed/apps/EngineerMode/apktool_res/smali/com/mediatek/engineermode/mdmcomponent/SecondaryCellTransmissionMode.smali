.class Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 3511
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 3515
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3516
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3530
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3525
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 3534
    const-string v0, "TM"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3520
    const-string v0, "Secondary Cell Transmission Mode"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3539
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3544
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 3545
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "cell_info[1]."

    .line 3546
    .local v1, "coName":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "tm"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 3548
    .local v2, "value":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;->clearData()V

    .line 3549
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/SecondaryCellTransmissionMode;->addData([Ljava/lang/Object;)V

    .line 3550
    return-void
.end method
