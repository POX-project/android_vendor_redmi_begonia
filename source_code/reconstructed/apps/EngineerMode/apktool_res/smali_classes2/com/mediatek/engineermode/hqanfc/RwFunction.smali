.class public Lcom/mediatek/engineermode/hqanfc/RwFunction;
.super Landroid/app/Activity;
.source "RwFunction.java"


# static fields
.field private static final HANDLER_MSG_GET_NTF:I = 0x64

.field private static final HANDLER_MSG_GET_POLLING_NTF:I = 0xc8

.field protected static final HANDLER_MSG_GET_RSP:I = 0x12c


# instance fields
.field private mBtnFormat:Landroid/widget/Button;

.field private mBtnRead:Landroid/widget/Button;

.field private mBtnWrite:Landroid/widget/Button;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private final mHandler:Landroid/os/Handler;

.field private mOptRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

.field private mPollingNty:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

.field private mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mRspArray:[B

.field private mTvUid:Landroid/widget/TextView;

.field private mUnregisterReceiver:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 46
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mUnregisterReceiver:Z

    .line 49
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/RwFunction$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction$1;-><init>(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 85
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction$2;-><init>(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mHandler:Landroid/os/Handler;

    .line 169
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/RwFunction$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction$3;-><init>(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/RwFunction;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/RwFunction;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;
    .param p1, "x1"    # [B

    .line 32
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mOptRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mTvUid:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/RwFunction;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    .line 32
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mOptRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    return-object p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->doFormat()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mPollingNty:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    return-object v0
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/hqanfc/RwFunction;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    .line 32
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mPollingNty:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    return-object p1
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/hqanfc/RwFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/hqanfc/RwFunction;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;
    .param p1, "x1"    # I

    .line 32
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->updateButtonUI(I)V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/hqanfc/RwFunction;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/RwFunction;

    .line 32
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->updateUid()V

    return-void
.end method

.method private doFormat()V
    .locals 3

    .line 288
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;-><init>()V

    .line 289
    .local v0, "request":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;
    const/4 v1, 0x2

    iput v1, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;->mAction:I

    .line 290
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    .line 291
    const/16 v2, 0x67

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 292
    return-void
.end method

.method private updateButtonUI(I)V
    .locals 3
    .param p1, "ndefType"    # I

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 220
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 221
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 222
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 223
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    invoke-virtual {v2, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 224
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    invoke-virtual {v2, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 225
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 226
    :cond_0
    if-nez p1, :cond_1

    .line 227
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    invoke-virtual {v2, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 228
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 230
    :cond_1
    const/4 v2, 0x2

    if-ne p1, v2, :cond_2

    .line 231
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    invoke-virtual {v2, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 234
    :cond_2
    const/4 v0, 0x3

    const-string v2, "Nfc"

    if-ne p1, v0, :cond_3

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 236
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 237
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 238
    const-string v0, "ReaderModeRspResult.FAIL, disabe all buttons"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 239
    :cond_3
    const/4 v0, 0x4

    if-ne p1, v0, :cond_4

    .line 240
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 241
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 242
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 243
    const-string v0, "ReaderModeRspResult.DISCONNECT, Hide all buttons"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    :cond_4
    :goto_0
    return-void
.end method

.method private updateUid()V
    .locals 4

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mTvUid:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "UID: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    iget-object v2, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mUid:[B

    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    iget v3, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->mUidLen:I

    .line 250
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->printHexString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 249
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 252
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 2

    .line 276
    const-string v0, "Nfc"

    const-string v1, "[RwFunction]onBackPressed"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mUnregisterReceiver:Z

    .line 278
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 279
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 280
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 193
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 194
    const v0, 0x7f08006f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->setContentView(I)V

    .line 195
    const v0, 0x7f060410

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mTvUid:Landroid/widget/TextView;

    .line 196
    const v0, 0x7f06040e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    .line 197
    const v0, 0x7f06040f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    .line 198
    const v0, 0x7f06040d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    .line 199
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnRead:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 200
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnWrite:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 201
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mBtnFormat:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 202
    invoke-virtual {p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 203
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "reader_mode_rsp_ndef"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    .line 204
    .local v1, "ndefType":I
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->updateButtonUI(I)V

    .line 205
    const-string v2, "reader_mode_rsp_array"

    invoke-virtual {v0, v2}, Landroid/content/Intent;->getByteArrayExtra(Ljava/lang/String;)[B

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mRspArray:[B

    .line 206
    if-nez v2, :cond_0

    .line 207
    const/4 v2, 0x0

    const-string v3, "Not get the response"

    invoke-static {p0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 208
    invoke-virtual {p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->finish()V

    .line 209
    return-void

    .line 211
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    if-nez v2, :cond_1

    .line 212
    new-instance v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    invoke-direct {v2}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    .line 214
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceivedReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mRspArray:[B

    invoke-static {v3}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 215
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mHandler:Landroid/os/Handler;

    const/16 v3, 0x64

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 216
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 283
    const-string v0, "Nfc"

    const-string v1, "[RwFunction]onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 284
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 285
    return-void
.end method

.method protected onStart()V
    .locals 3

    .line 255
    const-string v0, "Nfc"

    const-string v1, "[RwFunction]onStart"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 256
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 257
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/RwFunction;->updateUid()V

    .line 258
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 259
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.104"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 260
    const-string v1, "com.mediatek.hqanfc.118"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 261
    const-string v1, "com.mediatek.hqanfc.117"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 262
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 263
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mUnregisterReceiver:Z

    .line 264
    return-void
.end method

.method protected onStop()V
    .locals 2

    .line 268
    const-string v0, "Nfc"

    const-string v1, "[RwFunction]onStop"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mUnregisterReceiver:Z

    if-nez v0, :cond_0

    .line 270
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/RwFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 272
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 273
    return-void
.end method
