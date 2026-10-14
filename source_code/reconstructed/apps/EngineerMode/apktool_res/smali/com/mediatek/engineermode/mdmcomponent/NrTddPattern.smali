.class Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlSlotNum1Addrs:[I

.field dlSlotNumAddrs:[I

.field dlSymbolNum1Addrs:[I

.field dlSymbolNumAddrs:[I

.field transPeriod1Addrs:[I

.field transPeriodAddrs:[I

.field ulSlotNum1Addrs:[I

.field ulSlotNumAddrs:[I

.field ulSymbolNum1Addrs:[I

.field ulSymbolNumAddrs:[I

.field valid1Addrs:[I

.field validAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 4740
    const-string v0, "type_icd_record"

    const-string v1, "9014"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 4770
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4745
    const/4 v0, 0x4

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->validAddrs:[I

    .line 4747
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->transPeriodAddrs:[I

    .line 4749
    new-array v1, v0, [I

    fill-array-data v1, :array_2

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSlotNumAddrs:[I

    .line 4751
    new-array v1, v0, [I

    fill-array-data v1, :array_3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSlotNumAddrs:[I

    .line 4753
    new-array v1, v0, [I

    fill-array-data v1, :array_4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSymbolNumAddrs:[I

    .line 4755
    new-array v0, v0, [I

    fill-array-data v0, :array_5

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSymbolNumAddrs:[I

    .line 4757
    const/4 v0, 0x5

    new-array v1, v0, [I

    fill-array-data v1, :array_6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->valid1Addrs:[I

    .line 4759
    new-array v1, v0, [I

    fill-array-data v1, :array_7

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->transPeriod1Addrs:[I

    .line 4761
    new-array v1, v0, [I

    fill-array-data v1, :array_8

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSlotNum1Addrs:[I

    .line 4763
    new-array v1, v0, [I

    fill-array-data v1, :array_9

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSlotNum1Addrs:[I

    .line 4765
    new-array v1, v0, [I

    fill-array-data v1, :array_a

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSymbolNum1Addrs:[I

    .line 4767
    new-array v0, v0, [I

    fill-array-data v0, :array_b

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSymbolNum1Addrs:[I

    .line 4771
    return-void

    :array_0
    .array-data 4
        0x8
        0x38
        0x0
        0x1
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x1
        0x4
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x5
        0x9
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0xe
        0x9
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x38
        0x17
        0x4
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x38
        0x1b
        0x4
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x40
        0x0
        0x1
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x38
        0x40
        0x1
        0x4
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x38
        0x40
        0x5
        0x9
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x38
        0x40
        0xe
        0x9
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x38
        0x40
        0x17
        0x4
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x38
        0x40
        0x1b
        0x4
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4785
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4780
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 10

    .line 4789
    const-string v0, "Transmission Period 1"

    const-string v1, "DL slots 1"

    const-string v2, "UL slots 1"

    const-string v3, "DL symbols 1"

    const-string v4, "UL symbols 1"

    const-string v5, "Transmission Period 2"

    const-string v6, "DL slots 2"

    const-string v7, "UL slots 2"

    const-string v8, "DL symbols 2"

    const-string v9, "UL symbols 2"

    filled-new-array/range {v0 .. v9}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4775
    const-string v0, "NR TDD UL/DL Pattern "

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4796
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 18
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4800
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 4801
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->validAddrs:[I

    const/4 v3, 0x0

    aget v2, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 4802
    .local v2, "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->validAddrs:[I

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 4803
    .local v4, "valid":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->transPeriodAddrs:[I

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 4804
    .local v5, "transPeriod":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSlotNumAddrs:[I

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 4805
    .local v6, "dlSlotNum":I
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSlotNumAddrs:[I

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v7

    .line 4806
    .local v7, "ulSlotNum":I
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSymbolNumAddrs:[I

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 4807
    .local v8, "dlSymbolNum":I
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSymbolNumAddrs:[I

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v9

    .line 4808
    .local v9, "ulSymbolNum":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->valid1Addrs:[I

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v10

    .line 4809
    .local v10, "valid1":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->transPeriod1Addrs:[I

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v11

    .line 4810
    .local v11, "transPeriod1":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSlotNum1Addrs:[I

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v12

    .line 4811
    .local v12, "dlSlotNum1":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSlotNum1Addrs:[I

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v13

    .line 4812
    .local v13, "ulSlotNum1":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->dlSymbolNum1Addrs:[I

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v14

    .line 4813
    .local v14, "dlSymbolNum1":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->ulSymbolNum1Addrs:[I

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v15

    .line 4814
    .local v15, "ulSymbolNum1":I
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->icdLogInfo:[Ljava/lang/String;

    move-object/from16 v16, v1

    .end local v1    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v16, "icdPacket":Ljava/nio/ByteBuffer;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v17, v10

    .end local v10    # "valid1":I
    .local v17, "valid1":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, " update,name id = "

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v10, p1

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, ", version = "

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", values = "

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", "

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4819
    const-string v1, "Invlid"

    if-nez v4, :cond_0

    move-object v3, v1

    goto :goto_0

    :cond_0
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    :goto_0
    const/4 v10, 0x0

    invoke-virtual {v0, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4820
    const/4 v3, 0x1

    if-nez v4, :cond_1

    move-object v10, v1

    goto :goto_1

    :cond_1
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_1
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4821
    const/4 v3, 0x2

    if-nez v4, :cond_2

    move-object v10, v1

    goto :goto_2

    :cond_2
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_2
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4822
    const/4 v3, 0x3

    if-nez v4, :cond_3

    move-object v10, v1

    goto :goto_3

    :cond_3
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_3
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4823
    const/4 v3, 0x4

    if-nez v4, :cond_4

    move-object v10, v1

    goto :goto_4

    :cond_4
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_4
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4824
    const/4 v3, 0x5

    if-nez v17, :cond_5

    move-object v10, v1

    goto :goto_5

    :cond_5
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_5
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4825
    const/4 v3, 0x6

    if-nez v17, :cond_6

    move-object v10, v1

    goto :goto_6

    :cond_6
    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_6
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4826
    const/4 v3, 0x7

    if-nez v17, :cond_7

    move-object v10, v1

    goto :goto_7

    :cond_7
    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_7
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4827
    const/16 v3, 0x8

    if-nez v17, :cond_8

    move-object v10, v1

    goto :goto_8

    :cond_8
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    :goto_8
    invoke-virtual {v0, v3, v10}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4828
    const/16 v3, 0x9

    if-nez v17, :cond_9

    goto :goto_9

    :cond_9
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    :goto_9
    invoke-virtual {v0, v3, v1}, Lcom/mediatek/engineermode/mdmcomponent/NrTddPattern;->setData(ILjava/lang/Object;)V

    .line 4829
    return-void
.end method
