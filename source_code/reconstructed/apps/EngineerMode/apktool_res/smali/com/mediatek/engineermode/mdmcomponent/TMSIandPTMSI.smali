.class Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ptmsi:Ljava/lang/String;

.field tmsi:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 6405
    const-string v0, "MSG_ID_EM_MM_INFO_IND"

    const-string v1, "MSG_ID_EM_GMM_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 6412
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 6408
    const-string v0, "-"

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->tmsi:Ljava/lang/String;

    .line 6409
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->ptmsi:Ljava/lang/String;

    .line 6413
    return-void
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 6427
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 6422
    const-string v0, "3. UMTS FDD EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 6436
    const-string v0, "TMSI"

    const-string v1, "P-TMSI"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 6417
    const-string v0, "TMSI and P-TMSI"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 6432
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 8
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 6441
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 6442
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->clearData()V

    .line 6443
    const-string v1, "MSG_ID_EM_MM_INFO_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, " "

    const-string v3, "]"

    const/4 v4, 0x4

    const-string v5, ""

    if-eqz v1, :cond_1

    .line 6444
    iput-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->tmsi:Ljava/lang/String;

    .line 6445
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, v4, :cond_0

    .line 6446
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "tmsi["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 6447
    .local v5, "value":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->tmsi:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iput-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->tmsi:Ljava/lang/String;

    .line 6445
    .end local v5    # "value":I
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .end local v1    # "i":I
    :cond_0
    goto :goto_2

    .line 6449
    :cond_1
    const-string v1, "MSG_ID_EM_GMM_INFO_IND"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 6450
    iput-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->ptmsi:Ljava/lang/String;

    .line 6451
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_1
    if-ge v1, v4, :cond_2

    .line 6452
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "ptmsi["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 6453
    .restart local v5    # "value":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->ptmsi:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iput-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->ptmsi:Ljava/lang/String;

    .line 6451
    .end local v5    # "value":I
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 6456
    .end local v1    # "i":I
    :cond_2
    :goto_2
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->tmsi:Ljava/lang/String;

    aput-object v3, v1, v2

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->ptmsi:Ljava/lang/String;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/TMSIandPTMSI;->addData([Ljava/lang/Object;)V

    .line 6457
    return-void
.end method
