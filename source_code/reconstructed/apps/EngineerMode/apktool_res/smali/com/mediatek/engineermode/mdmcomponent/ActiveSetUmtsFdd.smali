.class Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 6669
    const-string v0, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 6674
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6675
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6689
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6684
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 6693
    const-string v0, "Active Set Information: "

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6679
    const-string v0, "Active Set Information (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6699
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 32
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6704
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 6705
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "num_cells"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6706
    .local v2, "num_cells":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->clearData()V

    .line 6707
    const/4 v3, 0x0

    .line 6708
    .local v3, "num_active":I
    const-string v4, "MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND"

    move-object/from16 v5, p1

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 6709
    const-string v4, "umts_cell_list["

    .line 6710
    .local v4, "coName":Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    if-ge v6, v2, :cond_3

    .line 6711
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

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6713
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

    .line 6714
    if-nez v7, :cond_2

    .line 6715
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "UARFCN"

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 6718
    .local v9, "uarfcn":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "PSC"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 6721
    .local v11, "psc":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "RSCP"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v1, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    int-to-long v14, v12

    .line 6724
    .local v14, "rscp":J
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "ECN0"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-virtual {v0, v1, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    int-to-long v12, v12

    .line 6727
    .local v12, "ecn0":J
    move/from16 v16, v2

    .end local v2    # "num_cells":I
    .local v16, "num_cells":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "lac"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6729
    .local v2, "lac":I
    move/from16 v17, v7

    .end local v7    # "cellType":I
    .local v17, "cellType":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-wide/from16 v18, v12

    .end local v12    # "ecn0":J
    .local v18, "ecn0":J
    const-string v12, "rac"

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6731
    .local v7, "rac":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-wide/from16 v20, v14

    .end local v14    # "rscp":J
    .local v20, "rscp":J
    const-string v14, "Cell_identity"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 6733
    .local v13, "cell_id":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "num_plmn_id"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 6736
    .local v14, "num_plmn_id":I
    new-array v15, v14, [Ljava/lang/String;

    .line 6737
    .local v15, "plmn_a":[Ljava/lang/String;
    const/16 v22, 0x0

    move/from16 v23, v13

    move/from16 v13, v22

    .local v13, "j":I
    .local v23, "cell_id":I
    :goto_1
    move/from16 v22, v7

    .end local v7    # "rac":I
    .local v22, "rac":I
    const-string v7, "["

    const/16 v24, 0x0

    if-ge v13, v14, :cond_0

    .line 6738
    move/from16 v25, v14

    .end local v14    # "num_plmn_id":I
    .local v25, "num_plmn_id":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v26, v2

    .end local v2    # "lac":I
    .local v26, "lac":I
    const-string v2, "plmn_id_list"

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 6740
    .local v2, "secName":Ljava/lang/String;
    const/4 v7, 0x0

    .line 6741
    .local v7, "value":I
    const-string v14, ""

    .line 6742
    .local v14, "plmn":Ljava/lang/String;
    move/from16 v27, v7

    .end local v7    # "value":I
    .local v27, "value":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v28, v11

    .end local v11    # "psc":I
    .local v28, "psc":I
    const-string v11, "mcc"

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6744
    .end local v27    # "value":I
    .restart local v7    # "value":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    .line 6745
    .end local v14    # "plmn":Ljava/lang/String;
    .local v11, "plmn":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v27, v2

    .end local v2    # "secName":Ljava/lang/String;
    .local v27, "secName":Ljava/lang/String;
    const-string v2, "mnc"

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6747
    .end local v7    # "value":I
    .local v2, "value":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v29, v11

    const/4 v14, 0x1

    .end local v11    # "plmn":Ljava/lang/String;
    .local v29, "plmn":Ljava/lang/String;
    new-array v11, v14, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v11, v24

    const-string v14, "%02d"

    invoke-static {v14, v11}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 6748
    .end local v29    # "plmn":Ljava/lang/String;
    .local v7, "plmn":Ljava/lang/String;
    aput-object v7, v15, v13

    .line 6737
    .end local v2    # "value":I
    .end local v7    # "plmn":Ljava/lang/String;
    .end local v27    # "secName":Ljava/lang/String;
    add-int/lit8 v13, v13, 0x1

    move/from16 v7, v22

    move/from16 v14, v25

    move/from16 v2, v26

    move/from16 v11, v28

    goto/16 :goto_1

    .end local v25    # "num_plmn_id":I
    .end local v26    # "lac":I
    .end local v28    # "psc":I
    .local v2, "lac":I
    .local v11, "psc":I
    .local v14, "num_plmn_id":I
    :cond_0
    move/from16 v26, v2

    move/from16 v28, v11

    move/from16 v25, v14

    .line 6750
    .end local v2    # "lac":I
    .end local v11    # "psc":I
    .end local v13    # "j":I
    .end local v14    # "num_plmn_id":I
    .restart local v25    # "num_plmn_id":I
    .restart local v26    # "lac":I
    .restart local v28    # "psc":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "num_ura_id"

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 6752
    .local v2, "num_ura_id":I
    new-array v11, v2, [I

    .line 6753
    .local v11, "ura":[I
    const/4 v13, 0x0

    .restart local v13    # "j":I
    :goto_2
    if-ge v13, v2, :cond_1

    .line 6754
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v27, v2

    .end local v2    # "num_ura_id":I
    .local v27, "num_ura_id":I
    const-string v2, "uraIdentity"

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 6756
    .local v2, "secName":Ljava/lang/String;
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v29, v4

    .end local v4    # "coName":Ljava/lang/String;
    .local v29, "coName":Ljava/lang/String;
    const-string v4, "stringData"

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v30, v7

    const-string v7, "[0]"

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6758
    .local v7, "stringData0":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "[1]"

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 6760
    .local v4, "stringData1":I
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v31, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v31, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "stringData0 = "

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6761
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "stringData1 = "

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6762
    shl-int/lit8 v1, v7, 0x8

    or-int/2addr v1, v4

    aput v1, v11, v13

    .line 6753
    .end local v2    # "secName":Ljava/lang/String;
    .end local v4    # "stringData1":I
    .end local v7    # "stringData0":I
    add-int/lit8 v13, v13, 0x1

    move/from16 v2, v27

    move-object/from16 v4, v29

    move-object/from16 v7, v30

    move-object/from16 v1, v31

    goto/16 :goto_2

    .end local v27    # "num_ura_id":I
    .end local v29    # "coName":Ljava/lang/String;
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "num_ura_id":I
    .local v4, "coName":Ljava/lang/String;
    :cond_1
    move-object/from16 v31, v1

    move/from16 v27, v2

    move-object/from16 v29, v4

    .line 6764
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_ura_id":I
    .end local v4    # "coName":Ljava/lang/String;
    .end local v13    # "j":I
    .restart local v27    # "num_ura_id":I
    .restart local v29    # "coName":Ljava/lang/String;
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

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6765
    add-int/lit8 v3, v3, 0x1

    .line 6766
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

    aput-object v5, v2, v4

    const/4 v5, 0x4

    aput-object v12, v2, v5

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6767
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v2, v24

    invoke-static/range {v28 .. v28}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/4 v10, 0x1

    aput-object v8, v2, v10

    invoke-static {v15}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    invoke-static/range {v26 .. v26}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v2, v4

    invoke-static/range {v22 .. v22}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v2, v5

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6768
    new-array v2, v1, [Ljava/lang/Object;

    const-string v8, "ura"

    aput-object v8, v2, v24

    const-string v8, "cell_id"

    const/4 v10, 0x1

    aput-object v8, v2, v10

    const-string v8, "rscp"

    aput-object v8, v2, v7

    const-string v8, "ecn0"

    aput-object v8, v2, v4

    const-string v8, "-"

    aput-object v8, v2, v5

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6769
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v24

    invoke-static/range {v23 .. v23}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v10, 0x1

    aput-object v2, v1, v10

    invoke-static/range {v20 .. v21}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v1, v7

    invoke-static/range {v18 .. v19}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v1, v4

    aput-object v8, v1, v5

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ActiveSetUmtsFdd;->addData([Ljava/lang/Object;)V

    goto :goto_3

    .line 6714
    .end local v9    # "uarfcn":I
    .end local v11    # "ura":[I
    .end local v15    # "plmn_a":[Ljava/lang/String;
    .end local v16    # "num_cells":I
    .end local v17    # "cellType":I
    .end local v18    # "ecn0":J
    .end local v20    # "rscp":J
    .end local v22    # "rac":I
    .end local v23    # "cell_id":I
    .end local v25    # "num_plmn_id":I
    .end local v26    # "lac":I
    .end local v27    # "num_ura_id":I
    .end local v28    # "psc":I
    .end local v29    # "coName":Ljava/lang/String;
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "num_cells":I
    .restart local v4    # "coName":Ljava/lang/String;
    .local v7, "cellType":I
    :cond_2
    move-object/from16 v31, v1

    move/from16 v16, v2

    move-object/from16 v29, v4

    move/from16 v17, v7

    .line 6710
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_cells":I
    .end local v4    # "coName":Ljava/lang/String;
    .end local v7    # "cellType":I
    .restart local v16    # "num_cells":I
    .restart local v29    # "coName":Ljava/lang/String;
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    :goto_3
    add-int/lit8 v6, v6, 0x1

    move-object/from16 v5, p1

    move/from16 v2, v16

    move-object/from16 v4, v29

    move-object/from16 v1, v31

    goto/16 :goto_0

    .end local v16    # "num_cells":I
    .end local v29    # "coName":Ljava/lang/String;
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "num_cells":I
    .restart local v4    # "coName":Ljava/lang/String;
    :cond_3
    move-object/from16 v31, v1

    move/from16 v16, v2

    move-object/from16 v29, v4

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_cells":I
    .end local v4    # "coName":Ljava/lang/String;
    .restart local v16    # "num_cells":I
    .restart local v29    # "coName":Ljava/lang/String;
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    goto :goto_4

    .line 6708
    .end local v6    # "i":I
    .end local v16    # "num_cells":I
    .end local v29    # "coName":Ljava/lang/String;
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v2    # "num_cells":I
    :cond_4
    move-object/from16 v31, v1

    move/from16 v16, v2

    .line 6773
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "num_cells":I
    .restart local v16    # "num_cells":I
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    :goto_4
    return-void
.end method
