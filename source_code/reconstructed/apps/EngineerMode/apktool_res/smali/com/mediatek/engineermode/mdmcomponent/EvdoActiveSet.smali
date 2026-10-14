.class Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1342
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_ACTIVE_SET_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 1346
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1347
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1361
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1356
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 1365
    const-string v0, "pilotPN"

    const-string v1, "pilotEclo"

    const-string v2, "DRC Cover"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1351
    const-string v0, "EVDO Acitve Set"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1370
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1374
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 1375
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->clearData()V

    .line 1376
    const-string v1, "num_evdo_active_set"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    .line 1377
    .local v1, "num_evdo_active_set":I
    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Object;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "num_evdo_active_set("

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ")"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->addData([Ljava/lang/Object;)V

    .line 1378
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_0

    .line 1379
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "evdo_active_set["

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "].activePilotPN"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1381
    .local v4, "activePilotPN":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "].activepilotEclo"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 1384
    .local v7, "activepilotEclo":I
    new-instance v8, Ljava/text/DecimalFormat;

    const-string v9, "#0.00"

    invoke-direct {v8, v9}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    .line 1385
    .local v8, "df":Ljava/text/DecimalFormat;
    int-to-float v9, v7

    const/high16 v10, 0x41000000    # 8.0f

    div-float/2addr v9, v10

    float-to-double v9, v9

    .line 1386
    invoke-virtual {v8, v9, v10}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v9

    .line 1388
    .local v9, "activepilotEcloFloat":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "].activeDrcCover"

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1390
    .local v6, "activeDrcCover":I
    const/4 v10, 0x3

    new-array v10, v10, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v10, v5

    aput-object v9, v10, v2

    const/4 v11, 0x2

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v10, v11

    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/mdmcomponent/EvdoActiveSet;->addData([Ljava/lang/Object;)V

    .line 1378
    .end local v4    # "activePilotPN":I
    .end local v6    # "activeDrcCover":I
    .end local v7    # "activepilotEclo":I
    .end local v8    # "df":Ljava/text/DecimalFormat;
    .end local v9    # "activepilotEcloFloat":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1393
    .end local v3    # "i":I
    :cond_0
    return-void
.end method
