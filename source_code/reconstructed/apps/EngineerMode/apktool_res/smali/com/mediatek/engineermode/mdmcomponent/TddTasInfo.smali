.class Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field AntennaMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field ServingBandMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasVersion:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10562
    const-string v0, "MSG_ID_EM_TDD_L1_TAS_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 10589
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;-><init>(Landroid/app/Activity;)V

    .line 10564
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasVersion:I

    .line 10565
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->AntennaMapping:Ljava/util/HashMap;

    .line 10573
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 10580
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    .line 10590
    return-void
.end method


# virtual methods
.method antidxMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "antidx"    # I

    .line 10593
    const-string v0, ""

    .line 10594
    .local v0, "antidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x2

    if-gt p1, v1, :cond_0

    .line 10595
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->AntennaMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10597
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->AntennaMapping:Ljava/util/HashMap;

    const/4 v3, 0x3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10598
    :goto_0
    return-object v0
.end method

.method conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;
    .locals 1
    .param p1, "lables1"    # [Ljava/lang/String;
    .param p2, "lables2"    # [Ljava/lang/String;
    .param p3, "position"    # I

    .line 10621
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 10622
    if-gez p3, :cond_0

    .line 10623
    invoke-static {p3}, Ljava/lang/Math;->abs(I)I

    move-result p3

    .line 10624
    invoke-virtual {p0, p2, p1, p3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 10626
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 10628
    :cond_1
    return-object p2
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 10643
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 10638
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 14

    .line 10647
    const-string v0, "force tx en"

    const-string v1, "force ant state"

    const-string v2, "cur ant state"

    const-string v3, "RSCP_LANT"

    const-string v4, "RSSI_LANT"

    const-string v5, "SINR_LANT"

    const-string v6, "RSCP_UANT"

    const-string v7, "RSSI_UANT"

    const-string v8, "SINR_UANT"

    const-string v9, "tx pwr"

    filled-new-array/range {v0 .. v9}, [Ljava/lang/String;

    move-result-object v0

    .line 10651
    .local v0, "Lables_Verison_v1":[Ljava/lang/String;
    const-string v1, "force tx en"

    const-string v2, "force ant state"

    const-string v3, "cur ant state"

    const-string v4, "RSCP_LANT"

    const-string v5, "RSSI_LANT"

    const-string v6, "SINR_LANT"

    const-string v7, "RSCP_UANT"

    const-string v8, "RSSI_UANT"

    const-string v9, "SINR_UANT"

    const-string v10, "RSCP_LANT(\')"

    const-string v11, "RSSI_LANT(\')"

    const-string v12, "SINR_LANT(\')"

    const-string v13, "tx pwr"

    filled-new-array/range {v1 .. v13}, [Ljava/lang/String;

    move-result-object v1

    .line 10655
    .local v1, "Lables_Verison_v2":[Ljava/lang/String;
    const-string v2, "Tas Enable Info"

    const-string v3, "Serving Band"

    filled-new-array {v2, v3}, [Ljava/lang/String;

    move-result-object v2

    .line 10658
    .local v2, "Lables_Tas":[Ljava/lang/String;
    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasVersion:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_0

    .line 10659
    array-length v3, v2

    invoke-virtual {p0, v2, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 10662
    :cond_0
    array-length v3, v2

    invoke-virtual {p0, v2, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 10633
    const-string v0, "TDD TAS Info"

    return-object v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "bandidx"    # I

    .line 10611
    const-string v0, ""

    .line 10612
    .local v0, "bandidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 10613
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10615
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10616
    :goto_0
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 10669
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "tasidx"    # I

    .line 10602
    const-string v0, ""

    .line 10603
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 10604
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10606
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10607
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 27
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 10674
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 10675
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "cur_ant_state"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 10676
    .local v2, "cur_ant_idx":I
    shr-int/lit8 v3, v2, 0x8

    const/4 v4, 0x3

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-ne v3, v4, :cond_0

    move v3, v6

    goto :goto_0

    :cond_0
    move v3, v5

    .line 10677
    .local v3, "utas_info_valid":I
    :goto_0
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->setInfoValid(I)V

    .line 10678
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->isInfoValid()Z

    move-result v7

    if-eqz v7, :cond_1

    .line 10679
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->clearData()V

    .line 10680
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v6, v6, [Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "Use "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getName()Ljava/lang/String;

    move-result-object v8

    const-string v9, "UTAS"

    const-string v10, "TAS"

    invoke-virtual {v8, v9, v10}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v6, v5

    invoke-virtual {v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 10681
    return-void

    .line 10683
    :cond_1
    shr-int/lit8 v7, v2, 0x8

    and-int/2addr v7, v4

    const/4 v8, 0x2

    if-ne v7, v8, :cond_2

    move v7, v8

    goto :goto_1

    :cond_2
    move v7, v6

    :goto_1
    iput v7, v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasVersion:I

    .line 10684
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "TasVersion "

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v9, v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasVersion:I

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 10685
    const-string v7, "tas_enable_info"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 10686
    .local v7, "tas_enable":I
    const-string v9, "current_serving_band"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 10687
    .local v9, "serving_band":I
    const-string v10, "force_tx_en"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 10689
    .local v10, "force_tx_en":I
    const-string v11, "force_ant_state"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 10691
    .local v11, "force_ant_idx":I
    const-string v12, "ant0_rscp"

    invoke-virtual {v0, v1, v12, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 10692
    .local v12, "ant0_rscp":I
    const-string v13, "ant0_rssi"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 10693
    .local v13, "ant0_rssi":I
    const-string v14, "ant0_sinr"

    invoke-virtual {v0, v1, v14, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 10694
    .local v14, "ant0_sinr":I
    const-string v15, "ant1_rscp"

    invoke-virtual {v0, v1, v15, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 10695
    .local v15, "ant1_rscp":I
    const-string v4, "ant1_rssi"

    invoke-virtual {v0, v1, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v17

    .line 10696
    .local v17, "ant1_rssi":I
    const-string v5, "ant1_sinr"

    invoke-virtual {v0, v1, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 10697
    .local v5, "ant1_sinr":I
    const-string v8, "tx_pwr"

    invoke-virtual {v0, v1, v8, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 10698
    .local v8, "txpower":I
    const/16 v19, 0x0

    .line 10699
    .local v19, "ant2_rscp":I
    const/16 v20, 0x0

    .line 10700
    .local v20, "ant2_rssi":I
    const/16 v21, 0x0

    .line 10701
    .local v21, "ant2_sinr":I
    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasVersion:I

    move/from16 v22, v3

    const/4 v3, 0x2

    .end local v3    # "utas_info_valid":I
    .local v22, "utas_info_valid":I
    if-ne v6, v3, :cond_3

    .line 10702
    const-string v3, "ant2_rscp"

    const/4 v6, 0x1

    invoke-virtual {v0, v1, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v19

    .line 10703
    invoke-virtual {v0, v1, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v20

    .line 10704
    const-string v3, "ant2_sinr"

    invoke-virtual {v0, v1, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v21

    .line 10707
    :cond_3
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->clearData()V

    .line 10709
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 10710
    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v3

    const/4 v6, 0x0

    aput-object v3, v4, v6

    .line 10711
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v3

    const/4 v6, 0x1

    aput-object v3, v4, v6

    .line 10710
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->addData([Ljava/lang/Object;)V

    .line 10713
    :cond_4
    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->TasVersion:I

    const/4 v6, 0x7

    const/16 v23, 0x6

    const/16 v24, 0x5

    const/16 v25, 0x4

    const/16 v26, 0x8

    const/4 v4, 0x2

    if-ne v3, v4, :cond_5

    .line 10714
    const/16 v3, 0xd

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v4

    const/16 v18, 0x0

    aput-object v4, v3, v18

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v4

    const/16 v18, 0x1

    aput-object v4, v3, v18

    and-int/lit16 v4, v2, 0xff

    .line 10715
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v18, 0x2

    aput-object v4, v3, v18

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v16, 0x3

    aput-object v4, v3, v16

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v25

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v24

    .line 10716
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v23

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v6

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v26

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v6, 0x9

    aput-object v4, v3, v6

    invoke-static/range {v20 .. v20}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v6, 0xa

    aput-object v4, v3, v6

    const/16 v4, 0xb

    .line 10717
    invoke-static/range {v21 .. v21}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v3, v4

    const/16 v4, 0xc

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v3, v4

    .line 10714
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->addData([Ljava/lang/Object;)V

    goto :goto_2

    .line 10719
    :cond_5
    const/16 v3, 0xa

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v4

    const/16 v18, 0x0

    aput-object v4, v3, v18

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v4

    const/16 v18, 0x1

    aput-object v4, v3, v18

    and-int/lit16 v4, v2, 0xff

    .line 10720
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v18, 0x2

    aput-object v4, v3, v18

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v16, 0x3

    aput-object v4, v3, v16

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v25

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v24

    .line 10721
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v23

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v6

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v26

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/16 v6, 0x9

    aput-object v4, v3, v6

    .line 10719
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->addData([Ljava/lang/Object;)V

    .line 10723
    :goto_2
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddTasInfo;->notifyDataSetChanged()V

    .line 10724
    return-void
.end method
