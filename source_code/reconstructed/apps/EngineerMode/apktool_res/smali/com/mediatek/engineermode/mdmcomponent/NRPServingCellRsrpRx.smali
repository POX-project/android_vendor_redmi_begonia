.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field carTypeAddrs:[[I

.field recordLength:[I

.field recordNumAddrs:[[I

.field rsrpRx0Addrs:[[I

.field rsrpRx1Addrs:[[I

.field rsrpRx2Addrs:[[I

.field rsrpRx3Addrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 1849
    const-string v0, "type_icd_record"

    const-string v1, "9022"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 1858
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1859
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1873
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1868
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 1911
    const-string v0, "SSB - RSRP RX0"

    const-string v1, "SSB - RSRP RX1"

    const-string v2, "SSB - RSRP RX2"

    const-string v3, "SSB - RSRP RX3"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1863
    const-string v0, "NR Primary Serving Cell RSRP RX 0/1/2/3"

    return-object v0
.end method

.method initValue()V
    .locals 7

    .line 1878
    const/4 v0, 0x2

    new-array v1, v0, [[I

    const/4 v2, 0x3

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_1

    const/4 v5, 0x1

    aput-object v3, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->carTypeAddrs:[[I

    .line 1883
    new-array v1, v0, [[I

    new-array v3, v4, [I

    aput-object v3, v1, v4

    const/4 v3, 0x4

    new-array v6, v3, [I

    fill-array-data v6, :array_2

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx0Addrs:[[I

    .line 1888
    new-array v1, v0, [[I

    new-array v6, v4, [I

    aput-object v6, v1, v4

    new-array v6, v3, [I

    fill-array-data v6, :array_3

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx1Addrs:[[I

    .line 1893
    new-array v1, v0, [[I

    new-array v6, v4, [I

    aput-object v6, v1, v4

    new-array v6, v3, [I

    fill-array-data v6, :array_4

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx2Addrs:[[I

    .line 1898
    new-array v1, v0, [[I

    new-array v6, v4, [I

    aput-object v6, v1, v4

    new-array v3, v3, [I

    fill-array-data v3, :array_5

    aput-object v3, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx3Addrs:[[I

    .line 1903
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v4

    new-array v2, v2, [I

    fill-array-data v2, :array_7

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordNumAddrs:[[I

    .line 1907
    new-array v0, v0, [I

    fill-array-data v0, :array_8

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordLength:[I

    .line 1908
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0xf
        0x3
    .end array-data

    :array_1
    .array-data 4
        0x8
        0xf
        0x3
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x50
        0x10
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x60
        0x10
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x70
        0x10
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x80
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0xa
        0x5
    .end array-data

    :array_7
    .array-data 4
        0x8
        0xa
        0x5
    .end array-data

    :array_8
    .array-data 4
        0x60
        0xc0
    .end array-data
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1917
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1921
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 1922
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->initValue()V

    .line 1923
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->carTypeAddrs:[[I

    array-length v3, v2

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    aget-object v2, v2, v3

    const/4 v3, 0x0

    aget v2, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 1926
    .local v2, "version":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->carTypeAddrs:[[I

    invoke-virtual {v0, v1, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 1927
    .local v5, "carType":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordNumAddrs:[[I

    invoke-virtual {v0, v1, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 1928
    .local v6, "recordNum":I
    const/16 v7, -0x8000

    .local v7, "maxRx0":I
    const/16 v8, -0x8000

    .local v8, "maxRx1":I
    const/16 v9, -0x8000

    .local v9, "maxRx2":I
    const/16 v10, -0x8000

    .line 1929
    .local v10, "maxRx3":I
    const/4 v11, 0x0

    .local v11, "i":I
    :goto_0
    if-ge v11, v6, :cond_8

    .line 1930
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx0Addrs:[[I

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordLength:[I

    if-nez v11, :cond_0

    move v15, v3

    goto :goto_1

    :cond_0
    const/4 v15, -0x1

    :goto_1
    invoke-virtual {v0, v12, v2, v13, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->insertElement([[II[II)[[I

    move-result-object v12

    iput-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx0Addrs:[[I

    .line 1931
    invoke-virtual {v0, v1, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v12

    .line 1932
    .local v12, "rsrpRx0":I
    if-eqz v12, :cond_1

    if-le v12, v7, :cond_1

    move v13, v12

    goto :goto_2

    :cond_1
    move v13, v7

    :goto_2
    move v7, v13

    .line 1933
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx1Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordLength:[I

    if-nez v11, :cond_2

    move v14, v3

    goto :goto_3

    :cond_2
    const/4 v14, -0x1

    :goto_3
    invoke-virtual {v0, v13, v2, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->insertElement([[II[II)[[I

    move-result-object v13

    iput-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx1Addrs:[[I

    .line 1934
    invoke-virtual {v0, v1, v2, v13, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v13

    .line 1935
    .local v13, "rsrpRx1":I
    if-eqz v13, :cond_3

    if-le v13, v8, :cond_3

    move v14, v13

    goto :goto_4

    :cond_3
    move v14, v8

    :goto_4
    move v8, v14

    .line 1936
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx2Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordLength:[I

    if-nez v11, :cond_4

    goto :goto_5

    :cond_4
    const/4 v3, -0x1

    :goto_5
    invoke-virtual {v0, v14, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->insertElement([[II[II)[[I

    move-result-object v3

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx2Addrs:[[I

    .line 1937
    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v3

    .line 1938
    .local v3, "rsrpRx2":I
    if-eqz v3, :cond_5

    if-le v3, v9, :cond_5

    move v14, v3

    goto :goto_6

    :cond_5
    move v14, v9

    :goto_6
    move v9, v14

    .line 1939
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx3Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->recordLength:[I

    if-nez v11, :cond_6

    const/4 v4, 0x0

    goto :goto_7

    :cond_6
    const/4 v4, -0x1

    :goto_7
    invoke-virtual {v0, v14, v2, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->insertElement([[II[II)[[I

    move-result-object v4

    iput-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->rsrpRx3Addrs:[[I

    .line 1940
    const/4 v14, 0x1

    invoke-virtual {v0, v1, v2, v4, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v4

    .line 1941
    .local v4, "rsrpRx3":I
    if-eqz v4, :cond_7

    if-le v4, v10, :cond_7

    move v14, v4

    goto :goto_8

    :cond_7
    move v14, v10

    :goto_8
    move v10, v14

    .line 1929
    .end local v3    # "rsrpRx2":I
    .end local v4    # "rsrpRx3":I
    .end local v12    # "rsrpRx0":I
    .end local v13    # "rsrpRx1":I
    add-int/lit8 v11, v11, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x1

    goto :goto_0

    .line 1949
    .end local v11    # "i":I
    :cond_8
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->icdLogInfo:[Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, " update,name id = "

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v11, p1

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, ", version = "

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", condition = "

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", values = "

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", "

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v12, "EmInfo/MDMComponent"

    invoke-static {v12, v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1954
    if-nez v5, :cond_9

    .line 1955
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->clearData()V

    .line 1956
    const/4 v3, 0x4

    new-array v3, v3, [Ljava/lang/Object;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ""

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v13, 0x0

    aput-object v4, v3, v13

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v13, 0x1

    aput-object v4, v3, v13

    const/4 v4, 0x2

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    aput-object v13, v3, v4

    const/4 v4, 0x3

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v3, v4

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRsrpRx;->addData([Ljava/lang/Object;)V

    .line 1958
    :cond_9
    return-void
.end method
