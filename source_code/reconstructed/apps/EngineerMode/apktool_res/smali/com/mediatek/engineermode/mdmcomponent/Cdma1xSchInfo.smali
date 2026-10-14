.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentC2k.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 671
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_SCH_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 675
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 676
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 690
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 685
    const-string v0, "7. CDMA EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 10

    .line 694
    const-string v0, "for_sch_mux"

    const-string v1, "for_sch_rc"

    const-string v2, "for_sch_status"

    const-string v3, "for_sch_duration"

    const-string v4, "for_sch_rate"

    const-string v5, "rev_sch_mux"

    const-string v6, "rev_sch_rc"

    const-string v7, "rev_sch_status"

    const-string v8, "rev_sch_duration"

    const-string v9, "rev_sch_rate"

    filled-new-array/range {v0 .. v9}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 680
    const-string v0, "1xRTT SCH info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 702
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 16
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 706
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 707
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "for_sch_mux"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 708
    .local v2, "for_sch_mux":I
    const-string v3, "for_sch_rc"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 709
    .local v3, "for_sch_rc":I
    const-string v4, "for_sch_status"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 710
    .local v4, "for_sch_status":I
    const-string v5, "for_sch_duration"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 711
    .local v5, "for_sch_duration":I
    const-string v6, "for_sch_rate"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 712
    .local v6, "for_sch_rate":I
    const-string v7, "rev_sch_mux"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 713
    .local v7, "rev_sch_mux":I
    const-string v8, "rev_sch_rc"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 715
    .local v8, "rev_sch_rc":I
    const-string v9, "rev_sch_status"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 716
    .local v9, "rev_sch_status":I
    const-string v10, "rev_sch_duration"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 717
    .local v10, "rev_sch_duration":I
    const-string v11, "rev_sch_rate"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 719
    .local v11, "rev_sch_rate":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "rev_sch_rate = "

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v12}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 720
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->clearData()V

    .line 721
    const/4 v12, 0x1

    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    const/4 v15, 0x0

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 722
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 723
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 724
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 725
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 726
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 727
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 728
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 729
    new-array v13, v12, [Ljava/lang/Object;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    aput-object v14, v13, v15

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 730
    new-array v12, v12, [Ljava/lang/Object;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v12, v15

    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->addData([Ljava/lang/Object;)V

    .line 731
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xSchInfo;->notifyDataSetChanged()V

    .line 732
    return-void
.end method
