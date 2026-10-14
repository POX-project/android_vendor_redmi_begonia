.class public Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;
.super Landroid/app/Activity;
.source "SecurityStatus.java"

# interfaces
.implements Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;


# static fields
.field private static final TAG:Ljava/lang/String; = "SecurityStatus"


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

.field private m2gCipher:Landroid/widget/TextView;

.field m2gCipherInfo:[Ljava/lang/String;

.field private m2gGprs:Landroid/widget/TextView;

.field m2gGprsInfo:[Ljava/lang/String;

.field private m3gCipher:Landroid/widget/TextView;

.field m3gCipherInfo:[Ljava/lang/String;

.field private m3gIntegrity:Landroid/widget/TextView;

.field m3gIntegrityInfo:[Ljava/lang/String;

.field private m4gEnasCipher:Landroid/widget/TextView;

.field m4gEnasCipherInfo:[Ljava/lang/String;

.field private m4gEnasIntegrity:Landroid/widget/TextView;

.field m4gEnasIntegrityInfo:[Ljava/lang/String;

.field private m4gErrcCipher:Landroid/widget/TextView;

.field m4gErrcCipherInfo:[Ljava/lang/String;

.field private m4gErrcIntegrity:Landroid/widget/TextView;

.field m4gErrcIntegrityInfo:[Ljava/lang/String;

.field private mSimTypeToShow:I


# direct methods
.method public constructor <init>()V
    .locals 9

    .line 51
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 54
    const-string v0, "No Ciphering"

    const-string v1, "A5/1"

    const-string v2, "A5/2"

    const-string v3, "A5/3"

    const-string v4, "A5/4"

    const-string v5, "A5/5"

    const-string v6, "A5/6"

    const-string v7, "A5/7"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gCipherInfo:[Ljava/lang/String;

    .line 56
    const-string v0, "No Ciphering"

    const-string v1, "GEA1"

    const-string v2, "GEA2"

    const-string v3, "GEA3"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gGprsInfo:[Ljava/lang/String;

    .line 57
    const-string v1, "UEA0"

    const-string v2, "UEA1"

    const-string v3, ""

    const-string v4, "UEA2"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gCipherInfo:[Ljava/lang/String;

    .line 58
    const-string v0, "No Integrity"

    const-string v1, "UIA1"

    const-string v2, "UIA2"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gIntegrityInfo:[Ljava/lang/String;

    .line 59
    const-string v0, "EEA0(NULL)"

    const-string v1, "EEA1(SNOW3G)"

    const-string v2, "EEA2(AES)"

    const-string v3, "EEA3(ZUC)"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasCipherInfo:[Ljava/lang/String;

    .line 61
    const-string v4, "EIA0(NULL)"

    const-string v5, "EIA1(SNOW3G)"

    const-string v6, "EIA2(AES)"

    const-string v7, "EIA3(ZUC)"

    filled-new-array {v4, v5, v6, v7}, [Ljava/lang/String;

    move-result-object v8

    iput-object v8, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasIntegrityInfo:[Ljava/lang/String;

    .line 63
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipherInfo:[Ljava/lang/String;

    .line 65
    filled-new-array {v4, v5, v6, v7}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrityInfo:[Ljava/lang/String;

    .line 76
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->componentsArray:Ljava/util/List;

    .line 77
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->mSimTypeToShow:I

    .line 78
    const-string v1, "MSG_ID_EM_RRM_CHANNEL_DESCR_INFO_IND"

    const-string v2, "MSG_ID_EM_LLC_STATUS_IND"

    const-string v3, "MSG_ID_EM_RRCE_3G_SECURITY_CONFIGURATION_STATUS_IND"

    const-string v4, "MSG_ID_EM_ERRC_SEC_PARAM_IND"

    const-string v5, "MSG_ID_EM_EMM_SEC_INFO_IND"

    const-string v6, "MSG_ID_EM_ERRC_STATE_IND"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->SubscribeMsgIdName:[Ljava/lang/String;

    return-void
.end method

.method private registerNetworkInfo()V
    .locals 2

    .line 122
    new-instance v0, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;

    invoke-direct {v0}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;-><init>()V

    .line 123
    .local v0, "components":Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->SubscribeMsgIdName:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->setEmComponentName([Ljava/lang/String;)V

    .line 124
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->componentsArray:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 126
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlSubscribe()V

    .line 127
    return-void
.end method


# virtual methods
.method getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I
    .locals 2
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "key"    # Ljava/lang/String;

    .line 135
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, p2, v1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v0

    return v0
.end method

.method getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I
    .locals 1
    .param p1, "data"    # Lcom/mediatek/mdml/Msg;
    .param p2, "key"    # Ljava/lang/String;
    .param p3, "signed"    # Z

    .line 131
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v0

    return v0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 87
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 88
    const v0, 0x7f0800d7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->setContentView(I)V

    .line 89
    const v0, 0x7f06069d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gCipher:Landroid/widget/TextView;

    .line 90
    const v0, 0x7f06069e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gGprs:Landroid/widget/TextView;

    .line 91
    const v0, 0x7f06069f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gCipher:Landroid/widget/TextView;

    .line 92
    const v0, 0x7f0606a0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gIntegrity:Landroid/widget/TextView;

    .line 93
    const v0, 0x7f0606a1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasCipher:Landroid/widget/TextView;

    .line 94
    const v0, 0x7f0606a2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasIntegrity:Landroid/widget/TextView;

    .line 95
    const v0, 0x7f0606a3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipher:Landroid/widget/TextView;

    .line 96
    const v0, 0x7f0606a4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrity:Landroid/widget/TextView;

    .line 98
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->mSimTypeToShow:I

    .line 100
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmInitialize(Landroid/content/Context;)V

    .line 101
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->setOnMDMChangedListener(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$IMDMSeiviceInterface;)V

    .line 102
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->componentsArray:Ljava/util/List;

    iget v2, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->mSimTypeToShow:I

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmParametersSeting(Ljava/util/List;I)V

    .line 103
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 117
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 118
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlUnSubscribe()V

    .line 119
    return-void
.end method

.method public onPause()V
    .locals 0

    .line 112
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 113
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 107
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 108
    return-void
.end method

.method public onUpdateMDMData(Ljava/lang/String;Lcom/mediatek/mdml/Msg;)V
    .locals 8
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "data"    # Lcom/mediatek/mdml/Msg;

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "update = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SecurityStatus"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    const-string v0, "MSG_ID_EM_RRM_CHANNEL_DESCR_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v2, "2G cipher_algo = "

    const-string v3, " = "

    if-eqz v0, :cond_0

    .line 142
    const-string v0, "rr_em_channel_descr_info.cipher_algo"

    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    .line 143
    .local v0, "cipher_algo":I
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gCipher:Landroid/widget/TextView;

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gCipherInfo:[Ljava/lang/String;

    aget-object v5, v5, v0

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 144
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gCipherInfo:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    .end local v0    # "cipher_algo":I
    goto/16 :goto_9

    :cond_0
    const-string v0, "MSG_ID_EM_LLC_STATUS_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 146
    const-string v0, "cipher_algo"

    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    .line 147
    .restart local v0    # "cipher_algo":I
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gGprs:Landroid/widget/TextView;

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gGprsInfo:[Ljava/lang/String;

    aget-object v5, v5, v0

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 148
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m2gGprsInfo:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    .end local v0    # "cipher_algo":I
    goto/16 :goto_9

    :cond_1
    const-string v0, "MSG_ID_EM_RRCE_3G_SECURITY_CONFIGURATION_STATUS_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/16 v2, 0xff

    const-string v4, "N/A"

    if-eqz v0, :cond_4

    .line 150
    const-string v0, "uCipheringAlgorithm"

    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    .line 151
    .local v0, "ciphering_alg":I
    const-string v5, "uIntegrityAlgorithm"

    invoke-virtual {p0, p2, v5}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 152
    .local v5, "integrity_alg":I
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gCipher:Landroid/widget/TextView;

    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gCipherInfo:[Ljava/lang/String;

    aget-object v7, v7, v0

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 153
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gIntegrity:Landroid/widget/TextView;

    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gIntegrityInfo:[Ljava/lang/String;

    aget-object v7, v7, v5

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 154
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "3G ciphering_alg = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 155
    if-ne v0, v2, :cond_2

    move-object v7, v4

    goto :goto_0

    :cond_2
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gCipherInfo:[Ljava/lang/String;

    aget-object v7, v7, v0

    :goto_0
    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 154
    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "3G integrity_alg = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 157
    if-ne v5, v2, :cond_3

    goto :goto_1

    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m3gIntegrityInfo:[Ljava/lang/String;

    aget-object v4, v2, v5

    :goto_1
    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 156
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 158
    .end local v0    # "ciphering_alg":I
    .end local v5    # "integrity_alg":I
    goto/16 :goto_9

    :cond_4
    const-string v0, "MSG_ID_EM_EMM_SEC_INFO_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 159
    const-string v0, "ciphering_alg"

    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    .line 160
    .restart local v0    # "ciphering_alg":I
    const-string v5, "integrity_alg"

    invoke-virtual {p0, p2, v5}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 161
    .restart local v5    # "integrity_alg":I
    if-ne v0, v2, :cond_5

    .line 162
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasCipher:Landroid/widget/TextView;

    invoke-virtual {v6, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 164
    :cond_5
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasCipher:Landroid/widget/TextView;

    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasCipherInfo:[Ljava/lang/String;

    aget-object v7, v7, v0

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 166
    :goto_2
    if-ne v5, v2, :cond_6

    .line 167
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasIntegrity:Landroid/widget/TextView;

    invoke-virtual {v6, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_3

    .line 169
    :cond_6
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasIntegrity:Landroid/widget/TextView;

    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasIntegrityInfo:[Ljava/lang/String;

    aget-object v7, v7, v5

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 171
    :goto_3
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "4G ciphering_alg = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 172
    if-ne v0, v2, :cond_7

    move-object v7, v4

    goto :goto_4

    :cond_7
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasCipherInfo:[Ljava/lang/String;

    aget-object v7, v7, v0

    :goto_4
    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 171
    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "4G integrity_alg = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 174
    if-ne v5, v2, :cond_8

    goto :goto_5

    :cond_8
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gEnasIntegrityInfo:[Ljava/lang/String;

    aget-object v4, v2, v5

    :goto_5
    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 173
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    .end local v0    # "ciphering_alg":I
    .end local v5    # "integrity_alg":I
    goto/16 :goto_9

    :cond_9
    const-string v0, "MSG_ID_EM_ERRC_SEC_PARAM_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 176
    const-string v0, "enc_algo"

    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    .line 177
    .local v0, "enc_algo":I
    const-string v5, "int_algo"

    invoke-virtual {p0, p2, v5}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 178
    .local v5, "int_algo":I
    if-ne v0, v2, :cond_a

    .line 179
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipher:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 180
    return-void

    .line 182
    :cond_a
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipher:Landroid/widget/TextView;

    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipherInfo:[Ljava/lang/String;

    aget-object v7, v7, v0

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 184
    if-ne v5, v2, :cond_b

    .line 185
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrity:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 186
    return-void

    .line 188
    :cond_b
    iget-object v6, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrity:Landroid/widget/TextView;

    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrityInfo:[Ljava/lang/String;

    aget-object v7, v7, v5

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 190
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "enc_algo = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 191
    if-ne v0, v2, :cond_c

    move-object v7, v4

    goto :goto_6

    :cond_c
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipherInfo:[Ljava/lang/String;

    aget-object v7, v7, v0

    :goto_6
    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 190
    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "int_algo = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 193
    if-ne v5, v2, :cond_d

    goto :goto_7

    :cond_d
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrityInfo:[Ljava/lang/String;

    aget-object v4, v2, v5

    :goto_7
    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 192
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .end local v0    # "enc_algo":I
    .end local v5    # "int_algo":I
    goto :goto_8

    .line 195
    :cond_e
    const-string v0, "MSG_ID_EM_ERRC_STATE_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_f

    .line 196
    const-string v0, "errc_sts"

    invoke-virtual {p0, p2, v0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v0

    .line 197
    .local v0, "errc_sts":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "errc_sts = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    const/4 v1, 0x3

    if-eq v0, v1, :cond_10

    const/4 v1, 0x6

    if-eq v0, v1, :cond_10

    .line 199
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcCipher:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 200
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->m4gErrcIntegrity:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_9

    .line 195
    .end local v0    # "errc_sts":I
    :cond_f
    :goto_8
    nop

    .line 204
    :cond_10
    :goto_9
    return-void
.end method

.method public onUpdateMDMStatus(I)V
    .locals 2
    .param p1, "msg_id"    # I

    .line 208
    const-string v0, "SecurityStatus"

    if-eqz p1, :cond_2

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 220
    :cond_0
    const-string v1, "UnSubscribe message id done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlClosing()Z

    .line 222
    goto :goto_0

    .line 215
    :cond_1
    const-string v1, "Subscribe message id done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    invoke-static {}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mdmlEnableSubscribe()V

    .line 217
    goto :goto_0

    .line 210
    :cond_2
    const-string v1, "MDM Service init done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 211
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfotc1/SecurityStatus;->registerNetworkInfo()V

    .line 212
    nop

    .line 226
    :goto_0
    return-void
.end method
