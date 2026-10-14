.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field recordLength:[I

.field recordNumAddrs:[[I

.field rssiRx0Addrs:[[I

.field rssiRx1Addrs:[[I

.field rssiRx2Addrs:[[I

.field rssiRx3Addrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2074
    const-string v0, "type_icd_record"

    const-string v1, "9021"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 2083
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2084
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2131
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2126
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 4

    .line 2135
    const-string v0, "SSB - RSSI RX0"

    const-string v1, "SSB - RSSI RX1"

    const-string v2, "SSB - RSSI RX2"

    const-string v3, "SSB - RSSI RX3"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2121
    const-string v0, "NR Primary Serving Cell RSSI RX 0/1/2/3"

    return-object v0
.end method

.method initValue()V
    .locals 7

    .line 2088
    const/4 v0, 0x3

    new-array v1, v0, [[I

    const/4 v2, 0x4

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v3, v0, [I

    fill-array-data v3, :array_1

    const/4 v5, 0x1

    aput-object v3, v1, v5

    new-array v3, v0, [I

    fill-array-data v3, :array_2

    const/4 v6, 0x2

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx0Addrs:[[I

    .line 2094
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_3

    aput-object v3, v1, v4

    new-array v3, v0, [I

    fill-array-data v3, :array_4

    aput-object v3, v1, v5

    new-array v3, v0, [I

    fill-array-data v3, :array_5

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx1Addrs:[[I

    .line 2100
    new-array v1, v0, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v4

    new-array v3, v0, [I

    fill-array-data v3, :array_7

    aput-object v3, v1, v5

    new-array v3, v0, [I

    fill-array-data v3, :array_8

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx2Addrs:[[I

    .line 2106
    new-array v1, v0, [[I

    new-array v2, v2, [I

    fill-array-data v2, :array_9

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_a

    aput-object v2, v1, v5

    new-array v2, v0, [I

    fill-array-data v2, :array_b

    aput-object v2, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx3Addrs:[[I

    .line 2112
    new-array v1, v0, [[I

    new-array v0, v0, [I

    fill-array-data v0, :array_c

    aput-object v0, v1, v4

    new-array v0, v4, [I

    aput-object v0, v1, v5

    new-array v0, v4, [I

    aput-object v0, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordNumAddrs:[[I

    .line 2117
    new-array v0, v6, [I

    fill-array-data v0, :array_d

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordLength:[I

    .line 2118
    return-void

    :array_0
    .array-data 4
        0x8
        0x18
        0x10
        0x10
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x28
        0x10
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x28
        0x10
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x20
        0x10
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x38
        0x10
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x38
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x18
        0x30
        0x10
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x48
        0x10
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x48
        0x10
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x18
        0x40
        0x10
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x58
        0x10
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x58
        0x10
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x13
        0x5
    .end array-data

    :array_d
    .array-data 4
        0x60
        0x0
    .end array-data
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2141
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2145
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 2146
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->initValue()V

    .line 2147
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx0Addrs:[[I

    array-length v3, v2

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    aget-object v2, v2, v3

    const/4 v3, 0x0

    aget v2, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 2149
    .local v2, "version":I
    if-ne v2, v4, :cond_0

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordNumAddrs:[[I

    invoke-virtual {v0, v1, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    goto :goto_0

    :cond_0
    move v5, v4

    .line 2151
    .local v5, "recordNum":I
    :goto_0
    const/16 v6, -0x96

    .local v6, "maxRssiRx0":I
    const/16 v7, -0x96

    .local v7, "maxRssiRx1":I
    const/16 v8, -0x96

    .local v8, "maxRssiRx2":I
    const/16 v9, -0x96

    .line 2152
    .local v9, "maxRssiRx3":I
    const/4 v10, 0x0

    .local v10, "i":I
    :goto_1
    if-ge v10, v5, :cond_9

    .line 2153
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx0Addrs:[[I

    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordLength:[I

    if-nez v10, :cond_1

    move v14, v3

    goto :goto_2

    :cond_1
    const/4 v14, -0x1

    :goto_2
    invoke-virtual {v0, v11, v2, v12, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->insertElement([[II[II)[[I

    move-result-object v11

    iput-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx0Addrs:[[I

    .line 2154
    invoke-virtual {v0, v1, v2, v11, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v11

    .line 2155
    .local v11, "rssiRx0":I
    if-eqz v11, :cond_2

    if-le v11, v6, :cond_2

    move v12, v11

    goto :goto_3

    :cond_2
    move v12, v6

    :goto_3
    move v6, v12

    .line 2156
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx1Addrs:[[I

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordLength:[I

    if-nez v10, :cond_3

    move v15, v3

    goto :goto_4

    :cond_3
    const/4 v15, -0x1

    :goto_4
    invoke-virtual {v0, v12, v2, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->insertElement([[II[II)[[I

    move-result-object v12

    iput-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx1Addrs:[[I

    .line 2157
    invoke-virtual {v0, v1, v2, v12, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v12

    .line 2158
    .local v12, "rssiRx1":I
    if-eqz v12, :cond_4

    if-le v12, v7, :cond_4

    move v14, v12

    goto :goto_5

    :cond_4
    move v14, v7

    :goto_5
    move v7, v14

    .line 2159
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx2Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordLength:[I

    if-nez v10, :cond_5

    move v13, v3

    goto :goto_6

    :cond_5
    const/4 v13, -0x1

    :goto_6
    invoke-virtual {v0, v14, v2, v15, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->insertElement([[II[II)[[I

    move-result-object v13

    iput-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx2Addrs:[[I

    .line 2160
    invoke-virtual {v0, v1, v2, v13, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v13

    .line 2161
    .local v13, "rssiRx2":I
    if-eqz v13, :cond_6

    if-le v13, v8, :cond_6

    move v14, v11

    goto :goto_7

    :cond_6
    move v14, v8

    :goto_7
    move v8, v14

    .line 2162
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx3Addrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->recordLength:[I

    if-nez v10, :cond_7

    goto :goto_8

    :cond_7
    const/4 v3, -0x1

    :goto_8
    invoke-virtual {v0, v14, v2, v15, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->insertElement([[II[II)[[I

    move-result-object v3

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->rssiRx3Addrs:[[I

    .line 2163
    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v3

    .line 2164
    .local v3, "rssiRx3":I
    if-eqz v3, :cond_8

    if-le v3, v9, :cond_8

    move v14, v3

    goto :goto_9

    :cond_8
    move v14, v9

    :goto_9
    move v9, v14

    .line 2152
    .end local v3    # "rssiRx3":I
    .end local v11    # "rssiRx0":I
    .end local v12    # "rssiRx1":I
    .end local v13    # "rssiRx2":I
    add-int/lit8 v10, v10, 0x1

    const/4 v3, 0x0

    goto :goto_1

    .line 2172
    .end local v10    # "i":I
    :cond_9
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, " update,name id = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v11, p1

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, ", version = "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", values = "

    invoke-virtual {v10, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const-string v12, "EmInfo/MDMComponent"

    invoke-static {v12, v3, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 2176
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->clearData()V

    .line 2177
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

    aput-object v10, v3, v4

    const/4 v4, 0x2

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v3, v4

    const/4 v4, 0x3

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v3, v4

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellRssiRx;->addData([Ljava/lang/Object;)V

    .line 2178
    return-void
.end method
