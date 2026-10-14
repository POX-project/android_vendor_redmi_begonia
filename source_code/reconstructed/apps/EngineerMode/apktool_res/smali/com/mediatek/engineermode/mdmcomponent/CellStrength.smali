.class Lcom/mediatek/engineermode/mdmcomponent/CellStrength;
.super Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8429
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 8433
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveExComponent;-><init>(Landroid/app/Activity;)V

    .line 8434
    return-void
.end method


# virtual methods
.method configX()Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    .locals 3

    .line 8453
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->mXLabel:Landroid/widget/TextView;

    const-string v1, "RSRP"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 8455
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;-><init>()V

    .line 8456
    .local v0, "xConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    const-wide/16 v1, -0x8c

    iput-wide v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->min:J

    .line 8457
    const-wide/16 v1, -0x1e

    iput-wide v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->max:J

    .line 8458
    const-wide/16 v1, 0xa

    iput-wide v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->step:J

    .line 8459
    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMin:Z

    .line 8460
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMax:Z

    .line 8461
    iput-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configStep:Z

    .line 8462
    return-object v0
.end method

.method configY()Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    .locals 9

    .line 8467
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->mYLabel:Landroid/widget/TextView;

    const-string v1, "SNR"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 8468
    const/4 v0, 0x5

    new-array v0, v0, [Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    .line 8469
    .local v0, "configs":[Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 8470
    aget-object v1, v0, v2

    const/high16 v3, -0x10000

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 8471
    aget-object v1, v0, v2

    const/4 v3, 0x3

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 8472
    aget-object v1, v0, v2

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    iput v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 8473
    aget-object v1, v0, v2

    const-string v4, "CC0"

    iput-object v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 8474
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v4, 0x1

    aput-object v1, v0, v4

    .line 8475
    aget-object v1, v0, v4

    const v5, -0xffff01

    iput v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 8476
    aget-object v1, v0, v4

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 8477
    aget-object v1, v0, v4

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_TRIANGLE:I

    iput v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 8478
    aget-object v1, v0, v4

    const-string v5, "CC1"

    iput-object v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 8479
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v5, 0x2

    aput-object v1, v0, v5

    .line 8480
    aget-object v1, v0, v5

    const/16 v6, 0x2b

    const/16 v7, 0x65

    const/16 v8, 0xab

    invoke-static {v6, v7, v8}, Landroid/graphics/Color;->rgb(III)I

    move-result v6

    iput v6, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 8481
    aget-object v1, v0, v5

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 8482
    aget-object v1, v0, v5

    sget v6, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_NONE:I

    iput v6, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 8483
    aget-object v1, v0, v5

    const-string v5, "Strong"

    iput-object v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 8484
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    aput-object v1, v0, v3

    .line 8485
    aget-object v1, v0, v3

    const/16 v5, 0xcc

    const/16 v6, 0x99

    invoke-static {v5, v6, v2}, Landroid/graphics/Color;->rgb(III)I

    move-result v2

    iput v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 8486
    aget-object v1, v0, v3

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 8487
    aget-object v1, v0, v3

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_NONE:I

    iput v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 8488
    aget-object v1, v0, v3

    const-string v2, "MediumWeak"

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 8489
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;-><init>()V

    const/4 v2, 0x4

    aput-object v1, v0, v2

    .line 8490
    aget-object v1, v0, v2

    const/16 v5, 0x98

    const/16 v6, 0xba

    invoke-static {v5, v5, v6}, Landroid/graphics/Color;->rgb(III)I

    move-result v5

    iput v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    .line 8491
    aget-object v1, v0, v2

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    .line 8492
    aget-object v1, v0, v2

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_NONE:I

    iput v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 8493
    aget-object v1, v0, v2

    const-string v2, "Weak"

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 8494
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->mCurveView:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;)V

    .line 8496
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-direct {v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;-><init>()V

    .line 8497
    .local v1, "yConfig":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    const-wide/16 v2, -0x14

    iput-wide v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->min:J

    .line 8498
    const-wide/16 v2, 0x1e

    iput-wide v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->max:J

    .line 8499
    const-wide/16 v2, 0xa

    iput-wide v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->step:J

    .line 8500
    iput-boolean v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMin:Z

    .line 8501
    iput-boolean v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMax:Z

    .line 8502
    iput-boolean v4, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configStep:Z

    .line 8503
    return-object v1
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8448
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8443
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8438
    const-string v0, "CC0/CC1 RSRP and SINR"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8508
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 21
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8513
    move-object/from16 v6, p0

    move-object/from16 v7, p2

    check-cast v7, Lcom/mediatek/mdml/Msg;

    .line 8514
    .local v7, "data":Lcom/mediatek/mdml/Msg;
    const-string v8, "dl_info"

    .line 8515
    .local v8, "coName":Ljava/lang/String;
    const-string v9, "cell_info"

    .line 8516
    .local v9, "coName1":Ljava/lang/String;
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "[0]."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "rsrp"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v3, 0x1

    invoke-virtual {v6, v7, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 8518
    .local v10, "pcellRsrp":I
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "sinr"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 8520
    .local v11, "pcellSinr":I
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "pci"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 8522
    .local v12, "pcellPci":I
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "earfcn"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    int-to-long v13, v0

    .line 8524
    .local v13, "pcellEarfcn":J
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "[1]."

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 8526
    .local v2, "scellRsrp":I
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 8528
    .local v4, "scellSinr":I
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 8530
    .local v5, "scellPci":I
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v7, v0}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    int-to-long v0, v0

    .line 8532
    .local v0, "scellEarfcn":J
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->clearData()V

    .line 8533
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "pcellRsrp"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " pcellSinr"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " pcellPci"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " pcellEarfcn"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v15, " scellRsrp"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " scellSinr"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " scellPci"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, " scellEarfcn"

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v15, "EmInfo/MDMComponent"

    invoke-static {v15, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 8537
    int-to-float v3, v10

    int-to-float v15, v11

    move-wide/from16 v16, v0

    .end local v0    # "scellEarfcn":J
    .local v16, "scellEarfcn":J
    int-to-float v1, v12

    long-to-float v0, v13

    const/16 v18, 0x0

    move-object/from16 v19, v7

    move-wide/from16 v6, v16

    move/from16 v16, v0

    .end local v7    # "data":Lcom/mediatek/mdml/Msg;
    .end local v16    # "scellEarfcn":J
    .local v6, "scellEarfcn":J
    .local v19, "data":Lcom/mediatek/mdml/Msg;
    move-object/from16 v0, p0

    move/from16 v17, v1

    move/from16 v1, v18

    move/from16 v20, v2

    .end local v2    # "scellRsrp":I
    .local v20, "scellRsrp":I
    move v2, v3

    move v3, v15

    move v15, v4

    .end local v4    # "scellSinr":I
    .local v15, "scellSinr":I
    move/from16 v4, v17

    move-object/from16 v17, v8

    move v8, v5

    .end local v5    # "scellPci":I
    .local v8, "scellPci":I
    .local v17, "coName":Ljava/lang/String;
    move/from16 v5, v16

    invoke-virtual/range {v0 .. v5}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->addData(IFFFF)V

    .line 8538
    move/from16 v5, v20

    .end local v20    # "scellRsrp":I
    .local v5, "scellRsrp":I
    int-to-float v2, v5

    int-to-float v3, v15

    int-to-float v4, v8

    long-to-float v1, v6

    const/16 v16, 0x1

    move/from16 v18, v1

    move/from16 v1, v16

    move/from16 v16, v5

    .end local v5    # "scellRsrp":I
    .local v16, "scellRsrp":I
    move/from16 v5, v18

    invoke-virtual/range {v0 .. v5}, Lcom/mediatek/engineermode/mdmcomponent/CellStrength;->addData(IFFFF)V

    .line 8539
    return-void
.end method
