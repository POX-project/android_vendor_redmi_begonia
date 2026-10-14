.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
.super Ljava/lang/Object;
.source "RfDesenseRatInfo.java"


# instance fields
.field public final DEFAULT_BAND_WIDTH:I

.field public final DEFAULT_VRB_LENGTH:I

.field private RatCheckState:Ljava/lang/Boolean;

.field private RatCmdAntSwitch:Ljava/lang/String;

.field private RatCmdLteBw:I

.field private RatCmdLteRb:I

.field private RatCmdPowerRead:Ljava/lang/String;

.field private RatCmdStart:Ljava/lang/String;

.field private RatCmdStop:Ljava/lang/String;

.field private RatCmdSwitch:Ljava/lang/String;

.field private RatName:Ljava/lang/String;

.field private RatPowerSet:Ljava/lang/String;

.field private RatSendState:Ljava/lang/Boolean;

.field private RatTxtimes:I

.field private Ratband:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    const/4 v0, 0x3

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->DEFAULT_BAND_WIDTH:I

    .line 42
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->DEFAULT_VRB_LENGTH:I

    return-void
.end method


# virtual methods
.method public getRatCheckState()Ljava/lang/Boolean;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCheckState:Ljava/lang/Boolean;

    return-object v0
.end method

.method public getRatCmdAntSwitch()Ljava/lang/String;
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdAntSwitch:Ljava/lang/String;

    return-object v0
.end method

.method public getRatCmdPowerRead()Ljava/lang/String;
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdPowerRead:Ljava/lang/String;

    return-object v0
.end method

.method public getRatCmdStart()Ljava/lang/String;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdStart:Ljava/lang/String;

    return-object v0
.end method

.method public getRatCmdStop()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdStop:Ljava/lang/String;

    return-object v0
.end method

.method public getRatCmdSwitch()Ljava/lang/String;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdSwitch:Ljava/lang/String;

    return-object v0
.end method

.method public getRatName()Ljava/lang/String;
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatName:Ljava/lang/String;

    return-object v0
.end method

.method public getRatPowerSet()Ljava/lang/String;
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatPowerSet:Ljava/lang/String;

    return-object v0
.end method

.method public getRatSendState()Ljava/lang/Boolean;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatSendState:Ljava/lang/Boolean;

    return-object v0
.end method

.method public getRatTxtimes()I
    .locals 1

    .line 181
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatTxtimes:I

    return v0
.end method

.method public getRatband()Ljava/lang/String;
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->Ratband:Ljava/lang/String;

    return-object v0
.end method

.method public setRatCheckState(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "mRatCheckState"    # Ljava/lang/Boolean;

    .line 73
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCheckState:Ljava/lang/Boolean;

    .line 74
    return-void
.end method

.method public setRatCmdAntSwitch(Ljava/lang/String;)V
    .locals 0
    .param p1, "ratCmdAntSwitch"    # Ljava/lang/String;

    .line 93
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdAntSwitch:Ljava/lang/String;

    .line 94
    return-void
.end method

.method public setRatCmdLteBwRb(II)V
    .locals 2
    .param p1, "ratCmdLteBw"    # I
    .param p2, "ratCmdLteRb"    # I

    .line 125
    const/4 v0, -0x1

    if-ne p1, v0, :cond_0

    .line 126
    const/4 v1, 0x3

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteBw:I

    goto :goto_0

    .line 128
    :cond_0
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteBw:I

    .line 130
    :goto_0
    if-ne p2, v0, :cond_1

    .line 131
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteRb:I

    goto :goto_1

    .line 133
    :cond_1
    iput p2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteRb:I

    .line 135
    :goto_1
    return-void
.end method

.method public setRatCmdStart(Ljava/lang/String;)V
    .locals 0
    .param p1, "mRatCmdStart"    # Ljava/lang/String;

    .line 97
    if-eqz p1, :cond_0

    .line 98
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdStart:Ljava/lang/String;

    .line 100
    :cond_0
    return-void
.end method

.method public setRatCmdStart(Ljava/lang/String;III)V
    .locals 6
    .param p1, "rat"    # Ljava/lang/String;
    .param p2, "channel"    # I
    .param p3, "power"    # I
    .param p4, "band"    # I

    .line 138
    const-string v0, ""

    .line 139
    .local v0, "command":Ljava/lang/String;
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v3, ","

    if-eqz v1, :cond_0

    .line 140
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AT+ERFTX=2,1,"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v4, 0x1004

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_0

    .line 142
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v2, 0x1

    aget-object v1, v1, v2

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "AT+ERFTX=0,0,"

    if-eqz v1, :cond_1

    .line 143
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_0

    .line 144
    :cond_1
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v4, 0x2

    aget-object v1, v1, v4

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 145
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_0

    .line 146
    :cond_2
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v2, 0x3

    aget-object v1, v1, v2

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ",0,"

    const-string v4, "AT+ERFTX=6,0,2,"

    if-eqz v1, :cond_3

    .line 147
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteBw:I

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",1,0,0,0,"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteRb:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_0

    .line 149
    :cond_3
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v5, 0x4

    aget-object v1, v1, v5

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 150
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteBw:I

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",0,0,0,0,"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdLteRb:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 152
    :cond_4
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v2, 0x5

    aget-object v1, v1, v2

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 153
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+ERFTX=13,4,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 154
    :cond_5
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v2, 0x6

    aget-object v1, v1, v2

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 155
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+ECRFTX=1,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",0"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 157
    :cond_6
    :goto_0
    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdStart:Ljava/lang/String;

    .line 158
    return-void
.end method

.method public setRatCmdStop(Ljava/lang/String;)V
    .locals 0
    .param p1, "mRatCmdStop"    # Ljava/lang/String;

    .line 107
    if-eqz p1, :cond_0

    .line 108
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdStop:Ljava/lang/String;

    .line 110
    :cond_0
    return-void
.end method

.method public setRatCmdSwitch(Ljava/lang/String;)V
    .locals 0
    .param p1, "mRatCmdSwitch"    # Ljava/lang/String;

    .line 117
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdSwitch:Ljava/lang/String;

    .line 118
    return-void
.end method

.method public setRatName(Ljava/lang/String;)V
    .locals 0
    .param p1, "mRatname"    # Ljava/lang/String;

    .line 63
    if-eqz p1, :cond_0

    .line 64
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatName:Ljava/lang/String;

    .line 66
    :cond_0
    return-void
.end method

.method public setRatPowerRead(Ljava/lang/String;)V
    .locals 0
    .param p1, "mRatCmdPowerRead"    # Ljava/lang/String;

    .line 161
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatCmdPowerRead:Ljava/lang/String;

    .line 162
    return-void
.end method

.method public setRatPowerSet(Ljava/lang/String;)V
    .locals 0
    .param p1, "ratPowerSet"    # Ljava/lang/String;

    .line 177
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatPowerSet:Ljava/lang/String;

    .line 178
    return-void
.end method

.method public setRatSendState(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "mRatSendState"    # Ljava/lang/Boolean;

    .line 81
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatSendState:Ljava/lang/Boolean;

    .line 82
    return-void
.end method

.method public setRatTxtimes(I)V
    .locals 0
    .param p1, "ratTxtimes"    # I

    .line 185
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->RatTxtimes:I

    .line 186
    return-void
.end method

.method public setRatband(Ljava/lang/String;)V
    .locals 0
    .param p1, "ratband"    # Ljava/lang/String;

    .line 169
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->Ratband:Ljava/lang/String;

    .line 170
    return-void
.end method
