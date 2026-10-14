.class Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;
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

.field carrierIndexAddrs:[I

.field crcResultAddrs:[I

.field modIndexAddrs:[I

.field modTypeAddrs:[I

.field streamNumAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 228
    const-string v0, "type_icd_record"

    const-string v1, "700D"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 254
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 233
    const/4 v0, 0x6

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->modTypeAddrs:[I

    .line 235
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->modIndexAddrs:[I

    .line 237
    new-array v0, v0, [I

    fill-array-data v0, :array_2

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->crcResultAddrs:[I

    .line 239
    const/4 v0, 0x4

    new-array v1, v0, [I

    fill-array-data v1, :array_3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->carrierIndexAddrs:[I

    .line 241
    new-array v0, v0, [I

    fill-array-data v0, :array_4

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->streamNumAddrs:[I

    .line 243
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->ModulationTypeMapping:Ljava/util/HashMap;

    .line 255
    return-void

    :array_0
    .array-data 4
        0x8
        0x38
        0x40
        0x60
        0x44
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x40
        0x60
        0x14
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x40
        0x60
        0x0
        0x1
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0xe
        0x3
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x38
        0x3e
        0x2
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 269
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 264
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 273
    const-string v0, "Modulation Type"

    const-string v1, "Modulation Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 259
    const-string v0, "LTE Primary Cell DL Modulation TB2"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 278
    const/4 v0, 0x1

    return v0
.end method

.method public testData()V
    .locals 8

    .line 302
    const/4 v0, 0x1

    .line 303
    .local v0, "crcResult":I
    const/4 v1, 0x0

    .line 304
    .local v1, "carrierIndex":I
    const/4 v2, 0x3

    .line 305
    .local v2, "modType":I
    const/4 v3, 0x2

    .line 306
    .local v3, "modIndex":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " update,name id = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", conditions = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ", values = "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 309
    if-nez v1, :cond_0

    const/4 v4, 0x1

    if-ne v0, v4, :cond_0

    .line 310
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->clearData()V

    .line 311
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->ModulationTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v5, v2}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->addData(Ljava/lang/String;)V

    .line 312
    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v5

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->addData([Ljava/lang/Object;)V

    .line 314
    :cond_0
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 282
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 284
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->crcResultAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 285
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->streamNumAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 286
    .local v3, "streamNums":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->crcResultAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 287
    .local v4, "crcResult":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->carrierIndexAddrs:[I

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 288
    .local v5, "carrierIndex":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->modTypeAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 289
    .local v6, "modType":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->modIndexAddrs:[I

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v7

    .line 290
    .local v7, "modIndex":I
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, " update,name id = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, ", version = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", conditions = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, ", values = "

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 294
    const/4 v8, 0x1

    if-le v3, v8, :cond_0

    if-ne v5, v8, :cond_0

    if-ne v4, v8, :cond_0

    .line 295
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->clearData()V

    .line 296
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->ModulationTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->addData(Ljava/lang/String;)V

    .line 297
    new-array v8, v8, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v2

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB2;->addData([Ljava/lang/Object;)V

    .line 299
    :cond_0
    return-void
.end method
