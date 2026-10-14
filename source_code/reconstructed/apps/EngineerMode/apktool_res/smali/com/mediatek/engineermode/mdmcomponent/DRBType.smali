.class Lcom/mediatek/engineermode/mdmcomponent/DRBType;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field cfgRlcEntityAddr:[[I

.field cfgRlcEntityMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 5454
    const-string v0, "type_icd_event"

    const-string v1, "95D4"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 4
    .param p1, "context"    # Landroid/app/Activity;

    .line 5475
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5459
    const/4 v0, 0x3

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

    new-array v1, v1, [I

    fill-array-data v1, :array_2

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->cfgRlcEntityAddr:[[I

    .line 5465
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/DRBType$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/DRBType;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->cfgRlcEntityMapping:Ljava/util/HashMap;

    .line 5476
    return-void

    nop

    :array_0
    .array-data 4
        0x20
        0x20
        0x1b
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x20
        0x20
        0x1b
        0x2
    .end array-data

    :array_2
    .array-data 4
        0x20
        0x20
        0x1b
        0x2
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5490
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5485
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 5494
    const-string v0, "DRB TYPE"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5480
    const-string v0, "DRB Type"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5499
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5503
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 5504
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->cfgRlcEntityAddr:[[I

    array-length v2, v1

    add-int/lit8 v2, v2, -0x1

    aget-object v1, v1, v2

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5505
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->cfgRlcEntityAddr:[[I

    invoke-virtual {p0, v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 5506
    .local v3, "cfgRlcEntity":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " update,name id = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", version = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", value = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5509
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->cfgRlcEntityMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/DRBType;->setData(ILjava/lang/Object;)V

    .line 5510
    return-void
.end method
