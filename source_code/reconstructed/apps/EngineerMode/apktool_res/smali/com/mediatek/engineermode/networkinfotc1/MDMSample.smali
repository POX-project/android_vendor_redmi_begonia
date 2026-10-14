.class public Lcom/mediatek/engineermode/networkinfotc1/MDMSample;
.super Landroid/app/Activity;
.source "MDMSample.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;


# static fields
.field private static final MSG_UPDATE_UI:I = 0x0

.field private static final TAG:Ljava/lang/String; = "MDMSample"


# instance fields
.field private SubscribeMsgIdName:[Ljava/lang/String;

.field private componentsArray:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;",
            ">;"
        }
    .end annotation
.end field

.field private info:Ljava/lang/String;

.field private mResult:Landroid/widget/TextView;

.field private mSimTypeToShow:I

.field private mStart_listen:Landroid/widget/Button;

.field private mStop_listen:Landroid/widget/Button;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 18
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 25
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 26
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->componentsArray:Ljava/util/List;

    .line 27
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mSimTypeToShow:I

    .line 28
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    const-string v1, "MSG_ID_EM_EL1_STATUS_IND"

    const-string v2, "EM_EL1_STATUS_DL_INFO"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->SubscribeMsgIdName:[Ljava/lang/String;

    return-void
.end method

.method private bindViews()V
    .locals 1

    .line 60
    const v0, 0x7f0606c7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mStart_listen:Landroid/widget/Button;

    .line 61
    const v0, 0x7f0606cb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mStop_listen:Landroid/widget/Button;

    .line 62
    const v0, 0x7f06066f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mResult:Landroid/widget/TextView;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mStart_listen:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 64
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mStop_listen:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 65
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "view"    # Landroid/view/View;

    .line 48
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f0606c7

    if-eq v0, v1, :cond_1

    const v1, 0x7f0606cb

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 53
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlUnSubscribe()V

    goto :goto_0

    .line 50
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmInitialize(Landroid/content/Context;)V

    .line 51
    nop

    .line 57
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 34
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 35
    const v0, 0x7f080099

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->setContentView(I)V

    .line 36
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->bindViews()V

    .line 38
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mSimTypeToShow:I

    .line 39
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    invoke-direct {v0}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;-><init>()V

    .line 40
    .local v0, "components":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->SubscribeMsgIdName:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->setEmComponentName([Ljava/lang/String;)V

    .line 41
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->componentsArray:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 42
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->componentsArray:Ljava/util/List;

    iget v3, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mSimTypeToShow:I

    invoke-virtual {v1, v2, v3}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmParametersSeting(Ljava/util/List;I)V

    .line 43
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->setOnMDMChangedListener(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;)V

    .line 44
    return-void
.end method

.method public onUpdateMDMData(Ljava/lang/String;Lcom/mediatek/mdml/Msg;)V
    .locals 13
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "data"    # Lcom/mediatek/mdml/Msg;

    .line 93
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "update = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MDMSample"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 95
    const-string v0, "MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 96
    const-string v0, "serving_info."

    .line 97
    .local v0, "coName":Ljava/lang/String;
    const-string v2, ""

    iput-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 98
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "rsrp"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v2, p2, v3, v4}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 99
    .local v2, "rsrp":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "rsrq"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, p2, v5, v4}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 100
    .local v3, "rsrq":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "rs_snr_in_qdb"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, p2, v6, v4}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v5

    .line 102
    .local v5, "sinr":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "earfcn"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, p2, v7}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 103
    .local v6, "earfcn":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v7

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "pci"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, p2, v8}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 104
    .local v7, "pci":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v8

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "serv_lte_band"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, p2, v9}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 105
    .local v8, "band":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v9

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "DlBandwidth"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, p2, v10, v4}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 107
    .local v9, "dlBandwidth":I
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v10

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "UlBandwidth"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, p2, v11, v4}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 110
    .local v4, "ulBandwidth":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v11, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "rsrp: "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "\n"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 111
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "rsrq: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 112
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "sinr: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 113
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "earfcn: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 114
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "pci: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 115
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "band: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 116
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "dlBandwidth: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 117
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "ulBandwidth: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    .line 119
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "info = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v1, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 121
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->mResult:Landroid/widget/TextView;

    iget-object v10, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMSample;->info:Ljava/lang/String;

    invoke-virtual {v1, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 130
    .end local v0    # "coName":Ljava/lang/String;
    .end local v2    # "rsrp":I
    .end local v3    # "rsrq":I
    .end local v4    # "ulBandwidth":I
    .end local v5    # "sinr":I
    .end local v6    # "earfcn":I
    .end local v7    # "pci":I
    .end local v8    # "band":I
    .end local v9    # "dlBandwidth":I
    :cond_0
    return-void
.end method

.method public onUpdateMDMStatus(I)V
    .locals 2
    .param p1, "msg_id"    # I

    .line 70
    const-string v0, "MDMSample"

    if-eqz p1, :cond_2

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 82
    :cond_0
    const-string v1, "UnSubscribe message id done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlClosing()Z

    .line 84
    goto :goto_0

    .line 77
    :cond_1
    const-string v1, "Subscribe message id done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlEnableSubscribe()V

    .line 79
    goto :goto_0

    .line 72
    :cond_2
    const-string v1, "MDM Service init done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlSubscribe()V

    .line 74
    nop

    .line 89
    :goto_0
    return-void
.end method
