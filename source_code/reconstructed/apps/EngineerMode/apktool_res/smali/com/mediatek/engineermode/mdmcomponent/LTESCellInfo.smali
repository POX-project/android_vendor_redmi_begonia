.class Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field earfcnAddrs:[[I

.field pciAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 813
    const-string v0, "type_icd_record"

    const-string v1, "7001"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 6
    .param p1, "context"    # Landroid/app/Activity;

    .line 831
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 819
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

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->earfcnAddrs:[[I

    .line 825
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_3

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_4

    aput-object v2, v1, v4

    new-array v0, v0, [I

    fill-array-data v0, :array_5

    aput-object v0, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->pciAddrs:[[I

    .line 832
    return-void

    :array_0
    .array-data 4
        0x8
        0x18
        0x10
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x10
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x11
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x0
        0x9
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x0
        0x9
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x0
        0x9
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 846
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 841
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 850
    const-string v0, "EARFCN"

    const-string v1, "PCI"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 836
    const-string v0, "Serving Cell info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 855
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 8
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 859
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 861
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->pciAddrs:[[I

    const/4 v2, 0x0

    aget-object v1, v1, v2

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 863
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->earfcnAddrs:[[I

    invoke-virtual {p0, v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 864
    .local v3, "earfcn":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->pciAddrs:[[I

    invoke-virtual {p0, v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 865
    .local v4, "pci":I
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " update,name id = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ", version = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ", values = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ", "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "EmInfo/MDMComponent"

    invoke-static {v7, v5, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 869
    const-string v5, ""

    if-eqz v3, :cond_0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    goto :goto_0

    :cond_0
    move-object v6, v5

    :goto_0
    invoke-virtual {p0, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->setData(ILjava/lang/Object;)V

    .line 870
    const/4 v2, 0x1

    if-eqz v4, :cond_1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    :cond_1
    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTESCellInfo;->setData(ILjava/lang/Object;)V

    .line 871
    return-void
.end method
