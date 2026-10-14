.class Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 2555
    const-string v0, "MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 2559
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2560
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2574
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2569
    const-string v0, "2. GSM EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 6

    .line 2578
    const-string v0, "BCCH RLA(Dedicated)"

    const-string v1, "RLA"

    const-string v2, "Reported"

    const-string v3, "RX level full"

    const-string v4, "RX quality sub"

    const-string v5, "RX quality full"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2564
    const-string v0, "Cell measurement (Serving)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2584
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 19
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2589
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 2590
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "rr_em_measurement_report_info."

    .line 2591
    .local v2, "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "rr_state"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 2593
    .local v3, "rrState":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "serv_rla_in_quarter_dbm"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    invoke-virtual {v0, v1, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 2598
    .local v4, "rla":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "serv_rla_reported_value"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 2602
    .local v6, "reported":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "is_serv_BCCH_rla_valid"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 2604
    .local v7, "bcchRlaValid":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "serv_BCCH_rla_in_dedi_state"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 2608
    .local v8, "bcchRla":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "serv_rla_full_value_in_quater_dbm"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9, v5}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 2612
    .local v9, "full":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rxqual_sub"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 2614
    .local v10, "rxSub":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rxqual_full"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 2617
    .local v11, "rxFull":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->clearData()V

    .line 2618
    const/4 v12, 0x3

    if-lt v3, v12, :cond_7

    const/4 v12, 0x7

    if-gt v3, v12, :cond_7

    .line 2619
    const-string v12, "%.2f"

    const/high16 v13, 0x40800000    # 4.0f

    const/16 v14, -0x3e8

    const-string v15, "-"

    if-lez v7, :cond_1

    .line 2620
    if-ne v8, v14, :cond_0

    .line 2621
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    goto :goto_0

    .line 2623
    :cond_0
    int-to-float v14, v8

    div-float/2addr v14, v13

    .line 2624
    .local v14, "value":F
    new-array v13, v5, [Ljava/lang/Object;

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v18

    const/16 v16, 0x0

    aput-object v18, v13, v16

    invoke-static {v12, v13}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    .line 2625
    .end local v14    # "value":F
    goto :goto_0

    .line 2627
    :cond_1
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    .line 2630
    :goto_0
    const/16 v13, -0x3e8

    if-ne v4, v13, :cond_2

    .line 2631
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    goto :goto_1

    .line 2633
    :cond_2
    int-to-float v13, v4

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v13, v14

    .line 2634
    .local v13, "value":F
    new-array v14, v5, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v18

    const/16 v16, 0x0

    aput-object v18, v14, v16

    invoke-static {v12, v14}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    .line 2637
    .end local v13    # "value":F
    :goto_1
    const/16 v13, -0x3e8

    if-ne v4, v13, :cond_3

    .line 2638
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    goto :goto_2

    .line 2640
    :cond_3
    new-array v13, v5, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    const/16 v16, 0x0

    aput-object v14, v13, v16

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData([Ljava/lang/Object;)V

    .line 2643
    :goto_2
    const/4 v13, 0x6

    if-eq v3, v13, :cond_4

    .line 2644
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    goto :goto_3

    .line 2646
    :cond_4
    int-to-float v13, v9

    const/high16 v14, 0x40800000    # 4.0f

    div-float/2addr v13, v14

    .line 2647
    .restart local v13    # "value":F
    new-array v14, v5, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v17

    const/16 v16, 0x0

    aput-object v17, v14, v16

    invoke-static {v12, v14}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    .line 2650
    .end local v13    # "value":F
    :goto_3
    const/16 v12, 0xff

    if-ne v10, v12, :cond_5

    .line 2651
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    const/16 v16, 0x0

    goto :goto_4

    .line 2653
    :cond_5
    new-array v13, v5, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    const/16 v16, 0x0

    aput-object v14, v13, v16

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData([Ljava/lang/Object;)V

    .line 2656
    :goto_4
    if-ne v11, v12, :cond_6

    .line 2657
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData(Ljava/lang/String;)V

    goto :goto_5

    .line 2659
    :cond_6
    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v5, v16

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->addData([Ljava/lang/Object;)V

    .line 2662
    :cond_7
    :goto_5
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CarrierRSSIServing;->notifyDataSetChanged()V

    .line 2663
    return-void
.end method
