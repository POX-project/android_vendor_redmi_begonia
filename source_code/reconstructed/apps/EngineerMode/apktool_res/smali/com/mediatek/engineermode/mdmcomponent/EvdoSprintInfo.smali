.class Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;
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

    .line 1232
    const-string v0, "MSG_ID_EM_C2K_L4_SPRINT_EVDO_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1249
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1235
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->AtMapping:Ljava/util/HashMap;

    .line 1250
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1264
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1259
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 14

    .line 1268
    const-string v0, "DO_state"

    const-string v1, "Mac_index"

    const-string v2, "Channel"

    const-string v3, "Color_Code"

    const-string v4, "Sector_ID"

    const-string v5, "PN"

    const-string v6, "Rx_Pwr"

    const-string v7, "Rx_PER"

    const-string v8, "Pilot_Energy"

    const-string v9, "DRC"

    const-string v10, "SINR"

    const-string v11, "AN_AAA"

    const-string v12, "IPv4_Address"

    const-string v13, "IPv6_Address"

    filled-new-array/range {v0 .. v13}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1254
    const-string v0, "EVDO Sprint info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1275
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 26
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1279
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 1280
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "DO_state"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 1281
    .local v2, "DO_state":I
    const-string v3, "Mac_index"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 1282
    .local v3, "Mac_index":I
    const-string v4, "Channel"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 1283
    .local v4, "Channel":I
    const-string v5, "Color_Code"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 1285
    .local v5, "Color_Code":I
    const/16 v6, 0x22

    new-array v7, v6, [C

    .line 1286
    .local v7, "Sector_ID":[C
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_0
    const-string v9, "]"

    if-ge v8, v6, :cond_0

    .line 1287
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Sector_ID["

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    int-to-char v9, v9

    aput-char v9, v7, v8

    .line 1286
    add-int/lit8 v8, v8, 0x1

    goto :goto_0

    .line 1289
    .end local v8    # "i":I
    :cond_0
    new-instance v6, Ljava/lang/String;

    invoke-direct {v6, v7}, Ljava/lang/String;-><init>([C)V

    .line 1291
    .local v6, "Sector_ID_s":Ljava/lang/String;
    const-string v8, "bandPNClass"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 1292
    .local v8, "PN":I
    const-string v10, "Rx_Pwr"

    const/4 v11, 0x1

    invoke-virtual {v0, v1, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    div-int/lit16 v10, v10, 0x80

    .line 1293
    .local v10, "Rx_Pwr":I
    const-string v12, "Rx_PER"

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1294
    .local v12, "Rx_PER":I
    invoke-static {}, Ljava/text/NumberFormat;->getPercentInstance()Ljava/text/NumberFormat;

    move-result-object v13

    .line 1295
    .local v13, "fmt":Ljava/text/NumberFormat;
    const/4 v14, 0x2

    invoke-virtual {v13, v14}, Ljava/text/NumberFormat;->setMaximumFractionDigits(I)V

    .line 1296
    int-to-double v14, v12

    const-wide/high16 v16, 0x40d9000000000000L    # 25600.0

    div-double v14, v14, v16

    invoke-virtual {v13, v14, v15}, Ljava/text/NumberFormat;->format(D)Ljava/lang/String;

    move-result-object v14

    .line 1298
    .local v14, "Rx_PER_DOUBLE":Ljava/lang/String;
    const-string v15, "Pilot_Energy"

    invoke-virtual {v0, v1, v15, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v15

    .line 1299
    .local v15, "Pilot_Energy":I
    const-string v11, "DRC"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 1300
    .local v11, "DRC":I
    move-object/from16 v17, v7

    .end local v7    # "Sector_ID":[C
    .local v17, "Sector_ID":[C
    const-string v7, "SINR"

    move/from16 v18, v12

    const/4 v12, 0x1

    .end local v12    # "Rx_PER":I
    .local v18, "Rx_PER":I
    invoke-virtual {v0, v1, v7, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 1301
    .local v7, "SINR":I
    const-string v12, "AN_AAA"

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 1303
    .local v12, "AN_AAA":I
    move-object/from16 v19, v13

    .end local v13    # "fmt":Ljava/text/NumberFormat;
    .local v19, "fmt":Ljava/text/NumberFormat;
    const/16 v13, 0x10

    move/from16 v20, v7

    .end local v7    # "SINR":I
    .local v20, "SINR":I
    new-array v7, v13, [C

    .line 1304
    .local v7, "IPv4_Address":[C
    const/16 v21, 0x0

    move/from16 v22, v11

    move/from16 v11, v21

    .local v11, "i":I
    .local v22, "DRC":I
    :goto_1
    if-ge v11, v13, :cond_1

    .line 1305
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v23, v15

    .end local v15    # "Pilot_Energy":I
    .local v23, "Pilot_Energy":I
    const-string v15, "IPv4_Address["

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    int-to-char v13, v13

    aput-char v13, v7, v11

    .line 1304
    add-int/lit8 v11, v11, 0x1

    move/from16 v15, v23

    const/16 v13, 0x10

    goto :goto_1

    .end local v23    # "Pilot_Energy":I
    .restart local v15    # "Pilot_Energy":I
    :cond_1
    move/from16 v23, v15

    .line 1308
    .end local v11    # "i":I
    .end local v15    # "Pilot_Energy":I
    .restart local v23    # "Pilot_Energy":I
    new-instance v11, Ljava/lang/String;

    invoke-direct {v11, v7}, Ljava/lang/String;-><init>([C)V

    .line 1310
    .local v11, "IPv4_Address_s":Ljava/lang/String;
    const/16 v13, 0x40

    new-array v15, v13, [C

    .line 1311
    .local v15, "IPv6_Address":[C
    const/16 v21, 0x0

    move-object/from16 v24, v7

    move/from16 v7, v21

    .local v7, "i":I
    .local v24, "IPv4_Address":[C
    :goto_2
    if-ge v7, v13, :cond_2

    .line 1312
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v25, v11

    .end local v11    # "IPv4_Address_s":Ljava/lang/String;
    .local v25, "IPv4_Address_s":Ljava/lang/String;
    const-string v11, "IPv6_Address["

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    int-to-char v11, v11

    aput-char v11, v15, v7

    .line 1311
    add-int/lit8 v7, v7, 0x1

    move-object/from16 v11, v25

    const/16 v13, 0x40

    goto :goto_2

    .end local v25    # "IPv4_Address_s":Ljava/lang/String;
    .restart local v11    # "IPv4_Address_s":Ljava/lang/String;
    :cond_2
    move-object/from16 v25, v11

    .line 1315
    .end local v7    # "i":I
    .end local v11    # "IPv4_Address_s":Ljava/lang/String;
    .restart local v25    # "IPv4_Address_s":Ljava/lang/String;
    new-instance v7, Ljava/lang/String;

    invoke-direct {v7, v15}, Ljava/lang/String;-><init>([C)V

    .line 1317
    .local v7, "IPv6_Address_s":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "AN_AAA = "

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const-string v11, "EmInfo/MDMComponent"

    invoke-static {v11, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1318
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->clearData()V

    .line 1320
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->AtMapping:Ljava/util/HashMap;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData(Ljava/lang/String;)V

    .line 1321
    const/4 v9, 0x1

    new-array v11, v9, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    const/16 v16, 0x0

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1322
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1323
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1325
    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData(Ljava/lang/String;)V

    .line 1327
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1328
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1329
    invoke-virtual {v0, v14}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData(Ljava/lang/String;)V

    .line 1330
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static/range {v23 .. v23}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1331
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static/range {v22 .. v22}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1332
    new-array v11, v9, [Ljava/lang/Object;

    invoke-static/range {v20 .. v20}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v11, v16

    invoke-virtual {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1333
    new-array v9, v9, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v9, v16

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData([Ljava/lang/Object;)V

    .line 1334
    move-object/from16 v9, v25

    .end local v25    # "IPv4_Address_s":Ljava/lang/String;
    .local v9, "IPv4_Address_s":Ljava/lang/String;
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData(Ljava/lang/String;)V

    .line 1335
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->addData(Ljava/lang/String;)V

    .line 1337
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoSprintInfo;->notifyDataSetChanged()V

    .line 1338
    return-void
.end method
