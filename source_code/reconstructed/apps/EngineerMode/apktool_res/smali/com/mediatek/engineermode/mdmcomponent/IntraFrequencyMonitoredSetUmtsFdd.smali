.class Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 6507
    const-string v0, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 6511
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6512
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6526
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6521
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 6530
    const-string v0, "Monitored set Information: "

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6516
    const-string v0, "Monitored set Information(UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6535
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 32
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6540
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 6541
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "num_cells"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6542
    .local v2, "num_cells":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->clearData()V

    .line 6543
    const/4 v3, 0x0

    .line 6544
    .local v3, "num_monitored":I
    const-string v4, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    move-object/from16 v5, p1

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 6545
    const-string v4, "umts_cell_list["

    .line 6546
    .local v4, "coName":Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    if-ge v6, v2, :cond_3

    .line 6547
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "]."

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "cell_type"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6549
    .local v7, "cellType":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "cellType = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v10, "EmInfo/MDMComponent"

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6550
    const/4 v9, 0x1

    if-ne v7, v9, :cond_2

    .line 6551
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "UARFCN"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 6554
    .local v11, "uarfcn":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "PSC"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 6557
    .local v12, "psc":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "RSCP"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13, v9}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    int-to-long v13, v13

    .line 6560
    .local v13, "rscp":J
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "ECN0"

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v15, 0x1

    invoke-virtual {v0, v1, v9, v15}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    move-wide/from16 v16, v13

    .end local v13    # "rscp":J
    .local v16, "rscp":J
    int-to-long v13, v9

    .line 6563
    .local v13, "ecn0":J
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "lac"

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 6565
    .local v9, "lac":I
    move/from16 v18, v2

    .end local v2    # "num_cells":I
    .local v18, "num_cells":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "rac"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6567
    .local v2, "rac":I
    move/from16 v19, v7

    .end local v7    # "cellType":I
    .local v19, "cellType":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-wide/from16 v20, v13

    .end local v13    # "ecn0":J
    .local v20, "ecn0":J
    const-string v13, "Cell_identity"

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6569
    .local v7, "cell_id":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "num_plmn_id"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 6572
    .local v13, "num_plmn_id":I
    new-array v14, v13, [Ljava/lang/String;

    .line 6573
    .local v14, "plmn_a":[Ljava/lang/String;
    const/16 v22, 0x0

    move/from16 v23, v7

    move/from16 v7, v22

    .local v7, "j":I
    .local v23, "cell_id":I
    :goto_1
    move/from16 v22, v2

    .end local v2    # "rac":I
    .local v22, "rac":I
    const-string v2, "["

    const/16 v24, 0x0

    if-ge v7, v13, :cond_0

    .line 6574
    move/from16 v25, v13

    .end local v13    # "num_plmn_id":I
    .local v25, "num_plmn_id":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v26, v9

    .end local v9    # "lac":I
    .local v26, "lac":I
    const-string v9, "plmn_id_list"

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 6576
    .local v2, "secName":Ljava/lang/String;
    const/4 v9, 0x0

    .line 6577
    .local v9, "value":I
    const-string v13, ""

    .line 6578
    .local v13, "plmn":Ljava/lang/String;
    move/from16 v27, v9

    .end local v9    # "value":I
    .local v27, "value":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v28, v12

    .end local v12    # "psc":I
    .local v28, "psc":I
    const-string v12, "mcc"

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 6580
    .end local v27    # "value":I
    .restart local v9    # "value":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 6581
    .end local v13    # "plmn":Ljava/lang/String;
    .local v12, "plmn":Ljava/lang/String;
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v27, v2

    .end local v2    # "secName":Ljava/lang/String;
    .local v27, "secName":Ljava/lang/String;
    const-string v2, "mnc"

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6583
    .end local v9    # "value":I
    .local v2, "value":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v29, v12

    const/4 v13, 0x1

    .end local v12    # "plmn":Ljava/lang/String;
    .local v29, "plmn":Ljava/lang/String;
    new-array v12, v13, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v12, v24

    const-string v13, "%02d"

    invoke-static {v13, v12}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 6584
    .end local v29    # "plmn":Ljava/lang/String;
    .local v9, "plmn":Ljava/lang/String;
    aput-object v9, v14, v7

    .line 6573
    .end local v2    # "value":I
    .end local v9    # "plmn":Ljava/lang/String;
    .end local v27    # "secName":Ljava/lang/String;
    add-int/lit8 v7, v7, 0x1

    move/from16 v2, v22

    move/from16 v13, v25

    move/from16 v9, v26

    move/from16 v12, v28

    goto/16 :goto_1

    .end local v25    # "num_plmn_id":I
    .end local v26    # "lac":I
    .end local v28    # "psc":I
    .local v9, "lac":I
    .local v12, "psc":I
    .local v13, "num_plmn_id":I
    :cond_0
    move/from16 v26, v9

    move/from16 v28, v12

    move/from16 v25, v13

    .line 6586
    .end local v7    # "j":I
    .end local v9    # "lac":I
    .end local v12    # "psc":I
    .end local v13    # "num_plmn_id":I
    .restart local v25    # "num_plmn_id":I
    .restart local v26    # "lac":I
    .restart local v28    # "psc":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "num_ura_id"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6588
    .local v7, "num_ura_id":I
    new-array v9, v7, [I

    .line 6589
    .local v9, "ura":[I
    const/4 v12, 0x0

    .local v12, "j":I
    :goto_2
    if-ge v12, v7, :cond_1

    .line 6590
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v27, v4

    .end local v4    # "coName":Ljava/lang/String;
    .local v27, "coName":Ljava/lang/String;
    const-string v4, "uraIdentity"

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 6592
    .local v4, "secName":Ljava/lang/String;
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v29, v2

    const-string v2, "stringData"

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v30, v7

    .end local v7    # "num_ura_id":I
    .local v30, "num_ura_id":I
    const-string v7, "[0]"

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6594
    .local v7, "stringData0":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "[1]"

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6596
    .local v2, "stringData1":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v31, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v31, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "stringData0 = "

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6597
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "stringData1 = "

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6598
    shl-int/lit8 v1, v7, 0x8

    or-int/2addr v1, v2

    aput v1, v9, v12

    .line 6589
    .end local v2    # "stringData1":I
    .end local v4    # "secName":Ljava/lang/String;
    .end local v7    # "stringData0":I
    add-int/lit8 v12, v12, 0x1

    move-object/from16 v4, v27

    move-object/from16 v2, v29

    move/from16 v7, v30

    move-object/from16 v1, v31

    goto/16 :goto_2

    .end local v27    # "coName":Ljava/lang/String;
    .end local v30    # "num_ura_id":I
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v4, "coName":Ljava/lang/String;
    .local v7, "num_ura_id":I
    :cond_1
    move-object/from16 v31, v1

    move-object/from16 v27, v4

    move/from16 v30, v7

    .line 6600
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v4    # "coName":Ljava/lang/String;
    .end local v7    # "num_ura_id":I
    .end local v12    # "j":I
    .restart local v27    # "coName":Ljava/lang/String;
    .restart local v30    # "num_ura_id":I
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Object;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "ActiveSetUmtsFdd("

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "): "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v2, v24

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6601
    add-int/lit8 v3, v3, 0x1

    .line 6602
    const/4 v1, 0x5

    new-array v2, v1, [Ljava/lang/Object;

    const-string v4, "uarfcn"

    aput-object v4, v2, v24

    const-string v4, "psc"

    const/4 v7, 0x1

    aput-object v4, v2, v7

    const-string v4, "plmn"

    const/4 v7, 0x2

    aput-object v4, v2, v7

    const/4 v4, 0x3

    aput-object v15, v2, v4

    const/4 v8, 0x4

    aput-object v5, v2, v8

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6603
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v2, v24

    invoke-static/range {v28 .. v28}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/4 v10, 0x1

    aput-object v5, v2, v10

    invoke-static {v14}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v2, v7

    invoke-static/range {v26 .. v26}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v2, v4

    invoke-static/range {v22 .. v22}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v2, v8

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6604
    new-array v2, v1, [Ljava/lang/Object;

    const-string v5, "ura"

    aput-object v5, v2, v24

    const-string v5, "cell_id"

    const/4 v10, 0x1

    aput-object v5, v2, v10

    const-string v5, "rscp"

    aput-object v5, v2, v7

    const-string v5, "ecn0"

    aput-object v5, v2, v4

    const-string v5, "-"

    aput-object v5, v2, v8

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6605
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v24

    invoke-static/range {v23 .. v23}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v10, 0x1

    aput-object v2, v1, v10

    invoke-static/range {v16 .. v17}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v1, v7

    invoke-static/range {v20 .. v21}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v1, v4

    aput-object v5, v1, v8

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/IntraFrequencyMonitoredSetUmtsFdd;->addData([Ljava/lang/Object;)V

    goto :goto_3

    .line 6550
    .end local v9    # "ura":[I
    .end local v11    # "uarfcn":I
    .end local v14    # "plmn_a":[Ljava/lang/String;
    .end local v16    # "rscp":J
    .end local v18    # "num_cells":I
    .end local v19    # "cellType":I
    .end local v20    # "ecn0":J
    .end local v22    # "rac":I
    .end local v23    # "cell_id":I
    .end local v25    # "num_plmn_id":I
    .end local v26    # "lac":I
    .end local v27    # "coName":Ljava/lang/String;
    .end local v28    # "psc":I
    .end local v30    # "num_ura_id":I
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "num_cells":I
    .restart local v4    # "coName":Ljava/lang/String;
    .local v7, "cellType":I
    :cond_2
    move-object/from16 v31, v1

    move/from16 v18, v2

    move-object/from16 v27, v4

    move/from16 v19, v7

    .line 6546
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_cells":I
    .end local v4    # "coName":Ljava/lang/String;
    .end local v7    # "cellType":I
    .restart local v18    # "num_cells":I
    .restart local v27    # "coName":Ljava/lang/String;
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    :goto_3
    add-int/lit8 v6, v6, 0x1

    move-object/from16 v5, p1

    move/from16 v2, v18

    move-object/from16 v4, v27

    move-object/from16 v1, v31

    goto/16 :goto_0

    .end local v18    # "num_cells":I
    .end local v27    # "coName":Ljava/lang/String;
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "num_cells":I
    .restart local v4    # "coName":Ljava/lang/String;
    :cond_3
    move-object/from16 v31, v1

    move/from16 v18, v2

    move-object/from16 v27, v4

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_cells":I
    .end local v4    # "coName":Ljava/lang/String;
    .restart local v18    # "num_cells":I
    .restart local v27    # "coName":Ljava/lang/String;
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    goto :goto_4

    .line 6544
    .end local v6    # "i":I
    .end local v18    # "num_cells":I
    .end local v27    # "coName":Ljava/lang/String;
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "num_cells":I
    :cond_4
    move-object/from16 v31, v1

    move/from16 v18, v2

    .line 6609
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_cells":I
    .restart local v18    # "num_cells":I
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    :goto_4
    return-void
.end method
