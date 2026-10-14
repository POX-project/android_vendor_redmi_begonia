.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 809
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_SERVING_NEIGHBR_SET_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 813
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 814
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 828
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 823
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 832
    const-string v0, "pn"

    const-string v1, "ecio"

    const-string v2, "phase"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 818
    const-string v0, "1xRTT Serving/Neighbr info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 837
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 18
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 841
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 842
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const/4 v2, 0x3

    new-array v3, v2, [I

    .line 843
    .local v3, "value":[I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->clearData()V

    .line 844
    const-string v4, "num_in_active_set"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 845
    .local v4, "num_in_active_set":I
    const-string v5, "num_candidate_set"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 846
    .local v5, "num_candidate_set":I
    const-string v6, "num_neighbor_set"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 848
    .local v6, "num_neighbor_set":I
    const/4 v7, 0x1

    new-array v8, v7, [Ljava/lang/Object;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "in_active_set("

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ")"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x0

    aput-object v9, v8, v11

    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->addData([Ljava/lang/Object;)V

    .line 849
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_0
    const-string v9, "].pilot_phase"

    const/high16 v12, 0x40000000    # 2.0f

    const-string v13, "].pilot_ecio"

    const-string v14, "].pilot_pn"

    if-ge v8, v4, :cond_0

    .line 850
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "in_active_set["

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    aput v2, v3, v11

    .line 852
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    aput v2, v3, v7

    .line 854
    aget v2, v3, v7

    int-to-float v2, v2

    div-float/2addr v2, v12

    neg-float v2, v2

    .line 855
    .local v2, "ecio_f":F
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    const/4 v12, 0x2

    aput v9, v3, v12

    .line 857
    const/4 v9, 0x3

    new-array v13, v9, [Ljava/lang/Object;

    aget v9, v3, v11

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v13, v11

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v9

    aput-object v9, v13, v7

    aget v9, v3, v12

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v13, v12

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->addData([Ljava/lang/Object;)V

    .line 849
    .end local v2    # "ecio_f":F
    add-int/lit8 v8, v8, 0x1

    const/4 v2, 0x3

    goto :goto_0

    .line 860
    .end local v8    # "i":I
    :cond_0
    new-array v2, v7, [Ljava/lang/Object;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "candidate_set("

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v11

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->addData([Ljava/lang/Object;)V

    .line 861
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_1
    if-ge v2, v5, :cond_1

    .line 862
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "candidate_set["

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v3, v11

    .line 864
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v3, v7

    .line 866
    aget v8, v3, v7

    int-to-float v8, v8

    div-float/2addr v8, v12

    neg-float v8, v8

    .line 867
    .local v8, "ecio_f":F
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    const/4 v15, 0x2

    aput v12, v3, v15

    .line 869
    const/4 v12, 0x3

    new-array v15, v12, [Ljava/lang/Object;

    aget v12, v3, v11

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v15, v11

    invoke-static {v8}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v12

    aput-object v12, v15, v7

    const/4 v12, 0x2

    aget v17, v3, v12

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v17

    aput-object v17, v15, v12

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->addData([Ljava/lang/Object;)V

    .line 861
    .end local v8    # "ecio_f":F
    add-int/lit8 v2, v2, 0x1

    const/high16 v12, 0x40000000    # 2.0f

    goto :goto_1

    .line 872
    .end local v2    # "i":I
    :cond_1
    new-array v2, v7, [Ljava/lang/Object;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "neighbor_set("

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v11

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->addData([Ljava/lang/Object;)V

    .line 873
    const/4 v2, 0x0

    .restart local v2    # "i":I
    :goto_2
    if-ge v2, v6, :cond_2

    .line 874
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "neighbor_set["

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v3, v11

    .line 876
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    aput v8, v3, v7

    .line 878
    aget v8, v3, v7

    int-to-float v8, v8

    const/high16 v12, 0x40000000    # 2.0f

    div-float/2addr v8, v12

    neg-float v8, v8

    .line 879
    .restart local v8    # "ecio_f":F
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    const/4 v15, 0x2

    aput v10, v3, v15

    .line 881
    const/4 v10, 0x3

    new-array v12, v10, [Ljava/lang/Object;

    aget v16, v3, v11

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v12, v11

    invoke-static {v8}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v16

    aput-object v16, v12, v7

    aget v16, v3, v15

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v12, v15

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSeringNeihbrInfo;->addData([Ljava/lang/Object;)V

    .line 873
    .end local v8    # "ecio_f":F
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 884
    .end local v2    # "i":I
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "num_neighbor_set = "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v7, "EmInfo/MDMComponent"

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 885
    return-void
.end method
