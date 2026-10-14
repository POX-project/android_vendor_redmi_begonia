.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlRlcThputAddrs:[I

.field ulRlcThputAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 3376
    const-string v0, "type_icd_record"

    const-string v1, "90AA"

    const-string v2, "90AB"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 3388
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3382
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->dlRlcThputAddrs:[I

    .line 3384
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->ulRlcThputAddrs:[I

    .line 3389
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3403
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3398
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 3407
    const-string v0, "RLC DL Throughput"

    const-string v1, "RLC UL Throughput"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3393
    const-string v0, "NR Primary Cell RLC Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3412
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3416
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 3418
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "90AA"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "Mbps"

    const v3, 0xf4240

    const-string v4, ", values = "

    const-string v5, ", version = "

    const-string v6, " update,name id = "

    const-string v7, "EmInfo/MDMComponent"

    const/4 v8, 0x0

    if-eqz v1, :cond_0

    .line 3419
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->dlRlcThputAddrs:[I

    aget v1, v1, v8

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3421
    .local v1, "version":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->dlRlcThputAddrs:[I

    invoke-virtual {p0, v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v9

    .line 3422
    .local v9, "dlRlcThput":I
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v10, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3425
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    div-int v3, v9, v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v8, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->setData(ILjava/lang/Object;)V

    .line 3426
    .end local v1    # "version":I
    .end local v9    # "dlRlcThput":I
    goto :goto_0

    .line 3427
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->ulRlcThputAddrs:[I

    aget v1, v1, v8

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3429
    .restart local v1    # "version":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->ulRlcThputAddrs:[I

    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 3430
    .local v8, "ulRlcThput":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v9, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3433
    const/4 v4, 0x1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    div-int v3, v8, v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellRLCThroughput;->setData(ILjava/lang/Object;)V

    .line 3435
    .end local v1    # "version":I
    .end local v8    # "ulRlcThput":I
    :goto_0
    return-void
.end method
