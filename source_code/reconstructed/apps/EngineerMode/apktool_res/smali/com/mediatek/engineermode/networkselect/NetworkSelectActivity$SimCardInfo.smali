.class public Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;
.super Ljava/lang/Object;
.source "NetworkSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "SimCardInfo"
.end annotation


# instance fields
.field private isCapabilitySim:Z

.field private isLteCapabilityViceSim:Z

.field private isWCapabilityViceSim:Z

.field private mSimType:I

.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;I)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
    .param p2, "mSimType"    # I

    .line 148
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 149
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 137
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->mSimType:I

    .line 138
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->isCapabilitySim(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isCapabilitySim:Z

    .line 139
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->mSimType:I

    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimWCapability(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isWCapabilityViceSim:Z

    .line 140
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->mSimType:I

    .line 141
    const/16 v1, 0x1000

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/ModemCategory;->checkViceSimCapability(II)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isLteCapabilityViceSim:Z

    .line 150
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->setSimType(I)V

    .line 151
    return-void
.end method

.method private setCapabilitySim(Z)V
    .locals 0
    .param p1, "isCapabilitySim"    # Z

    .line 172
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isCapabilitySim:Z

    .line 173
    return-void
.end method

.method private setLteCapabilityViceSim(Z)V
    .locals 0
    .param p1, "isLteCapabilityViceSim"    # Z

    .line 146
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isLteCapabilityViceSim:Z

    .line 147
    return-void
.end method

.method private setWCapabilityViceSim(Z)V
    .locals 0
    .param p1, "isWCapabilityViceSim"    # Z

    .line 156
    iput-boolean p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isWCapabilityViceSim:Z

    .line 157
    return-void
.end method


# virtual methods
.method public getSimType()I
    .locals 1

    .line 159
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->mSimType:I

    return v0
.end method

.method public isCapabilitySim()Z
    .locals 1

    .line 169
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isCapabilitySim:Z

    return v0
.end method

.method public isLteCapabilityViceSim()Z
    .locals 1

    .line 143
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isLteCapabilityViceSim:Z

    return v0
.end method

.method public isWCapabilityViceSim()Z
    .locals 1

    .line 153
    iget-boolean v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->isWCapabilityViceSim:Z

    return v0
.end method

.method public setSimType(I)V
    .locals 1
    .param p1, "mSimType"    # I

    .line 162
    iput p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->mSimType:I

    .line 163
    invoke-static {p1}, Lcom/mediatek/engineermode/ModemCategory;->isCapabilitySim(I)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->setCapabilitySim(Z)V

    .line 164
    iget v0, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->mSimType:I

    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimWCapability(I)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->setWCapabilityViceSim(Z)V

    .line 165
    const/16 v0, 0x1000

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/ModemCategory;->checkViceSimCapability(II)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$SimCardInfo;->setLteCapabilityViceSim(Z)V

    .line 167
    return-void
.end method
