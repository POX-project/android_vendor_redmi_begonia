.class Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field PDCPTpDlddrs:[I

.field PDCPTpUlddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 484
    const-string v0, "type_icd_record"

    const-string v1, "708B"

    const-string v2, "708C"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 496
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 491
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->PDCPTpDlddrs:[I

    .line 493
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->PDCPTpUlddrs:[I

    .line 497
    return-void

    nop

    :array_0
    .array-data 4
        0x20
        0x0
        0x20
    .end array-data

    :array_1
    .array-data 4
        0x20
        0x0
        0x20
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 511
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 506
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 515
    const-string v0, "PDCP DL Throughput"

    const-string v1, "PDCP UL Throughput"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 501
    const-string v0, "LTE PDCP Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 520
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 524
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 526
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "708B"

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

    .line 527
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->PDCPTpDlddrs:[I

    aget v1, v1, v8

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 528
    .local v1, "version":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->PDCPTpDlddrs:[I

    invoke-virtual {p0, v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v9

    .line 529
    .local v9, "PDCPTpDl":I
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->getName()Ljava/lang/String;

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

    .line 532
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    div-int v3, v9, v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v8, v2}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->setData(ILjava/lang/Object;)V

    .line 533
    .end local v1    # "version":I
    .end local v9    # "PDCPTpDl":I
    goto :goto_0

    .line 534
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->PDCPTpUlddrs:[I

    aget v1, v1, v8

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 535
    .restart local v1    # "version":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->PDCPTpUlddrs:[I

    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 536
    .local v8, "PDCPTpUl":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->getName()Ljava/lang/String;

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

    .line 539
    const/4 v4, 0x1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    div-int v3, v8, v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/LTEPDCPThroughput;->setData(ILjava/lang/Object;)V

    .line 541
    .end local v1    # "version":I
    .end local v8    # "PDCPTpUl":I
    :goto_0
    return-void
.end method
