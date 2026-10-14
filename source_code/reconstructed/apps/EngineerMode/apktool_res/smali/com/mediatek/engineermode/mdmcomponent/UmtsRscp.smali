.class Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 9321
    const-string v0, "MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    const-string v1, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    const-string v2, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 9327
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 9328
    return-void
.end method


# virtual methods
.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 6

    .line 9348
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 9350
    const/4 v0, 0x3

    new-array v1, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 9351
    .local v1, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 9352
    aget-object v2, v1, v3

    const v4, -0xffff01

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9353
    aget-object v2, v1, v3

    iput v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9354
    aget-object v0, v1, v3

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9355
    aget-object v0, v1, v3

    const-string v2, "RSCP(active)"

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9356
    aget-object v0, v1, v3

    const/16 v2, 0xb

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    .line 9357
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v5, 0x1

    aput-object v0, v1, v5

    .line 9358
    aget-object v0, v1, v5

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9359
    aget-object v0, v1, v5

    iput v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9360
    aget-object v0, v1, v5

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9361
    aget-object v0, v1, v5

    const-string v3, "RSCP(monitored)"

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9362
    aget-object v0, v1, v5

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    .line 9363
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x2

    aput-object v0, v1, v3

    .line 9364
    aget-object v0, v1, v3

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9365
    aget-object v0, v1, v3

    iput v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9366
    aget-object v0, v1, v3

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineType:I

    .line 9367
    aget-object v0, v1, v3

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9368
    aget-object v0, v1, v3

    const-string v4, "RSCP(detected)"

    iput-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9369
    aget-object v0, v1, v3

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    .line 9370
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 9372
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 9373
    .local v0, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v2, -0x64

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 9374
    const-wide/16 v2, 0x64

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 9375
    const-wide/16 v2, 0xa

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 9376
    iput-boolean v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 9377
    iput-boolean v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 9378
    iput-boolean v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 9379
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9342
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9337
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9332
    const-string v0, "UMTS RSCP (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9384
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 18
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9389
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 9390
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x0

    const/high16 v5, -0x3e380000    # -25.0f

    const/high16 v6, -0x3d100000    # -120.0f

    const-string v7, "ec_no"

    const-string v8, "rscp"

    const/high16 v9, 0x45800000    # 4096.0f

    const/4 v10, 0x1

    if-eqz v3, :cond_1

    .line 9391
    const-string v3, "serv_cell."

    .line 9392
    .local v3, "coName":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    int-to-float v8, v8

    div-float/2addr v8, v9

    .line 9394
    .local v8, "rscp":F
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    div-float/2addr v7, v9

    .line 9396
    .local v7, "ecno":F
    cmpl-float v6, v8, v6

    if-lez v6, :cond_0

    cmpl-float v5, v7, v5

    if-lez v5, :cond_0

    .line 9397
    invoke-virtual {v0, v4, v8}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->addData(IF)V

    .line 9399
    .end local v3    # "coName":Ljava/lang/String;
    .end local v7    # "ecno":F
    .end local v8    # "rscp":F
    :cond_0
    goto/16 :goto_5

    :cond_1
    nop

    .line 9400
    const-string v3, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v11, "]."

    if-eqz v3, :cond_5

    .line 9401
    const-string v3, "operation"

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 9403
    .local v3, "operation":I
    const-string v4, "RAT_type"

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 9405
    .local v4, "rat":I
    if-ne v3, v10, :cond_4

    if-nez v4, :cond_4

    .line 9406
    const-string v12, "neigh_cell_count"

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 9408
    .local v12, "num":I
    const-string v13, "choice.neigh_cells["

    .line 9410
    .local v13, "coName":Ljava/lang/String;
    const/4 v14, 0x0

    .local v14, "i":I
    :goto_0
    if-ge v14, v12, :cond_4

    const/16 v15, 0x10

    if-ge v14, v15, :cond_4

    .line 9411
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v0, v2, v15, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    int-to-float v15, v15

    div-float/2addr v15, v9

    .line 9413
    .local v15, "rscp":F
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v2, v5, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    int-to-float v5, v5

    div-float/2addr v5, v9

    .line 9415
    .local v5, "ecno":F
    cmpl-float v17, v15, v6

    if-lez v17, :cond_2

    const/high16 v16, -0x3e380000    # -25.0f

    cmpl-float v17, v5, v16

    if-lez v17, :cond_3

    .line 9416
    invoke-virtual {v0, v10, v15}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->addData(IF)V

    goto :goto_1

    .line 9415
    :cond_2
    const/high16 v16, -0x3e380000    # -25.0f

    .line 9410
    .end local v5    # "ecno":F
    .end local v15    # "rscp":F
    :cond_3
    :goto_1
    add-int/lit8 v14, v14, 0x1

    move/from16 v5, v16

    goto :goto_0

    .line 9420
    .end local v3    # "operation":I
    .end local v4    # "rat":I
    .end local v12    # "num":I
    .end local v13    # "coName":Ljava/lang/String;
    .end local v14    # "i":I
    :cond_4
    goto :goto_5

    :cond_5
    nop

    .line 9421
    const-string v3, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    .line 9422
    const-string v3, "num_cells"

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 9424
    .local v3, "num":I
    const-string v5, "umts_cell_list["

    .line 9426
    .local v5, "coName":Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_2
    if-ge v6, v3, :cond_a

    const/16 v7, 0x20

    if-ge v6, v7, :cond_a

    .line 9427
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "cell_type"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 9429
    .local v7, "cellType":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "RSCP"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 9431
    .local v8, "rscp":I
    if-nez v7, :cond_6

    .line 9432
    int-to-float v9, v8

    invoke-virtual {v0, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->addData(IF)V

    goto :goto_4

    .line 9433
    :cond_6
    if-eq v7, v10, :cond_8

    const/4 v9, 0x3

    if-ne v7, v9, :cond_7

    goto :goto_3

    .line 9435
    :cond_7
    const/4 v9, 0x2

    if-ne v7, v9, :cond_9

    .line 9436
    int-to-float v12, v8

    invoke-virtual {v0, v9, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->addData(IF)V

    goto :goto_4

    .line 9434
    :cond_8
    :goto_3
    int-to-float v9, v8

    invoke-virtual {v0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/UmtsRscp;->addData(IF)V

    .line 9426
    .end local v7    # "cellType":I
    .end local v8    # "rscp":I
    :cond_9
    :goto_4
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    .line 9440
    .end local v3    # "num":I
    .end local v5    # "coName":Ljava/lang/String;
    .end local v6    # "i":I
    :cond_a
    :goto_5
    return-void
.end method
