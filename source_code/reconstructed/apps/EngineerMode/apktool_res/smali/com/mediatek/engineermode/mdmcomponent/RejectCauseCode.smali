.class Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field attach_rej_cause:I

.field mm_cause:I

.field rau_rej_cause:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 6097
    const-string v0, "MSG_ID_EM_MM_INFO_IND"

    const-string v1, "MSG_ID_EM_GMM_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 6105
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6106
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6120
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6115
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 6129
    const-string v0, "MM Reject Cause Code"

    const-string v1, "GMM Attach Rejec Cause Code"

    const-string v2, "GMM RAU Reject Cause"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6110
    const-string v0, "Reject Cause Code"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6125
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 4
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6138
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 6139
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->clearData()V

    .line 6140
    const-string v1, "MSG_ID_EM_MM_INFO_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 6141
    const-string v1, "mm_cause"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->mm_cause:I

    goto :goto_0

    .line 6142
    :cond_0
    const-string v1, "MSG_ID_EM_GMM_INFO_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 6143
    const-string v1, "attach_rej_cause"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->attach_rej_cause:I

    .line 6144
    const-string v1, "rau_rej_cause"

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->rau_rej_cause:I

    .line 6146
    :cond_1
    :goto_0
    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->mm_cause:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->attach_rej_cause:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x2

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->rau_rej_cause:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/RejectCauseCode;->addData([Ljava/lang/Object;)V

    .line 6147
    return-void
.end method
