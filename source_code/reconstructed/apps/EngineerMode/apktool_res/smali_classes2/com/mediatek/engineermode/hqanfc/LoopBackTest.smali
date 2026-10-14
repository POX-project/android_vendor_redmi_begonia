.class public Lcom/mediatek/engineermode/hqanfc/LoopBackTest;
.super Landroid/app/Activity;
.source "LoopBackTest.java"


# static fields
.field private static final DIALOG_ID_WAIT:I = 0x0

.field private static final HANDLER_MSG_GET_RSP:I = 0xc8


# instance fields
.field private mBtnReturn:Landroid/widget/Button;

.field private mBtnStart:Landroid/widget/Button;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private mEnableBackKey:Z

.field private final mHandler:Landroid/os/Handler;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;

.field private mRspArray:[B


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 29
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 38
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mEnableBackKey:Z

    .line 39
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$1;-><init>(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 59
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;-><init>(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mHandler:Landroid/os/Handler;

    .line 87
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$3;-><init>(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;
    .param p1, "x1"    # [B

    .line 29
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;

    .line 29
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnStart:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;
    .param p1, "x1"    # Z

    .line 29
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->setButtonsStatus(Z)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 29
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->doTestAction(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    .line 29
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnReturn:Landroid/widget/Button;

    return-object v0
.end method

.method private doTestAction(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 142
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->sendCommand(Ljava/lang/Boolean;)V

    .line 143
    return-void
.end method

.method private fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;)V
    .locals 1
    .param p1, "bStart"    # Ljava/lang/Boolean;
    .param p2, "requestCmd"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;

    .line 153
    if-nez p1, :cond_0

    .line 154
    const/4 v0, 0x2

    iput-byte v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;->mAction:B

    goto :goto_0

    .line 155
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 156
    const/4 v0, 0x0

    iput-byte v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;->mAction:B

    goto :goto_0

    .line 158
    :cond_1
    const/4 v0, 0x1

    iput-byte v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;->mAction:B

    .line 160
    :goto_0
    return-void
.end method

.method private sendCommand(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 146
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;-><init>()V

    .line 147
    .local v0, "requestCmd":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackReq;)V

    .line 148
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x81

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 150
    return-void
.end method

.method private setButtonsStatus(Z)V
    .locals 2
    .param p1, "b"    # Z

    .line 131
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[LoopBackTest]setButtonsStatus "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    if-eqz p1, :cond_0

    .line 133
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0383

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 135
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0384

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 137
    :goto_0
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mEnableBackKey:Z

    .line 138
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnReturn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 139
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    .line 124
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mEnableBackKey:Z

    if-nez v0, :cond_0

    .line 125
    return-void

    .line 127
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 128
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 105
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 106
    const v0, 0x7f080069

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->setContentView(I)V

    .line 107
    const v0, 0x7f06040c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnStart:Landroid/widget/Button;

    .line 108
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 109
    const v0, 0x7f06040b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mBtnReturn:Landroid/widget/Button;

    .line 110
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 111
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 112
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.130"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 113
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 114
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 164
    const/4 v0, 0x0

    .line 165
    .local v0, "dialog":Landroid/app/ProgressDialog;
    if-nez p1, :cond_0

    .line 166
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 167
    const v1, 0x7f0a0358

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 168
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 169
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 170
    return-object v0

    .line 172
    :cond_0
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 118
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 119
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 120
    return-void
.end method
