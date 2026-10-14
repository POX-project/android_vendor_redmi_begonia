.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlPhyThput0Addrs:[[I

.field dlPhyThput1Addrs:[[I

.field ulPhyThputAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 3500
    const-string v0, "type_icd_record"

    const-string v1, "9007"

    const-string v2, "9003"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 8
    .param p1, "context"    # Landroid/app/Activity;

    .line 3525
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3506
    const/4 v0, 0x5

    new-array v1, v0, [[I

    const/4 v2, 0x3

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_1

    const/4 v5, 0x1

    aput-object v3, v1, v5

    new-array v3, v2, [I

    fill-array-data v3, :array_2

    const/4 v6, 0x2

    aput-object v3, v1, v6

    new-array v3, v2, [I

    fill-array-data v3, :array_3

    aput-object v3, v1, v2

    new-array v3, v2, [I

    fill-array-data v3, :array_4

    const/4 v7, 0x4

    aput-object v3, v1, v7

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->dlPhyThput0Addrs:[[I

    .line 3514
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_5

    aput-object v1, v0, v4

    new-array v1, v2, [I

    fill-array-data v1, :array_6

    aput-object v1, v0, v5

    new-array v1, v2, [I

    fill-array-data v1, :array_7

    aput-object v1, v0, v6

    new-array v1, v2, [I

    fill-array-data v1, :array_8

    aput-object v1, v0, v2

    new-array v1, v2, [I

    fill-array-data v1, :array_9

    aput-object v1, v0, v7

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->dlPhyThput1Addrs:[[I

    .line 3522
    new-array v0, v2, [I

    fill-array-data v0, :array_a

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->ulPhyThputAddrs:[I

    .line 3526
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x38
        0x20
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x20
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x20
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x20
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x138
        0x20
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x58
        0x20
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x58
        0x20
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x58
        0x20
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x58
        0x20
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x158
        0x20
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x38
        0x20
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3540
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3535
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 3544
    const-string v0, "PHY DL Throughput"

    const-string v1, "PHY UL Throughput"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3530
    const-string v0, "NR Primary Cell PHY Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3549
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3553
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 3555
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9007"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "Mbps"

    const-string v3, ", values = "

    const-string v4, ", version = "

    const-string v5, " update,name id = "

    const-string v6, "EmInfo/MDMComponent"

    const/4 v7, 0x0

    if-eqz v1, :cond_0

    .line 3556
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->dlPhyThput0Addrs:[[I

    aget-object v1, v1, v7

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3558
    .local v1, "version":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->dlPhyThput0Addrs:[[I

    invoke-virtual {p0, v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 3559
    .local v8, "dlPhyThput0":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->dlPhyThput1Addrs:[[I

    invoke-virtual {p0, v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v9

    .line 3560
    .local v9, "dlPhyThput1":I
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v10, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3563
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    add-int v4, v8, v9

    mul-int/lit8 v4, v4, 0x8

    div-int/lit16 v4, v4, 0x3e8

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 3564
    .end local v1    # "version":I
    .end local v8    # "dlPhyThput0":I
    .end local v9    # "dlPhyThput1":I
    goto :goto_0

    .line 3565
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->ulPhyThputAddrs:[I

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3567
    .restart local v1    # "version":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->ulPhyThputAddrs:[I

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v7

    .line 3568
    .local v7, "ulPhyThput":I
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->getName()Ljava/lang/String;

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

    .line 3571
    const/4 v3, 0x1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    mul-int/lit8 v5, v7, 0x8

    div-int/lit16 v5, v5, 0x3e8

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 3573
    .end local v1    # "version":I
    .end local v7    # "ulPhyThput":I
    :goto_0
    return-void
.end method
