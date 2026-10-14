.class Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field opModeAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 3753
    const-string v0, "type_icd_record"

    const-string v1, "9025"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 3761
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3758
    const/4 v0, 0x3

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->opModeAddrs:[I

    .line 3762
    return-void

    :array_0
    .array-data 4
        0x8
        0x5
        0x2
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3776
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3771
    const-string v0, "9. Tx Antenna Info"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 3780
    const-string v0, "OP Mode"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3766
    const-string v0, "NR Primary Cell TX OP Mode"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3785
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3789
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 3790
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->opModeAddrs:[I

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3793
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->opModeAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 3794
    .local v3, "opMode":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " update,name id = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", version = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", values = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3797
    if-nez v3, :cond_0

    const-string v4, "APT"

    goto :goto_0

    :cond_0
    const/4 v4, 0x1

    if-ne v3, v4, :cond_1

    const-string v4, "DPD"

    goto :goto_0

    :cond_1
    const-string v4, "ET"

    :goto_0
    invoke-virtual {p0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPCellTxOpMode;->setData(ILjava/lang/Object;)V

    .line 3798
    return-void
.end method
