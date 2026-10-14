.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field carTypeAddrs:[I

.field recordLength:[I

.field recordNumAddrs:[[I

.field rsrqRx0Addrs:[[I

.field rsrqRx1Addrs:[[I

.field rsrqRx2Addrs:[[I

.field rsrqRx3Addrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 1962
    const-string v0, "type_icd_record"

    const-string v1, "9001"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1971
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1967
    const/4 v0, 0x3

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->carTypeAddrs:[I

    .line 1972
    return-void

    :array_0
    .array-data 4
        0x8
        0xa
        0x3
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1986
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1981
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 1990
    const-string v0, "SSB - RSRQ RX0"

    const-string v1, "SSB - RSRQ RX1"

    const-string v2, "SSB - RSRQ RX2"

    const-string v3, "SSB - RSRQ RX3"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1976
    const-string v0, "NR Primary Serving Cell RSRQ RX 0/1/2/3"

    return-object v0
.end method

.method initValue()V
    .locals 7

    .line 2001
    const/4 v0, 0x3

    new-array v1, v0, [[I

    const/4 v2, 0x4

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_1

    const/4 v5, 0x1

    aput-object v3, v1, v5

    new-array v3, v2, [I

    fill-array-data v3, :array_2

    const/4 v6, 0x2

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx0Addrs:[[I

    .line 2007
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_3

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_4

    aput-object v3, v1, v5

    new-array v3, v2, [I

    fill-array-data v3, :array_5

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx1Addrs:[[I

    .line 2013
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_7

    aput-object v3, v1, v5

    new-array v3, v4, [I

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx2Addrs:[[I

    .line 2019
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_8

    aput-object v3, v1, v4

    new-array v2, v2, [I

    fill-array-data v2, :array_9

    aput-object v2, v1, v5

    new-array v2, v4, [I

    aput-object v2, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx3Addrs:[[I

    .line 2025
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_a

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_b

    aput-object v2, v1, v5

    new-array v2, v0, [I

    fill-array-data v2, :array_c

    aput-object v2, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordNumAddrs:[[I

    .line 2030
    new-array v0, v0, [I

    fill-array-data v0, :array_d

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordLength:[I

    .line 2031
    return-void

    :array_0
    .array-data 4
        0x8
        0x58
        0xa8
        0x8
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x58
        0xa8
        0x8
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x58
        0x88
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x58
        0xb0
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x58
        0xb0
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x58
        0x90
        0x8
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x58
        0xb8
        0x8
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x58
        0xb8
        0x8
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x58
        0xc0
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x58
        0xc0
        0x8
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x38
        0x5
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x38
        0x5
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x38
        0x5
    .end array-data

    :array_d
    .array-data 4
        0x180
        0x180
        0x100
    .end array-data
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1996
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2034
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 2035
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->initValue()V

    .line 2036
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->carTypeAddrs:[I

    const/4 v3, 0x0

    aget v2, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 2039
    .local v2, "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->carTypeAddrs:[I

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 2040
    .local v4, "carType":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordNumAddrs:[[I

    invoke-virtual {v0, v1, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 2041
    .local v5, "recordNum":I
    const/16 v6, -0x8000

    .local v6, "maxRsrqRx0":I
    const/16 v7, -0x8000

    .local v7, "maxRsrqRx1":I
    const/16 v8, -0x8000

    .local v8, "maxRsrqRx2":I
    const/16 v9, -0x8000

    .line 2042
    .local v9, "maxRsrqRx3":I
    const/4 v10, 0x0

    .local v10, "i":I
    :goto_0
    const/4 v11, 0x2

    const/4 v12, 0x1

    if-ge v10, v5, :cond_a

    .line 2043
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx0Addrs:[[I

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordLength:[I

    if-nez v10, :cond_0

    move v15, v3

    goto :goto_1

    :cond_0
    const/4 v15, -0x1

    :goto_1
    invoke-virtual {v0, v13, v2, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->insertElement([[II[II)[[I

    move-result-object v13

    iput-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx0Addrs:[[I

    .line 2044
    invoke-virtual {v0, v1, v2, v13, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v13

    .line 2045
    .local v13, "rsrqRx0":I
    if-eqz v13, :cond_1

    if-le v13, v6, :cond_1

    move v14, v13

    goto :goto_2

    :cond_1
    move v14, v6

    :goto_2
    move v6, v14

    .line 2046
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx1Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordLength:[I

    if-nez v10, :cond_2

    goto :goto_3

    :cond_2
    const/4 v3, -0x1

    :goto_3
    invoke-virtual {v0, v14, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->insertElement([[II[II)[[I

    move-result-object v3

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx1Addrs:[[I

    .line 2047
    invoke-virtual {v0, v1, v2, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v3

    .line 2048
    .local v3, "rsrqRx1":I
    if-eqz v3, :cond_3

    if-le v3, v7, :cond_3

    move v14, v3

    goto :goto_4

    :cond_3
    move v14, v7

    :goto_4
    move v7, v14

    .line 2049
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx2Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordLength:[I

    if-nez v10, :cond_4

    const/4 v12, 0x0

    goto :goto_5

    :cond_4
    const/4 v12, -0x1

    :goto_5
    invoke-virtual {v0, v14, v2, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->insertElement([[II[II)[[I

    move-result-object v12

    iput-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx2Addrs:[[I

    .line 2050
    if-gt v2, v11, :cond_5

    const/4 v15, 0x1

    invoke-virtual {v0, v1, v2, v12, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v12

    goto :goto_6

    :cond_5
    const/16 v12, -0x80

    .line 2051
    .local v12, "rsrqRx2":I
    :goto_6
    if-eqz v12, :cond_6

    if-le v12, v8, :cond_6

    move v15, v12

    goto :goto_7

    :cond_6
    move v15, v8

    :goto_7
    move v8, v15

    .line 2052
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx3Addrs:[[I

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->recordLength:[I

    if-nez v10, :cond_7

    const/4 v11, 0x0

    goto :goto_8

    :cond_7
    const/4 v11, -0x1

    :goto_8
    invoke-virtual {v0, v15, v2, v14, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->insertElement([[II[II)[[I

    move-result-object v11

    iput-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->rsrqRx3Addrs:[[I

    .line 2053
    const/4 v14, 0x2

    if-gt v2, v14, :cond_8

    const/4 v14, 0x1

    invoke-virtual {v0, v1, v2, v11, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v14

    goto :goto_9

    :cond_8
    const/16 v14, -0x80

    :goto_9
    move v11, v14

    .line 2054
    .local v11, "rsrqRx3":I
    if-eqz v11, :cond_9

    if-le v11, v9, :cond_9

    move v14, v11

    goto :goto_a

    :cond_9
    move v14, v9

    :goto_a
    move v9, v14

    .line 2042
    .end local v3    # "rsrqRx1":I
    .end local v11    # "rsrqRx3":I
    .end local v12    # "rsrqRx2":I
    .end local v13    # "rsrqRx0":I
    add-int/lit8 v10, v10, 0x1

    const/4 v3, 0x0

    goto/16 :goto_0

    .line 2062
    .end local v10    # "i":I
    :cond_a
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, " update,name id = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v11, p1

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, ", version = "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", condition = "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", values = "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const-string v12, "EmInfo/MDMComponent"

    invoke-static {v12, v3, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2067
    if-nez v4, :cond_b

    .line 2068
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->clearData()V

    .line 2069
    const/4 v3, 0x4

    new-array v3, v3, [Ljava/lang/Object;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ""

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v13, 0x0

    aput-object v10, v3, v13

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v13, 0x1

    aput-object v10, v3, v13

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v13, 0x2

    aput-object v10, v3, v13

    const/4 v10, 0x3

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v3, v10

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrqRx;->addData([Ljava/lang/Object;)V

    .line 2071
    :cond_b
    return-void
.end method
