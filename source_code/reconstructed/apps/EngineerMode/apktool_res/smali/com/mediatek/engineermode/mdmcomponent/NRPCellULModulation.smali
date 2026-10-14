.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;
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

.field ulDciValidAddrs:[I

.field ulMcsIndexAddrs:[[I

.field ulMcsTypeAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 3035
    const-string v0, "type_icd_record"

    const-string v1, "9009"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4
    .param p1, "context"    # Landroid/app/Activity;

    .line 3062
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3040
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulMcsTypeAddrs:[I

    .line 3042
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

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulMcsIndexAddrs:[[I

    .line 3049
    new-array v0, v0, [I

    fill-array-data v0, :array_5

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulDciValidAddrs:[I

    .line 3051
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->MCSTypeMapping:Ljava/util/HashMap;

    .line 3063
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x20
        0x25
        0x3
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x20
        0x28
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x20
        0x28
        0x5
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x20
        0x28
        0x5
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x20
        0x28
        0x5
    .end array-data

    :array_5
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

    .line 3077
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3072
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 3081
    const-string v0, "Modulation Type"

    const-string v1, "Modulation Index"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3067
    const-string v0, "NR Primary Cell UL Modulation"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3086
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 10
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3090
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 3091
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulMcsIndexAddrs:[[I

    array-length v2, v1

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    aget-object v1, v1, v2

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3094
    .local v1, "version":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulMcsIndexAddrs:[[I

    invoke-virtual {p0, v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 3095
    .local v4, "ulMcsIndex":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulMcsTypeAddrs:[I

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 3096
    .local v5, "ulMcsType":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->ulDciValidAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 3097
    .local v6, "ulDciValid":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->getName()Ljava/lang/String;

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

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", values = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3101
    if-ne v6, v3, :cond_0

    .line 3102
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->clearData()V

    .line 3103
    const/4 v7, 0x2

    new-array v7, v7, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->MCSTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v7, v3

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULModulation;->addData([Ljava/lang/Object;)V

    .line 3105
    :cond_0
    return-void
.end method
