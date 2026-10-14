.class Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field MACTpDlddrs:[I

.field MACTpUlddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 604
    const-string v0, "type_icd_record"

    const-string v1, "7080"

    const-string v2, "7081"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 616
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 611
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->MACTpDlddrs:[I

    .line 613
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->MACTpUlddrs:[I

    .line 617
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 631
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 626
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 635
    const-string v0, "MAC DL Throughput"

    const-string v1, "MAC UL Throughput"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 621
    const-string v0, "LTE MAC Throughput"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 640
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 644
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 646
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "7080"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "Mbps"

    const v3, 0xf4240

    const-string v4, ", values = "

    const-string v5, ", version = "

    const-string v6, " update,name id = "

    const-string v7, "EmInfo/MDMComponent"

    const/4 v8, 0x0

    if-eqz v1, :cond_0

    .line 647
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->MACTpDlddrs:[I

    aget v1, v1, v8

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 648
    .local v1, "version":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->MACTpDlddrs:[I

    invoke-virtual {p0, v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v9

    .line 649
    .local v9, "MACTpDl":I
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v10, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 652
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    div-int v3, v9, v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v8, v2}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->setData(ILjava/lang/Object;)V

    .line 653
    .end local v1    # "version":I
    .end local v9    # "MACTpDl":I
    goto :goto_0

    .line 654
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->MACTpUlddrs:[I

    aget v1, v1, v8

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 655
    .restart local v1    # "version":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->MACTpUlddrs:[I

    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 656
    .local v8, "MACTpUl":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v9, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 659
    const/4 v4, 0x1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    div-int v3, v8, v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v4, v2}, Lcom/mediatek/engineermode/mdmcomponent/LTEMACThroughput;->setData(ILjava/lang/Object;)V

    .line 661
    .end local v1    # "version":I
    .end local v8    # "MACTpUl":I
    :goto_0
    return-void
.end method
