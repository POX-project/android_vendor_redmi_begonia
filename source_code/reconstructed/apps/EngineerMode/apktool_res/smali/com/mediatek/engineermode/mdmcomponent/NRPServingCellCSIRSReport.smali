.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field rsrpAddrs:[[I

.field sinrAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 5513
    const-string v0, "type_icd_record"

    const-string v1, "9016"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 5
    .param p1, "context"    # Landroid/app/Activity;

    .line 5528
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5519
    const/4 v0, 0x1

    new-array v1, v0, [[I

    const/4 v2, 0x4

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->rsrpAddrs:[[I

    .line 5523
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_1

    aput-object v1, v0, v4

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->sinrAddrs:[[I

    .line 5529
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x20
        0x10
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x120
        0x8
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5543
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5538
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 5547
    const-string v0, "CSI-RS RSRP"

    const-string v1, "SINR"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5533
    const-string v0, "NR Primary Serving Cell CSI-RS Report"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5552
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 9
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5556
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 5558
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9016"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 5559
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->rsrpAddrs:[[I

    array-length v2, v1

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    aget-object v1, v1, v2

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5560
    .local v1, "version":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->rsrpAddrs:[[I

    invoke-virtual {p0, v0, v1, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v4

    .line 5561
    .local v4, "rsrp":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->sinrAddrs:[[I

    invoke-virtual {p0, v0, v1, v5, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v5

    .line 5562
    .local v5, "sinr":I
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " update,name id = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", version = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", value = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5565
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {p0, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->setData(ILjava/lang/Object;)V

    .line 5566
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellCSIRSReport;->setData(ILjava/lang/Object;)V

    .line 5568
    .end local v1    # "version":I
    .end local v4    # "rsrp":I
    .end local v5    # "sinr":I
    :cond_0
    return-void
.end method
