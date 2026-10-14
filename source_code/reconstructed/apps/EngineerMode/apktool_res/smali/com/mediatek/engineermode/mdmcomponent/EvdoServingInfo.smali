.class Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 392
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 396
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 397
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 411
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 406
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 21

    .line 415
    const-string v0, "bandClass"

    const-string v1, "Channel"

    const-string v2, "pilotPN"

    const-string v3, "PhySubtype"

    const-string v4, "rssi_dbm"

    const-string v5, "div_rssi"

    const-string v6, "tx_Ant"

    const-string v7, "SectorID"

    const-string v8, "SubnetMask"

    const-string v9, "ColorCode"

    const-string v10, "UATI"

    const-string v11, "PilotInc"

    const-string v12, "ActiveSetWindow"

    const-string v13, "NeighborSetWindow"

    const-string v14, "RemainSetWindow"

    const-string v15, "sameFreq_T_ADD"

    const-string v16, "sameFreq_T_DROP"

    const-string v17, "sameFreq_T_tDROP"

    const-string v18, "diffFreq_T_ADD"

    const-string v19, "diffFreq_T_DROP"

    const-string v20, "diffFreq_T_tDROP"

    filled-new-array/range {v0 .. v20}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 401
    const-string v0, "EVDO Serving Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 425
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 30
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 429
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 430
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "band_class"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 431
    .local v2, "band_class":I
    const-string v3, "channel"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 433
    .local v3, "channel":I
    const-string v4, "pilotPN"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 434
    .local v4, "pilotPN":I
    const-string v5, "phy_subtype"

    const/4 v6, 0x1

    invoke-virtual {v0, v1, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 435
    .local v5, "phy_subtype":I
    const-string v7, "rssi_dbm"

    invoke-virtual {v0, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    div-int/lit16 v7, v7, 0x80

    .line 436
    .local v7, "rssi_dbm":I
    const-string v8, "div_rssi"

    invoke-virtual {v0, v1, v8, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    div-int/lit16 v8, v8, 0x80

    .line 437
    .local v8, "div_rssi":I
    const-string v9, "tx_ant_id"

    invoke-virtual {v0, v1, v9, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 439
    .local v9, "tx_ant_id":I
    const/16 v10, 0x22

    new-array v11, v10, [C

    .line 440
    .local v11, "sectorlD":[C
    const/4 v12, 0x0

    .local v12, "i":I
    :goto_0
    const-string v13, "]"

    if-ge v12, v10, :cond_0

    .line 441
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "sectorlD["

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    int-to-char v13, v13

    aput-char v13, v11, v12

    .line 440
    add-int/lit8 v12, v12, 0x1

    goto :goto_0

    .line 443
    .end local v12    # "i":I
    :cond_0
    new-instance v12, Ljava/lang/String;

    invoke-direct {v12, v11}, Ljava/lang/String;-><init>([C)V

    .line 445
    .local v12, "sectorlD_s":Ljava/lang/String;
    const-string v14, "subnetMask"

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 446
    .local v14, "subnetMask":I
    const-string v15, "colorCode"

    invoke-virtual {v0, v1, v15, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 448
    .local v15, "colorCode":I
    new-array v6, v10, [C

    .line 449
    .local v6, "uati":[C
    const/16 v17, 0x0

    move-object/from16 v18, v11

    move/from16 v11, v17

    .local v11, "i":I
    .local v18, "sectorlD":[C
    :goto_1
    if-ge v11, v10, :cond_1

    .line 450
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v19, v15

    .end local v15    # "colorCode":I
    .local v19, "colorCode":I
    const-string v15, "uati["

    invoke-virtual {v10, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    int-to-char v10, v10

    aput-char v10, v6, v11

    .line 449
    add-int/lit8 v11, v11, 0x1

    move/from16 v15, v19

    const/16 v10, 0x22

    goto :goto_1

    .end local v19    # "colorCode":I
    .restart local v15    # "colorCode":I
    :cond_1
    move/from16 v19, v15

    .line 452
    .end local v11    # "i":I
    .end local v15    # "colorCode":I
    .restart local v19    # "colorCode":I
    new-instance v10, Ljava/lang/String;

    invoke-direct {v10, v6}, Ljava/lang/String;-><init>([C)V

    .line 453
    .local v10, "uati_s":Ljava/lang/String;
    const-string v11, "pilotlnc"

    const/4 v13, 0x1

    invoke-virtual {v0, v1, v11, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 454
    .local v11, "pilotlnc":I
    const-string v15, "activeSetSchWin"

    invoke-virtual {v0, v1, v15, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 455
    .local v15, "activeSetSchWin":I
    move-object/from16 v17, v6

    .end local v6    # "uati":[C
    .local v17, "uati":[C
    const-string v6, "neighborSetSchWin"

    invoke-virtual {v0, v1, v6, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 457
    .local v6, "neighborSetSchWin":I
    const-string v13, "remainSetSchWin"

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 458
    .local v13, "remainSetSchWin":I
    move/from16 v20, v13

    .end local v13    # "remainSetSchWin":I
    .local v20, "remainSetSchWin":I
    const-string v13, "sameFreq_T_ADD"

    move/from16 v21, v6

    const/4 v6, 0x1

    .end local v6    # "neighborSetSchWin":I
    .local v21, "neighborSetSchWin":I
    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 459
    .local v13, "sameFreq_T_ADD":I
    move/from16 v22, v13

    .end local v13    # "sameFreq_T_ADD":I
    .local v22, "sameFreq_T_ADD":I
    const-string v13, "sameFreq_T_DROP"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 460
    .local v13, "sameFreq_T_DROP":I
    move/from16 v23, v13

    .end local v13    # "sameFreq_T_DROP":I
    .local v23, "sameFreq_T_DROP":I
    const-string v13, "sameFreq_T_tDROP"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 462
    .local v13, "sameFreq_T_tDROP":I
    move/from16 v24, v13

    .end local v13    # "sameFreq_T_tDROP":I
    .local v24, "sameFreq_T_tDROP":I
    const-string v13, "diffFreq_T_ADD"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 463
    .local v13, "diffFreq_T_ADD":I
    move/from16 v25, v13

    .end local v13    # "diffFreq_T_ADD":I
    .local v25, "diffFreq_T_ADD":I
    const-string v13, "diffFreq_T_DROP"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 464
    .local v13, "diffFreq_T_DROP":I
    move/from16 v26, v13

    .end local v13    # "diffFreq_T_DROP":I
    .local v26, "diffFreq_T_DROP":I
    const-string v13, "diffFreq_T_tDROP"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 465
    .local v13, "diffFreq_T_tDROP":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v27, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v27, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "band_class = "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 466
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->clearData()V

    .line 467
    const/4 v1, 0x1

    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    const/16 v28, 0x0

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 468
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 469
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 470
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 471
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 472
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 473
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 475
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData(Ljava/lang/String;)V

    .line 477
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 478
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 480
    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData(Ljava/lang/String;)V

    .line 482
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 483
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 484
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static/range {v21 .. v21}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 485
    new-array v6, v1, [Ljava/lang/Object;

    invoke-static/range {v20 .. v20}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 486
    new-array v6, v1, [Ljava/lang/Object;

    move/from16 v1, v22

    move/from16 v22, v2

    .end local v2    # "band_class":I
    .local v1, "sameFreq_T_ADD":I
    .local v22, "band_class":I
    int-to-float v2, v1

    const/high16 v29, -0x40000000    # -2.0f

    div-float v2, v2, v29

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 487
    const/4 v2, 0x1

    new-array v6, v2, [Ljava/lang/Object;

    move/from16 v2, v23

    move/from16 v23, v1

    .end local v1    # "sameFreq_T_ADD":I
    .local v2, "sameFreq_T_DROP":I
    .local v23, "sameFreq_T_ADD":I
    int-to-float v1, v2

    div-float v1, v1, v29

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    aput-object v1, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 488
    const/4 v1, 0x1

    new-array v6, v1, [Ljava/lang/Object;

    invoke-static/range {v24 .. v24}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 489
    new-array v6, v1, [Ljava/lang/Object;

    move/from16 v1, v25

    move/from16 v25, v2

    .end local v2    # "sameFreq_T_DROP":I
    .local v1, "diffFreq_T_ADD":I
    .local v25, "sameFreq_T_DROP":I
    int-to-float v2, v1

    div-float v2, v2, v29

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 490
    const/4 v2, 0x1

    new-array v6, v2, [Ljava/lang/Object;

    move/from16 v2, v26

    move/from16 v26, v1

    .end local v1    # "diffFreq_T_ADD":I
    .local v2, "diffFreq_T_DROP":I
    .local v26, "diffFreq_T_ADD":I
    int-to-float v1, v2

    div-float v1, v1, v29

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    aput-object v1, v6, v28

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 491
    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v1, v28

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->addData([Ljava/lang/Object;)V

    .line 493
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoServingInfo;->notifyDataSetChanged()V

    .line 495
    return-void
.end method
