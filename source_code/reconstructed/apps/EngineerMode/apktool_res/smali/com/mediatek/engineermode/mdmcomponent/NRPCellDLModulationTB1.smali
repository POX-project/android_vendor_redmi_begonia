.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field MCSTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field dlDciValidAddrs:[I

.field dlMcsIndexAddrs:[[I

.field dlMcsTypeAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2889
    const-string v0, "type_icd_record"

    const-string v1, "9009"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4
    .param p1, "context"    # Landroid/app/Activity;

    .line 2915
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2894
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlMcsTypeAddrs:[I

    .line 2896
    const/4 v1, 0x4

    new-array v1, v1, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_1

    const/4 v3, 0x0

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_3

    const/4 v3, 0x2

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_4

    const/4 v3, 0x3

    aput-object v2, v1, v3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlMcsIndexAddrs:[[I

    .line 2903
    new-array v0, v0, [I

    fill-array-data v0, :array_5

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlDciValidAddrs:[I

    .line 2905
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->MCSTypeMapping:Ljava/util/HashMap;

    .line 2916
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x80
        0x28
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x80
        0x60
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x80
        0x60
        0x5
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x80
        0x4c
        0x5
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x80
        0x4c
        0x5
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x80
        0x0
        0x1
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2930
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2925
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 2934
    const-string v0, "Modulation Type"

    const-string v1, "Modulation Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2920
    const-string v0, "NR Primary Cell DL Modulation TB1"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2939
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 9
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2943
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 2944
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlMcsIndexAddrs:[[I

    const/4 v2, 0x0

    aget-object v1, v1, v2

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2947
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlMcsIndexAddrs:[[I

    invoke-virtual {p0, v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 2948
    .local v3, "dlMcsIndex":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlMcsTypeAddrs:[I

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 2949
    .local v4, "dlMcsType":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->dlDciValidAddrs:[I

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 2950
    .local v5, "dlDciValid":I
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " update,name id = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", version = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", conditions = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", values = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2954
    const/4 v6, 0x1

    if-ne v5, v6, :cond_0

    .line 2955
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->clearData()V

    .line 2956
    const/4 v7, 0x2

    new-array v7, v7, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->MCSTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v8, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v7, v6

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellDLModulationTB1;->addData([Ljava/lang/Object;)V

    .line 2958
    :cond_0
    return-void
.end method
