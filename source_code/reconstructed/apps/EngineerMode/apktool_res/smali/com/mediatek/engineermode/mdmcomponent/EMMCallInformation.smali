.class Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 11596
    const-string v0, "MSG_ID_EM_EMM_CALL_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 11600
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 11601
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 11615
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 11610
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 15

    .line 11619
    const-string v0, "Bearer active"

    const-string v1, "PS instance"

    const-string v2, "CS instance"

    const-string v3, "SMS establishment trigger"

    const-string v4, "Keep SMS establishment trigger"

    const-string v5, "Paging trigger"

    const-string v6, "Re-establishment request"

    const-string v7, "Call type(SR/EXSR)"

    const-string v8, "Establishment type(R11)"

    const-string v9, "RRC Establishment cause(R12)"

    const-string v10, "RRC Establishment type(R12)"

    const-string v11, "# of ESM msg\'s"

    const-string v12, "# of SMS msg\'s"

    const-string v13, "CS MO Trigger"

    const-string v14, "CS MT Trigger"

    filled-new-array/range {v0 .. v14}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 11605
    const-string v0, "EMM Call information"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 11630
    const/4 v0, 0x0

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 20
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 11635
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 11636
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    const-string v2, "isBearerActive"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 11637
    .local v2, "bearerActive":I
    const-string v3, "isPsMoMtInstance"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 11638
    .local v3, "psInstance":I
    const-string v4, "isCsMoMtInstance"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 11639
    .local v4, "csInstance":I
    const-string v5, "isSmsEstTrigger"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 11640
    .local v5, "smsEstTrigger":I
    const-string v6, "isKeepSmsEst"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 11641
    .local v6, "keepSmsEstTrigger":I
    const-string v7, "pageIndeFlg"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 11642
    .local v7, "pageTrigger":I
    const-string v8, "reestReqFlg"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 11643
    .local v8, "reEstReq":I
    const-string v9, "callType"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 11644
    .local v9, "callType":I
    const-string v10, "estCause"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 11645
    .local v10, "EstType":I
    const-string v11, "establishmentCause"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 11646
    .local v11, "rrcEstCause":I
    const-string v12, "establishmentType"

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 11647
    .local v12, "rrcEstType":I
    const-string v13, "waitSndEsmMsgNum"

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 11648
    .local v13, "emsMsg":I
    const-string v14, "waitSndSmsMsgNum"

    invoke-virtual {v0, v1, v14}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v14

    .line 11649
    .local v14, "smsMsg":I
    const-string v15, "csMoTrigger"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 11650
    .local v15, "csMoTrigger":I
    move/from16 v16, v15

    .end local v15    # "csMoTrigger":I
    .local v16, "csMoTrigger":I
    const-string v15, "csMtTrigger"

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 11651
    .local v15, "csMtTrigger":I
    move-object/from16 v17, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v17, "data":Lcom/mediatek/mdml/Msg;
    const/16 v1, 0xf

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x0

    aput-object v18, v1, v19

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x1

    aput-object v18, v1, v19

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x2

    aput-object v18, v1, v19

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x3

    aput-object v18, v1, v19

    .line 11652
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x4

    aput-object v18, v1, v19

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x5

    aput-object v18, v1, v19

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x6

    aput-object v18, v1, v19

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x7

    aput-object v18, v1, v19

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x8

    aput-object v18, v1, v19

    .line 11653
    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0x9

    aput-object v18, v1, v19

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0xa

    aput-object v18, v1, v19

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0xb

    aput-object v18, v1, v19

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0xc

    aput-object v18, v1, v19

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0xd

    aput-object v18, v1, v19

    .line 11654
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v18

    const/16 v19, 0xe

    aput-object v18, v1, v19

    .line 11651
    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/EMMCallInformation;->addData([Ljava/lang/Object;)V

    .line 11655
    return-void
.end method
