.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;

.field protected static final TAG:Ljava/lang/String; = "EmInfo"


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

.field TasVersionC2K:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 58
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 107
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableTasComponent;-><init>(Landroid/app/Activity;)V

    .line 61
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasVersionC2K:I

    .line 62
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->AntennaMapping:Ljava/util/HashMap;

    .line 71
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 108
    return-void
.end method


# virtual methods
.method antidxMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "antidx"    # I

    .line 80
    const-string v0, " "

    .line 81
    .local v0, "antidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x3

    if-gt p1, v1, :cond_0

    .line 82
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->AntennaMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 84
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->AntennaMapping:Ljava/util/HashMap;

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

    .line 85
    :goto_0
    return-object v0
.end method

.method bandClassMapping(I)Ljava/lang/String;
    .locals 2
    .param p1, "bandidx"    # I

    .line 98
    if-ltz p1, :cond_1

    const/16 v0, 0x14

    if-le p1, v0, :cond_0

    goto :goto_0

    .line 101
    :cond_0
    const-string v0, "BC"

    .line 102
    .local v0, "bandidx_s":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 103
    return-object v0

    .line 99
    .end local v0    # "bandidx_s":Ljava/lang/String;
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;
    .locals 1
    .param p1, "lables1"    # [Ljava/lang/String;
    .param p2, "lables2"    # [Ljava/lang/String;
    .param p3, "position"    # I

    .line 112
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 113
    if-gez p3, :cond_0

    .line 114
    invoke-static {p3}, Ljava/lang/Math;->abs(I)I

    move-result p3

    .line 115
    invoke-virtual {p0, p2, p1, p3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 117
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addLablesAtPosition([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 119
    :cond_1
    return-object p2
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 134
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 129
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 10

    .line 138
    const-string v0, "Channel"

    const-string v1, "bandClass"

    const-string v2, "pilotPN"

    const-string v3, "rxPower_main(dbm)"

    const-string v4, "rxPower_div(dbm)"

    const-string v5, "txPower"

    const-string v6, "tx_Ant"

    const-string v7, "FER"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    .line 142
    .local v0, "Lables_Verison_v1":[Ljava/lang/String;
    const-string v1, "Channel"

    const-string v2, "bandClass"

    const-string v3, "Cur ant state"

    const-string v4, "pilotPN"

    const-string v5, "rxPower_LANT (dbm)"

    const-string v6, "rxPower_UANT (dbm)"

    const-string v7, "rxPower_LANT(\') (dbm)"

    const-string v8, "tx_Ant"

    const-string v9, "FER"

    filled-new-array/range {v1 .. v9}, [Ljava/lang/String;

    move-result-object v1

    .line 145
    .local v1, "Lables_Verison_v2":[Ljava/lang/String;
    const-string v2, "Tas Enable Info"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    .line 147
    .local v2, "Lables_Tas":[Ljava/lang/String;
    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasVersionC2K:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_0

    .line 148
    array-length v3, v2

    invoke-virtual {p0, v2, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 151
    :cond_0
    array-length v3, v2

    invoke-virtual {p0, v2, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->conbineLablesByModem([Ljava/lang/String;[Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 124
    const-string v0, "1xRTT radio info(TAS info)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 157
    const/4 v0, 0x0

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "tasidx"    # I

    .line 89
    const-string v0, ""

    .line 90
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 91
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 93
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasEnableMapping:Ljava/util/HashMap;

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

    .line 94
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 23
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 161
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 162
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "utas_enable"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 163
    .local v2, "utas_info_valid":I
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->setInfoValid(I)V

    .line 166
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->isInfoValid()Z

    move-result v3

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eqz v3, :cond_0

    .line 167
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->clearData()V

    .line 168
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->mAdapter:Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    new-array v5, v5, [Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Use "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getName()Ljava/lang/String;

    move-result-object v7

    const-string v8, "UTAS"

    const-string v9, "TAS"

    invoke-virtual {v7, v8, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v5, v4

    invoke-virtual {v3, v5}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 169
    return-void

    .line 171
    :cond_0
    const-string v3, "tas_enable"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 172
    .local v3, "tasidx":I
    const-string v6, "channel"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 173
    .local v6, "channel":I
    const-string v7, "band_class"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 174
    .local v7, "band_class":I
    const-string v8, "pilot_pn_offset"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 175
    .local v8, "pilot_pn_offset":I
    const-string v9, "rx_power"

    invoke-virtual {v0, v1, v9, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 176
    .local v9, "rx_power1":I
    const-string v10, "div_rx_power"

    invoke-virtual {v0, v1, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 177
    .local v10, "rx_power2":I
    const-string v11, "tx_power"

    invoke-virtual {v0, v1, v11, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v11

    .line 178
    .local v11, "tx_power":I
    const-string v12, "tx_ant"

    invoke-virtual {v0, v1, v12, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 179
    .local v12, "tx_ant_id":I
    const-string v13, "fer"

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 180
    .local v13, "FER":I
    const-string v14, "tas_ver"

    invoke-virtual {v0, v1, v14, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 182
    .local v14, "tas_ver":I
    if-ne v14, v5, :cond_1

    .line 183
    iput v5, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasVersionC2K:I

    goto :goto_0

    .line 185
    :cond_1
    const/4 v15, 0x2

    iput v15, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasVersionC2K:I

    .line 187
    :goto_0
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "tas_ver = "

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v15, "EmInfo"

    invoke-static {v15, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    const-string v4, "tas_state"

    invoke-virtual {v0, v1, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 190
    .local v4, "tas_state":I
    const-string v15, "rx_power_dbmL"

    invoke-virtual {v0, v1, v15, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 191
    .local v15, "rx_power_dbmL":I
    move/from16 v17, v2

    .end local v2    # "utas_info_valid":I
    .local v17, "utas_info_valid":I
    const-string v2, "rx_power_dbmU"

    invoke-virtual {v0, v1, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 192
    .local v2, "rx_power_dbmU":I
    move/from16 v18, v14

    .end local v14    # "tas_ver":I
    .local v18, "tas_ver":I
    const-string v14, "rx_power_dbmLp"

    invoke-virtual {v0, v1, v14, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 193
    .local v14, "rx_power_dbmLp":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->clearData()V

    .line 194
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v19

    if-eqz v19, :cond_2

    .line 195
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData(Ljava/lang/String;)V

    .line 197
    :cond_2
    iget v5, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->TasVersionC2K:I

    const-string v20, ""

    move-object/from16 v21, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v21, "data":Lcom/mediatek/mdml/Msg;
    const/4 v1, 0x1

    if-ne v5, v1, :cond_6

    .line 199
    new-array v5, v1, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    const/16 v16, 0x0

    aput-object v19, v5, v16

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 200
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->bandClassMapping(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData(Ljava/lang/String;)V

    .line 201
    new-array v5, v1, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v19

    aput-object v19, v5, v16

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 202
    new-array v5, v1, [Ljava/lang/Object;

    const/16 v1, -0x96

    if-ne v9, v1, :cond_3

    move-object/from16 v22, v20

    goto :goto_1

    :cond_3
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v22

    :goto_1
    aput-object v22, v5, v16

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 203
    move/from16 v19, v3

    const/4 v5, 0x1

    .end local v3    # "tasidx":I
    .local v19, "tasidx":I
    new-array v3, v5, [Ljava/lang/Object;

    if-ne v10, v1, :cond_4

    move-object/from16 v22, v20

    goto :goto_2

    :cond_4
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v22

    :goto_2
    aput-object v22, v3, v16

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 204
    new-array v3, v5, [Ljava/lang/Object;

    if-ne v11, v1, :cond_5

    goto :goto_3

    :cond_5
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    :goto_3
    aput-object v20, v3, v16

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 205
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 206
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    goto/16 :goto_7

    .line 208
    .end local v19    # "tasidx":I
    .restart local v3    # "tasidx":I
    :cond_6
    move v5, v1

    move/from16 v19, v3

    const/16 v16, 0x0

    .end local v3    # "tasidx":I
    .restart local v19    # "tasidx":I
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 209
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->bandClassMapping(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData(Ljava/lang/String;)V

    .line 210
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->antidxMapping(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData(Ljava/lang/String;)V

    .line 211
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 212
    new-array v1, v5, [Ljava/lang/Object;

    const/16 v3, -0x96

    if-ne v15, v3, :cond_7

    move-object/from16 v22, v20

    goto :goto_4

    :cond_7
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v22

    :goto_4
    aput-object v22, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 213
    new-array v1, v5, [Ljava/lang/Object;

    if-ne v2, v3, :cond_8

    move-object/from16 v22, v20

    goto :goto_5

    :cond_8
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v22

    :goto_5
    aput-object v22, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 214
    new-array v1, v5, [Ljava/lang/Object;

    if-ne v14, v3, :cond_9

    goto :goto_6

    :cond_9
    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    :goto_6
    aput-object v20, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 215
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 216
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v16

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->addData([Ljava/lang/Object;)V

    .line 219
    :goto_7
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioInfo;->notifyDataSetChanged()V

    .line 221
    return-void
.end method
