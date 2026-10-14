.class Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field RxModeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field RxdEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field ServingBandMapping:Ljava/util/HashMap;
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

    .line 10449
    const-string v0, "MSG_ID_EM_GSM_RXD_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 10479
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 10451
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->ServingBandMapping:Ljava/util/HashMap;

    .line 10460
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxModeMapping:Ljava/util/HashMap;

    .line 10470
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxdEnableMapping:Ljava/util/HashMap;

    .line 10480
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 10520
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 10515
    const-string v0, "2. GSM EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 6

    .line 10524
    const-string v0, "RxD Enable"

    const-string v1, "Serving ARFCN"

    const-string v2, "Serving Band"

    const-string v3, "RxD Mode"

    const-string v4, "Current Primary RxLev"

    const-string v5, "Current Diversity RxLev"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    .line 10528
    .local v0, "Lables":[Ljava/lang/String;
    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 10510
    const-string v0, "GSM RXD Info"

    return-object v0
.end method

.method rxdEnableMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "tasidx"    # I

    .line 10492
    const-string v0, ""

    .line 10493
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 10494
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxdEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10496
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxdEnableMapping:Ljava/util/HashMap;

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

    .line 10497
    :goto_0
    return-object v0
.end method

.method rxdModeMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "rxMode"    # I

    .line 10483
    const-string v0, ""

    .line 10484
    .local v0, "rxMode_s":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxModeMapping:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 10485
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxModeMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10487
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->RxModeMapping:Ljava/util/HashMap;

    const/4 v3, -0x1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10488
    :goto_0
    return-object v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 10501
    const-string v0, " "

    .line 10502
    .local v0, "bandidx_s":Ljava/lang/String;
    const/4 v1, 0x1

    if-lt p1, v1, :cond_0

    const/4 v1, 0x4

    if-gt p1, v1, :cond_0

    .line 10503
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 10505
    :cond_0
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 10533
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 10538
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 10539
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "rxd_enable"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 10540
    .local v1, "rxdEnable":I
    const-string v2, "serving_arfcn"

    const/4 v3, 0x1

    invoke-virtual {p0, v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 10541
    .local v2, "servingArfcn":I
    const-string v4, "serving_band"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 10543
    .local v4, "currentSurvingBand":I
    const-string v5, "rxd_mode"

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 10544
    .local v5, "rxdMode":I
    const-string v6, "rxlev_prx"

    invoke-virtual {p0, v0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 10545
    .local v6, "curPriRxLev":I
    const-string v7, "rxlev_drx"

    invoke-virtual {p0, v0, v7, v3}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 10546
    .local v7, "curDivRxLev":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->clearData()V

    .line 10548
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->rxdEnableMapping(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->addData(Ljava/lang/String;)V

    .line 10549
    new-array v8, v3, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    const/4 v10, 0x0

    aput-object v9, v8, v10

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->addData([Ljava/lang/Object;)V

    .line 10550
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->addData(Ljava/lang/String;)V

    .line 10551
    if-ne v1, v3, :cond_0

    .line 10552
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->rxdModeMapping(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->addData(Ljava/lang/String;)V

    .line 10553
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " dBm"

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->addData(Ljava/lang/String;)V

    .line 10554
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->addData(Ljava/lang/String;)V

    .line 10557
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMRxdInfo;->notifyDataSetChanged()V

    .line 10558
    return-void
.end method
