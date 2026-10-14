.class Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlPHYTp0:I

.field dlPHYTp1:I

.field sCellIndexAddrs:[I

.field thputAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 743
    const-string v0, "type_icd_record"

    const-string v1, "7007"

    const-string v2, "7008"

    const-string v3, "7003"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 760
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 752
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->thputAddrs:[I

    .line 756
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->sCellIndexAddrs:[I

    .line 757
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->dlPHYTp0:I

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->dlPHYTp1:I

    .line 761
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

    .line 775
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 770
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 779
    const-string v0, "Cell index"

    const-string v1, "PHY DL Throughput"

    const-string v2, "PHY UL Throughput"

    filled-new-array {v0, v1, v0, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 765
    const-string v0, "LTE Secondary Cell PHY Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 785
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 10
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 789
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 791
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->thputAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 793
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->thputAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 794
    .local v3, "PHYTp":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->sCellIndexAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 795
    .local v4, "sCellIndex":I
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->getName()Ljava/lang/String;

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

    .line 798
    if-nez v4, :cond_0

    return-void

    .line 799
    :cond_0
    const-string v5, "7003"

    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const-string v6, "Mbps"

    const v7, 0xf4240

    if-eqz v5, :cond_1

    .line 800
    const/4 v2, 0x2

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 801
    const/4 v2, 0x3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    div-int v7, v3, v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->setData(ILjava/lang/Object;)V

    goto :goto_0

    .line 802
    :cond_1
    const-string v5, "7007"

    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 803
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->dlPHYTp0:I

    goto :goto_0

    .line 805
    :cond_2
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->dlPHYTp1:I

    .line 806
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 807
    const/4 v2, 0x1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->dlPHYTp0:I

    iget v9, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->dlPHYTp1:I

    add-int/2addr v8, v9

    div-int/2addr v8, v7

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellPHYThroughput;->setData(ILjava/lang/Object;)V

    .line 809
    :goto_0
    return-void
.end method
