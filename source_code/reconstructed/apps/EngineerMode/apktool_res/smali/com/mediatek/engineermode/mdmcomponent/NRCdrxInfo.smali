.class Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlRestranTimerAddrs:[[I

.field dlRttTimerAddrs:[[I

.field drxConfValidAddrs:[[I

.field drxDurTimerAddrs:[[I

.field drxDurTimerUnitAddrs:[[I

.field inactTimerAddrs:[[I

.field longCycleAddrs:[[I

.field shortCycleAddrs:[[I

.field shortCycleTimerAddrs:[[I

.field shortCycleValidAddrs:[[I

.field slotOffsetAddrs:[[I

.field startOffsetAddrs:[[I

.field ulRestranTimerAddrs:[[I

.field ulRttTimerAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 3577
    const-string v0, "type_icd_event"

    const-string v1, "9588"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 8
    .param p1, "context"    # Landroid/app/Activity;

    .line 3667
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3582
    const/4 v0, 0x3

    new-array v1, v0, [[I

    const/4 v2, 0x0

    new-array v3, v2, [I

    aput-object v3, v1, v2

    const/4 v3, 0x4

    new-array v4, v3, [I

    fill-array-data v4, :array_0

    const/4 v5, 0x1

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_1

    const/4 v6, 0x2

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->drxConfValidAddrs:[[I

    .line 3588
    new-array v1, v0, [[I

    new-array v4, v2, [I

    aput-object v4, v1, v2

    const/4 v4, 0x5

    new-array v7, v4, [I

    fill-array-data v7, :array_2

    aput-object v7, v1, v5

    new-array v7, v4, [I

    fill-array-data v7, :array_3

    aput-object v7, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->drxDurTimerUnitAddrs:[[I

    .line 3594
    new-array v1, v0, [[I

    new-array v7, v2, [I

    aput-object v7, v1, v2

    new-array v7, v4, [I

    fill-array-data v7, :array_4

    aput-object v7, v1, v5

    new-array v7, v4, [I

    fill-array-data v7, :array_5

    aput-object v7, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->drxDurTimerAddrs:[[I

    .line 3600
    new-array v1, v0, [[I

    new-array v7, v2, [I

    aput-object v7, v1, v2

    new-array v7, v3, [I

    fill-array-data v7, :array_6

    aput-object v7, v1, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_7

    aput-object v7, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->inactTimerAddrs:[[I

    .line 3606
    new-array v1, v0, [[I

    new-array v7, v2, [I

    aput-object v7, v1, v2

    new-array v7, v3, [I

    fill-array-data v7, :array_8

    aput-object v7, v1, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_9

    aput-object v7, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->longCycleAddrs:[[I

    .line 3612
    new-array v1, v0, [[I

    new-array v7, v2, [I

    aput-object v7, v1, v2

    new-array v7, v4, [I

    fill-array-data v7, :array_a

    aput-object v7, v1, v5

    new-array v7, v4, [I

    fill-array-data v7, :array_b

    aput-object v7, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->shortCycleValidAddrs:[[I

    .line 3618
    new-array v1, v0, [[I

    new-array v7, v2, [I

    aput-object v7, v1, v2

    new-array v7, v4, [I

    fill-array-data v7, :array_c

    aput-object v7, v1, v5

    new-array v7, v4, [I

    fill-array-data v7, :array_d

    aput-object v7, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->shortCycleAddrs:[[I

    .line 3624
    new-array v1, v0, [[I

    new-array v7, v2, [I

    aput-object v7, v1, v2

    new-array v7, v4, [I

    fill-array-data v7, :array_e

    aput-object v7, v1, v5

    new-array v4, v4, [I

    fill-array-data v4, :array_f

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->shortCycleTimerAddrs:[[I

    .line 3630
    new-array v1, v0, [[I

    new-array v4, v2, [I

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_10

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_11

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->startOffsetAddrs:[[I

    .line 3636
    new-array v1, v0, [[I

    new-array v4, v2, [I

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_12

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_13

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->slotOffsetAddrs:[[I

    .line 3642
    new-array v1, v0, [[I

    new-array v4, v2, [I

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_14

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_15

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->dlRttTimerAddrs:[[I

    .line 3648
    new-array v1, v0, [[I

    new-array v4, v2, [I

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_16

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_17

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->ulRttTimerAddrs:[[I

    .line 3654
    new-array v1, v0, [[I

    new-array v4, v2, [I

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_18

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_19

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->dlRestranTimerAddrs:[[I

    .line 3660
    new-array v0, v0, [[I

    new-array v1, v2, [I

    aput-object v1, v0, v2

    new-array v1, v3, [I

    fill-array-data v1, :array_1a

    aput-object v1, v0, v5

    new-array v1, v3, [I

    fill-array-data v1, :array_1b

    aput-object v1, v0, v6

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->ulRestranTimerAddrs:[[I

    .line 3668
    return-void

    :array_0
    .array-data 4
        0x8
        0x38
        0x0
        0x8
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x0
        0x8
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x38
        0x20
        0x10
        0x10
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x38
        0x20
        0x10
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x60
        0x10
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x38
        0x60
        0x10
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x38
        0x90
        0x10
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x38
        0x90
        0x10
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x38
        0x40
        0x0
        0x8
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x38
        0x40
        0x0
        0x8
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x38
        0x40
        0x10
        0x10
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x38
        0x40
        0x10
        0x10
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x38
        0x40
        0x8
        0x8
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x38
        0x40
        0x8
        0x8
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x38
        0xa0
        0x10
    .end array-data

    :array_11
    .array-data 4
        0x8
        0x38
        0xa0
        0x10
    .end array-data

    :array_12
    .array-data 4
        0x8
        0x38
        0x18
        0x8
    .end array-data

    :array_13
    .array-data 4
        0x8
        0x38
        0x18
        0x8
    .end array-data

    :array_14
    .array-data 4
        0x8
        0x38
        0x8
        0x8
    .end array-data

    :array_15
    .array-data 4
        0x8
        0x38
        0x8
        0x8
    .end array-data

    :array_16
    .array-data 4
        0x8
        0x38
        0x10
        0x8
    .end array-data

    :array_17
    .array-data 4
        0x8
        0x38
        0x10
        0x8
    .end array-data

    :array_18
    .array-data 4
        0x8
        0x38
        0x70
        0x10
    .end array-data

    :array_19
    .array-data 4
        0x8
        0x38
        0x70
        0x10
    .end array-data

    :array_1a
    .array-data 4
        0x8
        0x38
        0x80
        0x10
    .end array-data

    :array_1b
    .array-data 4
        0x8
        0x38
        0x80
        0x10
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3682
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3677
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 11

    .line 3686
    const-string v0, "OnDuration Timer"

    const-string v1, " Inactivity Timer"

    const-string v2, "Long Cycle"

    const-string v3, "Short Cycle"

    const-string v4, "Start Offset"

    const-string v5, "Slot Offset"

    const-string v6, "Short Cycle Timer"

    const-string v7, "DL RTT Timer"

    const-string v8, "UL RTT Timer"

    const-string v9, "DL Retransmission Timer"

    const-string v10, "UL Retransmission Timer"

    filled-new-array/range {v0 .. v10}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3672
    const-string v0, "NR CDRX Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3693
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 27
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3697
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 3699
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->clearData()V

    .line 3701
    const/16 v3, 0x8

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v4

    .line 3702
    .local v4, "version":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->drxConfValidAddrs:[[I

    invoke-virtual {v0, v2, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 3703
    .local v5, "drxConfValid":I
    const/4 v12, 0x3

    const/4 v13, 0x2

    const/4 v14, 0x1

    const/4 v15, 0x0

    const/16 v6, 0xb

    const-string v7, ", version = "

    const-string v3, " update,name id = "

    const-string v8, "EmInfo/MDMComponent"

    const-string v17, "Invalid"

    if-nez v5, :cond_0

    .line 3704
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", valid = "

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v9, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3707
    new-array v3, v6, [Ljava/lang/Object;

    aput-object v17, v3, v15

    aput-object v17, v3, v14

    aput-object v17, v3, v13

    aput-object v17, v3, v12

    const/4 v6, 0x4

    aput-object v17, v3, v6

    const/4 v6, 0x5

    aput-object v17, v3, v6

    const/4 v6, 0x6

    aput-object v17, v3, v6

    const/4 v6, 0x7

    aput-object v17, v3, v6

    const/16 v6, 0x8

    aput-object v17, v3, v6

    const/16 v6, 0x9

    aput-object v17, v3, v6

    const/16 v6, 0xa

    aput-object v17, v3, v6

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->addData([Ljava/lang/Object;)V

    move-object/from16 v24, v2

    move/from16 v20, v4

    move/from16 v19, v5

    move-object v2, v0

    goto/16 :goto_3

    .line 3711
    :cond_0
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->drxDurTimerUnitAddrs:[[I

    invoke-virtual {v0, v2, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v9

    .line 3713
    .local v9, "drxDurTimerUnit":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->drxDurTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v10

    .line 3715
    .local v10, "drxDurTimer":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->inactTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v11

    .line 3717
    .local v11, "inactTimer":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->longCycleAddrs:[[I

    invoke-virtual {v0, v2, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v12

    .line 3719
    .local v12, "longCycle":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->shortCycleValidAddrs:[[I

    invoke-virtual {v0, v2, v4, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v13

    .line 3721
    .local v13, "shortCycleValid":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->shortCycleAddrs:[[I

    invoke-virtual {v0, v2, v4, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v14

    .line 3723
    .local v14, "shortCycle":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->shortCycleTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 3725
    .local v15, "shortCycleTimer":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->startOffsetAddrs:[[I

    invoke-virtual {v0, v2, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 3727
    .local v6, "startOffset":I
    move-object/from16 v19, v8

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->slotOffsetAddrs:[[I

    invoke-virtual {v0, v2, v4, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 3729
    .local v8, "slotOffset":I
    move/from16 v20, v15

    .end local v15    # "shortCycleTimer":I
    .local v20, "shortCycleTimer":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->dlRttTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 3731
    .local v15, "dlRttTimer":I
    move/from16 v21, v15

    .end local v15    # "dlRttTimer":I
    .local v21, "dlRttTimer":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->ulRttTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 3733
    .local v15, "ulRttTimer":I
    move/from16 v22, v15

    .end local v15    # "ulRttTimer":I
    .local v22, "ulRttTimer":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->dlRestranTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 3735
    .local v15, "dlRestranTimer":I
    move/from16 v23, v15

    .end local v15    # "dlRestranTimer":I
    .local v23, "dlRestranTimer":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->ulRestranTimerAddrs:[[I

    invoke-virtual {v0, v2, v4, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 3736
    .local v15, "ulRestranTimer":I
    move-object/from16 v24, v2

    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v24, "icdPacket":Ljava/nio/ByteBuffer;
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v25, v2

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", condition = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", value = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", , "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v3, v20

    .end local v20    # "shortCycleTimer":I
    .local v3, "shortCycleTimer":I
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v7, v21

    .end local v21    # "dlRttTimer":I
    .local v7, "dlRttTimer":I
    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v1, v22

    .end local v22    # "ulRttTimer":I
    .local v1, "ulRttTimer":I
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v20, v4

    move/from16 v4, v23

    .end local v23    # "dlRestranTimer":I
    .local v4, "dlRestranTimer":I
    .local v20, "version":I
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v2, v25

    move-object/from16 v26, v19

    move/from16 v19, v5

    move-object/from16 v5, v26

    .end local v5    # "drxConfValid":I
    .local v19, "drxConfValid":I
    invoke-static {v5, v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3743
    const/16 v0, 0xb

    new-array v0, v0, [Ljava/lang/Object;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " ms"

    if-nez v9, :cond_1

    const-string v18, " 1/32ms"

    move-object/from16 v26, v18

    move/from16 v18, v9

    move-object/from16 v9, v26

    goto :goto_0

    :cond_1
    move/from16 v18, v9

    move-object v9, v5

    .end local v9    # "drxDurTimerUnit":I
    .local v18, "drxDurTimerUnit":I
    :goto_0
    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v9, 0x0

    aput-object v2, v0, v9

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v9, 0x1

    aput-object v2, v0, v9

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v9, 0x2

    aput-object v2, v0, v9

    .line 3744
    if-nez v13, :cond_2

    move-object/from16 v2, v17

    goto :goto_1

    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_1
    const/4 v9, 0x3

    aput-object v2, v0, v9

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v5, 0x4

    aput-object v2, v0, v5

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " slot"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v9, 0x5

    aput-object v2, v0, v9

    .line 3745
    if-nez v13, :cond_3

    goto :goto_2

    :cond_3
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v17

    :goto_2
    const/4 v2, 0x6

    aput-object v17, v0, v2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, " symbol"

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v16, 0x7

    aput-object v2, v0, v16

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v9, 0x8

    aput-object v2, v0, v9

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v9, 0x9

    aput-object v2, v0, v9

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v5, 0xa

    aput-object v2, v0, v5

    .line 3743
    move-object/from16 v2, p0

    invoke-virtual {v2, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRCdrxInfo;->addData([Ljava/lang/Object;)V

    .line 3749
    .end local v1    # "ulRttTimer":I
    .end local v3    # "shortCycleTimer":I
    .end local v4    # "dlRestranTimer":I
    .end local v6    # "startOffset":I
    .end local v7    # "dlRttTimer":I
    .end local v8    # "slotOffset":I
    .end local v10    # "drxDurTimer":I
    .end local v11    # "inactTimer":I
    .end local v12    # "longCycle":I
    .end local v13    # "shortCycleValid":I
    .end local v14    # "shortCycle":I
    .end local v15    # "ulRestranTimer":I
    .end local v18    # "drxDurTimerUnit":I
    :goto_3
    return-void
.end method
