.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field MIMOLayersMapping:Ljava/util/HashMap;
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

.field dlNumsAddrs:[[I

.field ulDciValidAddrs:[I

.field ulNumsAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 3108
    const-string v0, "type_icd_record"

    const-string v1, "9009"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 8
    .param p1, "context"    # Landroid/app/Activity;

    .line 3132
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3113
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->dlDciValidAddrs:[I

    .line 3115
    const/4 v1, 0x4

    new-array v2, v1, [[I

    new-array v3, v0, [I

    fill-array-data v3, :array_1

    const/4 v4, 0x0

    aput-object v3, v2, v4

    new-array v3, v0, [I

    fill-array-data v3, :array_2

    const/4 v5, 0x1

    aput-object v3, v2, v5

    new-array v3, v0, [I

    fill-array-data v3, :array_3

    const/4 v6, 0x2

    aput-object v3, v2, v6

    new-array v3, v0, [I

    fill-array-data v3, :array_4

    const/4 v7, 0x3

    aput-object v3, v2, v7

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->dlNumsAddrs:[[I

    .line 3122
    new-array v2, v0, [I

    fill-array-data v2, :array_5

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->ulDciValidAddrs:[I

    .line 3124
    new-array v1, v1, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_6

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_7

    aput-object v2, v1, v5

    new-array v2, v0, [I

    fill-array-data v2, :array_8

    aput-object v2, v1, v6

    new-array v0, v0, [I

    fill-array-data v0, :array_9

    aput-object v0, v1, v7

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->ulNumsAddrs:[[I

    .line 3135
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->MIMOLayersMapping:Ljava/util/HashMap;

    .line 3133
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x80
        0x0
        0x1
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x80
        0x5e
        0x2
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x80
        0x5e
        0x2
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x80
        0x3e
        0x2
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x80
        0x3e
        0x2
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x20
        0x0
        0x1
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x18
        0x20
        0x47
        0x1
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x18
        0x20
        0x47
        0x1
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x18
        0x20
        0x3d
        0x2
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x18
        0x20
        0x3d
        0x2
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3156
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3151
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 3160
    const-string v0, "DL MIMO Layers"

    const-string v1, "UL MIMO Layers"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3146
    const-string v0, "NR Primary Cell MIMO Layers"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3165
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3169
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 3170
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->dlDciValidAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3172
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->dlDciValidAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 3173
    .local v3, "dlDciValid":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->dlNumsAddrs:[[I

    invoke-virtual {p0, v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 3174
    .local v4, "dlNums":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->ulNumsAddrs:[[I

    invoke-virtual {p0, v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 3175
    .local v5, "ulNums":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->ulDciValidAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 3176
    .local v6, "ulDciValid":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getName()Ljava/lang/String;

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

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", values = "

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3180
    const/4 v7, 0x1

    if-ne v3, v7, :cond_0

    .line 3181
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->MIMOLayersMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v8, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->setData(ILjava/lang/Object;)V

    .line 3183
    :cond_0
    if-ne v6, v7, :cond_1

    .line 3184
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->MIMOLayersMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellULMIMOLayers;->setData(ILjava/lang/Object;)V

    .line 3186
    :cond_1
    return-void
.end method
