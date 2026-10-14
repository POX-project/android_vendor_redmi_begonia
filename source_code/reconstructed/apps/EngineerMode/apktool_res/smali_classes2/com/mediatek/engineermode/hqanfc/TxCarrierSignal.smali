.class public Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;
.super Landroid/app/Activity;
.source "TxCarrierSignal.java"


# static fields
.field private static final DIALOG_ID_WAIT:I = 0x0

.field private static final HANDLER_MSG_GET_RSP:I = 0xc8


# instance fields
.field private mBtnReturn:Landroid/widget/Button;

.field private mBtnRunInBack:Landroid/widget/Button;

.field private mBtnStart:Landroid/widget/Button;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private mEnableBackKey:Z

.field private final mHandler:Landroid/os/Handler;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;

.field private mRspArray:[B


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 29
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 39
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mEnableBackKey:Z

    .line 40
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$1;-><init>(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 60
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;-><init>(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mHandler:Landroid/os/Handler;

    .line 88
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$3;-><init>(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;
    .param p1, "x1"    # [B

    .line 29
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;

    .line 29
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnStart:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;
    .param p1, "x1"    # Z

    .line 29
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->setButtonsStatus(Z)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 29
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->doTestAction(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnReturn:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnRunInBack:Landroid/widget/Button;

    return-object v0
.end method

.method private doTestAction(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 153
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->sendCommand(Ljava/lang/Boolean;)V

    .line 154
    return-void
.end method

.method private fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;)V
    .locals 1
    .param p1, "bStart"    # Ljava/lang/Boolean;
    .param p2, "requestCmd"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;

    .line 164
    if-nez p1, :cond_0

    .line 165
    const/4 v0, 0x2

    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;->mAction:I

    goto :goto_0

    .line 166
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 167
    const/4 v0, 0x0

    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;->mAction:I

    goto :goto_0

    .line 169
    :cond_1
    const/4 v0, 0x1

    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;->mAction:I

    .line 171
    :goto_0
    return-void
.end method

.method private sendCommand(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 157
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;-><init>()V

    .line 158
    .local v0, "requestCmd":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnReq;)V

    .line 159
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x6f

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 161
    return-void
.end method

.method private setButtonsStatus(Z)V
    .locals 2
    .param p1, "b"    # Z

    .line 141
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[TxCarrierSignal]setButtonsStatus "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    if-eqz p1, :cond_0

    .line 143
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0383

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 145
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0384

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 147
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnRunInBack:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 148
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mEnableBackKey:Z

    .line 149
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnReturn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 150
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    .line 134
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mEnableBackKey:Z

    if-nez v0, :cond_0

    .line 135
    return-void

    .line 137
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 138
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 112
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 113
    const v0, 0x7f080071

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->setContentView(I)V

    .line 114
    const v0, 0x7f06040a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnStart:Landroid/widget/Button;

    .line 115
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 116
    const v0, 0x7f060408

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnReturn:Landroid/widget/Button;

    .line 117
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 118
    const v0, 0x7f060409

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnRunInBack:Landroid/widget/Button;

    .line 119
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 120
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mBtnRunInBack:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 121
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 122
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.112"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 123
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 124
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 175
    const/4 v0, 0x0

    .line 176
    .local v0, "dialog":Landroid/app/ProgressDialog;
    if-nez p1, :cond_0

    .line 177
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 178
    const v1, 0x7f0a0358

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 179
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 180
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 181
    return-object v0

    .line 183
    :cond_0
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 128
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 129
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 130
    return-void
.end method
