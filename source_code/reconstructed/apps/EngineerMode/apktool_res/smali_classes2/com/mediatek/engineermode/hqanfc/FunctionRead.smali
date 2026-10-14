.class public Lcom/mediatek/engineermode/hqanfc/FunctionRead;
.super Landroid/app/Activity;
.source "FunctionRead.java"


# static fields
.field protected static final BYTE_EXTRA_STR:Ljava/lang/String; = "byte_data"

.field protected static final HANDLER_MSG_GET_RSP:I = 0x12c

.field protected static final PARENT_EXTRA_STR:Ljava/lang/String; = "parent_ui_id"


# instance fields
.field private mBtnCancel:Landroid/widget/Button;

.field private mBtnRead:Landroid/widget/Button;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private final mHandler:Landroid/os/Handler;

.field private mOptRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

.field private mRbTypeOthers:Landroid/widget/RadioButton;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mRgTagType:Landroid/widget/RadioGroup;

.field private mRspArray:[B

.field private mTvLang:Landroid/widget/EditText;

.field private mTvPayloadAscii:Landroid/widget/EditText;

.field private mTvPayloadHex:Landroid/widget/EditText;

.field private mTvPayloadLength:Landroid/widget/EditText;

.field private mTvRecordFlag:Landroid/widget/EditText;

.field private mTvRecordId:Landroid/widget/EditText;

.field private mTvRecordInf:Landroid/widget/EditText;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 34
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 57
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/FunctionRead$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead$1;-><init>(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 78
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/FunctionRead$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead$2;-><init>(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mHandler:Landroid/os/Handler;

    .line 101
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/FunctionRead$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead$3;-><init>(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/FunctionRead;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;
    .param p1, "x1"    # [B

    .line 34
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mOptRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/FunctionRead;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    .line 34
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mOptRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/FunctionRead;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->updateUi(Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mBtnRead:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;

    .line 34
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->doRead()V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/FunctionRead;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/FunctionRead;

    .line 34
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mBtnCancel:Landroid/widget/Button;

    return-object v0
.end method

.method private doRead()V
    .locals 3

    .line 176
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;-><init>()V

    .line 177
    .local v0, "request":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;
    const/4 v1, 0x0

    iput v1, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptReq;->mAction:I

    .line 178
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x67

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 180
    return-void
.end method

.method private initComponents()V
    .locals 2

    .line 148
    const v0, 0x7f060470

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mRgTagType:Landroid/widget/RadioGroup;

    .line 152
    const v0, 0x7f06046c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mRbTypeOthers:Landroid/widget/RadioButton;

    .line 153
    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 154
    const v0, 0x7f060476

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvLang:Landroid/widget/EditText;

    .line 155
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 156
    const v0, 0x7f060472

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvRecordFlag:Landroid/widget/EditText;

    .line 157
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 158
    const v0, 0x7f060474

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvRecordId:Landroid/widget/EditText;

    .line 159
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 160
    const v0, 0x7f060475

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvRecordInf:Landroid/widget/EditText;

    .line 161
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 162
    const v0, 0x7f060477

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvPayloadLength:Landroid/widget/EditText;

    .line 163
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 164
    const v0, 0x7f060473

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvPayloadHex:Landroid/widget/EditText;

    .line 165
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 166
    const v0, 0x7f060471

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvPayloadAscii:Landroid/widget/EditText;

    .line 167
    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setInputType(I)V

    .line 168
    const v0, 0x7f06046b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mBtnRead:Landroid/widget/Button;

    .line 169
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 170
    const v0, 0x7f06046a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mBtnCancel:Landroid/widget/Button;

    .line 171
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mRgTagType:Landroid/widget/RadioGroup;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 173
    return-void
.end method

.method private updateUi(Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;)V
    .locals 6
    .param p1, "info"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;

    .line 183
    const/4 v0, -0x1

    .line 184
    .local v0, "tempInt":I
    iget-object v1, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mNdefType:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcNdefType;

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcNdefType;->mEnumValue:I

    if-eqz v1, :cond_3

    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    const/4 v2, 0x2

    if-eq v1, v2, :cond_1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_0

    .line 198
    const-string v1, "Nfc"

    const-string v2, "[FunctionRead]NfcNdefType is error"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 195
    :cond_0
    const v0, 0x7f06046c

    .line 196
    goto :goto_0

    .line 192
    :cond_1
    const v0, 0x7f06046d

    .line 193
    goto :goto_0

    .line 189
    :cond_2
    const v0, 0x7f06046e

    .line 190
    goto :goto_0

    .line 186
    :cond_3
    const v0, 0x7f06046f

    .line 187
    nop

    .line 201
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mRgTagType:Landroid/widget/RadioGroup;

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->check(I)V

    .line 202
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvRecordFlag:Landroid/widget/EditText;

    iget-byte v2, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mRecordFlags:B

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->printHexString(B)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 203
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvRecordId:Landroid/widget/EditText;

    iget-object v2, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mRecordId:[B

    const/4 v3, 0x0

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->printHexString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 204
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvRecordInf:Landroid/widget/EditText;

    iget-byte v2, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mRecordTnf:B

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->printHexString(B)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 205
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvPayloadLength:Landroid/widget/EditText;

    iget v2, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mLength:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 206
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvLang:Landroid/widget/EditText;

    new-instance v2, Ljava/lang/String;

    iget-object v4, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mLang:[B

    invoke-direct {v2, v4}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 207
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvPayloadAscii:Landroid/widget/EditText;

    new-instance v2, Ljava/lang/String;

    iget-object v4, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mData:[B

    iget v5, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mLength:I

    invoke-direct {v2, v4, v3, v5}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 208
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mTvPayloadHex:Landroid/widget/EditText;

    iget-object v2, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mData:[B

    iget v3, p1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;->mLength:I

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$DataConvert;->printHexString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 209
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 119
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 120
    const v0, 0x7f080067

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->setContentView(I)V

    .line 121
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->initComponents()V

    .line 122
    invoke-virtual {p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "parent_ui_id"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 123
    .local v0, "parentId":I
    const/4 v1, 0x1

    if-ne v1, v0, :cond_0

    .line 124
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mBtnRead:Landroid/widget/Button;

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 125
    invoke-virtual {p0}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->getIntent()Landroid/content/Intent;

    move-result-object v1

    const-string v2, "byte_data"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->getByteArrayExtra(Ljava/lang/String;)[B

    move-result-object v1

    .line 126
    .local v1, "optData":[B
    new-instance v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    invoke-direct {v2}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;-><init>()V

    .line 127
    .local v2, "optRsp":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;
    invoke-static {v1}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 128
    iget-object v3, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;->mTagReadNdef:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->updateUi(Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcTagReadNdef;)V

    .line 130
    .end local v1    # "optData":[B
    .end local v2    # "optRsp":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;
    :cond_0
    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 143
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 144
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 145
    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 134
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 135
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 136
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.104"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 138
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/FunctionRead;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 139
    return-void
.end method
