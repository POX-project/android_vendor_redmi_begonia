.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field CPMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field StateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field ValueMapping:Ljava/util/HashMap;
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
    .locals 1

    .line 500
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 544
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 503
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->StateMapping:Ljava/util/HashMap;

    .line 510
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->ValueMapping:Ljava/util/HashMap;

    .line 516
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->CPMapping:Ljava/util/HashMap;

    .line 545
    return-void
.end method

.method private decodeMcc(I)Ljava/lang/String;
    .locals 2
    .param p1, "value"    # I

    .line 585
    add-int/lit8 p1, p1, 0x6f

    .line 586
    rem-int/lit8 v0, p1, 0xa

    if-nez v0, :cond_0

    .line 587
    add-int/lit8 p1, p1, -0xa

    .line 589
    :cond_0
    div-int/lit8 v0, p1, 0xa

    rem-int/lit8 v0, v0, 0xa

    if-nez v0, :cond_1

    .line 590
    add-int/lit8 p1, p1, -0x64

    .line 592
    :cond_1
    div-int/lit8 v0, p1, 0x64

    rem-int/lit8 v0, v0, 0xa

    if-nez v0, :cond_2

    .line 593
    add-int/lit16 p1, p1, -0x3e8

    .line 595
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "000"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private decodeMnc(I)Ljava/lang/String;
    .locals 2
    .param p1, "value"    # I

    .line 599
    add-int/lit8 p1, p1, 0xb

    .line 600
    rem-int/lit8 v0, p1, 0xa

    if-nez v0, :cond_0

    .line 601
    add-int/lit8 p1, p1, -0xa

    .line 603
    :cond_0
    div-int/lit8 v0, p1, 0xa

    rem-int/lit8 v0, v0, 0xa

    if-nez v0, :cond_1

    .line 604
    add-int/lit8 p1, p1, -0x64

    .line 606
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "00"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 559
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 554
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 22

    .line 563
    const-string v0, "cp_state"

    const-string v1, "rf_file_cal_state"

    const-string v2, "RfFileMajorVersion"

    const-string v3, "RfFileMinorVersion"

    const-string v4, "RfFileValueVersion"

    const-string v5, "RfFileCustVersion"

    const-string v6, "sid"

    const-string v7, "nid"

    const-string v8, "sys_det_ind"

    const-string v9, "reg_zone"

    const-string v10, "base_lat"

    const-string v11, "base_long"

    const-string v12, "nwk_pref_sci"

    const-string v13, "qpch_mode"

    const-string v14, "mcc"

    const-string v15, "imsi_11_12"

    const-string v16, "pkt_zone_id"

    const-string v17, "service_option"

    const-string v18, "t_add"

    const-string v19, "t_drop"

    const-string v20, "t_comp"

    const-string v21, "t_tdrop"

    filled-new-array/range {v0 .. v21}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 549
    const-string v0, "1xRTT info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 574
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 29
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 610
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 611
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "cp_state"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 612
    .local v2, "cp_state":I
    const-string v3, "rf_file_cal_state"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 614
    .local v3, "rf_file_cal_state":I
    const-string v4, "rf_file_ver.major_ver"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 615
    .local v4, "major_ver":I
    const-string v5, "rf_file_ver.minor_ver"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 616
    .local v5, "minor_ver":I
    const-string v6, "rf_file_ver.value_ver"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 617
    .local v6, "value_ver":I
    const-string v7, "rf_file_ver.cust_ver"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 619
    .local v7, "cust_ver":I
    const-string v8, "sid"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 620
    .local v8, "sid":I
    const-string v9, "nid"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 622
    .local v9, "nid":I
    const-string v10, "sys_det_ind"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 624
    .local v10, "sys_det_ind":I
    const-string v11, "reg_zone"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 625
    .local v11, "reg_zone":I
    const-string v12, "base_lat"

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 626
    .local v12, "base_lat":I
    const-string v13, "base_long"

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 628
    .local v13, "base_long":I
    const-string v14, "nwk_pref_sci"

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 629
    .local v14, "nwk_pref_sci":I
    const-string v15, "qpch_mode"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 630
    .local v15, "qpch_mode":I
    move/from16 v16, v15

    .end local v15    # "qpch_mode":I
    .local v16, "qpch_mode":I
    const-string v15, "mcc"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 631
    .local v15, "mcc":I
    move/from16 v17, v15

    .end local v15    # "mcc":I
    .local v17, "mcc":I
    const-string v15, "imsi_11_12"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 633
    .local v15, "imsi_11_12":I
    move/from16 v18, v15

    .end local v15    # "imsi_11_12":I
    .local v18, "imsi_11_12":I
    const-string v15, "pkt_zone_id"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 634
    .local v15, "pkt_zone_id":I
    move/from16 v19, v15

    .end local v15    # "pkt_zone_id":I
    .local v19, "pkt_zone_id":I
    const-string v15, "service_option"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 635
    .local v15, "service_option":I
    move/from16 v20, v15

    .end local v15    # "service_option":I
    .local v20, "service_option":I
    const-string v15, "t_add"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 637
    .local v15, "t_add":I
    move/from16 v21, v15

    .end local v15    # "t_add":I
    .local v21, "t_add":I
    const-string v15, "t_drop"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 638
    .local v15, "t_drop":I
    move/from16 v22, v15

    .end local v15    # "t_drop":I
    .local v22, "t_drop":I
    const-string v15, "t_comp"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 639
    .local v15, "t_comp":I
    move/from16 v23, v15

    .end local v15    # "t_comp":I
    .local v23, "t_comp":I
    const-string v15, "t_tdrop"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 641
    .local v15, "t_tdrop":I
    move-object/from16 v24, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v24, "data":Lcom/mediatek/mdml/Msg;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v25, v14

    .end local v14    # "nwk_pref_sci":I
    .local v25, "nwk_pref_sci":I
    const-string v14, "t_tdrop = "

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v14, "EmInfo/MDMComponent"

    invoke-static {v14, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 642
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->clearData()V

    .line 643
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->CPMapping:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v1, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData(Ljava/lang/String;)V

    .line 644
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->StateMapping:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v1, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData(Ljava/lang/String;)V

    .line 645
    const/4 v1, 0x1

    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    const/16 v27, 0x0

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 646
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 647
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 648
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 650
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 651
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 652
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 653
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 654
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 655
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 656
    new-array v14, v1, [Ljava/lang/Object;

    invoke-static/range {v25 .. v25}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v14, v27

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 657
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->ValueMapping:Ljava/util/HashMap;

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v14, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData(Ljava/lang/String;)V

    .line 658
    move/from16 v1, v17

    .end local v17    # "mcc":I
    .local v1, "mcc":I
    invoke-direct {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->decodeMcc(I)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData(Ljava/lang/String;)V

    .line 659
    move/from16 v14, v18

    .end local v1    # "mcc":I
    .end local v18    # "imsi_11_12":I
    .local v14, "imsi_11_12":I
    .restart local v17    # "mcc":I
    invoke-direct {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->decodeMnc(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData(Ljava/lang/String;)V

    .line 660
    move/from16 v18, v2

    const/4 v1, 0x1

    .end local v2    # "cp_state":I
    .local v18, "cp_state":I
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v2, v27

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 661
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static/range {v20 .. v20}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v2, v27

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 662
    new-array v2, v1, [Ljava/lang/Object;

    move/from16 v1, v21

    move/from16 v21, v3

    .end local v3    # "rf_file_cal_state":I
    .local v1, "t_add":I
    .local v21, "rf_file_cal_state":I
    int-to-float v3, v1

    const/high16 v28, -0x40000000    # -2.0f

    div-float v3, v3, v28

    invoke-static {v3}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    aput-object v3, v2, v27

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 663
    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Object;

    move/from16 v2, v22

    move/from16 v22, v1

    .end local v1    # "t_add":I
    .local v2, "t_drop":I
    .local v22, "t_add":I
    int-to-float v1, v2

    div-float v1, v1, v28

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    aput-object v1, v3, v27

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 664
    const/4 v1, 0x1

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static/range {v23 .. v23}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v26

    aput-object v26, v3, v27

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 665
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v27

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->addData([Ljava/lang/Object;)V

    .line 666
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttInfo;->notifyDataSetChanged()V

    .line 667
    return-void
.end method
