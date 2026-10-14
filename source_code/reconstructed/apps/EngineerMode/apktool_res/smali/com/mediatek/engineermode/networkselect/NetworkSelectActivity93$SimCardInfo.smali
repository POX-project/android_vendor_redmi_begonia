.class Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;
.super Ljava/lang/Object;
.source "NetworkSelectActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "SimCardInfo"
.end annotation


# instance fields
.field private isCapabilitySim:Z

.field private isLteCapabilityViceSim:Z

.field private isNRCapabilityViceSim:Z

.field private isWCapabilityViceSim:Z

.field private mCardType:I

.field private mSimType:I

.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;I)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
    .param p2, "mSimType"    # I

    .line 703
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 704
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 705
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->setSimType(I)V

    .line 706
    invoke-static {p2}, Lcom/mediatek/engineermode/ModemCategory;->isCapabilitySim(I)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->setCapabilitySim(Z)V

    .line 707
    invoke-static {p2}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimWCapability(I)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->setWCapabilityViceSim(Z)V

    .line 708
    const/16 v0, 0x1000

    invoke-static {p2, v0}, Lcom/mediatek/engineermode/ModemCategory;->checkViceSimCapability(II)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->setLteCapabilityViceSim(Z)V

    .line 710
    invoke-static {p2}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimNRCapability(I)Z

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->setNRCapabilityViceSim(Z)V

    .line 711
    invoke-direct {p0, p2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->getCardType(I)I

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->setCardType(I)V

    .line 712
    return-void
.end method

.method private getCardType(I)I
    .locals 10
    .param p1, "mSimType"    # I

    .line 765
    const/4 v0, 0x1

    .line 766
    .local v0, "type":I
    invoke-static {p1}, Lcom/mediatek/engineermode/ModemCategory;->getSupportCardType(I)[Ljava/lang/String;

    move-result-object v1

    .line 767
    .local v1, "Cardtype":[Ljava/lang/String;
    const-string v2, "NetworkMode93"

    if-eqz v1, :cond_9

    .line 768
    invoke-static {p1}, Lcom/mediatek/engineermode/ModemCategory;->isCt3gDualMode(I)Z

    move-result v3

    .line 769
    .local v3, "iscCt3gDualMode":Z
    const-string v4, ""

    .line 770
    .local v4, "Cardtypes":Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    array-length v6, v1

    if-ge v5, v6, :cond_0

    .line 771
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v1, v5

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 770
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 773
    .end local v5    # "i":I
    :cond_0
    const-string v5, "USIM"

    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    const-string v7, "CSIM"

    if-eqz v6, :cond_1

    invoke-virtual {v4, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    :cond_1
    const/4 v6, 0x1

    if-ne v3, v6, :cond_3

    .line 775
    :cond_2
    const/4 v0, 0x2

    goto :goto_1

    .line 776
    :cond_3
    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    const-string v8, "RUIM"

    if-eqz v6, :cond_4

    invoke-virtual {v4, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_4

    .line 777
    const/4 v0, 0x2

    goto :goto_1

    .line 778
    :cond_4
    invoke-virtual {v4, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    const-string v9, "SIM"

    if-eqz v6, :cond_5

    invoke-virtual {v4, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_5

    .line 779
    const/4 v0, 0x2

    goto :goto_1

    .line 780
    :cond_5
    invoke-virtual {v4, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_6

    invoke-virtual {v4, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_6

    .line 781
    const/4 v0, 0x1

    goto :goto_1

    .line 782
    :cond_6
    invoke-virtual {v4, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_7

    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_8

    :cond_7
    if-nez v3, :cond_8

    .line 784
    const/4 v0, 0x3

    goto :goto_1

    .line 786
    :cond_8
    const-string v5, "the card type is unknow!"

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 787
    .end local v3    # "iscCt3gDualMode":Z
    .end local v4    # "Cardtypes":Ljava/lang/String;
    :goto_1
    goto :goto_2

    .line 788
    :cond_9
    const-string v3, "there has no card insert,default type is GSM_only"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 789
    :goto_2
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "card type = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v4}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$1100(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)[Ljava/lang/String;

    move-result-object v4

    add-int/lit8 v5, v0, -0x1

    aget-object v4, v4, v5

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 790
    return v0
.end method

.method private setCapabilitySim(Z)V
    .locals 0
    .param p1, "isCapabilitySim"    # Z

    .line 761
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isCapabilitySim:Z

    .line 762
    return-void
.end method

.method private setCardType(I)V
    .locals 0
    .param p1, "mCardType"    # I

    .line 719
    iput p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->mCardType:I

    .line 720
    return-void
.end method

.method private setLteCapabilityViceSim(Z)V
    .locals 0
    .param p1, "isLteCapabilityViceSim"    # Z

    .line 736
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isLteCapabilityViceSim:Z

    .line 737
    return-void
.end method

.method private setWCapabilityViceSim(Z)V
    .locals 0
    .param p1, "isWCapabilityViceSim"    # Z

    .line 744
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isWCapabilityViceSim:Z

    .line 745
    return-void
.end method


# virtual methods
.method public getCardType()I
    .locals 1

    .line 715
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->mCardType:I

    return v0
.end method

.method public getSimType()I
    .locals 1

    .line 748
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->mSimType:I

    return v0
.end method

.method public isCapabilitySim()Z
    .locals 1

    .line 757
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isCapabilitySim:Z

    return v0
.end method

.method public isLteCapabilityViceSim()Z
    .locals 1

    .line 732
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isLteCapabilityViceSim:Z

    return v0
.end method

.method public isNRCapabilityViceSim()Z
    .locals 1

    .line 723
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isNRCapabilityViceSim:Z

    return v0
.end method

.method public isWCapabilityViceSim()Z
    .locals 1

    .line 740
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isWCapabilityViceSim:Z

    return v0
.end method

.method public setNRCapabilityViceSim(Z)V
    .locals 0
    .param p1, "NRCapabilityViceSim"    # Z

    .line 727
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->isNRCapabilityViceSim:Z

    .line 728
    return-void
.end method

.method public setSimType(I)V
    .locals 0
    .param p1, "mSimType"    # I

    .line 752
    iput p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$SimCardInfo;->mSimType:I

    .line 754
    return-void
.end method
