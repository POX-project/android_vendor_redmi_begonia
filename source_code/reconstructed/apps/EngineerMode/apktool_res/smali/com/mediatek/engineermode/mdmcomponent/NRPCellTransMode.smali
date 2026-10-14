.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field antTransModeAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2471
    const-string v0, "type_icd_record"

    const-string v1, "9014"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4
    .param p1, "context"    # Landroid/app/Activity;

    .line 2494
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2477
    const/16 v0, 0xd

    new-array v0, v0, [[I

    const/4 v1, 0x4

    new-array v2, v1, [I

    fill-array-data v2, :array_0

    const/4 v3, 0x0

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_1

    const/4 v3, 0x1

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_2

    const/4 v3, 0x2

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_3

    const/4 v3, 0x3

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_4

    aput-object v2, v0, v1

    new-array v2, v1, [I

    fill-array-data v2, :array_5

    const/4 v3, 0x5

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_6

    const/4 v3, 0x6

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_7

    const/4 v3, 0x7

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_8

    const/16 v3, 0x8

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_9

    const/16 v3, 0x9

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_a

    const/16 v3, 0xa

    aput-object v2, v0, v3

    new-array v2, v1, [I

    fill-array-data v2, :array_b

    const/16 v3, 0xb

    aput-object v2, v0, v3

    new-array v1, v1, [I

    fill-array-data v1, :array_c

    const/16 v2, 0xc

    aput-object v1, v0, v2

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->antTransModeAddrs:[[I

    .line 2495
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x338
        0x0
        0x4
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x338
        0x0
        0x4
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x438
        0x0
        0x4
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x438
        0x0
        0x4
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x538
        0x0
        0x4
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x558
        0x0
        0x4
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x558
        0x0
        0x4
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x558
        0x0
        0x4
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x658
        0x0
        0x4
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x658
        0x0
        0x4
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x658
        0x0
        0x4
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x678
        0x0
        0x4
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x678
        0x0
        0x4
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2509
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2504
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 2513
    const-string v0, "Transmission Mode"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2499
    const-string v0, "NR Primary Cell Transmission Mode"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2518
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2522
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 2523
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->antTransModeAddrs:[[I

    const/4 v2, 0x0

    aget-object v1, v1, v2

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2526
    .local v1, "version":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->antTransModeAddrs:[[I

    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v2

    .line 2527
    .local v2, "antTransMode":I
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->icdLogInfo:[Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " update,name id = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ", version = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", values = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "EmInfo/MDMComponent"

    invoke-static {v5, v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2530
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->clearData()V

    .line 2531
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTransMode;->addData(Ljava/lang/String;)V

    .line 2532
    return-void
.end method
