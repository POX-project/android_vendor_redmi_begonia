.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlNumRbAddrs:[I

.field dlValidAddrs:[I

.field ulNumRbAddrs:[I

.field ulValidAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2407
    const-string v0, "type_icd_record"

    const-string v1, "9009"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 2422
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2413
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->dlNumRbAddrs:[I

    .line 2415
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->dlValidAddrs:[I

    .line 2417
    new-array v1, v0, [I

    fill-array-data v1, :array_2

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->ulNumRbAddrs:[I

    .line 2419
    new-array v0, v0, [I

    fill-array-data v0, :array_3

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->ulValidAddrs:[I

    .line 2423
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x80
        0xc
        0x9
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x80
        0x0
        0x1
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x20
        0xc
        0x9
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x20
        0x0
        0x1
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2437
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2432
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 2441
    const-string v0, "DL Resource Block"

    const-string v1, "UL Resource Block"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2427
    const-string v0, "NR Primary Cell Resource Block"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2446
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2450
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 2451
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->dlNumRbAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2454
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->dlNumRbAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 2455
    .local v3, "dlNumRb":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->dlValidAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 2456
    .local v4, "dlValid":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->ulNumRbAddrs:[I

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 2457
    .local v5, "ulNumRb":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->ulValidAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 2458
    .local v6, "ulValid":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, " update,name id = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ", version = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", condition = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", values = "

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2462
    const-string v7, ""

    const/4 v8, 0x1

    if-ne v4, v8, :cond_0

    .line 2463
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->setData(ILjava/lang/Object;)V

    .line 2465
    :cond_0
    if-ne v6, v8, :cond_1

    .line 2466
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v8, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellResourceBlock;->setData(ILjava/lang/Object;)V

    .line 2468
    :cond_1
    return-void
.end method
