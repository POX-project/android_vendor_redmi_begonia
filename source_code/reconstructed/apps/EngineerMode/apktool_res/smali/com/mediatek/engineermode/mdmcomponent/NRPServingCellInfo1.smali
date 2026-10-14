.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field TAAddrs:[[I

.field TACodeAddrs:[[I

.field UpLayerIndAddrs:[I

.field carTypeAddrs:[I

.field cellGroupIdAddrs:[[I

.field cellId0Addrs:[[I

.field cellId1Addrs:[[I

.field cellId2Addrs:[[I

.field cellId3Addrs:[[I

.field cellId4Addrs:[[I

.field cellIdAddrs:[[I

.field cellMCCAddrs:[[I

.field cellMNCAddrs:[[I

.field cellMNCNumAddrs:[[I

.field dlFreqBandAddr:[[I

.field mncNumAddrs:[[I

.field narfcnAddrs:[I

.field pciAddrs:[I

.field servCellIndexAddrs:[[I

.field srb3ConfStatusAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 1154
    const-string v0, "type_icd_record"

    const-string v1, "9001"

    const-string v2, "9014"

    const-string v3, "7100"

    const-string v4, "type_icd_event"

    const-string v5, "9601"

    const-string v6, "9610"

    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 7
    .param p1, "context"    # Landroid/app/Activity;

    .line 1277
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1164
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->carTypeAddrs:[I

    .line 1166
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->narfcnAddrs:[I

    .line 1168
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_3

    const/4 v4, 0x1

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_4

    const/4 v5, 0x2

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellGroupIdAddrs:[[I

    .line 1174
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_5

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_6

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_7

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellMCCAddrs:[[I

    .line 1180
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_8

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_9

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_a

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellMNCNumAddrs:[[I

    .line 1186
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_b

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_c

    aput-object v2, v1, v4

    new-array v2, v0, [I

    fill-array-data v2, :array_d

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellMNCAddrs:[[I

    .line 1192
    new-array v1, v0, [[I

    const/4 v2, 0x4

    new-array v6, v2, [I

    fill-array-data v6, :array_e

    aput-object v6, v1, v3

    new-array v6, v2, [I

    fill-array-data v6, :array_f

    aput-object v6, v1, v4

    new-array v6, v2, [I

    fill-array-data v6, :array_10

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->servCellIndexAddrs:[[I

    .line 1198
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_11

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_12

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_13

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId0Addrs:[[I

    .line 1204
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_14

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_15

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_16

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId1Addrs:[[I

    .line 1210
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_17

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_18

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_19

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId2Addrs:[[I

    .line 1216
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_1a

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_1b

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_1c

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId3Addrs:[[I

    .line 1222
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_1d

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_1e

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_1f

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId4Addrs:[[I

    .line 1228
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_20

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_21

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_22

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellIdAddrs:[[I

    .line 1234
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_23

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_24

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_25

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->mncNumAddrs:[[I

    .line 1240
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_26

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_27

    aput-object v6, v1, v4

    new-array v6, v0, [I

    fill-array-data v6, :array_28

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->TACodeAddrs:[[I

    .line 1246
    new-array v1, v0, [I

    fill-array-data v1, :array_29

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->pciAddrs:[I

    .line 1249
    new-array v1, v4, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_2a

    aput-object v6, v1, v3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->TAAddrs:[[I

    .line 1253
    new-array v1, v5, [[I

    new-array v6, v3, [I

    aput-object v6, v1, v3

    new-array v6, v0, [I

    fill-array-data v6, :array_2b

    aput-object v6, v1, v4

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->srb3ConfStatusAddrs:[[I

    .line 1258
    new-array v1, v0, [I

    fill-array-data v1, :array_2c

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->UpLayerIndAddrs:[I

    .line 1260
    const/16 v1, 0xd

    new-array v1, v1, [[I

    new-array v6, v3, [I

    aput-object v6, v1, v3

    new-array v6, v3, [I

    aput-object v6, v1, v4

    new-array v4, v3, [I

    aput-object v4, v1, v5

    new-array v4, v3, [I

    aput-object v4, v1, v0

    new-array v3, v3, [I

    aput-object v3, v1, v2

    new-array v2, v0, [I

    fill-array-data v2, :array_2d

    const/4 v3, 0x5

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_2e

    const/4 v3, 0x6

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_2f

    const/4 v3, 0x7

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_30

    const/16 v3, 0x8

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_31

    const/16 v3, 0x9

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_32

    const/16 v3, 0xa

    aput-object v2, v1, v3

    new-array v2, v0, [I

    fill-array-data v2, :array_33

    const/16 v3, 0xb

    aput-object v2, v1, v3

    new-array v0, v0, [I

    fill-array-data v0, :array_34

    const/16 v2, 0xc

    aput-object v0, v1, v2

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->dlFreqBandAddr:[[I

    .line 1278
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0xa
        0x3
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x16
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x0
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
        0x8
        0x10
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x18
        0x10
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x20
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x20
        0x8
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x28
        0x10
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x28
        0x10
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x68
        0x10
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x98
        0x0
        0x8
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x78
        0x0
        0x8
    .end array-data

    :array_10
    .array-data 4
        0x8
        0xb8
        0x0
        0x8
    .end array-data

    :array_11
    .array-data 4
        0x8
        0x58
        0x8
    .end array-data

    :array_12
    .array-data 4
        0x8
        0x50
        0x8
    .end array-data

    :array_13
    .array-data 4
        0x8
        0x90
        0x8
    .end array-data

    :array_14
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_15
    .array-data 4
        0x8
        0x58
        0x8
    .end array-data

    :array_16
    .array-data 4
        0x8
        0x98
        0x8
    .end array-data

    :array_17
    .array-data 4
        0x8
        0x68
        0x8
    .end array-data

    :array_18
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_19
    .array-data 4
        0x8
        0xa0
        0x8
    .end array-data

    :array_1a
    .array-data 4
        0x8
        0x70
        0x8
    .end array-data

    :array_1b
    .array-data 4
        0x8
        0x68
        0x8
    .end array-data

    :array_1c
    .array-data 4
        0x8
        0xa8
        0x8
    .end array-data

    :array_1d
    .array-data 4
        0x8
        0x78
        0x8
    .end array-data

    :array_1e
    .array-data 4
        0x8
        0x70
        0x8
    .end array-data

    :array_1f
    .array-data 4
        0x8
        0xb0
        0x8
    .end array-data

    :array_20
    .array-data 4
        0x8
        0x58
        0x28
    .end array-data

    :array_21
    .array-data 4
        0x8
        0x50
        0x24
    .end array-data

    :array_22
    .array-data 4
        0x8
        0x90
        0x24
    .end array-data

    :array_23
    .array-data 4
        0x8
        0x20
        0x8
    .end array-data

    :array_24
    .array-data 4
        0x8
        0x20
        0x8
    .end array-data

    :array_25
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_26
    .array-data 4
        0x8
        0x38
        0x18
    .end array-data

    :array_27
    .array-data 4
        0x8
        0x38
        0x18
    .end array-data

    :array_28
    .array-data 4
        0x8
        0x78
        0x18
    .end array-data

    :array_29
    .array-data 4
        0x8
        0x0
        0xa
    .end array-data

    :array_2a
    .array-data 4
        0x8
        0xe
        0x6
    .end array-data

    :array_2b
    .array-data 4
        0x8
        0x20
        0x8
    .end array-data

    :array_2c
    .array-data 4
        0x8
        0x70
        0x8
    .end array-data

    :array_2d
    .array-data 4
        0x8
        0x31
        0x7
    .end array-data

    :array_2e
    .array-data 4
        0x8
        0x31
        0x7
    .end array-data

    :array_2f
    .array-data 4
        0x8
        0x31
        0x7
    .end array-data

    :array_30
    .array-data 4
        0x8
        0x2e
        0x7
    .end array-data

    :array_31
    .array-data 4
        0x8
        0x2e
        0x7
    .end array-data

    :array_32
    .array-data 4
        0x8
        0x2e
        0x7
    .end array-data

    :array_33
    .array-data 4
        0x8
        0x2e
        0x8
    .end array-data

    :array_34
    .array-data 4
        0x8
        0x2e
        0x8
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1292
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1287
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 13

    .line 1296
    const-string v0, "NARFCN"

    const-string v1, "NCGI"

    const-string v2, "PCI"

    const-string v3, "Global Cell ID"

    const-string v4, "Vendor ID"

    const-string v5, "gNB ID"

    const-string v6, "Cell ID"

    const-string v7, "mcc"

    const-string v8, "mnc"

    const-string v9, "BAND"

    const-string v10, "NR-SRB3"

    const-string v11, "Upper Layer Indication Status-SIB2"

    const-string v12, "NT_TAC"

    filled-new-array/range {v0 .. v12}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1282
    const-string v0, "NR Primary Serving Cell Info 1"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1303
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 45
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1307
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 1309
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "9001"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, ", condition = "

    const-string v5, ", values = "

    const-string v6, ", version = "

    const-string v7, " update,name id = "

    const-string v8, "EmInfo/MDMComponent"

    const-string v10, ", "

    const/4 v11, 0x0

    if-eqz v3, :cond_1

    .line 1311
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->carTypeAddrs:[I

    aget v3, v3, v11

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 1312
    .local v3, "version":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->carTypeAddrs:[I

    invoke-virtual {v0, v2, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v12

    .line 1313
    .local v12, "carType":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->narfcnAddrs:[I

    invoke-virtual {v0, v2, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v13

    .line 1314
    .local v13, "narfcna":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->pciAddrs:[I

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v14

    .line 1315
    .local v14, "pci":I
    sget-object v15, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v15, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1319
    if-nez v12, :cond_0

    .line 1320
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1321
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x2

    invoke-virtual {v0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1323
    .end local v3    # "version":I
    .end local v12    # "carType":I
    .end local v13    # "narfcna":I
    .end local v14    # "pci":I
    :cond_0
    move-object v11, v0

    move-object v3, v2

    goto/16 :goto_7

    :cond_1
    const-string v3, "9014"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v9, 0x1

    if-eqz v3, :cond_2

    .line 1324
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->dlFreqBandAddr:[[I

    array-length v4, v3

    sub-int/2addr v4, v9

    aget-object v3, v3, v4

    const/4 v4, 0x0

    aget v3, v3, v4

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 1325
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->dlFreqBandAddr:[[I

    invoke-virtual {v0, v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 1326
    .local v4, "dlFreqBand":I
    const/16 v5, 0x9

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1327
    .end local v3    # "version":I
    .end local v4    # "dlFreqBand":I
    move-object v11, v0

    move-object v3, v2

    goto/16 :goto_7

    :cond_2
    const-string v3, "9601"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    .line 1329
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellGroupIdAddrs:[[I

    array-length v11, v3

    sub-int/2addr v11, v9

    aget-object v3, v3, v11

    const/4 v11, 0x0

    aget v3, v3, v11

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 1330
    .restart local v3    # "version":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellGroupIdAddrs:[[I

    invoke-virtual {v0, v2, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v11

    .line 1331
    .local v11, "cellGroupId":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->servCellIndexAddrs:[[I

    invoke-virtual {v0, v2, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v12

    .line 1332
    .local v12, "servCellIndex":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellMNCNumAddrs:[[I

    invoke-virtual {v0, v2, v3, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v13

    .line 1333
    .local v13, "mncNum":I
    if-nez v11, :cond_9

    if-nez v12, :cond_9

    if-lez v13, :cond_9

    .line 1334
    const/4 v14, 0x0

    .line 1335
    .local v14, "plmnid":I
    const-string v15, ""

    .line 1336
    .local v15, "nrNcgi":Ljava/lang/String;
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellMCCAddrs:[[I

    invoke-virtual {v0, v2, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v9

    .line 1337
    .local v9, "mcc":I
    move/from16 v19, v14

    .end local v14    # "plmnid":I
    .local v19, "plmnid":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellMNCAddrs:[[I

    invoke-virtual {v0, v2, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v14

    .line 1338
    .local v14, "mnc":I
    move-object/from16 v20, v15

    .end local v15    # "nrNcgi":Ljava/lang/String;
    .local v20, "nrNcgi":Ljava/lang/String;
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellIdAddrs:[[I

    move-object/from16 v21, v8

    const/4 v8, 0x0

    invoke-virtual {v0, v2, v3, v15, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v15

    move-object v8, v10

    move/from16 v22, v11

    .end local v11    # "cellGroupId":I
    .local v22, "cellGroupId":I
    int-to-long v10, v15

    .line 1339
    .local v10, "cellId":J
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId0Addrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1340
    .local v15, "cellId0":I
    move/from16 v23, v15

    .end local v15    # "cellId0":I
    .local v23, "cellId0":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId1Addrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1341
    .local v15, "cellId1":I
    move/from16 v24, v15

    .end local v15    # "cellId1":I
    .local v24, "cellId1":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId2Addrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1342
    .local v15, "cellId2":I
    move/from16 v25, v15

    .end local v15    # "cellId2":I
    .local v25, "cellId2":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId3Addrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1343
    .local v15, "cellId3":I
    move/from16 v26, v15

    .end local v15    # "cellId3":I
    .local v26, "cellId3":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellId4Addrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1344
    .local v15, "cellId4":I
    move/from16 v27, v15

    .end local v15    # "cellId4":I
    .local v27, "cellId4":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->TACodeAddrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1345
    .local v15, "TACode":I
    move-object/from16 v28, v2

    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v28, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellIdAddrs:[[I

    move/from16 v29, v15

    .end local v15    # "TACode":I
    .local v29, "TACode":I
    array-length v15, v2

    if-gt v3, v15, :cond_3

    move v2, v3

    goto :goto_0

    :cond_3
    array-length v2, v2

    :goto_0
    const/4 v15, 0x1

    sub-int/2addr v2, v15

    .line 1346
    .local v2, "index":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->cellIdAddrs:[[I

    aget-object v30, v15, v2

    array-length v0, v15

    const/16 v18, 0x1

    add-int/lit8 v0, v0, -0x1

    aget v0, v30, v0

    const/16 v16, 0x2

    add-int/lit8 v0, v0, -0x2

    shr-long v30, v10, v0

    const-wide/16 v32, 0x3

    move-object v0, v4

    move-object/from16 v34, v5

    and-long v4, v30, v32

    long-to-int v4, v4

    .line 1347
    .local v4, "vendorID":I
    aget-object v5, v15, v2

    array-length v15, v15

    add-int/lit8 v15, v15, -0x1

    aget v5, v5, v15

    add-int/lit8 v5, v5, -0x16

    shr-long v30, v10, v5

    const-wide/32 v32, 0x7fffff

    move v15, v4

    .end local v4    # "vendorID":I
    .local v15, "vendorID":I
    and-long v4, v30, v32

    long-to-int v4, v4

    .line 1348
    .local v4, "gNBID":I
    const-wide/16 v30, 0x7fff

    move/from16 v32, v4

    .end local v4    # "gNBID":I
    .local v32, "gNBID":I
    and-long v4, v10, v30

    long-to-int v4, v4

    .line 1349
    .local v4, "cellID":I
    and-int/lit16 v5, v9, 0xfff

    .line 1350
    .end local v9    # "mcc":I
    .local v5, "mcc":I
    and-int/lit16 v9, v14, 0xfff

    .line 1351
    .end local v14    # "mnc":I
    .local v9, "mnc":I
    and-int/lit8 v14, v5, 0xf

    .line 1352
    .local v14, "mcc3":I
    move/from16 v30, v2

    .end local v2    # "index":I
    .local v30, "index":I
    and-int/lit16 v2, v5, 0xf0

    move/from16 v31, v4

    .end local v4    # "cellID":I
    .local v31, "cellID":I
    const/4 v4, 0x4

    shr-int/2addr v2, v4

    .line 1353
    .local v2, "mcc2":I
    and-int/lit16 v4, v5, 0xf00

    move/from16 v35, v15

    .end local v15    # "vendorID":I
    .local v35, "vendorID":I
    const/16 v15, 0x8

    shr-int/2addr v4, v15

    .line 1354
    .local v4, "mcc1":I
    mul-int/lit8 v36, v4, 0x64

    mul-int/lit8 v37, v2, 0xa

    add-int v36, v36, v37

    add-int v15, v36, v14

    .line 1355
    .local v15, "mccVar":I
    const/16 v36, 0x0

    .local v36, "mncVar":I
    const/16 v38, 0x0

    .local v38, "mnc1":I
    const/16 v39, 0x0

    .local v39, "mnc2":I
    const/16 v40, 0x0

    .line 1356
    .local v40, "mnc3":I
    move/from16 v41, v15

    .end local v15    # "mccVar":I
    .local v41, "mccVar":I
    const/4 v15, 0x2

    if-ne v13, v15, :cond_4

    .line 1357
    and-int/lit16 v15, v9, 0xf0

    const/16 v33, 0x4

    shr-int/lit8 v38, v15, 0x4

    .line 1358
    and-int/lit8 v39, v9, 0xf

    .line 1359
    mul-int/lit8 v15, v38, 0xa

    add-int v36, v15, v39

    move/from16 v15, v38

    move/from16 v43, v39

    move/from16 v44, v40

    goto :goto_1

    .line 1360
    :cond_4
    const/4 v15, 0x3

    if-ne v13, v15, :cond_5

    .line 1361
    and-int/lit16 v15, v9, 0xf00

    const/16 v37, 0x8

    shr-int/lit8 v38, v15, 0x8

    .line 1362
    and-int/lit16 v15, v9, 0xf0

    const/16 v33, 0x4

    shr-int/lit8 v39, v15, 0x4

    .line 1363
    and-int/lit8 v40, v9, 0xf

    .line 1364
    mul-int/lit8 v15, v38, 0x64

    mul-int/lit8 v42, v39, 0xa

    add-int v15, v15, v42

    add-int v36, v15, v40

    move/from16 v15, v38

    move/from16 v43, v39

    move/from16 v44, v40

    goto :goto_1

    .line 1360
    :cond_5
    move/from16 v15, v38

    move/from16 v43, v39

    move/from16 v44, v40

    .line 1366
    .end local v38    # "mnc1":I
    .end local v39    # "mnc2":I
    .end local v40    # "mnc3":I
    .local v15, "mnc1":I
    .local v43, "mnc2":I
    .local v44, "mnc3":I
    :goto_1
    move/from16 v38, v15

    .end local v15    # "mnc1":I
    .restart local v38    # "mnc1":I
    sget-object v15, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->icdLogInfo:[Ljava/lang/String;

    move-object/from16 v39, v15

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v40, v14

    .end local v14    # "mcc3":I
    .local v40, "mcc3":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getName()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v0, v22

    .end local v22    # "cellGroupId":I
    .local v0, "cellGroupId":I
    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10, v11}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, "("

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    long-to-int v14, v10

    .line 1369
    invoke-static {v14}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, ")"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, ")"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v9}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "), "

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v0, v40

    .end local v40    # "mcc3":I
    .local v0, "mcc3":I
    .restart local v22    # "cellGroupId":I
    invoke-virtual {v15, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v40, v3

    move/from16 v3, v38

    .end local v38    # "mnc1":I
    .local v3, "mnc1":I
    .local v40, "version":I
    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v38, v12

    move/from16 v12, v43

    .end local v43    # "mnc2":I
    .local v12, "mnc2":I
    .local v38, "servCellIndex":I
    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v1, v44

    .end local v44    # "mnc3":I
    .local v1, "mnc3":I
    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v42, v7

    move-object/from16 v7, v34

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1371
    invoke-static/range {v35 .. v35}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v7, v32

    .end local v32    # "gNBID":I
    .local v7, "gNBID":I
    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v32, v1

    .end local v1    # "mnc3":I
    .local v32, "mnc3":I
    invoke-static {v7}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v1, v31

    .end local v31    # "cellID":I
    .local v1, "cellID":I
    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1372
    invoke-static {v1}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v6, v36

    .end local v36    # "mncVar":I
    .local v6, "mncVar":I
    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v14, v41

    .end local v41    # "mccVar":I
    .local v14, "mccVar":I
    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-wide/from16 v43, v10

    move/from16 v10, v29

    .end local v29    # "TACode":I
    .local v10, "TACode":I
    .local v43, "cellId":J
    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v8, 0x7

    new-array v11, v8, [Ljava/lang/Object;

    .line 1374
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/16 v17, 0x0

    aput-object v29, v11, v17

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/16 v18, 0x1

    aput-object v29, v11, v18

    invoke-static/range {v23 .. v23}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/16 v16, 0x2

    aput-object v29, v11, v16

    invoke-static/range {v24 .. v24}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/16 v31, 0x3

    aput-object v29, v11, v31

    invoke-static/range {v25 .. v25}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/16 v31, 0x4

    aput-object v29, v11, v31

    invoke-static/range {v26 .. v26}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/4 v8, 0x5

    aput-object v29, v11, v8

    invoke-static/range {v27 .. v27}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v29

    const/4 v8, 0x6

    aput-object v29, v11, v8

    .line 1373
    const-string v8, "%X, %X, %X, %X, %X, %X, %X"

    invoke-static {v8, v11}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 1366
    move-object/from16 v15, v21

    move-object/from16 v11, v39

    invoke-static {v15, v11, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1375
    invoke-static/range {v35 .. v35}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    move-object/from16 v11, p0

    move/from16 v21, v5

    const/4 v5, 0x4

    .end local v5    # "mcc":I
    .local v21, "mcc":I
    invoke-virtual {v11, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1376
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v8, 0x5

    invoke-virtual {v11, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1377
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v8, 0x6

    invoke-virtual {v11, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1378
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v8, 0x7

    invoke-virtual {v11, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1379
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/16 v8, 0x8

    invoke-virtual {v11, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1380
    const/16 v5, 0xc

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v11, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1381
    const/4 v5, 0x2

    if-ne v13, v5, :cond_6

    .line 1382
    const/4 v8, 0x6

    new-array v15, v8, [Ljava/lang/Object;

    .line 1383
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v16, 0x0

    aput-object v8, v15, v16

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v16, 0x1

    aput-object v8, v15, v16

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v15, v5

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v8, 0x3

    aput-object v5, v15, v8

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/16 v31, 0x4

    aput-object v5, v15, v31

    invoke-static/range {v43 .. v44}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    const/16 v31, 0x5

    aput-object v5, v15, v31

    .line 1382
    const-string v5, "[%X%X%X][%X%X][%X]"

    invoke-static {v5, v15}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v15

    .line 1384
    .end local v20    # "nrNcgi":Ljava/lang/String;
    .local v15, "nrNcgi":Ljava/lang/String;
    invoke-virtual {v11, v8, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    move/from16 v31, v0

    goto :goto_2

    .line 1385
    .end local v15    # "nrNcgi":Ljava/lang/String;
    .restart local v20    # "nrNcgi":Ljava/lang/String;
    :cond_6
    const/4 v8, 0x3

    if-ne v13, v8, :cond_7

    .line 1386
    const/4 v5, 0x7

    new-array v5, v5, [Ljava/lang/Object;

    .line 1387
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    const/16 v17, 0x0

    aput-object v15, v5, v17

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    const/16 v18, 0x1

    aput-object v15, v5, v18

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    const/16 v16, 0x2

    aput-object v15, v5, v16

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v5, v8

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    const/16 v31, 0x4

    aput-object v15, v5, v31

    invoke-static/range {v32 .. v32}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    const/16 v31, 0x5

    aput-object v15, v5, v31

    invoke-static/range {v43 .. v44}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v15

    const/16 v29, 0x6

    aput-object v15, v5, v29

    .line 1386
    const-string v15, "[%X%X%X][%X%X%X][%X]"

    invoke-static {v15, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v15

    .line 1388
    .end local v20    # "nrNcgi":Ljava/lang/String;
    .restart local v15    # "nrNcgi":Ljava/lang/String;
    invoke-virtual {v11, v8, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    move/from16 v31, v0

    goto :goto_2

    .line 1390
    .end local v15    # "nrNcgi":Ljava/lang/String;
    .restart local v20    # "nrNcgi":Ljava/lang/String;
    :cond_7
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v31, v0

    .end local v0    # "mcc3":I
    .local v31, "mcc3":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v0, v42

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v0, p1

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " Invalid format, not thing to generate! mncNum = "

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v15, v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v15, v20

    .line 1393
    .end local v20    # "nrNcgi":Ljava/lang/String;
    .restart local v15    # "nrNcgi":Ljava/lang/String;
    :goto_2
    const/4 v0, 0x2

    if-ne v13, v0, :cond_8

    .line 1394
    shr-int/lit8 v0, v9, 0x4

    and-int/lit8 v0, v0, 0xf

    shl-int/lit8 v5, v9, 0x4

    and-int/lit16 v5, v5, 0xf0

    or-int/2addr v0, v5

    .line 1395
    .end local v19    # "plmnid":I
    .local v0, "plmnid":I
    and-int/lit8 v5, v21, 0xf

    or-int/lit16 v5, v5, 0xf0

    const/16 v8, 0x8

    shl-int/2addr v5, v8

    or-int/2addr v0, v5

    .line 1396
    shr-int/lit8 v5, v9, 0x8

    and-int/lit8 v5, v5, 0xf

    and-int/lit16 v8, v9, 0xf0

    or-int/2addr v5, v8

    shl-int/lit8 v5, v5, 0x10

    or-int/2addr v0, v5

    goto :goto_3

    .line 1398
    .end local v0    # "plmnid":I
    .restart local v19    # "plmnid":I
    :cond_8
    shr-int/lit8 v0, v21, 0x8

    and-int/lit8 v0, v0, 0xf

    and-int/lit16 v5, v9, 0xf0

    or-int/2addr v0, v5

    shl-int/lit8 v5, v21, 0x8

    and-int/lit16 v5, v5, 0xf00

    or-int/2addr v0, v5

    shr-int/lit8 v5, v9, 0x8

    and-int/lit8 v5, v5, 0xf

    shl-int/lit8 v5, v5, 0xc

    or-int/2addr v0, v5

    .line 1400
    .end local v19    # "plmnid":I
    .restart local v0    # "plmnid":I
    shr-int/lit8 v5, v21, 0x4

    and-int/lit8 v5, v5, 0xf

    shl-int/lit8 v8, v21, 0x4

    and-int/lit16 v8, v8, 0xf0

    or-int/2addr v5, v8

    shl-int/lit8 v5, v5, 0x10

    or-int/2addr v0, v5

    .line 1402
    :goto_3
    const/4 v5, 0x6

    new-array v5, v5, [Ljava/lang/Object;

    .line 1403
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v17, 0x0

    aput-object v8, v5, v17

    invoke-static/range {v23 .. v23}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v17, 0x1

    aput-object v8, v5, v17

    invoke-static/range {v24 .. v24}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v16, 0x2

    aput-object v8, v5, v16

    invoke-static/range {v25 .. v25}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v16, 0x3

    aput-object v8, v5, v16

    invoke-static/range {v26 .. v26}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v16, 0x4

    aput-object v8, v5, v16

    shr-int/lit8 v8, v27, 0x4

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/16 v16, 0x5

    aput-object v8, v5, v16

    .line 1402
    const-string v8, "%06X%02X%02X%02X%02X%02X"

    invoke-static {v8, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    const/4 v8, 0x1

    invoke-virtual {v11, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    goto :goto_4

    .line 1333
    .end local v0    # "plmnid":I
    .end local v1    # "cellID":I
    .end local v4    # "mcc1":I
    .end local v6    # "mncVar":I
    .end local v7    # "gNBID":I
    .end local v9    # "mnc":I
    .end local v10    # "TACode":I
    .end local v14    # "mccVar":I
    .end local v15    # "nrNcgi":Ljava/lang/String;
    .end local v21    # "mcc":I
    .end local v22    # "cellGroupId":I
    .end local v23    # "cellId0":I
    .end local v24    # "cellId1":I
    .end local v25    # "cellId2":I
    .end local v26    # "cellId3":I
    .end local v27    # "cellId4":I
    .end local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    .end local v30    # "index":I
    .end local v31    # "mcc3":I
    .end local v32    # "mnc3":I
    .end local v35    # "vendorID":I
    .end local v38    # "servCellIndex":I
    .end local v40    # "version":I
    .end local v43    # "cellId":J
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    .local v3, "version":I
    .restart local v11    # "cellGroupId":I
    .local v12, "servCellIndex":I
    :cond_9
    move-object/from16 v28, v2

    move/from16 v40, v3

    move/from16 v22, v11

    move/from16 v38, v12

    move-object v11, v0

    .line 1405
    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .end local v3    # "version":I
    .end local v11    # "cellGroupId":I
    .end local v12    # "servCellIndex":I
    .end local v13    # "mncNum":I
    .restart local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    :goto_4
    move-object/from16 v1, p1

    move-object/from16 v3, v28

    goto/16 :goto_7

    .end local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_a
    move-object v11, v0

    move-object/from16 v28, v2

    move-object v0, v7

    move-object v15, v8

    move-object v7, v5

    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    const-string v2, "7100"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_c

    .line 1406
    iget-object v2, v11, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->UpLayerIndAddrs:[I

    const/4 v3, 0x0

    aget v2, v2, v3

    move-object/from16 v3, v28

    .end local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v3, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual {v11, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 1408
    .local v2, "version":I
    iget-object v4, v11, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->UpLayerIndAddrs:[I

    invoke-virtual {v11, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 1409
    .local v4, "UpLayerInd":I
    const/16 v5, 0xb

    if-nez v4, :cond_b

    const-string v8, "FALSE"

    goto :goto_5

    :cond_b
    const-string v8, "TRUE"

    :goto_5
    invoke-virtual {v11, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1410
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v15, v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1413
    .end local v2    # "version":I
    .end local v4    # "UpLayerInd":I
    goto :goto_7

    .end local v3    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_c
    move-object/from16 v3, v28

    .end local v28    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v3    # "icdPacket":Ljava/nio/ByteBuffer;
    const-string v2, "9610"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_e

    .line 1414
    iget-object v2, v11, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->srb3ConfStatusAddrs:[[I

    array-length v4, v2

    const/4 v5, 0x1

    sub-int/2addr v4, v5

    aget-object v2, v2, v4

    const/4 v4, 0x0

    aget v2, v2, v4

    invoke-virtual {v11, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 1416
    .restart local v2    # "version":I
    iget-object v4, v11, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->srb3ConfStatusAddrs:[[I

    invoke-virtual {v11, v3, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 1417
    .local v4, "srb3ConfStatus":I
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v15, v5, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1420
    if-nez v4, :cond_d

    const-string v0, "Not configured"

    goto :goto_6

    :cond_d
    const-string v0, "Configured"

    :goto_6
    const/16 v5, 0xa

    invoke-virtual {v11, v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->setData(ILjava/lang/Object;)V

    .line 1421
    .end local v2    # "version":I
    .end local v4    # "srb3ConfStatus":I
    goto :goto_7

    .line 1422
    :cond_e
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->icdLogInfo:[Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo1;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " unhandled MSG_ID, return! "

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v15, v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1425
    :goto_7
    return-void
.end method
