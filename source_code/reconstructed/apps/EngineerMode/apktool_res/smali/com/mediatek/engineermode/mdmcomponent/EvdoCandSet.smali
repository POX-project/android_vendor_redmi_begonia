.class Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1397
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_CAND_SET_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 1401
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1402
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1416
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1411
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 1420
    const-string v0, "Band"

    const-string v1, "Channel"

    const-string v2, "PilotPN"

    const-string v3, "PilotEclo"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1406
    const-string v0, "EVDO Cand Set"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1425
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 15
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1429
    move-object v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 1430
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->clearData()V

    .line 1431
    const-string v2, "num_evdo_cand_set"

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 1432
    .local v2, "num_evdo_cand_set":I
    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Object;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "num_evdo_cand_set("

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ")"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->addData([Ljava/lang/Object;)V

    .line 1433
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v2, :cond_0

    .line 1434
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "evdo_cand_set["

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "].Band"

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1435
    .local v5, "Band":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, "].Channel"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1437
    .local v8, "Channel":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, "].PilotPN"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1439
    .local v9, "PilotPN":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "].PilotEclo"

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v1, v7, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 1441
    .local v7, "PilotEclo":I
    new-instance v10, Ljava/text/DecimalFormat;

    const-string v11, "#0.00"

    invoke-direct {v10, v11}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    .line 1442
    .local v10, "df":Ljava/text/DecimalFormat;
    int-to-float v11, v7

    const/high16 v12, 0x41000000    # 8.0f

    div-float/2addr v11, v12

    float-to-double v11, v11

    invoke-virtual {v10, v11, v12}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v11

    .line 1443
    .local v11, "PilotEcloFloat":Ljava/lang/String;
    const/4 v12, 0x4

    new-array v12, v12, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v12, v6

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v12, v3

    const/4 v13, 0x2

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v12, v13

    const/4 v13, 0x3

    aput-object v11, v12, v13

    invoke-virtual {p0, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoCandSet;->addData([Ljava/lang/Object;)V

    .line 1433
    .end local v5    # "Band":I
    .end local v7    # "PilotEclo":I
    .end local v8    # "Channel":I
    .end local v9    # "PilotPN":I
    .end local v10    # "df":Ljava/text/DecimalFormat;
    .end local v11    # "PilotEcloFloat":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 1445
    .end local v4    # "i":I
    :cond_0
    return-void
.end method
