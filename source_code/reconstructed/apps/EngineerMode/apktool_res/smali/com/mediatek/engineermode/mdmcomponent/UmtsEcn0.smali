.class Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 9444
    const-string v0, "MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    const-string v1, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    const-string v2, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 9450
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveComponent;-><init>(Landroid/app/Activity;)V

    .line 9451
    return-void
.end method


# virtual methods
.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .locals 6

    .line 9471
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->mYLabel:Landroid/widget/TextView;

    const-string v1, "R"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 9473
    const/4 v0, 0x3

    new-array v1, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 9474
    .local v1, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
    new-instance v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 9475
    aget-object v2, v1, v3

    const v4, -0xffff01

    iput v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9476
    aget-object v2, v1, v3

    iput v0, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9477
    aget-object v0, v1, v3

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9478
    aget-object v0, v1, v3

    const-string v2, "EcN0(active)"

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9479
    aget-object v0, v1, v3

    const/16 v2, 0xb

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    .line 9480
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v5, 0x1

    aput-object v0, v1, v5

    .line 9481
    aget-object v0, v1, v5

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9482
    aget-object v0, v1, v5

    iput v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9483
    aget-object v0, v1, v5

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9484
    aget-object v0, v1, v5

    const-string v3, "EcN0(monitored)"

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9485
    aget-object v0, v1, v5

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    .line 9486
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;-><init>()V

    const/4 v3, 0x2

    aput-object v0, v1, v3

    .line 9487
    aget-object v0, v1, v3

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    .line 9488
    aget-object v0, v1, v3

    iput v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    .line 9489
    aget-object v0, v1, v3

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineType:I

    .line 9490
    aget-object v0, v1, v3

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 9491
    aget-object v0, v1, v3

    const-string v4, "EcN0(detected)"

    iput-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 9492
    aget-object v0, v1, v3

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    .line 9493
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V

    .line 9495
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;-><init>()V

    .line 9496
    .local v0, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    const-wide/16 v2, -0x64

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    .line 9497
    const-wide/16 v2, 0x64

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    .line 9498
    const-wide/16 v2, 0xa

    iput-wide v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    .line 9499
    iput-boolean v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    .line 9500
    iput-boolean v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    .line 9501
    iput-boolean v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    .line 9502
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 9465
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 9460
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 9455
    const-string v0, "UMTS ECN0 (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 9507
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 18
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 9512
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 9513
    .local v2, "data":Lcom/mediatek/mdml/Msg;
    const-string v3, "MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x0

    const/high16 v5, -0x3e380000    # -25.0f

    const/high16 v6, -0x3d100000    # -120.0f

    const-string v7, "rscp"

    const-string v8, "ec_no"

    const/high16 v9, 0x45800000    # 4096.0f

    const/4 v10, 0x1

    if-eqz v3, :cond_1

    .line 9514
    const-string v3, "serv_cell."

    .line 9515
    .local v3, "coName":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    int-to-float v7, v7

    div-float/2addr v7, v9

    .line 9517
    .local v7, "rscp":F
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v2, v8, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    int-to-float v8, v8

    div-float/2addr v8, v9

    .line 9519
    .local v8, "ecn0":F
    cmpl-float v6, v7, v6

    if-lez v6, :cond_0

    cmpl-float v5, v8, v5

    if-lez v5, :cond_0

    .line 9520
    invoke-virtual {v0, v4, v8}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->addData(IF)V

    .line 9522
    .end local v3    # "coName":Ljava/lang/String;
    .end local v7    # "rscp":F
    .end local v8    # "ecn0":F
    :cond_0
    goto/16 :goto_5

    :cond_1
    nop

    .line 9523
    const-string v3, "MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v11, "]."

    if-eqz v3, :cond_5

    .line 9524
    const-string v3, "operation"

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 9526
    .local v3, "operation":I
    const-string v4, "RAT_type"

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 9528
    .local v4, "rat":I
    if-ne v3, v10, :cond_4

    if-nez v4, :cond_4

    .line 9529
    const-string v12, "neigh_cell_count"

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 9531
    .local v12, "num":I
    const-string v13, "choice.neigh_cells["

    .line 9533
    .local v13, "coName":Ljava/lang/String;
    const/4 v14, 0x0

    .local v14, "i":I
    :goto_0
    if-ge v14, v12, :cond_4

    const/16 v15, 0x10

    if-ge v14, v15, :cond_4

    .line 9534
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v0, v2, v15, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    int-to-float v15, v15

    div-float/2addr v15, v9

    .line 9536
    .local v15, "rscp":F
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v2, v5, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    int-to-float v5, v5

    div-float/2addr v5, v9

    .line 9538
    .local v5, "ecn0":F
    cmpl-float v17, v15, v6

    if-lez v17, :cond_2

    const/high16 v16, -0x3e380000    # -25.0f

    cmpl-float v17, v5, v16

    if-lez v17, :cond_3

    .line 9539
    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->addData(IF)V

    goto :goto_1

    .line 9538
    :cond_2
    const/high16 v16, -0x3e380000    # -25.0f

    .line 9533
    .end local v5    # "ecn0":F
    .end local v15    # "rscp":F
    :cond_3
    :goto_1
    add-int/lit8 v14, v14, 0x1

    move/from16 v5, v16

    goto :goto_0

    .line 9543
    .end local v3    # "operation":I
    .end local v4    # "rat":I
    .end local v12    # "num":I
    .end local v13    # "coName":Ljava/lang/String;
    .end local v14    # "i":I
    :cond_4
    goto :goto_5

    :cond_5
    nop

    .line 9544
    const-string v3, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    .line 9545
    const-string v3, "num_cells"

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 9547
    .local v3, "num":I
    const-string v5, "umts_cell_list["

    .line 9549
    .local v5, "coName":Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_2
    if-ge v6, v3, :cond_a

    const/16 v7, 0x20

    if-ge v6, v7, :cond_a

    .line 9550
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "cell_type"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 9552
    .local v7, "cellType":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v2, v9, v10}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 9554
    .local v9, "ecn0":I
    if-nez v7, :cond_6

    .line 9555
    int-to-float v12, v9

    invoke-virtual {v0, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->addData(IF)V

    goto :goto_4

    .line 9556
    :cond_6
    if-eq v7, v10, :cond_8

    const/4 v12, 0x3

    if-ne v7, v12, :cond_7

    goto :goto_3

    .line 9558
    :cond_7
    const/4 v12, 0x2

    if-ne v7, v12, :cond_9

    .line 9559
    int-to-float v13, v9

    invoke-virtual {v0, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->addData(IF)V

    goto :goto_4

    .line 9557
    :cond_8
    :goto_3
    int-to-float v12, v9

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/UmtsEcn0;->addData(IF)V

    .line 9549
    .end local v7    # "cellType":I
    .end local v9    # "ecn0":I
    :cond_9
    :goto_4
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    .line 9563
    .end local v3    # "num":I
    .end local v5    # "coName":Ljava/lang/String;
    .end local v6    # "i":I
    :cond_a
    :goto_5
    return-void
.end method
