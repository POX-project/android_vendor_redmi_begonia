.class Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2337
    const-string v0, "MSG_ID_TDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    const-string v1, "MSG_ID_TDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 2342
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2343
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2357
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2352
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 2361
    const-string v0, "UARFCN"

    const-string v1, "CellParamId"

    const-string v2, "RSCP"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2347
    const-string v0, "TD-SCDMA Serving Cell Info (UMTS TDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2366
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2371
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 2372
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->clearData()V

    .line 2373
    const-string v3, "MSG_ID_TDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x2

    const/4 v5, 0x0

    const/4 v6, 0x3

    const/4 v7, 0x1

    if-eqz v3, :cond_0

    .line 2374
    const-string v3, "serv_cell."

    .line 2375
    .local v3, "coName":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "uarfcn_DL"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 2377
    .local v8, "uarfcn":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "psc"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 2379
    .local v9, "cellParaId":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rscp"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v2, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 2381
    .local v10, "rscp":I
    new-array v6, v6, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v6, v5

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v6, v7

    int-to-float v5, v10

    const/high16 v7, 0x45800000    # 4096.0f

    div-float/2addr v5, v7

    invoke-static {v5}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v5

    aput-object v5, v6, v4

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2382
    .end local v3    # "coName":Ljava/lang/String;
    .end local v8    # "uarfcn":I
    .end local v9    # "cellParaId":I
    .end local v10    # "rscp":I
    goto/16 :goto_1

    :cond_0
    nop

    .line 2383
    const-string v3, "MSG_ID_TDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 2384
    const-string v3, "umts_cell_list"

    .line 2385
    .local v3, "preStruct":Ljava/lang/String;
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_0
    const/16 v9, 0x40

    if-ge v8, v9, :cond_2

    .line 2386
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "umts_cell_list["

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, "]."

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 2388
    .local v9, "coName":Ljava/lang/String;
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "UARFCN"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 2390
    .local v10, "uarfcn":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "CELLPARAID"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2392
    .local v11, "cellParaId":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "RSCP"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v2, v12, v7}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 2394
    .local v12, "rscp":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "isServingCell"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 2397
    .local v13, "isServingCell":I
    if-eqz v13, :cond_1

    const/16 v14, -0x78

    if-le v12, v14, :cond_1

    .line 2398
    new-array v14, v6, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v5

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v7

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v4

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/TddServingCellInfo;->addData([Ljava/lang/Object;)V

    .line 2385
    .end local v9    # "coName":Ljava/lang/String;
    .end local v10    # "uarfcn":I
    .end local v11    # "cellParaId":I
    .end local v12    # "rscp":I
    .end local v13    # "isServingCell":I
    :cond_1
    add-int/lit8 v8, v8, 0x1

    goto/16 :goto_0

    .line 2402
    .end local v3    # "preStruct":Ljava/lang/String;
    .end local v8    # "i":I
    :cond_2
    :goto_1
    return-void
.end method
