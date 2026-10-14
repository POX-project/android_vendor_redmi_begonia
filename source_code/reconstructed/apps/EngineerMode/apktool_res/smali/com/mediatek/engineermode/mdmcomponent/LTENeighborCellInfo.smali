.class Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field earfcnAddrs:[[I

.field pciAddrs:[[I

.field recordsAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 875
    const-string v0, "type_icd_record"

    const-string v1, "7002"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 7
    .param p1, "context"    # Landroid/app/Activity;

    .line 900
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 881
    const/4 v0, 0x3

    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_0

    const/4 v3, 0x0

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_1

    const/4 v4, 0x1

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_2

    const/4 v5, 0x2

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->earfcnAddrs:[[I

    .line 887
    new-array v1, v0, [[I

    const/4 v2, 0x5

    new-array v6, v2, [I

    fill-array-data v6, :array_3

    aput-object v6, v1, v3

    new-array v6, v2, [I

    fill-array-data v6, :array_4

    aput-object v6, v1, v4

    new-array v2, v2, [I

    fill-array-data v2, :array_5

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->pciAddrs:[[I

    .line 893
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_6

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_7

    aput-object v2, v1, v4

    new-array v0, v0, [I

    fill-array-data v0, :array_8

    aput-object v0, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->recordsAddrs:[[I

    .line 901
    return-void

    :array_0
    .array-data 4
        0x8
        0x0
        0x10
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x0
        0x11
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x0
        0x11
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0x9
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0x9
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0x9
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x18
        0x5
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x18
        0x5
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x18
        0x5
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 915
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 910
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 919
    const-string v0, "EARFCN"

    const-string v1, "PCI"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 905
    const-string v0, "Neighbor Cell info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 924
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 9
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 928
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 930
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->pciAddrs:[[I

    const/4 v2, 0x0

    aget-object v1, v1, v2

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 932
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->earfcnAddrs:[[I

    invoke-virtual {p0, v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 933
    .local v3, "earfcn":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->pciAddrs:[[I

    invoke-virtual {p0, v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 934
    .local v4, "pci":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->recordsAddrs:[[I

    invoke-virtual {p0, v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 935
    .local v5, "records":I
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " update,name id = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", version = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", condition = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", values = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 940
    const-string v6, ""

    if-eqz v3, :cond_0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    goto :goto_0

    :cond_0
    move-object v7, v6

    :goto_0
    invoke-virtual {p0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->setData(ILjava/lang/Object;)V

    .line 941
    const/4 v2, 0x1

    if-eqz v5, :cond_1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    :cond_1
    invoke-virtual {p0, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTENeighborCellInfo;->setData(ILjava/lang/Object;)V

    .line 942
    return-void
.end method
