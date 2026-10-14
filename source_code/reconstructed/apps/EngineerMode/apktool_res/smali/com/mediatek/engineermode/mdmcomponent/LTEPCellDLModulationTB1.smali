.class Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;
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


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 141
    const-string v0, "type_icd_record"

    const-string v1, "700D"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 165
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 146
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->modTypeAddrs:[I

    .line 148
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->modIndexAddrs:[I

    .line 150
    new-array v0, v0, [I

    fill-array-data v0, :array_2

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->crcResultAddrs:[I

    .line 152
    const/4 v0, 0x4

    new-array v0, v0, [I

    fill-array-data v0, :array_3

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->carrierIndexAddrs:[I

    .line 154
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->ModulationTypeMapping:Ljava/util/HashMap;

    .line 166
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x38
        0x40
        0x44
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x40
        0x14
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x40
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
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 180
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 175
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 184
    const-string v0, "Modulation Type"

    const-string v1, "Modulation Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 170
    const-string v0, "LTE Primary Cell DL Modulation TB1"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 189
    const/4 v0, 0x1

    return v0
.end method

.method public testData()V
    .locals 8

    .line 213
    const/4 v0, 0x1

    .line 214
    .local v0, "crcResult":I
    const/4 v1, 0x0

    .line 215
    .local v1, "carrierIndex":I
    const/4 v2, 0x1

    .line 216
    .local v2, "modType":I
    const/4 v3, 0x2

    .line 217
    .local v3, "modIndex":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " update,name id = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getName()Ljava/lang/String;

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

    .line 220
    if-nez v1, :cond_0

    const/4 v4, 0x1

    if-ne v0, v4, :cond_0

    .line 221
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->clearData()V

    .line 222
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->ModulationTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v5, v2}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->addData(Ljava/lang/String;)V

    .line 223
    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v5

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->addData([Ljava/lang/Object;)V

    .line 225
    :cond_0
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 193
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 195
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->crcResultAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 197
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->crcResultAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 198
    .local v3, "crcResult":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->carrierIndexAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 199
    .local v4, "carrierIndex":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->modTypeAddrs:[I

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 200
    .local v5, "modType":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->modIndexAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 201
    .local v6, "modIndex":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getName()Ljava/lang/String;

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

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", values = "

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 205
    if-nez v4, :cond_0

    const/4 v7, 0x1

    if-ne v3, v7, :cond_0

    .line 206
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->clearData()V

    .line 207
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->ModulationTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->addData(Ljava/lang/String;)V

    .line 208
    new-array v7, v7, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v2

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LTEPCellDLModulationTB1;->addData([Ljava/lang/Object;)V

    .line 210
    :cond_0
    return-void
.end method
