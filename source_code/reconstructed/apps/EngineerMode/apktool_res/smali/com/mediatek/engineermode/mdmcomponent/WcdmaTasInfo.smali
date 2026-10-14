.class Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field AntennaMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasVersion:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 5359
    const-string v0, "MSG_ID_FDD_EM_UL1_TAS_INFO_IND"

    const-string v1, "MSG_ID_FDD_EM_UL1_UTAS_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 5382
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;-><init>(Landroid/app/Activity;)V

    .line 5363
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasVersion:I

    .line 5364
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->AntennaMapping:Ljava/util/HashMap;

    .line 5373
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 5383
    return-void
.end method


# virtual methods
.method antidxMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "antidx"    # I

    .line 5386
    const-string v0, ""

    .line 5387
    .local v0, "antidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x3

    if-gt p1, v1, :cond_0

    .line 5388
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->AntennaMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 5390
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->AntennaMapping:Ljava/util/HashMap;

    const/4 v3, 0x4

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

    .line 5391
    :goto_0
    return-object v0
.end method

.method conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;
    .locals 1
    .param p1, "lables1"    # [Ljava/lang/String;
    .param p2, "lables2"    # [Ljava/lang/String;
    .param p3, "position"    # I

    .line 5411
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 5412
    if-gez p3, :cond_0

    .line 5413
    invoke-static {p3}, Ljava/lang/Math;->abs(I)I

    move-result p3

    .line 5414
    invoke-virtual {p0, p2, p1, p3}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 5416
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 5418
    :cond_1
    return-object p2
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5433
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5428
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 9

    .line 5437
    const-string v0, "TX Antenna"

    const-string v1, "Antenna State"

    const-string v2, "RSCP_Diff"

    const-string v3, "RSCP_LANT"

    const-string v4, "RSCP_UANT"

    const-string v5, "TX Power"

    const-string v6, "DPCCH TX Power"

    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    .line 5440
    .local v0, "Lables_Verison_v1":[Ljava/lang/String;
    const-string v1, "TX Antenna"

    const-string v2, "Antenna State"

    const-string v3, "RSCP_Diff"

    const-string v4, "RSCP_LANT"

    const-string v5, "RSCP_UANT"

    const-string v6, "RSCP_LANT(\')"

    const-string v7, "TX Power"

    const-string v8, "DPCCH TX Power"

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v1

    .line 5443
    .local v1, "Lables_Verison_v2":[Ljava/lang/String;
    const-string v2, "Tas Enable Info"

    const-string v3, "Serving Band"

    const-string v4, "Serving UARFCN"

    filled-new-array {v2, v3, v4}, [Ljava/lang/String;

    move-result-object v2

    .line 5445
    .local v2, "Lables_Tas":[Ljava/lang/String;
    const-string v3, "DAT Index"

    filled-new-array {v3}, [Ljava/lang/String;

    move-result-object v3

    .line 5447
    .local v3, "Labels_Dat":[Ljava/lang/String;
    iget v4, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasVersion:I

    const/4 v5, 0x0

    const/4 v6, 0x1

    const/4 v7, 0x2

    if-ne v4, v7, :cond_0

    .line 5448
    array-length v4, v2

    invoke-virtual {p0, v2, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v4

    new-array v6, v6, [[Ljava/lang/String;

    aput-object v3, v6, v5

    invoke-virtual {p0, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/String;

    return-object v4

    .line 5451
    :cond_0
    array-length v4, v2

    invoke-virtual {p0, v2, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v4

    new-array v6, v6, [[Ljava/lang/String;

    aput-object v3, v6, v5

    invoke-virtual {p0, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/String;

    return-object v4
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5423
    const-string v0, "WCDMA TAS Info"

    return-object v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 5404
    const-string v0, "Band"

    .line 5405
    .local v0, "bandidx_s":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 5406
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5457
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "tasidx"    # I

    .line 5395
    const-string v0, ""

    .line 5396
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 5397
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 5399
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasEnableMapping:Ljava/util/HashMap;

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

    .line 5400
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 29
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5462
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 5463
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "MSG_ID_FDD_EM_UL1_UTAS_INFO_IND"

    move-object/from16 v3, p1

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eqz v2, :cond_0

    .line 5464
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->setInfoValid(I)V

    goto :goto_0

    .line 5466
    :cond_0
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->setInfoValid(I)V

    .line 5470
    :goto_0
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->isInfoValid()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 5471
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->clearData()V

    .line 5472
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v5, v5, [Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Use "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getName()Ljava/lang/String;

    move-result-object v7

    const-string v8, "UTAS"

    const-string v9, "TAS"

    invoke-virtual {v7, v8, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v4

    invoke-virtual {v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 5473
    return-void

    .line 5475
    :cond_1
    const-string v2, "EmUl1Tas."

    .line 5476
    .local v2, "coName":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "tas_enable"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 5478
    .local v6, "tasidx":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "band"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 5480
    .local v7, "bandidx":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "uarfcn"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 5482
    .local v8, "uarfcnidx":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "main_ant_idx"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 5485
    .local v9, "antidx":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rscp_diff"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 5487
    .local v10, "rscp_diff":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "dat_scenario_index"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 5490
    .local v11, "dat_index":I
    const/16 v12, -0x1e0

    if-ne v10, v12, :cond_2

    .line 5491
    const-string v13, " "

    .local v13, "rscp_diff_s":Ljava/lang/String;
    goto :goto_1

    .line 5493
    .end local v13    # "rscp_diff_s":Ljava/lang/String;
    :cond_2
    div-int/lit8 v13, v10, 0x4

    invoke-static {v13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v13

    .line 5495
    .restart local v13    # "rscp_diff_s":Ljava/lang/String;
    :goto_1
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "rscp_0"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v1, v14, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 5498
    .local v14, "rscp_0":I
    if-ne v14, v12, :cond_3

    .line 5499
    const-string v15, " "

    .local v15, "rscp_0_s":Ljava/lang/String;
    goto :goto_2

    .line 5501
    .end local v15    # "rscp_0_s":Ljava/lang/String;
    :cond_3
    div-int/lit8 v15, v14, 0x4

    invoke-static {v15}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v15

    .line 5503
    .restart local v15    # "rscp_0_s":Ljava/lang/String;
    :goto_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rscp_1"

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 5506
    .local v4, "rscp_1":I
    const/16 v12, -0x1e0

    if-ne v4, v12, :cond_4

    .line 5507
    const-string v12, " "

    .local v12, "rscp_1_s":Ljava/lang/String;
    goto :goto_3

    .line 5509
    .end local v12    # "rscp_1_s":Ljava/lang/String;
    :cond_4
    div-int/lit8 v12, v4, 0x4

    invoke-static {v12}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v12

    .line 5511
    .restart local v12    # "rscp_1_s":Ljava/lang/String;
    :goto_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "rscp_2"

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x1

    invoke-virtual {v0, v1, v3, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 5514
    .local v3, "rscp_2":I
    const/16 v5, -0x1e0

    if-ne v3, v5, :cond_5

    .line 5515
    const-string v5, " "

    .local v5, "rscp_2_s":Ljava/lang/String;
    goto :goto_4

    .line 5517
    .end local v5    # "rscp_2_s":Ljava/lang/String;
    :cond_5
    div-int/lit8 v5, v3, 0x4

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    .line 5519
    .restart local v5    # "rscp_2_s":Ljava/lang/String;
    :goto_4
    move/from16 v17, v3

    .end local v3    # "rscp_2":I
    .local v17, "rscp_2":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v19, v4

    .end local v4    # "rscp_1":I
    .local v19, "rscp_1":I
    const-string v4, "tx_pwr"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v0, v1, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 5522
    .local v3, "tx_pwr":I
    const/16 v4, -0x80

    if-ne v3, v4, :cond_6

    .line 5523
    const-string v20, " "

    .local v20, "tx_pwr_s":Ljava/lang/String;
    goto :goto_5

    .line 5525
    .end local v20    # "tx_pwr_s":Ljava/lang/String;
    :cond_6
    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v20

    .line 5527
    .restart local v20    # "tx_pwr_s":Ljava/lang/String;
    :goto_5
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v22, v3

    .end local v3    # "tx_pwr":I
    .local v22, "tx_pwr":I
    const-string v3, "dpcch_tx_pwr"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v0, v1, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 5530
    .local v3, "dpcch_tx_pwr":I
    const/16 v4, -0x80

    if-ne v3, v4, :cond_7

    .line 5531
    const-string v4, " "

    .local v4, "dpcch_tx_pwr_s":Ljava/lang/String;
    goto :goto_6

    .line 5533
    .end local v4    # "dpcch_tx_pwr_s":Ljava/lang/String;
    :cond_7
    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    .line 5535
    .restart local v4    # "dpcch_tx_pwr_s":Ljava/lang/String;
    :goto_6
    move/from16 v21, v3

    .end local v3    # "dpcch_tx_pwr":I
    .local v21, "dpcch_tx_pwr":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v23, v2

    .end local v2    # "coName":Ljava/lang/String;
    .local v23, "coName":Ljava/lang/String;
    const-string v2, "tas_version"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    const/4 v3, 0x2

    if-ne v2, v3, :cond_8

    .line 5536
    move v2, v3

    goto :goto_7

    :cond_8
    const/4 v2, 0x1

    :goto_7
    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasVersion:I

    .line 5538
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->clearData()V

    .line 5540
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    const/4 v3, 0x3

    if-eqz v2, :cond_9

    .line 5541
    new-array v2, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v25

    const/16 v16, 0x0

    aput-object v25, v2, v16

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v25

    const/16 v18, 0x1

    aput-object v25, v2, v18

    .line 5542
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v25

    const/16 v24, 0x2

    aput-object v25, v2, v24

    .line 5541
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->addData([Ljava/lang/Object;)V

    .line 5544
    :cond_9
    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->TasVersion:I

    const/16 v25, 0x6

    const/16 v26, 0x5

    const/16 v27, 0x4

    const/4 v3, 0x2

    if-ne v2, v3, :cond_a

    .line 5545
    const/16 v2, 0x8

    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v24

    const/16 v16, 0x0

    aput-object v24, v2, v16

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v24

    const/16 v18, 0x1

    aput-object v24, v2, v18

    aput-object v13, v2, v3

    const/4 v3, 0x3

    aput-object v15, v2, v3

    aput-object v12, v2, v27

    aput-object v5, v2, v26

    aput-object v20, v2, v25

    const/4 v3, 0x7

    aput-object v4, v2, v3

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->addData([Ljava/lang/Object;)V

    move-object/from16 v28, v1

    const/4 v1, 0x1

    goto :goto_8

    .line 5548
    :cond_a
    const/4 v3, 0x7

    new-array v2, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x0

    aput-object v3, v2, v16

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    move-object/from16 v28, v1

    const/4 v1, 0x1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v28, "data":Lcom/mediatek/mdml/Msg;
    aput-object v3, v2, v1

    const/4 v3, 0x2

    aput-object v13, v2, v3

    const/4 v3, 0x3

    aput-object v15, v2, v3

    aput-object v12, v2, v27

    aput-object v20, v2, v26

    aput-object v4, v2, v25

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->addData([Ljava/lang/Object;)V

    .line 5551
    :goto_8
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->addData([Ljava/lang/Object;)V

    .line 5552
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaTasInfo;->notifyDataSetChanged()V

    .line 5554
    return-void
.end method
