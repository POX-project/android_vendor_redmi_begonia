.class Lcom/mediatek/engineermode/mdmcomponent/NSA;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field carrIndexAddrs:[[I

.field servCellIndexAddrs:[I

.field statusAddrs:[[I

.field txAntAddrs:[[I

.field txIndex0Addrs:[[I

.field txIndex1Addrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 3802
    const-string v0, "type_icd_record"

    const-string v1, "7017"

    const-string v2, "9013"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 7
    .param p1, "context"    # Landroid/app/Activity;

    .line 3841
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3808
    const/4 v0, 0x3

    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_0

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x4

    new-array v4, v2, [I

    fill-array-data v4, :array_1

    const/4 v5, 0x1

    aput-object v4, v1, v5

    new-array v4, v2, [I

    fill-array-data v4, :array_2

    const/4 v6, 0x2

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->statusAddrs:[[I

    .line 3814
    new-array v1, v0, [[I

    new-array v4, v2, [I

    fill-array-data v4, :array_3

    aput-object v4, v1, v3

    new-array v4, v2, [I

    fill-array-data v4, :array_4

    aput-object v4, v1, v5

    new-array v4, v2, [I

    fill-array-data v4, :array_5

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->carrIndexAddrs:[[I

    .line 3820
    new-array v1, v0, [[I

    new-array v4, v2, [I

    fill-array-data v4, :array_6

    aput-object v4, v1, v3

    new-array v4, v2, [I

    fill-array-data v4, :array_7

    aput-object v4, v1, v5

    new-array v4, v2, [I

    fill-array-data v4, :array_8

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txIndex0Addrs:[[I

    .line 3827
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_9

    aput-object v1, v0, v3

    new-array v1, v2, [I

    fill-array-data v1, :array_a

    aput-object v1, v0, v5

    new-array v1, v2, [I

    fill-array-data v1, :array_b

    aput-object v1, v0, v6

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txIndex1Addrs:[[I

    .line 3833
    new-array v0, v2, [I

    fill-array-data v0, :array_c

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->servCellIndexAddrs:[I

    .line 3835
    new-array v0, v6, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_d

    aput-object v1, v0, v3

    new-array v1, v2, [I

    fill-array-data v1, :array_e

    aput-object v1, v0, v5

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txAntAddrs:[[I

    .line 3842
    return-void

    :array_0
    .array-data 4
        0x8
        0x0
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x0
        0x2
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x0
        0x2
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x0
        0x3
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x2
        0x3
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x2
        0x3
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x3
        0x4
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x18
        0x5
        0x5
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x18
        0x8
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x38
        0x8
        0x4
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x18
        0xa
        0x5
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x18
        0x10
        0x8
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x18
        0x0
        0x3
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x18
        0x3
        0x3
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x18
        0x3
        0x4
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3856
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3851
    const-string v0, "9. Tx Antenna Info"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 3860
    const-string v0, "NR Primary Cell Tx Antenna"

    const-string v1, "LTE Primary Cell Tx Antenna"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3846
    const-string v0, "NSA"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3865
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3869
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 3871
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "9013"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, ", values = "

    const-string v5, ", condition = "

    const-string v6, ", version = "

    const-string v7, " update,name id = "

    const-string v8, "EmInfo/MDMComponent"

    const/4 v9, 0x0

    const/4 v10, 0x1

    if-eqz v3, :cond_6

    .line 3872
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->carrIndexAddrs:[[I

    array-length v11, v3

    sub-int/2addr v11, v10

    aget-object v3, v3, v11

    aget v3, v3, v9

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 3874
    .local v3, "version":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->carrIndexAddrs:[[I

    .line 3875
    array-length v12, v11

    if-ge v3, v12, :cond_0

    move v12, v3

    goto :goto_0

    :cond_0
    array-length v12, v11

    :goto_0
    sub-int/2addr v12, v10

    aget-object v11, v11, v12

    .line 3874
    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v11

    .line 3876
    .local v11, "carrIndex":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txIndex0Addrs:[[I

    .line 3877
    array-length v13, v12

    if-ge v3, v13, :cond_1

    move v13, v3

    goto :goto_1

    :cond_1
    array-length v13, v12

    :goto_1
    sub-int/2addr v13, v10

    aget-object v12, v12, v13

    .line 3876
    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v12

    .line 3879
    .local v12, "txIndex0":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txIndex1Addrs:[[I

    .line 3880
    array-length v14, v13

    if-ge v3, v14, :cond_2

    move v14, v3

    goto :goto_2

    :cond_2
    array-length v14, v13

    :goto_2
    sub-int/2addr v14, v10

    aget-object v13, v13, v14

    .line 3879
    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v13

    .line 3881
    .local v13, "txIndex1":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->statusAddrs:[[I

    .line 3882
    array-length v15, v14

    if-ge v3, v15, :cond_3

    move v15, v3

    goto :goto_3

    :cond_3
    array-length v15, v14

    :goto_3
    sub-int/2addr v15, v10

    aget-object v10, v14, v15

    .line 3881
    invoke-virtual {v0, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v10

    .line 3883
    .local v10, "status":I
    sget-object v14, Lcom/mediatek/engineermode/mdmcomponent/NSA;->icdLogInfo:[Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", "

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v14, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3887
    if-nez v11, :cond_5

    .line 3888
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v5, 0x2

    if-ne v10, v5, :cond_4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, ","

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_4

    :cond_4
    const-string v5, ""

    :goto_4
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v9, 0x0

    invoke-virtual {v0, v9, v4}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->setData(ILjava/lang/Object;)V

    .line 3890
    .end local v3    # "version":I
    .end local v10    # "status":I
    .end local v11    # "carrIndex":I
    .end local v12    # "txIndex0":I
    .end local v13    # "txIndex1":I
    :cond_5
    goto :goto_5

    .line 3891
    :cond_6
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txAntAddrs:[[I

    array-length v11, v3

    sub-int/2addr v11, v10

    aget-object v3, v3, v11

    aget v3, v3, v9

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 3893
    .restart local v3    # "version":I
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->servCellIndexAddrs:[I

    invoke-virtual {v0, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v9

    .line 3894
    .local v9, "servCellIndex":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NSA;->txAntAddrs:[[I

    invoke-virtual {v0, v2, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v11

    .line 3895
    .local v11, "txAnt":I
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/NSA;->icdLogInfo:[Ljava/lang/String;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->getName()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v12, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3899
    if-nez v9, :cond_7

    .line 3900
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v10, v4}, Lcom/mediatek/engineermode/mdmcomponent/NSA;->setData(ILjava/lang/Object;)V

    .line 3903
    .end local v3    # "version":I
    .end local v9    # "servCellIndex":I
    .end local v11    # "txAnt":I
    :cond_7
    :goto_5
    return-void
.end method
