.class public Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
.super Landroid/app/Activity;
.source "CardEmulationMode.java"


# static fields
.field private static final DIALOG_ID_WAIT:I = 0x0

.field private static final HANDLER_MSG_GET_RSP:I = 0xc8


# instance fields
.field private mBtnClearAll:Landroid/widget/Button;

.field private mBtnReturn:Landroid/widget/Button;

.field private mBtnRunInBack:Landroid/widget/Button;

.field private mBtnSelectAll:Landroid/widget/Button;

.field private mBtnStart:Landroid/widget/Button;

.field private mCbTypeA:Landroid/widget/CheckBox;

.field private mCbTypeB:Landroid/widget/CheckBox;

.field private mCbTypeB2:Landroid/widget/CheckBox;

.field private mCbTypeF:Landroid/widget/CheckBox;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private mEnableBackKey:Z

.field private final mHandler:Landroid/os/Handler;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;

.field private mRgSwio:Landroid/widget/RadioGroup;

.field private mRspArray:[B


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 50
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mEnableBackKey:Z

    .line 51
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$1;-><init>(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 70
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;-><init>(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mHandler:Landroid/os/Handler;

    .line 101
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$3;-><init>(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
    .param p1, "x1"    # [B

    .line 31
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnRunInBack:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;

    .line 31
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnStart:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
    .param p1, "x1"    # Z

    .line 31
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->setButtonsStatus(Z)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 31
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->doTestAction(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnSelectAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
    .param p1, "x1"    # Z

    .line 31
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->changeAllSelect(Z)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnClearAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnReturn:Landroid/widget/Button;

    return-object v0
.end method

.method private changeAllSelect(Z)V
    .locals 2
    .param p1, "checked"    # Z

    .line 189
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "changeDisplay status is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    if-eqz p1, :cond_0

    .line 191
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mRgSwio:Landroid/widget/RadioGroup;

    const v1, 0x7f060404

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 194
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeA:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 195
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeB:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 196
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeF:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 197
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeB2:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 200
    return-void
.end method

.method private doTestAction(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 203
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->sendCommand(Ljava/lang/Boolean;)V

    .line 204
    return-void
.end method

.method private fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;)V
    .locals 4
    .param p1, "bStart"    # Ljava/lang/Boolean;
    .param p2, "requestCmd"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    .line 213
    const/4 v0, 0x2

    const/4 v1, 0x0

    if-nez p1, :cond_0

    .line 214
    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mAction:I

    goto :goto_0

    .line 215
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 216
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mAction:I

    goto :goto_0

    .line 218
    :cond_1
    const/4 v2, 0x1

    iput v2, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mAction:I

    .line 220
    :goto_0
    const/4 v2, 0x0

    .line 222
    .local v2, "temp":I
    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeA:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    or-int/2addr v2, v3

    .line 223
    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeB:Landroid/widget/CheckBox;

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_1

    :cond_2
    move v0, v1

    :goto_1
    or-int/2addr v0, v2

    .line 224
    .end local v2    # "temp":I
    .local v0, "temp":I
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeF:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_3

    const/4 v2, 0x4

    goto :goto_2

    :cond_3
    move v2, v1

    :goto_2
    or-int/2addr v0, v2

    .line 225
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeB2:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_4

    const/16 v2, 0x10

    goto :goto_3

    :cond_4
    move v2, v1

    :goto_3
    or-int/2addr v0, v2

    .line 226
    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mSupportType:I

    .line 227
    const/4 v0, 0x0

    .line 228
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mRgSwio:Landroid/widget/RadioGroup;

    invoke-virtual {v2}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v2

    packed-switch v2, :pswitch_data_0

    goto :goto_4

    .line 236
    :pswitch_0
    const/4 v0, 0x4

    .line 237
    goto :goto_4

    .line 233
    :pswitch_1
    const/4 v0, 0x2

    .line 234
    goto :goto_4

    .line 230
    :pswitch_2
    const/4 v0, 0x1

    .line 231
    nop

    .line 246
    :goto_4
    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mSwNum:I

    .line 247
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mFgVirtualCard:I

    .line 248
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x7f060404
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private initComponents()V
    .locals 2

    .line 153
    const-string v0, "Nfc"

    const-string v1, "initComponents"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    const v0, 0x7f060407

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mRgSwio:Landroid/widget/RadioGroup;

    .line 156
    const v0, 0x7f060400

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeA:Landroid/widget/CheckBox;

    .line 157
    const v0, 0x7f060401

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeB:Landroid/widget/CheckBox;

    .line 158
    const v0, 0x7f060403

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeF:Landroid/widget/CheckBox;

    .line 159
    const v0, 0x7f060402

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mCbTypeB2:Landroid/widget/CheckBox;

    .line 162
    const v0, 0x7f0603fe

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnSelectAll:Landroid/widget/Button;

    .line 163
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 164
    const v0, 0x7f0603fb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnClearAll:Landroid/widget/Button;

    .line 165
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 166
    const v0, 0x7f0603ff

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnStart:Landroid/widget/Button;

    .line 167
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 168
    const v0, 0x7f0603fc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnReturn:Landroid/widget/Button;

    .line 169
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 170
    const v0, 0x7f0603fd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnRunInBack:Landroid/widget/Button;

    .line 171
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnRunInBack:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 173
    return-void
.end method

.method private sendCommand(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 207
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;-><init>()V

    .line 208
    .local v0, "requestCmd":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;)V

    .line 209
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x6b

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 210
    return-void
.end method

.method private setButtonsStatus(Z)V
    .locals 2
    .param p1, "b"    # Z

    .line 176
    if-eqz p1, :cond_0

    .line 177
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0383

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 179
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0384

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 181
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnRunInBack:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 182
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mEnableBackKey:Z

    .line 183
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnReturn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 184
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnSelectAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 185
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mBtnClearAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 186
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    .line 146
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mEnableBackKey:Z

    if-nez v0, :cond_0

    .line 147
    return-void

    .line 149
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 150
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 128
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 129
    const v0, 0x7f080066

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->setContentView(I)V

    .line 130
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->initComponents()V

    .line 131
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->changeAllSelect(Z)V

    .line 133
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 134
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.108"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 135
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 136
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 252
    const/4 v0, 0x0

    .line 253
    .local v0, "dialog":Landroid/app/ProgressDialog;
    if-nez p1, :cond_0

    .line 254
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 255
    const v1, 0x7f0a0358

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 256
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 257
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 258
    return-object v0

    .line 260
    :cond_0
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 140
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 141
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 142
    return-void
.end method
