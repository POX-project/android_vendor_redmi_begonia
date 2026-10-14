.class Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlFreBandAddr:[[I

.field dlNrarfcnAddr:[[I

.field dssEnabledAddr:[[I

.field icdLogInfo:[Ljava/lang/String;

.field phyCellIdAddr:[[I

.field rlfCauseAddr:[[I

.field rlfCauseMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field scgFailCauseAddr:[[I

.field scgFailCauseMapping:Ljava/util/HashMap;
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
    .locals 4

    .line 5339
    const-string v0, "type_icd_event"

    const-string v1, "9600"

    const-string v2, "960F"

    const-string v3, "9613"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 6
    .param p1, "context"    # Landroid/app/Activity;

    .line 5395
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5345
    const/16 v0, 0x8

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->icdLogInfo:[Ljava/lang/String;

    .line 5347
    const/4 v0, 0x1

    new-array v1, v0, [[I

    const/4 v2, 0x3

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->rlfCauseAddr:[[I

    .line 5351
    new-array v1, v2, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_1

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_2

    aput-object v3, v1, v0

    new-array v3, v2, [I

    fill-array-data v3, :array_3

    const/4 v5, 0x2

    aput-object v3, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->scgFailCauseAddr:[[I

    .line 5357
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_4

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dssEnabledAddr:[[I

    .line 5361
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_5

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dlFreBandAddr:[[I

    .line 5365
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dlNrarfcnAddr:[[I

    .line 5369
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_7

    aput-object v1, v0, v4

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->phyCellIdAddr:[[I

    .line 5373
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->rlfCauseMapping:Ljava/util/HashMap;

    .line 5382
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->scgFailCauseMapping:Ljava/util/HashMap;

    .line 5396
    return-void

    :array_0
    .array-data 4
        0x8
        0x8
        0x8
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x8
        0x8
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x8
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x8
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x48
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x8
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x38
        0x10
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5410
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5405
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 5414
    const-string v0, "RLF Cause"

    const-string v1, "SCG Failure Cause"

    const-string v2, "DSS_STATUS"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5400
    const-string v0, "Other RRC information"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5419
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5423
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 5424
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9600"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ", version = "

    const-string v3, " update,name id = "

    const-string v4, "EmInfo/MDMComponent"

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-eqz v1, :cond_0

    .line 5425
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->rlfCauseAddr:[[I

    array-length v7, v1

    sub-int/2addr v7, v6

    aget-object v1, v1, v7

    aget v1, v1, v5

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5426
    .local v1, "version":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->rlfCauseAddr:[[I

    invoke-virtual {p0, v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 5427
    .local v6, "rlfCause":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", value = "

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5430
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->rlfCauseMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v5, v2}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->setData(ILjava/lang/Object;)V

    .line 5431
    .end local v1    # "version":I
    .end local v6    # "rlfCause":I
    goto/16 :goto_2

    :cond_0
    const-string v1, "960F"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v7, ", values = "

    if-eqz v1, :cond_1

    .line 5432
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->scgFailCauseAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v5

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5433
    .restart local v1    # "version":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->scgFailCauseAddr:[[I

    invoke-virtual {p0, v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 5434
    .local v5, "scgFailCause":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5437
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->scgFailCauseMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->setData(ILjava/lang/Object;)V

    .end local v1    # "version":I
    .end local v5    # "scgFailCause":I
    goto/16 :goto_1

    .line 5438
    :cond_1
    const-string v1, "9613"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 5439
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dlFreBandAddr:[[I

    array-length v8, v1

    sub-int/2addr v8, v6

    aget-object v1, v1, v8

    aget v1, v1, v5

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 5440
    .restart local v1    # "version":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dlFreBandAddr:[[I

    invoke-virtual {p0, v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 5441
    .local v5, "dlFreBand":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dlNrarfcnAddr:[[I

    invoke-virtual {p0, v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 5442
    .local v6, "dlNrarfcn":I
    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->phyCellIdAddr:[[I

    invoke-virtual {p0, v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 5443
    .local v8, "phyCellId":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->dssEnabledAddr:[[I

    invoke-virtual {p0, v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v9

    .line 5445
    .local v9, "dssEnabled":I
    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", conditions = "

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v10, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5449
    const/4 v3, 0x2

    if-nez v9, :cond_2

    const-string v2, "Disable"

    goto :goto_0

    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Enable, "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_0
    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/oRfcInfo;->setData(ILjava/lang/Object;)V

    goto :goto_2

    .line 5438
    .end local v1    # "version":I
    .end local v5    # "dlFreBand":I
    .end local v6    # "dlNrarfcn":I
    .end local v8    # "phyCellId":I
    .end local v9    # "dssEnabled":I
    :cond_3
    :goto_1
    nop

    .line 5451
    :goto_2
    return-void
.end method
