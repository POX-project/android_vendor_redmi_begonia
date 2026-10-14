.class Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field AtMapping:Ljava/util/HashMap;
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

    .line 1141
    const-string v0, "MSG_ID_EM_C2K_L4_SPRINT_XRTT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1156
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1144
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->AtMapping:Ljava/util/HashMap;

    .line 1157
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1171
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1166
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 16

    .line 1175
    const-string v0, "State"

    const-string v1, "serviceOption"

    const-string v2, "rateReduction"

    const-string v3, "channel"

    const-string v4, "bandClass"

    const-string v5, "sid"

    const-string v6, "nid"

    const-string v7, "baseId"

    const-string v8, "pilotPNOffset"

    const-string v9, "mob_p_revp"

    const-string v10, "baseLat"

    const-string v11, "baseLong"

    const-string v12, "rxPower"

    const-string v13, "EcIo"

    const-string v14, "FER"

    const-string v15, "txPower"

    filled-new-array/range {v0 .. v15}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1161
    const-string v0, "Sprint XRTT info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1183
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 23
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1187
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 1188
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "State"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 1189
    .local v2, "State":I
    const-string v3, "serviceOption"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1190
    .local v3, "serviceOption":I
    const-string v4, "rateReduction"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1191
    .local v4, "rateReduction":I
    const-string v5, "channel"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1192
    .local v5, "channel":I
    const-string v6, "bandClass"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 1193
    .local v6, "bandClass":I
    const-string v7, "sid"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 1194
    .local v7, "sid":I
    const-string v8, "nid"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1195
    .local v8, "nid":I
    const-string v9, "baseId"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 1196
    .local v9, "baseId":I
    const-string v10, "pilotPNOffset"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 1197
    .local v10, "pilotPNOffset":I
    const-string v11, "mob_p_revp"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1198
    .local v11, "mob_p_revp":I
    const-string v12, "baseLat"

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1199
    .local v12, "baseLat":I
    const-string v13, "baseLong"

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 1201
    .local v13, "baseLong":I
    const-string v14, "rxPower"

    const/4 v15, 0x1

    invoke-virtual {v0, v1, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1202
    .local v14, "rxPower":I
    move/from16 v16, v14

    .end local v14    # "rxPower":I
    .local v16, "rxPower":I
    const-string v14, "EcIo"

    invoke-virtual {v0, v1, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1203
    .local v14, "EcIo":I
    int-to-float v15, v14

    const/high16 v18, 0x40000000    # 2.0f

    div-float v15, v15, v18

    .line 1205
    .local v15, "ecio_f":F
    move/from16 v18, v14

    .end local v14    # "EcIo":I
    .local v18, "EcIo":I
    const-string v14, "FER"

    move/from16 v19, v15

    const/4 v15, 0x1

    .end local v15    # "ecio_f":F
    .local v19, "ecio_f":F
    invoke-virtual {v0, v1, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1206
    .local v14, "FER":I
    move/from16 v17, v14

    .end local v14    # "FER":I
    .local v17, "FER":I
    const-string v14, "txPower"

    invoke-virtual {v0, v1, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 1208
    .local v14, "txPower":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->clearData()V

    .line 1210
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->AtMapping:Ljava/util/HashMap;

    move-object/from16 v21, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v21, "data":Lcom/mediatek/mdml/Msg;
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v15, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData(Ljava/lang/String;)V

    .line 1211
    const/4 v1, 0x1

    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    const/16 v22, 0x0

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1212
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1213
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1214
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1215
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1216
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1217
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1218
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1219
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1220
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1221
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1222
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1223
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static/range {v19 .. v19}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1224
    new-array v15, v1, [Ljava/lang/Object;

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    aput-object v20, v15, v22

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1225
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v15

    aput-object v15, v1, v22

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->addData([Ljava/lang/Object;)V

    .line 1227
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintXRttInfo;->notifyDataSetChanged()V

    .line 1228
    return-void
.end method
