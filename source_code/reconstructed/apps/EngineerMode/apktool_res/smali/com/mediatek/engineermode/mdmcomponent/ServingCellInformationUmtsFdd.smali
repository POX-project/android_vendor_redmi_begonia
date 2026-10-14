.class Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 6939
    const-string v0, "MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 6943
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6944
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6958
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6953
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 6962
    const-string v0, "Item"

    const-string v1, "value"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6948
    const-string v0, "Serving Cell Information (UMTS FDD)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6967
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 27
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6972
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 6973
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "serv_cell."

    .line 6974
    .local v2, "coName":Ljava/lang/String;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->clearData()V

    .line 6975
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "uarfcn_DL"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 6976
    .local v3, "uarfcn":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "psc"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 6978
    .local v4, "psc":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "lac_valid"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 6979
    .local v5, "lac_valid":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "lac"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 6980
    .local v6, "lac":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "rac_valid"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 6981
    .local v7, "rac_valid":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "rac"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 6982
    .local v8, "rac":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "cell_identity"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 6984
    .local v9, "cell_id":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rscp"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v11, 0x1

    invoke-virtual {v0, v1, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    int-to-float v10, v10

    const/high16 v12, 0x45800000    # 4096.0f

    div-float/2addr v10, v12

    .line 6986
    .local v10, "rscp":F
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "ec_no"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13, v11}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    int-to-float v13, v13

    div-float/2addr v13, v12

    .line 6989
    .local v13, "ecn0":F
    const/4 v12, 0x2

    new-array v14, v12, [Ljava/lang/Object;

    const-string v15, "UARFCN"

    const/16 v16, 0x0

    aput-object v15, v14, v16

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v11

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6990
    new-array v14, v12, [Ljava/lang/Object;

    const-string v15, "PSC"

    aput-object v15, v14, v16

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v14, v11

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6992
    const/4 v14, 0x0

    .line 6993
    .local v14, "value":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "multi_plmn_count"

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 6995
    .local v12, "count":I
    const/4 v15, 0x0

    .local v15, "i":I
    :goto_0
    const-string v11, "]"

    move/from16 v17, v3

    .end local v3    # "uarfcn":I
    .local v17, "uarfcn":I
    const-string v3, "]."

    move/from16 v18, v4

    .end local v4    # "psc":I
    .local v18, "psc":I
    const-string v4, "["

    if-ge v15, v12, :cond_1

    .line 6996
    move/from16 v19, v12

    .end local v12    # "count":I
    .local v19, "count":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v20, v14

    .end local v14    # "value":I
    .local v20, "value":I
    const-string v14, "multi_plmn_id"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 6998
    .local v3, "secName":Ljava/lang/String;
    const-string v4, ""

    .line 6999
    .local v4, "plmn":Ljava/lang/String;
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "mcc"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v21, v13

    const/4 v13, 0x1

    .end local v13    # "ecn0":F
    .local v21, "ecn0":F
    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 7001
    .end local v20    # "value":I
    .local v12, "value":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 7002
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v20, v12

    const/4 v12, 0x2

    .end local v12    # "value":I
    .restart local v20    # "value":I
    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 7004
    .end local v20    # "value":I
    .restart local v12    # "value":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 7005
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v14, 0x3

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 7007
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 7008
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, "mnc"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v22, v12

    const/4 v12, 0x1

    .end local v12    # "value":I
    .local v22, "value":I
    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 7010
    .end local v22    # "value":I
    .restart local v12    # "value":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 7011
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v22, v12

    const/4 v12, 0x2

    .end local v12    # "value":I
    .restart local v22    # "value":I
    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 7013
    .end local v22    # "value":I
    .restart local v12    # "value":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 7014
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v14, 0x3

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 7016
    .end local v12    # "value":I
    .restart local v14    # "value":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v13, 0xf

    if-ne v14, v13, :cond_0

    const-string v13, ""

    goto :goto_1

    :cond_0
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    :goto_1
    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 7017
    const/4 v12, 0x2

    new-array v13, v12, [Ljava/lang/Object;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v22, v3

    .end local v3    # "secName":Ljava/lang/String;
    .local v22, "secName":Ljava/lang/String;
    const-string v3, "PLMN["

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v13, v16

    const/4 v3, 0x1

    aput-object v4, v13, v3

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 6995
    .end local v4    # "plmn":Ljava/lang/String;
    .end local v22    # "secName":Ljava/lang/String;
    add-int/lit8 v15, v15, 0x1

    move/from16 v3, v17

    move/from16 v4, v18

    move/from16 v12, v19

    move/from16 v13, v21

    const/4 v11, 0x1

    goto/16 :goto_0

    .end local v19    # "count":I
    .end local v21    # "ecn0":F
    .local v12, "count":I
    .restart local v13    # "ecn0":F
    :cond_1
    move/from16 v19, v12

    move/from16 v21, v13

    move/from16 v20, v14

    .line 7019
    .end local v12    # "count":I
    .end local v13    # "ecn0":F
    .end local v14    # "value":I
    .end local v15    # "i":I
    .restart local v19    # "count":I
    .restart local v20    # "value":I
    .restart local v21    # "ecn0":F
    const/4 v12, 0x2

    new-array v13, v12, [Ljava/lang/Object;

    const-string v12, "LAC"

    aput-object v12, v13, v16

    const-string v12, "-"

    if-nez v5, :cond_2

    move-object v14, v12

    goto :goto_2

    :cond_2
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    :goto_2
    const/4 v15, 0x1

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 7020
    const/4 v13, 0x2

    new-array v14, v13, [Ljava/lang/Object;

    const-string v13, "RAC"

    aput-object v13, v14, v16

    if-nez v7, :cond_3

    goto :goto_3

    :cond_3
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    :goto_3
    const/4 v13, 0x1

    aput-object v12, v14, v13

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 7022
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "num_ura_id"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 7023
    .local v12, "num_ura_id":I
    const/4 v13, 0x0

    .local v13, "i":I
    :goto_4
    if-ge v13, v12, :cond_4

    .line 7024
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, "uraIdentity"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    .line 7025
    .local v14, "secName":Ljava/lang/String;
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v22, v2

    .end local v2    # "coName":Ljava/lang/String;
    .local v22, "coName":Ljava/lang/String;
    const-string v2, "stringData"

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v23, v3

    const-string v3, "[0]"

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 7027
    .local v3, "stringData0":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "[1]"

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 7029
    .local v2, "stringData1":I
    shl-int/lit8 v15, v3, 0x8

    or-int/2addr v15, v2

    .line 7030
    .local v15, "stringData":I
    move-object/from16 v24, v1

    move/from16 v25, v2

    const/4 v1, 0x2

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "stringData1":I
    .local v24, "data":Lcom/mediatek/mdml/Msg;
    .local v25, "stringData1":I
    new-array v2, v1, [Ljava/lang/Object;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v26, v3

    .end local v3    # "stringData0":I
    .local v26, "stringData0":I
    const-string v3, "URA["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v2, v16

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v3, 0x1

    aput-object v1, v2, v3

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 7023
    .end local v14    # "secName":Ljava/lang/String;
    .end local v15    # "stringData":I
    .end local v25    # "stringData1":I
    .end local v26    # "stringData0":I
    add-int/lit8 v13, v13, 0x1

    move-object/from16 v2, v22

    move-object/from16 v3, v23

    move-object/from16 v1, v24

    goto/16 :goto_4

    .end local v22    # "coName":Ljava/lang/String;
    .end local v24    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "coName":Ljava/lang/String;
    :cond_4
    move-object/from16 v24, v1

    move-object/from16 v22, v2

    .line 7033
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "coName":Ljava/lang/String;
    .end local v13    # "i":I
    .restart local v22    # "coName":Ljava/lang/String;
    .restart local v24    # "data":Lcom/mediatek/mdml/Msg;
    const/4 v1, 0x2

    new-array v2, v1, [Ljava/lang/Object;

    const-string v3, "Cell ID"

    aput-object v3, v2, v16

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 7034
    new-array v2, v1, [Ljava/lang/Object;

    const-string v3, "RSCP_CPICH Power Level"

    aput-object v3, v2, v16

    invoke-static {v10}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    aput-object v3, v2, v4

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 7035
    new-array v1, v1, [Ljava/lang/Object;

    const-string v2, "Ec/Io"

    aput-object v2, v1, v16

    invoke-static/range {v21 .. v21}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v1, v4

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/ServingCellInformationUmtsFdd;->addData([Ljava/lang/Object;)V

    .line 7036
    return-void
.end method
