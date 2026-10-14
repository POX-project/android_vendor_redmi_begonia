.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 736
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_STAT_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 740
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 741
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 755
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 750
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 13

    .line 759
    const-string v0, "total_msg"

    const-string v1, "error_msg"

    const-string v2, "acc_1"

    const-string v3, "acc_2"

    const-string v4, "acc_8"

    const-string v5, "dpchLoss_count"

    const-string v6, "dtchLoss_count"

    const-string v7, "idleHO_count"

    const-string v8, "hardHO_count"

    const-string v9, "interFreqldleHO_count"

    const-string v10, "silentryRetryTimeout_count"

    const-string v11, "T40_count"

    const-string v12, "T41_count"

    filled-new-array/range {v0 .. v12}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 745
    const-string v0, "1xRTT statistics info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 767
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 19
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 771
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 772
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "total_msg"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 773
    .local v2, "total_msg":I
    const-string v3, "error_msg"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 774
    .local v3, "error_msg":I
    const-string v4, "acc_1"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 775
    .local v4, "acc_1":I
    const-string v5, "acc_2"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 776
    .local v5, "acc_2":I
    const-string v6, "acc_8"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 778
    .local v6, "acc_8":I
    const-string v7, "dpchLoss_count"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 780
    .local v7, "dpchLoss_count":I
    const-string v8, "dtchLoss_count"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 781
    .local v8, "dtchLoss_count":I
    const-string v9, "idleHO_count"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 782
    .local v9, "idleHO_count":I
    const-string v10, "hardHO_count"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 784
    .local v10, "hardHO_count":I
    const-string v11, "interFreqldleHO_count"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 785
    .local v11, "interFreqldleHO_count":I
    const-string v12, "silentryRetryTimeout_count"

    const/4 v13, 0x1

    invoke-virtual {v0, v1, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 787
    .local v12, "silentryRetryTimeout_count":I
    const-string v14, "T40_count"

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 788
    .local v14, "T40_count":I
    const-string v15, "T41_count"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 789
    .local v15, "T41_count":I
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v17, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v17, "data":Lcom/mediatek/mdml/Msg;
    const-string v1, "T41_count = "

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 790
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->clearData()V

    .line 791
    const/4 v1, 0x1

    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    const/16 v18, 0x0

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 792
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 793
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 794
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 795
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 796
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 797
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 798
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 799
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 800
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 801
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 802
    new-array v13, v1, [Ljava/lang/Object;

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v16

    aput-object v16, v13, v18

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 803
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v1, v18

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->addData([Ljava/lang/Object;)V

    .line 804
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xStatisticsInfo;->notifyDataSetChanged()V

    .line 805
    return-void
.end method
