.class Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 945
    const-string v0, "MSG_ID_EM_C2K_L4_EVDO_RL_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 949
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 950
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 964
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 959
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 6

    .line 968
    const-string v0, "averageTbsize"

    const-string v1, "rtcRetransmitCount"

    const-string v2, "rtcTransmitTotalCount"

    const-string v3, "txPower"

    const-string v4, "pilotPower"

    const-string v5, "rab_1_ratio"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 954
    const-string v0, "EVDO RL info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 974
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 15
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 978
    move-object v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 979
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "averageTbsize"

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 980
    .local v2, "averageTbsize":I
    const-string v3, "rtcRetransmitCount"

    invoke-virtual {p0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 981
    .local v3, "rtcRetransmitCount":I
    const-string v4, "rtcTransmitTotalCount"

    invoke-virtual {p0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 982
    .local v4, "rtcTransmitTotalCount":I
    const-string v5, "txPower"

    const/4 v6, 0x1

    invoke-virtual {p0, v1, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 983
    .local v5, "txPower":I
    const-string v7, "pilotPower"

    invoke-virtual {p0, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 984
    .local v7, "pilotPower":I
    const-string v8, "rab_1_ratio"

    invoke-virtual {p0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 986
    .local v8, "rab_1_ratio":I
    new-instance v9, Ljava/text/DecimalFormat;

    const-string v10, "#0.00"

    invoke-direct {v9, v10}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    .line 987
    .local v9, "df":Ljava/text/DecimalFormat;
    int-to-float v10, v5

    const/high16 v11, 0x43000000    # 128.0f

    div-float/2addr v10, v11

    float-to-double v12, v10

    invoke-virtual {v9, v12, v13}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v10

    .line 988
    .local v10, "txPowerFloat":Ljava/lang/String;
    int-to-float v12, v7

    div-float/2addr v12, v11

    float-to-double v11, v12

    invoke-virtual {v9, v11, v12}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v11

    .line 990
    .local v11, "pilotPowerFloat":Ljava/lang/String;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->clearData()V

    .line 992
    new-array v12, v6, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    const/4 v14, 0x0

    aput-object v13, v12, v14

    invoke-virtual {p0, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->addData([Ljava/lang/Object;)V

    .line 993
    new-array v12, v6, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v12, v14

    invoke-virtual {p0, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->addData([Ljava/lang/Object;)V

    .line 994
    new-array v12, v6, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v12, v14

    invoke-virtual {p0, v12}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->addData([Ljava/lang/Object;)V

    .line 995
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->addData(Ljava/lang/String;)V

    .line 996
    invoke-virtual {p0, v11}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->addData(Ljava/lang/String;)V

    .line 997
    new-array v6, v6, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v6, v14

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->addData([Ljava/lang/Object;)V

    .line 999
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/EvdoRlInfo;->notifyDataSetChanged()V

    .line 1000
    return-void
.end method
