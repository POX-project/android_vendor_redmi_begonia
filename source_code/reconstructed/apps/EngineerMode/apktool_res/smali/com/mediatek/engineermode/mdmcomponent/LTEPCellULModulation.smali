.class Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ModulationTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field grantValidAddrs:[I

.field modIndexAddrs:[I

.field modTypeAddrs:[I

.field scellIndexAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 317
    const-string v0, "type_icd_record"

    const-string v1, "700A"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 341
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 322
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->modTypeAddrs:[I

    .line 324
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->modIndexAddrs:[I

    .line 326
    const/4 v1, 0x4

    new-array v1, v1, [I

    fill-array-data v1, :array_2

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->scellIndexAddrs:[I

    .line 328
    new-array v0, v0, [I

    fill-array-data v0, :array_3

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->grantValidAddrs:[I

    .line 330
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->ModulationTypeMapping:Ljava/util/HashMap;

    .line 342
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x20
        0x16
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x20
        0x1
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x11
        0x3
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

    .line 356
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 351
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 360
    const-string v0, "Modulation Type"

    const-string v1, "Modulation Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 346
    const-string v0, "LTE Primary Cell UL Modulation "

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 365
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 369
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 371
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->scellIndexAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 372
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->scellIndexAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 373
    .local v3, "scellIndex":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->grantValidAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 374
    .local v4, "grantValid":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->modTypeAddrs:[I

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 375
    .local v5, "modType":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->modIndexAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 376
    .local v6, "modIndex":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, " update,name id = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ", version = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", conditions = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", values = "

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 380
    if-nez v3, :cond_0

    const/4 v7, 0x1

    if-ne v4, v7, :cond_0

    .line 381
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->clearData()V

    .line 382
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->ModulationTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->addData(Ljava/lang/String;)V

    .line 383
    new-array v7, v7, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v2

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellULModulation;->addData([Ljava/lang/Object;)V

    .line 385
    :cond_0
    return-void
.end method
