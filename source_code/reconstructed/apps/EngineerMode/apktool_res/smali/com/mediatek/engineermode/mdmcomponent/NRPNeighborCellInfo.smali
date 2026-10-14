.class Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field carTypeAddrs:[I

.field cellNumAddrs:[I

.field narfcnAddrs:[I

.field pciAddrs:[I

.field rsrpAddrs:[I

.field rsrqAddrs:[I

.field rssiAddrs:[I

.field sinrAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2293
    const-string v0, "type_icd_record"

    const-string v1, "9002"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 2316
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2299
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->carTypeAddrs:[I

    .line 2301
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->narfcnAddrs:[I

    .line 2303
    const/4 v0, 0x4

    new-array v0, v0, [I

    fill-array-data v0, :array_2

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->cellNumAddrs:[I

    .line 2305
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->pciAddrs:[I

    .line 2307
    new-array v1, v0, [I

    fill-array-data v1, :array_4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrpAddrs:[I

    .line 2309
    new-array v1, v0, [I

    fill-array-data v1, :array_5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrqAddrs:[I

    .line 2311
    new-array v1, v0, [I

    fill-array-data v1, :array_6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rssiAddrs:[I

    .line 2313
    new-array v0, v0, [I

    fill-array-data v0, :array_7

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->sinrAddrs:[I

    .line 2317
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x3
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x0
        0x16
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x0
        0x5
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0xa
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x38
        0x20
        0x20
        0x10
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x38
        0x20
        0x60
        0x8
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x20
        0x80
        0x10
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x38
        0x20
        0xc0
        0x8
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2331
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2326
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 6

    .line 2335
    const-string v0, "NARFCN"

    const-string v1, "PCI"

    const-string v2, "SSB - RSRP"

    const-string v3, "SSB - RSRQ"

    const-string v4, "SSB - RSSI"

    const-string v5, "SSB - SINR"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2321
    const-string v0, "NR Primary Neighbor Cell Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2341
    const/4 v0, 0x1

    return v0
.end method

.method public testData()V
    .locals 16

    .line 2378
    move-object/from16 v0, p0

    const/4 v1, 0x0

    .line 2379
    .local v1, "carType":I
    const/16 v2, 0x3039

    .line 2380
    .local v2, "narfcn":I
    const/4 v3, 0x5

    .line 2381
    .local v3, "cellNum":I
    if-nez v1, :cond_0

    .line 2382
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->clearData()V

    .line 2383
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-ge v4, v3, :cond_0

    const/16 v5, 0x14

    if-gt v4, v5, :cond_0

    .line 2384
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->pciAddrs:[I

    mul-int/lit16 v6, v4, 0xe0

    const/4 v7, 0x0

    add-int/2addr v6, v7

    const/4 v8, -0x2

    invoke-virtual {v0, v5, v6, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v5

    iput-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->pciAddrs:[I

    .line 2385
    mul-int/lit8 v5, v4, 0x2

    add-int/lit8 v5, v5, 0x7b

    add-int/2addr v5, v4

    .line 2386
    .local v5, "pci":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrpAddrs:[I

    mul-int/lit16 v9, v4, 0xe0

    add-int/lit8 v9, v9, 0x20

    invoke-virtual {v0, v6, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v6

    iput-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrpAddrs:[I

    .line 2387
    mul-int/lit8 v6, v4, 0x2

    const/4 v9, 0x3

    add-int/2addr v6, v9

    add-int/2addr v6, v4

    .line 2388
    .local v6, "rsrp":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrqAddrs:[I

    mul-int/lit16 v11, v4, 0xe0

    add-int/lit8 v11, v11, 0x60

    invoke-virtual {v0, v10, v11, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v10

    iput-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrqAddrs:[I

    .line 2389
    mul-int/lit8 v10, v4, 0x2

    add-int/lit8 v10, v10, 0x35

    add-int/2addr v10, v4

    .line 2390
    .local v10, "rsrq":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rssiAddrs:[I

    mul-int/lit16 v12, v4, 0xe0

    add-int/lit16 v12, v12, 0x80

    invoke-virtual {v0, v11, v12, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v11

    iput-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rssiAddrs:[I

    .line 2391
    mul-int/lit8 v11, v4, 0x2

    add-int/lit8 v11, v11, 0x3f

    add-int/2addr v11, v4

    .line 2392
    .local v11, "rssi":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->sinrAddrs:[I

    mul-int/lit16 v13, v4, 0xe0

    add-int/lit16 v13, v13, 0xc0

    invoke-virtual {v0, v12, v13, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v8

    iput-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->sinrAddrs:[I

    .line 2393
    mul-int/lit8 v8, v4, 0x2

    add-int/lit8 v8, v8, 0x7b

    sub-int/2addr v8, v4

    .line 2394
    .local v8, "sinr":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->pciAddrs:[I

    invoke-static {v13}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, ", "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrpAddrs:[I

    invoke-static {v14}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrqAddrs:[I

    .line 2395
    invoke-static {v14}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rssiAddrs:[I

    invoke-static {v14}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->sinrAddrs:[I

    .line 2396
    invoke-static {v14}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 2394
    const-string v14, "EmInfo/MDMComponent"

    invoke-static {v14, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2397
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, " update,name id = "

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ", condition = "

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", values = "

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v14, v12, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2401
    const/4 v9, 0x6

    new-array v9, v9, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ""

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v9, v7

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v12, 0x1

    aput-object v7, v9, v12

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v12, 0x2

    aput-object v7, v9, v12

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v12, 0x3

    aput-object v7, v9, v12

    const/4 v7, 0x4

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v9, v7

    const/4 v7, 0x5

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v9, v7

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->addData([Ljava/lang/Object;)V

    .line 2383
    .end local v5    # "pci":I
    .end local v6    # "rsrp":I
    .end local v8    # "sinr":I
    .end local v10    # "rsrq":I
    .end local v11    # "rssi":I
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    .line 2404
    .end local v4    # "i":I
    :cond_0
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 18
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2345
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 2346
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->carTypeAddrs:[I

    const/4 v3, 0x0

    aget v2, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 2349
    .local v2, "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->carTypeAddrs:[I

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 2350
    .local v4, "carType":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->narfcnAddrs:[I

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 2351
    .local v5, "narfcn":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->cellNumAddrs:[I

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 2352
    .local v6, "cellNum":I
    if-nez v4, :cond_1

    .line 2353
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->clearData()V

    .line 2354
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_0
    if-ge v7, v6, :cond_0

    const/16 v8, 0x14

    if-gt v7, v8, :cond_0

    .line 2355
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->pciAddrs:[I

    mul-int/lit16 v9, v7, 0xe0

    add-int/2addr v9, v3

    const/4 v10, -0x2

    invoke-virtual {v0, v8, v9, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v8

    iput-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->pciAddrs:[I

    .line 2356
    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 2357
    .local v8, "pci":I
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrpAddrs:[I

    mul-int/lit16 v11, v7, 0xe0

    add-int/lit8 v11, v11, 0x20

    invoke-virtual {v0, v9, v11, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v9

    iput-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrpAddrs:[I

    .line 2358
    const/4 v11, 0x1

    invoke-virtual {v0, v1, v9, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v9

    .line 2359
    .local v9, "rsrp":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrqAddrs:[I

    mul-int/lit16 v13, v7, 0xe0

    add-int/lit8 v13, v13, 0x60

    invoke-virtual {v0, v12, v13, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v12

    iput-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rsrqAddrs:[I

    .line 2360
    invoke-virtual {v0, v1, v12, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v12

    .line 2361
    .local v12, "rsrq":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rssiAddrs:[I

    mul-int/lit16 v14, v7, 0xe0

    add-int/lit16 v14, v14, 0x80

    invoke-virtual {v0, v13, v14, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v13

    iput-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->rssiAddrs:[I

    .line 2362
    invoke-virtual {v0, v1, v13, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v13

    .line 2363
    .local v13, "rssi":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->sinrAddrs:[I

    mul-int/lit16 v15, v7, 0xe0

    add-int/lit16 v15, v15, 0xc0

    invoke-virtual {v0, v14, v15, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->updateElement([III)[I

    move-result-object v10

    iput-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->sinrAddrs:[I

    .line 2364
    invoke-virtual {v0, v1, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v10

    .line 2365
    .local v10, "sinr":I
    sget-object v14, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, " update,name id = "

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v11, p1

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", version = "

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", condition = "

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v17, v1

    .end local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v17, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, ", values = "

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "EmInfo/MDMComponent"

    invoke-static {v3, v14, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2370
    const/4 v1, 0x6

    new-array v1, v1, [Ljava/lang/Object;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, ""

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v15, 0x0

    aput-object v3, v1, v15

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x1

    aput-object v3, v1, v16

    const/4 v3, 0x2

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v1, v3

    const/4 v3, 0x3

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v1, v3

    const/4 v3, 0x4

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    aput-object v15, v1, v3

    const/4 v3, 0x5

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v1, v3

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPNeighborCellInfo;->addData([Ljava/lang/Object;)V

    .line 2354
    .end local v8    # "pci":I
    .end local v9    # "rsrp":I
    .end local v10    # "sinr":I
    .end local v12    # "rsrq":I
    .end local v13    # "rssi":I
    add-int/lit8 v7, v7, 0x1

    move-object/from16 v1, v17

    const/4 v3, 0x0

    goto/16 :goto_0

    .end local v17    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_0
    move-object/from16 v11, p1

    move-object/from16 v17, v1

    .end local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v17    # "icdPacket":Ljava/nio/ByteBuffer;
    goto :goto_1

    .line 2352
    .end local v7    # "i":I
    .end local v17    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_1
    move-object/from16 v11, p1

    move-object/from16 v17, v1

    .line 2373
    .end local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v17    # "icdPacket":Ljava/nio/ByteBuffer;
    :goto_1
    return-void
.end method
