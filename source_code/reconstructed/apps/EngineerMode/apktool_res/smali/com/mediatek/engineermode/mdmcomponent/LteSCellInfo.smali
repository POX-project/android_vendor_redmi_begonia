.class Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 2942
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 2946
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 2947
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 2961
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 2956
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 5

    .line 2965
    const-string v0, "PCI"

    const-string v1, "EARFCN (Band)"

    const-string v2, "SINR"

    const-string v3, "RSRP"

    const-string v4, "RSRQ"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 2951
    const-string v0, "Secondary Cell Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 2970
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 2975
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 2976
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "scell_info_list.scell_info[0]."

    .line 2978
    .local v2, "coName":Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "earfcn"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    int-to-long v3, v3

    .line 2980
    .local v3, "earfcn":J
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "pci"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 2982
    .local v5, "pci":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "rsrp"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x1

    invoke-virtual {v0, v1, v6, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 2984
    .local v6, "rsrp":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "rsrq"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 2986
    .local v8, "rsrq":I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "rs_snr_in_qdb"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 2988
    .local v9, "sinr":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "serv_lte_band"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 2990
    .local v10, "band":I
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "band = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v12, "EmInfo/MDMComponent"

    invoke-static {v12, v11}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2991
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->clearData()V

    .line 2992
    new-array v11, v7, [Ljava/lang/Object;

    const-wide/16 v12, -0x1

    cmp-long v14, v3, v12

    const-string v15, ""

    if-nez v14, :cond_0

    move-object v14, v15

    goto :goto_0

    :cond_0
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    :goto_0
    const/16 v16, 0x0

    aput-object v14, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->addData([Ljava/lang/Object;)V

    .line 2993
    cmp-long v11, v3, v12

    if-nez v11, :cond_1

    move-object v11, v15

    goto :goto_1

    .line 2994
    :cond_1
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "EARFCN: "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v12, " (Band "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ")"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    .line 2993
    :goto_1
    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->addData(Ljava/lang/String;)V

    .line 2995
    new-array v11, v7, [Ljava/lang/Object;

    const/high16 v12, 0x40800000    # 4.0f

    const/4 v13, -0x1

    if-ne v6, v13, :cond_2

    move-object v14, v15

    goto :goto_2

    :cond_2
    int-to-float v14, v6

    div-float/2addr v14, v12

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v14

    :goto_2
    aput-object v14, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->addData([Ljava/lang/Object;)V

    .line 2996
    new-array v11, v7, [Ljava/lang/Object;

    if-ne v8, v13, :cond_3

    move-object v14, v15

    goto :goto_3

    :cond_3
    int-to-float v14, v8

    div-float/2addr v14, v12

    invoke-static {v14}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v14

    :goto_3
    aput-object v14, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->addData([Ljava/lang/Object;)V

    .line 2997
    new-array v7, v7, [Ljava/lang/Object;

    if-ne v9, v13, :cond_4

    goto :goto_4

    :cond_4
    int-to-float v11, v9

    div-float/2addr v11, v12

    invoke-static {v11}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v15

    :goto_4
    aput-object v15, v7, v16

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteSCellInfo;->addData([Ljava/lang/Object;)V

    .line 2998
    return-void
.end method
