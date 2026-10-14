.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field pucchPowerAddrs:[I

.field puschPowerAddrs:[[I

.field srsPwerAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 2535
    const-string v0, "type_icd_record"

    const-string v1, "9011"

    const-string v2, "900E"

    const-string v3, "9008"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4
    .param p1, "context"    # Landroid/app/Activity;

    .line 2555
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2543
    const/4 v0, 0x4

    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_0

    const/4 v3, 0x0

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_1

    const/4 v3, 0x1

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_2

    const/4 v3, 0x2

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_3

    const/4 v3, 0x3

    aput-object v2, v1, v3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->puschPowerAddrs:[[I

    .line 2550
    new-array v1, v0, [I

    fill-array-data v1, :array_4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->pucchPowerAddrs:[I

    .line 2552
    new-array v0, v0, [I

    fill-array-data v0, :array_5

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->srsPwerAddrs:[I

    .line 2556
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x40
        0x8
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x60
        0x8
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x60
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x60
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x40
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x60
        0x10
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2570
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2565
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 2574
    const-string v0, "PUSCH Tx Power"

    const-string v1, "PUCCH Tx Power"

    const-string v2, "SRS Tx Power"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2560
    const-string v0, "NR Primary Cell Tx Power"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2579
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2583
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 2584
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9011"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ""

    const-string v3, ", values = "

    const-string v4, ", version = "

    const-string v5, " update,name id = "

    const-string v6, "EmInfo/MDMComponent"

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-eqz v1, :cond_0

    .line 2585
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->puschPowerAddrs:[[I

    array-length v9, v1

    sub-int/2addr v9, v8

    aget-object v1, v1, v9

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2587
    .local v1, "version":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->puschPowerAddrs:[[I

    invoke-virtual {p0, v0, v1, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v8

    .line 2588
    .local v8, "puschPower":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v9, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2590
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->setData(ILjava/lang/Object;)V

    .line 2591
    .end local v1    # "version":I
    .end local v8    # "puschPower":I
    goto/16 :goto_0

    :cond_0
    const-string v1, "900E"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2592
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->pucchPowerAddrs:[I

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2594
    .restart local v1    # "version":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->pucchPowerAddrs:[I

    invoke-virtual {p0, v0, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v7

    .line 2595
    .local v7, "pucchPower":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v9, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2597
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v8, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->setData(ILjava/lang/Object;)V

    .line 2598
    .end local v1    # "version":I
    .end local v7    # "pucchPower":I
    goto :goto_0

    .line 2599
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->pucchPowerAddrs:[I

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2601
    .restart local v1    # "version":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->srsPwerAddrs:[I

    invoke-virtual {p0, v0, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v7

    .line 2602
    .local v7, "srsPwer":I
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2604
    const/4 v3, 0x2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxPower;->setData(ILjava/lang/Object;)V

    .line 2606
    .end local v1    # "version":I
    .end local v7    # "srsPwer":I
    :goto_0
    return-void
.end method
