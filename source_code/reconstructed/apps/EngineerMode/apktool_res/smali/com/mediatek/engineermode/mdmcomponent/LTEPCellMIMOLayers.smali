.class Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlCarIndexAddrs:[I

.field dlCrcResultddrs:[I

.field dlLayerAddrs:[I

.field ulCarIndexAddrs:[I

.field ulLayerAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 388
    const-string v0, "type_icd_record"

    const-string v1, "700D"

    const-string v2, "7014"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 408
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 395
    const/4 v0, 0x5

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlCrcResultddrs:[I

    .line 397
    const/4 v0, 0x4

    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlCarIndexAddrs:[I

    .line 399
    new-array v1, v0, [I

    fill-array-data v1, :array_2

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlLayerAddrs:[I

    .line 402
    const/4 v1, 0x3

    new-array v1, v1, [I

    fill-array-data v1, :array_3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->ulCarIndexAddrs:[I

    .line 404
    new-array v0, v0, [I

    fill-array-data v0, :array_4

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->ulLayerAddrs:[I

    .line 409
    return-void

    :array_0
    .array-data 4
        0x8
        0x38
        0x40
        0x0
        0x1
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0xe
        0x3
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x33
        0x3
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x9
        0x3
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x65
        0x1
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 423
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 418
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 427
    const-string v0, " DL MIMO Layers"

    const-string v1, "UL MIMO Layers"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 413
    const-string v0, "LTE Primary Cell MIMO Layers"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 432
    const/4 v0, 0x1

    return v0
.end method

.method public testData()V
    .locals 11

    .line 464
    const/4 v0, 0x1

    .line 465
    .local v0, "dlCrcResult":I
    const/4 v1, 0x0

    .line 466
    .local v1, "dlCarIndex":I
    const/4 v2, 0x3

    .line 467
    .local v2, "dlLayer":I
    sget-object v3, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, " update update,name id = 700D conditions = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", values = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 470
    const-string v3, ""

    const/4 v4, 0x1

    if-ne v0, v4, :cond_0

    if-nez v1, :cond_0

    .line 471
    const/4 v6, 0x0

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->setData(ILjava/lang/Object;)V

    .line 473
    :cond_0
    const/4 v6, 0x0

    .line 474
    .local v6, "ulCarIndex":I
    const/4 v7, 0x2

    .line 475
    .local v7, "ulLayer":I
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, " update,name id = 7014, version = 1, conditions = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 478
    if-nez v6, :cond_1

    .line 479
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->setData(ILjava/lang/Object;)V

    .line 481
    :cond_1
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 436
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 438
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "700D"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, ""

    const-string v6, ", values = "

    const-string v7, ", conditions = "

    const-string v8, ", version = "

    const-string v9, " update,name id = "

    const-string v10, "EmInfo/MDMComponent"

    const/4 v11, 0x0

    if-eqz v3, :cond_1

    .line 439
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlCrcResultddrs:[I

    aget v3, v3, v11

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 440
    .local v3, "version":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlCrcResultddrs:[I

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v12

    .line 441
    .local v12, "dlCrcResult":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlCarIndexAddrs:[I

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v13

    .line 442
    .local v13, "dlCarIndex":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->dlLayerAddrs:[I

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v14

    .line 443
    .local v14, "dlLayer":I
    sget-object v15, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", "

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v10, v15, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 447
    const/4 v5, 0x1

    if-ne v12, v5, :cond_0

    if-nez v13, :cond_0

    .line 448
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    invoke-virtual {v0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->setData(ILjava/lang/Object;)V

    .line 450
    .end local v3    # "version":I
    .end local v12    # "dlCrcResult":I
    .end local v13    # "dlCarIndex":I
    .end local v14    # "dlLayer":I
    :cond_0
    goto :goto_0

    .line 451
    :cond_1
    move v5, v11

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->ulCarIndexAddrs:[I

    aget v3, v3, v5

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 452
    .restart local v3    # "version":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->ulCarIndexAddrs:[I

    invoke-virtual {v0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 453
    .local v5, "ulCarIndex":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->ulLayerAddrs:[I

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v11

    .line 454
    .local v11, "ulLayer":I
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->icdLogInfo:[Ljava/lang/String;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->getName()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v10, v12, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 457
    if-nez v5, :cond_2

    .line 458
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x1

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellMIMOLayers;->setData(ILjava/lang/Object;)V

    .line 461
    .end local v3    # "version":I
    .end local v5    # "ulCarIndex":I
    .end local v11    # "ulLayer":I
    :cond_2
    :goto_0
    return-void
.end method
