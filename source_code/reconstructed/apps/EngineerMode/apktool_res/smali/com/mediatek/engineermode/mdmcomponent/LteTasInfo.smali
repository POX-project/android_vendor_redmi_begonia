.class Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;
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

    .line 10904
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 10926
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;-><init>(Landroid/app/Activity;)V

    .line 10907
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    .line 10908
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->AntennaMapping:Ljava/util/HashMap;

    .line 10917
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 10927
    return-void
.end method


# virtual methods
.method antidxMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "antidx"    # I

    .line 11009
    const-string v0, " "

    .line 11010
    .local v0, "antidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x3

    if-gt p1, v1, :cond_0

    .line 11011
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->AntennaMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 11013
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->AntennaMapping:Ljava/util/HashMap;

    const/4 v3, 0x4

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

    .line 11014
    :goto_0
    return-object v0
.end method

.method conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;
    .locals 1
    .param p1, "lables1"    # [Ljava/lang/String;
    .param p2, "lables2"    # [Ljava/lang/String;
    .param p3, "position"    # I

    .line 10946
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 10947
    if-gez p3, :cond_0

    .line 10948
    invoke-static {p3}, Ljava/lang/Math;->abs(I)I

    move-result p3

    .line 10949
    invoke-virtual {p0, p2, p1, p3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 10951
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 10953
    :cond_1
    return-object p2
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 10941
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 10936
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 14

    .line 10957
    const-string v0, "TX Antenna"

    const-string v1, "RSRP_LANT"

    const-string v2, "RSRP_UANT"

    const-string v3, "TX Power"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v4

    .line 10960
    .local v4, "Lables_Verison_v1_1":[Ljava/lang/String;
    const-string v5, "RSRP_LANT(\')"

    filled-new-array {v0, v1, v2, v5, v3}, [Ljava/lang/String;

    move-result-object v0

    .line 10963
    .local v0, "Lables_Verison_v2_1":[Ljava/lang/String;
    const-string v5, "CC0 TX Antenna"

    const-string v6, "CC0 RSRP_LANT"

    const-string v7, "CC0 RSRP_UANT"

    const-string v8, "CC1 TX Antenna"

    const-string v9, "CC1 RSRP_LANT"

    const-string v10, "CC1 RSRP_UANT"

    const-string v11, "TX Power"

    filled-new-array/range {v5 .. v11}, [Ljava/lang/String;

    move-result-object v1

    .line 10967
    .local v1, "Lables_Verison_v1_2":[Ljava/lang/String;
    const-string v5, "CC0 TX Antenna"

    const-string v6, "CC0 RSRP_LANT"

    const-string v7, "CC0 RSRP_UANT"

    const-string v8, "CC0 RSRP_LANT(\')"

    const-string v9, "CC1 TX Antenna"

    const-string v10, "CC1 RSRP_LANT"

    const-string v11, "CC1 RSRP_UANT"

    const-string v12, "CC1 RSRP_LANT(\')"

    const-string v13, "TX Power"

    filled-new-array/range {v5 .. v13}, [Ljava/lang/String;

    move-result-object v2

    .line 10972
    .local v2, "Lables_Verison_v2_2":[Ljava/lang/String;
    const-string v3, "TAS Enable Info"

    const-string v5, "Serving Band"

    filled-new-array {v3, v5}, [Ljava/lang/String;

    move-result-object v3

    .line 10974
    .local v3, "Lables_Tas_1":[Ljava/lang/String;
    const-string v5, "CC1 Serving Band"

    filled-new-array {v5}, [Ljava/lang/String;

    move-result-object v5

    .line 10975
    .local v5, "Lables_Tas_2":[Ljava/lang/String;
    const-string v6, "DAT Index"

    filled-new-array {v6}, [Ljava/lang/String;

    move-result-object v6

    .line 10977
    .local v6, "Labels_Dat":[Ljava/lang/String;
    iget v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    const/4 v8, 0x0

    const/4 v9, 0x1

    if-ne v7, v9, :cond_0

    .line 10978
    array-length v7, v3

    invoke-virtual {p0, v3, v4, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v7

    new-array v9, v9, [[Ljava/lang/String;

    aput-object v6, v9, v8

    invoke-virtual {p0, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    return-object v7

    .line 10980
    :cond_0
    const/4 v10, 0x2

    if-ne v7, v10, :cond_1

    .line 10981
    array-length v7, v3

    invoke-virtual {p0, v3, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v7

    new-array v9, v9, [[Ljava/lang/String;

    aput-object v6, v9, v8

    invoke-virtual {p0, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    return-object v7

    .line 10983
    :cond_1
    const/4 v10, 0x3

    if-ne v7, v10, :cond_2

    .line 10984
    array-length v7, v3

    invoke-virtual {p0, v3, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v7

    .line 10986
    .local v7, "result":[Ljava/lang/String;
    const/4 v10, -0x5

    invoke-virtual {p0, v5, v7, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v10

    new-array v9, v9, [[Ljava/lang/String;

    aput-object v6, v9, v8

    invoke-virtual {p0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    return-object v8

    .line 10987
    .end local v7    # "result":[Ljava/lang/String;
    :cond_2
    const/4 v10, 0x4

    if-ne v7, v10, :cond_3

    .line 10988
    array-length v7, v3

    invoke-virtual {p0, v3, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v7

    .line 10990
    .restart local v7    # "result":[Ljava/lang/String;
    const/4 v10, -0x6

    invoke-virtual {p0, v5, v7, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v10

    new-array v9, v9, [[Ljava/lang/String;

    aput-object v6, v9, v8

    invoke-virtual {p0, v10, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    return-object v8

    .line 10992
    .end local v7    # "result":[Ljava/lang/String;
    :cond_3
    array-length v7, v3

    invoke-virtual {p0, v3, v4, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v7

    new-array v9, v9, [[Ljava/lang/String;

    aput-object v6, v9, v8

    invoke-virtual {p0, v7, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->concatAll([Ljava/lang/Object;[[Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    return-object v7
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 10931
    const-string v0, "LTE TAS Info"

    return-object v0
.end method

.method rscpCheck(I)Ljava/lang/String;
    .locals 2
    .param p1, "value"    # I

    .line 11002
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 11003
    .local v0, "value_s":Ljava/lang/String;
    const/16 v1, -0xff

    if-ne p1, v1, :cond_0

    .line 11004
    const-string v0, " "

    .line 11005
    :cond_0
    return-object v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 11027
    if-nez p1, :cond_0

    .line 11028
    const-string v0, "INVALID"

    return-object v0

    .line 11030
    :cond_0
    const-string v0, "Band"

    .line 11031
    .local v0, "bandidx_s":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 11032
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 10998
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "tasidx"    # I

    .line 11018
    const-string v0, ""

    .line 11019
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 11020
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 11022
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasEnableMapping:Ljava/util/HashMap;

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

    .line 11023
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 29
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 11037
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 11038
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const/4 v2, 0x0

    .line 11039
    .local v2, "antidx":I
    const/4 v3, 0x0

    .line 11040
    .local v3, "rsrp_l_ant":I
    const/4 v4, 0x0

    .line 11041
    .local v4, "rsrp_u_ant":I
    const/4 v5, 0x0

    .line 11042
    .local v5, "rsrp_l_ant_a":I
    const/4 v6, 0x0

    .line 11043
    .local v6, "antidx_cc1":I
    const/4 v7, 0x0

    .line 11044
    .local v7, "rsrp_l_ant_cc1":I
    const/4 v8, 0x0

    .line 11045
    .local v8, "rsrp_u_ant_cc1":I
    const/4 v9, 0x0

    .line 11046
    .local v9, "rsrp_l_ant_a_cc1":I
    const/4 v10, 0x0

    .line 11047
    .local v10, "tx_pwr":I
    const/4 v11, 0x0

    .line 11048
    .local v11, "tasidx":I
    const/4 v12, 0x0

    .line 11049
    .local v12, "bandidx":I
    const/4 v13, 0x0

    .line 11050
    .local v13, "bandidx_cc1":I
    const/4 v14, 0x0

    .line 11052
    .local v14, "dat_index":I
    const-string v15, "dl_cc_count"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 11053
    .local v15, "dl_cc_count":I
    move/from16 v16, v2

    .end local v2    # "antidx":I
    .local v16, "antidx":I
    const-string v2, "ul_cc_count"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 11055
    .local v2, "ul_cc_count":I
    move/from16 v17, v3

    .end local v3    # "rsrp_l_ant":I
    .local v17, "rsrp_l_ant":I
    const-string v3, "ul_info[0].utas_info_valid"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 11057
    .local v3, "utas_info_valid":I
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->setInfoValid(I)V

    .line 11060
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->isInfoValid()Z

    move-result v18

    const/16 v19, 0x0

    move/from16 v20, v3

    .end local v3    # "utas_info_valid":I
    .local v20, "utas_info_valid":I
    const/4 v3, 0x1

    if-eqz v18, :cond_0

    .line 11061
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->clearData()V

    .line 11062
    move/from16 v18, v4

    .end local v4    # "rsrp_u_ant":I
    .local v18, "rsrp_u_ant":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v3, v3, [Ljava/lang/String;

    move/from16 v21, v5

    .end local v5    # "rsrp_l_ant_a":I
    .local v21, "rsrp_l_ant_a":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v22, v6

    .end local v6    # "antidx_cc1":I
    .local v22, "antidx_cc1":I
    const-string v6, "Use "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getName()Ljava/lang/String;

    move-result-object v6

    move/from16 v23, v7

    .end local v7    # "rsrp_l_ant_cc1":I
    .local v23, "rsrp_l_ant_cc1":I
    const-string v7, "UTAS"

    move/from16 v24, v8

    .end local v8    # "rsrp_u_ant_cc1":I
    .local v24, "rsrp_u_ant_cc1":I
    const-string v8, "TAS"

    invoke-virtual {v6, v7, v8}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v19

    invoke-virtual {v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 11063
    return-void

    .line 11066
    .end local v18    # "rsrp_u_ant":I
    .end local v21    # "rsrp_l_ant_a":I
    .end local v22    # "antidx_cc1":I
    .end local v23    # "rsrp_l_ant_cc1":I
    .end local v24    # "rsrp_u_ant_cc1":I
    .restart local v4    # "rsrp_u_ant":I
    .restart local v5    # "rsrp_l_ant_a":I
    .restart local v6    # "antidx_cc1":I
    .restart local v7    # "rsrp_l_ant_cc1":I
    .restart local v8    # "rsrp_u_ant_cc1":I
    :cond_0
    move/from16 v18, v4

    move/from16 v21, v5

    move/from16 v22, v6

    move/from16 v23, v7

    move/from16 v24, v8

    .end local v4    # "rsrp_u_ant":I
    .end local v5    # "rsrp_l_ant_a":I
    .end local v6    # "antidx_cc1":I
    .end local v7    # "rsrp_l_ant_cc1":I
    .end local v8    # "rsrp_u_ant_cc1":I
    .restart local v18    # "rsrp_u_ant":I
    .restart local v21    # "rsrp_l_ant_a":I
    .restart local v22    # "antidx_cc1":I
    .restart local v23    # "rsrp_l_ant_cc1":I
    .restart local v24    # "rsrp_u_ant_cc1":I
    const-string v4, "tas_version"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    .line 11067
    if-nez v4, :cond_1

    move v4, v3

    goto :goto_0

    :cond_1
    const/4 v4, 0x2

    :goto_0
    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    .line 11069
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "dl_cc_count= "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v6, "EmInfo/MDMComponent"

    invoke-static {v6, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11070
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "ul_cc_count= "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v6, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11071
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "TasVersion= "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v6, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 11073
    const-string v4, "ul_info[0].tx_ant_type"

    invoke-virtual {v0, v1, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 11074
    .end local v16    # "antidx":I
    .local v4, "antidx":I
    const-string v6, "ul_info[0].rsrp_l_ant"

    invoke-virtual {v0, v1, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v6

    .line 11075
    .end local v17    # "rsrp_l_ant":I
    .local v6, "rsrp_l_ant":I
    const-string v7, "ul_info[0].rsrp_u_ant"

    invoke-virtual {v0, v1, v7, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 11076
    .end local v18    # "rsrp_u_ant":I
    .local v7, "rsrp_u_ant":I
    const-string v8, "ul_info[0].rsrp_l_ant_a"

    invoke-virtual {v0, v1, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 11077
    .end local v21    # "rsrp_l_ant_a":I
    .local v8, "rsrp_l_ant_a":I
    const-string v5, "ul_info[0].tx_power"

    invoke-virtual {v0, v1, v5, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 11079
    .end local v10    # "tx_pwr":I
    .local v5, "tx_pwr":I
    const-string v10, "ul_info[1].tx_ant_type"

    invoke-virtual {v0, v1, v10, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 11080
    .end local v22    # "antidx_cc1":I
    .local v10, "antidx_cc1":I
    move/from16 v17, v11

    .end local v11    # "tasidx":I
    .local v17, "tasidx":I
    const-string v11, "ul_info[1].rsrp_l_ant"

    invoke-virtual {v0, v1, v11, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 11081
    .end local v23    # "rsrp_l_ant_cc1":I
    .local v11, "rsrp_l_ant_cc1":I
    move/from16 v18, v11

    .end local v11    # "rsrp_l_ant_cc1":I
    .local v18, "rsrp_l_ant_cc1":I
    const-string v11, "ul_info[1].rsrp_u_ant"

    invoke-virtual {v0, v1, v11, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 11082
    .end local v24    # "rsrp_u_ant_cc1":I
    .local v11, "rsrp_u_ant_cc1":I
    move/from16 v21, v12

    .end local v12    # "bandidx":I
    .local v21, "bandidx":I
    const-string v12, "ul_info[1].rsrp_l_ant_a"

    invoke-virtual {v0, v1, v12, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 11083
    .end local v18    # "rsrp_l_ant_cc1":I
    .local v12, "rsrp_l_ant_cc1":I
    move/from16 v18, v13

    .end local v13    # "bandidx_cc1":I
    .local v18, "bandidx_cc1":I
    const-string v13, "ul_info[0].el1_dat_scenario_index"

    invoke-virtual {v0, v1, v13, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 11085
    .end local v14    # "dat_index":I
    .local v13, "dat_index":I
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v14

    if-eqz v14, :cond_2

    .line 11086
    const-string v14, "ul_info[0].tas_status"

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 11087
    .end local v17    # "tasidx":I
    .local v14, "tasidx":I
    move/from16 v17, v14

    .end local v14    # "tasidx":I
    .restart local v17    # "tasidx":I
    const-string v14, "cell_info[0].band"

    invoke-virtual {v0, v1, v14, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 11088
    .end local v21    # "bandidx":I
    .local v14, "bandidx":I
    move/from16 v21, v14

    .end local v14    # "bandidx":I
    .restart local v21    # "bandidx":I
    const-string v14, "cell_info[1].band"

    invoke-virtual {v0, v1, v14, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    move/from16 v26, v14

    move/from16 v14, v17

    move/from16 v25, v21

    .end local v18    # "bandidx_cc1":I
    .local v14, "bandidx_cc1":I
    goto :goto_1

    .line 11085
    .end local v14    # "bandidx_cc1":I
    .restart local v18    # "bandidx_cc1":I
    :cond_2
    move/from16 v14, v17

    move/from16 v26, v18

    move/from16 v25, v21

    .line 11091
    .end local v17    # "tasidx":I
    .end local v18    # "bandidx_cc1":I
    .end local v21    # "bandidx":I
    .local v14, "tasidx":I
    .local v25, "bandidx":I
    .local v26, "bandidx_cc1":I
    :goto_1
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->clearData()V

    .line 11092
    const-string v3, ""

    if-nez v15, :cond_3

    .line 11093
    move-object/from16 v24, v1

    const/4 v1, 0x1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v24, "data":Lcom/mediatek/mdml/Msg;
    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    .line 11094
    const/4 v1, 0x6

    new-array v1, v1, [Ljava/lang/Object;

    aput-object v3, v1, v19

    move/from16 v27, v9

    const/4 v9, 0x1

    .end local v9    # "rsrp_l_ant_a_cc1":I
    .local v27, "rsrp_l_ant_a_cc1":I
    aput-object v3, v1, v9

    const/4 v9, 0x2

    aput-object v3, v1, v9

    const/4 v9, 0x3

    aput-object v3, v1, v9

    const/4 v9, 0x4

    aput-object v3, v1, v9

    const/4 v9, 0x5

    aput-object v3, v1, v9

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11095
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData(Ljava/lang/String;)V

    .line 11096
    return-void

    .line 11099
    .end local v24    # "data":Lcom/mediatek/mdml/Msg;
    .end local v27    # "rsrp_l_ant_a_cc1":I
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v9    # "rsrp_l_ant_a_cc1":I
    :cond_3
    move-object/from16 v24, v1

    move/from16 v27, v9

    const/4 v9, 0x1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v9    # "rsrp_l_ant_a_cc1":I
    .restart local v24    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v27    # "rsrp_l_ant_a_cc1":I
    if-ne v15, v9, :cond_4

    if-nez v2, :cond_4

    iget v1, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    if-ne v1, v9, :cond_4

    .line 11100
    const/4 v1, 0x6

    new-array v1, v1, [Ljava/lang/Object;

    aput-object v3, v1, v19

    aput-object v3, v1, v9

    const/16 v16, 0x2

    aput-object v3, v1, v16

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v17, 0x3

    aput-object v16, v1, v17

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v17, 0x4

    aput-object v16, v1, v17

    const/16 v16, 0x5

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11102
    new-array v1, v9, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v19

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11103
    return-void

    .line 11106
    :cond_4
    const/4 v1, 0x1

    if-lt v15, v1, :cond_6

    if-ne v2, v1, :cond_6

    iget v9, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    if-ne v9, v1, :cond_6

    .line 11107
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v3

    if-eqz v3, :cond_5

    .line 11108
    const/4 v3, 0x2

    new-array v9, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v9, v19

    move/from16 v3, v25

    .end local v25    # "bandidx":I
    .local v3, "bandidx":I
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v17

    aput-object v17, v9, v1

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    goto :goto_2

    .line 11107
    .end local v3    # "bandidx":I
    .restart local v25    # "bandidx":I
    :cond_5
    move/from16 v3, v25

    .line 11110
    .end local v25    # "bandidx":I
    .restart local v3    # "bandidx":I
    :goto_2
    const/4 v9, 0x4

    new-array v9, v9, [Ljava/lang/Object;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v17

    aput-object v17, v9, v19

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v17

    aput-object v17, v9, v1

    .line 11111
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v17

    const/16 v16, 0x2

    aput-object v17, v9, v16

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    const/16 v17, 0x3

    aput-object v16, v9, v17

    .line 11110
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11112
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v1, v19

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11113
    return-void

    .line 11106
    .end local v3    # "bandidx":I
    .restart local v25    # "bandidx":I
    :cond_6
    move/from16 v1, v25

    .line 11116
    .end local v25    # "bandidx":I
    .local v1, "bandidx":I
    const/4 v9, 0x1

    if-ne v15, v9, :cond_7

    if-nez v2, :cond_7

    iget v9, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    move/from16 v28, v11

    const/4 v11, 0x2

    .end local v11    # "rsrp_u_ant_cc1":I
    .local v28, "rsrp_u_ant_cc1":I
    if-ne v9, v11, :cond_8

    .line 11117
    const/4 v9, 0x7

    new-array v9, v9, [Ljava/lang/Object;

    aput-object v3, v9, v19

    const/16 v16, 0x1

    aput-object v3, v9, v16

    aput-object v3, v9, v11

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v11

    const/16 v16, 0x3

    aput-object v11, v9, v16

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v11

    const/16 v16, 0x4

    aput-object v11, v9, v16

    .line 11118
    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v11

    const/16 v16, 0x5

    aput-object v11, v9, v16

    const/4 v11, 0x6

    aput-object v3, v9, v11

    .line 11117
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11119
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v3, v19

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11120
    return-void

    .line 11116
    .end local v28    # "rsrp_u_ant_cc1":I
    .restart local v11    # "rsrp_u_ant_cc1":I
    :cond_7
    move/from16 v28, v11

    .line 11123
    .end local v11    # "rsrp_u_ant_cc1":I
    .restart local v28    # "rsrp_u_ant_cc1":I
    :cond_8
    const/4 v3, 0x1

    if-lt v15, v3, :cond_a

    if-ne v2, v3, :cond_a

    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    const/4 v9, 0x2

    if-ne v3, v9, :cond_a

    .line 11124
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v3

    if-eqz v3, :cond_9

    .line 11125
    new-array v3, v9, [Ljava/lang/Object;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v3, v19

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x1

    aput-object v9, v3, v11

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    goto :goto_3

    .line 11124
    :cond_9
    const/4 v11, 0x1

    .line 11127
    :goto_3
    const/4 v3, 0x5

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v3, v19

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v3, v11

    .line 11128
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v9

    const/16 v16, 0x2

    aput-object v9, v3, v16

    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v9

    const/16 v16, 0x3

    aput-object v9, v3, v16

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    const/16 v16, 0x4

    aput-object v9, v3, v16

    .line 11127
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11129
    new-array v3, v11, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v3, v19

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11130
    return-void

    .line 11133
    :cond_a
    const/16 v3, 0xa

    const/4 v9, 0x1

    if-le v15, v9, :cond_c

    const/4 v11, 0x2

    if-ne v2, v11, :cond_c

    iget v11, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    if-ne v11, v9, :cond_c

    .line 11134
    const/4 v11, 0x3

    iput v11, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    .line 11136
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v11

    if-eqz v11, :cond_b

    .line 11137
    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v3, v19

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v3, v9

    .line 11138
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x2

    aput-object v9, v3, v11

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x3

    aput-object v9, v3, v11

    .line 11139
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x4

    aput-object v9, v3, v11

    move/from16 v9, v26

    .end local v26    # "bandidx_cc1":I
    .local v9, "bandidx_cc1":I
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v11

    const/16 v16, 0x5

    aput-object v11, v3, v16

    .line 11140
    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v11

    const/16 v16, 0x6

    aput-object v11, v3, v16

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v11

    const/16 v16, 0x7

    aput-object v11, v3, v16

    .line 11141
    move/from16 v11, v28

    .end local v28    # "rsrp_u_ant_cc1":I
    .restart local v11    # "rsrp_u_ant_cc1":I
    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v18, 0x8

    aput-object v16, v3, v18

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    const/16 v18, 0x9

    aput-object v16, v3, v18

    .line 11137
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11142
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v3, v19

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11143
    return-void

    .line 11145
    .end local v9    # "bandidx_cc1":I
    .end local v11    # "rsrp_u_ant_cc1":I
    .restart local v26    # "bandidx_cc1":I
    .restart local v28    # "rsrp_u_ant_cc1":I
    :cond_b
    move/from16 v11, v28

    .end local v28    # "rsrp_u_ant_cc1":I
    .restart local v11    # "rsrp_u_ant_cc1":I
    const/4 v3, 0x7

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v25

    aput-object v25, v3, v19

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v25

    const/16 v17, 0x1

    aput-object v25, v3, v17

    .line 11146
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v25

    const/16 v16, 0x2

    aput-object v25, v3, v16

    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v16

    const/16 v23, 0x3

    aput-object v16, v3, v23

    .line 11147
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v22, 0x4

    aput-object v16, v3, v22

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v21, 0x5

    aput-object v16, v3, v21

    .line 11148
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    const/16 v18, 0x6

    aput-object v16, v3, v18

    .line 11145
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11149
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v3, v19

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11150
    return-void

    .line 11133
    .end local v11    # "rsrp_u_ant_cc1":I
    .restart local v28    # "rsrp_u_ant_cc1":I
    :cond_c
    move/from16 v9, v26

    move/from16 v11, v28

    .line 11152
    .end local v26    # "bandidx_cc1":I
    .end local v28    # "rsrp_u_ant_cc1":I
    .restart local v9    # "bandidx_cc1":I
    .restart local v11    # "rsrp_u_ant_cc1":I
    const/4 v3, 0x1

    if-le v15, v3, :cond_f

    const/4 v3, 0x2

    if-ne v2, v3, :cond_f

    move/from16 v28, v2

    .end local v2    # "ul_cc_count":I
    .local v28, "ul_cc_count":I
    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    if-ne v2, v3, :cond_e

    .line 11153
    const/4 v2, 0x4

    iput v2, v0, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->TasVersion:I

    .line 11155
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-eqz v2, :cond_d

    .line 11156
    const/16 v2, 0xc

    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v19

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v3

    const/16 v17, 0x1

    aput-object v3, v2, v17

    .line 11157
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x2

    aput-object v3, v2, v16

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x3

    aput-object v3, v2, v16

    .line 11158
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x4

    aput-object v3, v2, v16

    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x5

    aput-object v3, v2, v16

    .line 11159
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x6

    aput-object v3, v2, v16

    .line 11160
    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x7

    aput-object v3, v2, v16

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x8

    aput-object v3, v2, v16

    .line 11161
    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v3

    const/16 v16, 0x9

    aput-object v3, v2, v16

    move/from16 v3, v27

    .end local v27    # "rsrp_l_ant_a_cc1":I
    .local v3, "rsrp_l_ant_a_cc1":I
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v18, 0xa

    aput-object v16, v2, v18

    const/16 v16, 0xb

    .line 11162
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    aput-object v18, v2, v16

    .line 11156
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11163
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v2, v19

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11164
    return-void

    .line 11166
    .end local v3    # "rsrp_l_ant_a_cc1":I
    .restart local v27    # "rsrp_l_ant_a_cc1":I
    :cond_d
    move/from16 v3, v27

    const/4 v2, 0x1

    .end local v27    # "rsrp_l_ant_a_cc1":I
    .restart local v3    # "rsrp_l_ant_a_cc1":I
    const/16 v2, 0x9

    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v26

    aput-object v26, v2, v19

    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v26

    const/16 v17, 0x1

    aput-object v26, v2, v17

    .line 11167
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v26

    const/16 v16, 0x2

    aput-object v26, v2, v16

    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v23, 0x3

    aput-object v16, v2, v23

    .line 11168
    invoke-virtual {v0, v10}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v16

    const/16 v22, 0x4

    aput-object v16, v2, v22

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v21, 0x5

    aput-object v16, v2, v21

    .line 11169
    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v18, 0x6

    aput-object v16, v2, v18

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->rscpCheck(I)Ljava/lang/String;

    move-result-object v16

    const/16 v18, 0x7

    aput-object v16, v2, v18

    .line 11170
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    const/16 v18, 0x8

    aput-object v16, v2, v18

    .line 11166
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11171
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v2, v19

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteTasInfo;->addData([Ljava/lang/Object;)V

    .line 11172
    return-void

    .line 11152
    .end local v3    # "rsrp_l_ant_a_cc1":I
    .restart local v27    # "rsrp_l_ant_a_cc1":I
    :cond_e
    move/from16 v3, v27

    .end local v27    # "rsrp_l_ant_a_cc1":I
    .restart local v3    # "rsrp_l_ant_a_cc1":I
    goto :goto_4

    .end local v3    # "rsrp_l_ant_a_cc1":I
    .end local v28    # "ul_cc_count":I
    .restart local v2    # "ul_cc_count":I
    .restart local v27    # "rsrp_l_ant_a_cc1":I
    :cond_f
    move/from16 v28, v2

    move/from16 v3, v27

    .line 11175
    .end local v2    # "ul_cc_count":I
    .end local v27    # "rsrp_l_ant_a_cc1":I
    .restart local v3    # "rsrp_l_ant_a_cc1":I
    .restart local v28    # "ul_cc_count":I
    :goto_4
    return-void
.end method
