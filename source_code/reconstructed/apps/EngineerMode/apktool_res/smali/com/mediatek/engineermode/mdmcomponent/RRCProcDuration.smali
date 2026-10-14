.class Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field durationAddr:[[I

.field procedureAddr:[[I

.field resumeDuration:[I

.field resumeIndex:I

.field setupDuration:[I

.field setupIndex:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 5629
    const-string v0, "type_icd_event"

    const-string v1, "961B"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 5
    .param p1, "context"    # Landroid/app/Activity;

    .line 5647
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5635
    const/4 v0, 0x1

    new-array v1, v0, [[I

    const/4 v2, 0x3

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->procedureAddr:[[I

    .line 5639
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_1

    aput-object v1, v0, v4

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->durationAddr:[[I

    .line 5643
    const/16 v0, 0xa

    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    .line 5644
    new-array v0, v0, [I

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    .line 5645
    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupIndex:I

    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeIndex:I

    .line 5648
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x0
        0x8
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

    .line 5662
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5657
    const-string v0, "10. Procedure Duration"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 5666
    const-string v0, "Procedure"

    const-string v1, "RRC Setup duration"

    const-string v2, "RRC Resume duration"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5652
    const-string v0, "NR RRC Procedure Duration"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5671
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5675
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 5676
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "961B"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 5677
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->procedureAddr:[[I

    array-length v2, v1

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    aget-object v1, v1, v2

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5678
    .local v1, "version":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->procedureAddr:[[I

    invoke-virtual {p0, v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 5679
    .local v4, "procedure":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->durationAddr:[[I

    invoke-virtual {p0, v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 5680
    .local v5, "duration":I
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " update,name id = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", version = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", condition = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", value = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    .line 5683
    invoke-static {v8}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    invoke-static {v8}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 5680
    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5684
    const-string v6, ""

    const-string v7, "avg"

    if-nez v4, :cond_3

    .line 5685
    iget v8, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupIndex:I

    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    array-length v9, v9

    if-lt v8, v9, :cond_0

    .line 5686
    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupIndex:I

    .line 5688
    :cond_0
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    iget v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupIndex:I

    aput v5, v8, v9

    .line 5689
    add-int/2addr v9, v3

    iput v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupIndex:I

    .line 5690
    const/4 v8, 0x0

    .line 5691
    .local v8, "sum":I
    const/4 v9, 0x0

    .local v9, "i":I
    :goto_0
    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    array-length v11, v10

    if-ge v9, v11, :cond_2

    .line 5692
    aget v11, v10, v9

    if-nez v11, :cond_1

    move-object v10, v6

    goto :goto_1

    :cond_1
    aget v10, v10, v9

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_1
    invoke-virtual {p0, v9, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5693
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {p0, v9, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5694
    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    aget v10, v10, v9

    add-int/2addr v8, v10

    .line 5691
    add-int/lit8 v9, v9, 0x1

    goto :goto_0

    .line 5696
    .end local v9    # "i":I
    :cond_2
    array-length v6, v10

    invoke-virtual {p0, v6, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5697
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setupDuration:[I

    array-length v6, v2

    array-length v2, v2

    div-int v2, v8, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p0, v6, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .end local v8    # "sum":I
    goto :goto_4

    .line 5698
    :cond_3
    if-ne v4, v3, :cond_7

    .line 5699
    iget v8, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeIndex:I

    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    array-length v9, v9

    if-lt v8, v9, :cond_4

    .line 5700
    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeIndex:I

    .line 5702
    :cond_4
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    iget v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeIndex:I

    aput v5, v8, v9

    .line 5703
    add-int/2addr v9, v3

    iput v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeIndex:I

    .line 5704
    const/4 v3, 0x0

    .line 5705
    .local v3, "sum":I
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_2
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    array-length v10, v9

    const/4 v11, 0x2

    if-ge v8, v10, :cond_6

    .line 5706
    aget v10, v9, v8

    if-nez v10, :cond_5

    move-object v9, v6

    goto :goto_3

    :cond_5
    aget v9, v9, v8

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    :goto_3
    invoke-virtual {p0, v8, v11, v9}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5707
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {p0, v8, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5708
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    aget v9, v9, v8

    add-int/2addr v3, v9

    .line 5705
    add-int/lit8 v8, v8, 0x1

    goto :goto_2

    .line 5710
    .end local v8    # "i":I
    :cond_6
    array-length v6, v9

    invoke-virtual {p0, v6, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5711
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->resumeDuration:[I

    array-length v6, v2

    array-length v2, v2

    div-int v2, v3, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p0, v6, v11, v2}, Lcom/mediatek/engineermode/mdmcomponent/RRCProcDuration;->setDataAtPosition(IILjava/lang/Object;)V

    nop

    .line 5714
    .end local v1    # "version":I
    .end local v3    # "sum":I
    .end local v4    # "procedure":I
    .end local v5    # "duration":I
    :cond_7
    :goto_4
    return-void
.end method
