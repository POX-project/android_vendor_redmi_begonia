.class Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field PHYTpAddrs:[I

.field dlPHYTp0:I

.field dlPHYTp1:I

.field sCellIndexAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 664
    const-string v0, "type_icd_record"

    const-string v1, "7007"

    const-string v2, "7008"

    const-string v3, "7003"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 679
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 672
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->PHYTpAddrs:[I

    .line 674
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->sCellIndexAddrs:[I

    .line 675
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp0:I

    .line 676
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp1:I

    .line 680
    return-void

    :array_0
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data

    :array_1
    .array-data 4
        0x8
        0xe
        0x3
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 694
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 689
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 698
    const-string v0, "PHY DL Throughput"

    const-string v1, "PHY UL Throughput"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 684
    const-string v0, "LTE Primary Cell PHY Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 703
    const/4 v0, 0x1

    return v0
.end method

.method public testData()V
    .locals 6

    .line 731
    const v0, 0x30d40

    .line 732
    .local v0, "PHYTp":I
    const/4 v1, 0x0

    .line 733
    .local v1, "sCellIndex":I
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " update,name id = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", condition = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", values = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmInfo/MDMComponent"

    invoke-static {v4, v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 736
    if-nez v1, :cond_0

    .line 737
    const/4 v2, 0x0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const v4, 0xf4240

    div-int v5, v0, v4

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "Mbps"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 738
    const/4 v2, 0x1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    div-int v4, v0, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 740
    :cond_0
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 10
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 707
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 709
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->PHYTpAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 711
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->PHYTpAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 712
    .local v3, "PHYTp":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->sCellIndexAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 713
    .local v4, "sCellIndex":I
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " update,name id = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ", version = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ", condition = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ", values = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "EmInfo/MDMComponent"

    invoke-static {v7, v5, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 717
    if-nez v4, :cond_2

    .line 718
    const-string v5, "7003"

    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const-string v6, "Mbps"

    const v7, 0xf4240

    if-eqz v5, :cond_0

    .line 719
    const/4 v2, 0x1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    div-int v7, v3, v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->setData(ILjava/lang/Object;)V

    goto :goto_0

    .line 720
    :cond_0
    const-string v5, "7007"

    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 721
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp0:I

    .line 722
    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp1:I

    goto :goto_0

    .line 724
    :cond_1
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp1:I

    .line 725
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp0:I

    iget v9, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->dlPHYTp1:I

    add-int/2addr v8, v9

    div-int/2addr v8, v7

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 728
    :cond_2
    :goto_0
    return-void
.end method
