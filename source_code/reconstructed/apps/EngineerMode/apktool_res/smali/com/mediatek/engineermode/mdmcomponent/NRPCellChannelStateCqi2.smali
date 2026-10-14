.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field cqi2Addrs:[I

.field cqi2ValidAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2777
    const-string v0, "type_icd_record"

    const-string v1, "9015"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 2788
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2783
    const/4 v0, 0x4

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->cqi2Addrs:[I

    .line 2785
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->cqi2ValidAddrs:[I

    .line 2789
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x21
        0x4
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x20
        0x1
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2803
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2798
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 2807
    const-string v0, "CQI2"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2793
    const-string v0, "NR Primary Cell Channel State Info - CQI2"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2812
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2816
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 2817
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->cqi2Addrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 2820
    .local v1, "version":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->cqi2Addrs:[I

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v2

    .line 2821
    .local v2, "cqi2":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->cqi2ValidAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 2822
    .local v3, "cqi2Valid":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " update,name id = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", version = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", condition = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", values = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2826
    const/4 v4, 0x1

    if-ne v3, v4, :cond_0

    .line 2827
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->clearData()V

    .line 2828
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellChannelStateCqi2;->addData(Ljava/lang/String;)V

    .line 2830
    :cond_0
    return-void
.end method
