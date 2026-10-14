.class public Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
.super Landroid/app/Activity;
.source "VirtualCardFunction.java"


# static fields
.field private static final CHECKBOXS_NUMBER:I = 0x6

.field private static final CHECKBOX_TYPEA:I = 0x0

.field private static final CHECKBOX_TYPEB:I = 0x1

.field private static final CHECKBOX_TYPEB2:I = 0x5

.field private static final CHECKBOX_TYPEF:I = 0x2

.field private static final CHECKBOX_TYPEF_212:I = 0x3

.field private static final CHECKBOX_TYPEF_424:I = 0x4

.field private static final DIALOG_ID_WAIT:I = 0x0

.field private static final HANDLER_MSG_GET_RSP:I = 0xc8

.field private static final RADIO_NUMBER:I = 0x2

.field private static final RADIO_TYPEF_212:I = 0x0

.field private static final RADIO_TYPEF_424:I = 0x1


# instance fields
.field private mBtnClearAll:Landroid/widget/Button;

.field private mBtnReturn:Landroid/widget/Button;

.field private mBtnRunInBack:Landroid/widget/Button;

.field private mBtnSelectAll:Landroid/widget/Button;

.field private mBtnStart:Landroid/widget/Button;

.field private final mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private mEnableBackKey:Z

.field private final mHandler:Landroid/os/Handler;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;

.field private mRspArray:[B

.field private mSettingsCkBoxs:[Landroid/widget/CheckBox;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 55
    const/4 v0, 0x6

    new-array v0, v0, [Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    .line 66
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mEnableBackKey:Z

    .line 67
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$1;-><init>(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;-><init>(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mHandler:Landroid/os/Handler;

    .line 118
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$3;-><init>(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 141
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$4;-><init>(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
    .param p1, "x1"    # [B

    .line 31
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnReturn:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;

    .line 31
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;

    return-object p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnRunInBack:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnStart:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
    .param p1, "x1"    # Z

    .line 31
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->setButtonsStatus(Z)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)[Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 31
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->doTestAction(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnSelectAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
    .param p1, "x1"    # Z

    .line 31
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->changeAllSelect(Z)V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 31
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnClearAll:Landroid/widget/Button;

    return-object v0
.end method

.method private changeAllSelect(Z)V
    .locals 3
    .param p1, "checked"    # Z

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[VirtualCardFunction]changeAllSelect status is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 237
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 238
    aget-object v1, v1, v0

    invoke-virtual {v1, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 237
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 241
    .end local v0    # "i":I
    :cond_0
    if-eqz p1, :cond_1

    .line 242
    const/4 v0, 0x4

    aget-object v0, v1, v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 245
    :cond_1
    return-void
.end method

.method private doTestAction(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 248
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->sendCommand(Ljava/lang/Boolean;)V

    .line 249
    return-void
.end method

.method private fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;)V
    .locals 7
    .param p1, "bStart"    # Ljava/lang/Boolean;
    .param p2, "requestCmd"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;

    .line 258
    const/4 v0, 0x1

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-nez p1, :cond_0

    .line 259
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;->mAction:I

    goto :goto_0

    .line 260
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 261
    iput v2, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;->mAction:I

    goto :goto_0

    .line 263
    :cond_1
    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;->mAction:I

    .line 265
    :goto_0
    const/4 v3, 0x0

    .line 266
    .local v3, "temp":I
    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v4, v4, v2

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    or-int/2addr v3, v4

    .line 267
    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v0, v4, v0

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_2

    move v0, v1

    goto :goto_1

    :cond_2
    move v0, v2

    :goto_1
    or-int/2addr v0, v3

    .line 268
    .end local v3    # "temp":I
    .local v0, "temp":I
    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v3, v3, v1

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    const/4 v4, 0x4

    if-eqz v3, :cond_3

    move v3, v4

    goto :goto_2

    :cond_3
    move v3, v2

    :goto_2
    or-int/2addr v0, v3

    .line 269
    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/4 v5, 0x5

    aget-object v3, v3, v5

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_4

    const/16 v3, 0x10

    goto :goto_3

    :cond_4
    move v3, v2

    :goto_3
    or-int/2addr v0, v3

    .line 270
    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;->mSupportType:I

    .line 272
    const/4 v3, 0x0

    .line 273
    .local v3, "rateVaule":I
    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/4 v6, 0x3

    aget-object v5, v5, v6

    invoke-virtual {v5}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v5

    if-eqz v5, :cond_5

    goto :goto_4

    :cond_5
    move v1, v2

    :goto_4
    or-int/2addr v1, v3

    .line 274
    .end local v3    # "rateVaule":I
    .local v1, "rateVaule":I
    iget-object v3, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v3, v3, v4

    invoke-virtual {v3}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_6

    move v2, v4

    :cond_6
    or-int/2addr v1, v2

    .line 276
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;->mTypeFDataRate:I

    .line 277
    return-void
.end method

.method private initComponents()V
    .locals 4

    .line 193
    const-string v0, "Nfc"

    const-string v1, "[VirtualCardFunction]initComponents"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f0604a3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 195
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f0604a4

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x1

    aput-object v1, v0, v3

    .line 197
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f0604a6

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x2

    aput-object v1, v0, v3

    .line 198
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v0, v0, v3

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 199
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f0604a7

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x3

    aput-object v1, v0, v3

    .line 200
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f0604a8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x4

    aput-object v1, v0, v3

    .line 202
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f0604a5

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x5

    aput-object v1, v0, v3

    .line 209
    const v0, 0x7f0604a1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnSelectAll:Landroid/widget/Button;

    .line 210
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 211
    const v0, 0x7f06049e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnClearAll:Landroid/widget/Button;

    .line 212
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 213
    const v0, 0x7f0604a2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnStart:Landroid/widget/Button;

    .line 214
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 215
    const v0, 0x7f06049f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnReturn:Landroid/widget/Button;

    .line 216
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 217
    const v0, 0x7f0604a0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnRunInBack:Landroid/widget/Button;

    .line 218
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnRunInBack:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 220
    return-void
.end method

.method private sendCommand(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 252
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;-><init>()V

    .line 253
    .local v0, "requestCmd":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardReq;)V

    .line 254
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x71

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 255
    return-void
.end method

.method private setButtonsStatus(Z)V
    .locals 2
    .param p1, "b"    # Z

    .line 223
    if-eqz p1, :cond_0

    .line 224
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0383

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 226
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0384

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 228
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnRunInBack:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 229
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mEnableBackKey:Z

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnReturn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnSelectAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mBtnClearAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 233
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    .line 186
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mEnableBackKey:Z

    if-nez v0, :cond_0

    .line 187
    return-void

    .line 189
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 190
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 169
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 170
    const v0, 0x7f080073

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->setContentView(I)V

    .line 171
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->initComponents()V

    .line 172
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->changeAllSelect(Z)V

    .line 173
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 174
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.114"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 175
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 176
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 281
    const/4 v0, 0x0

    .line 282
    .local v0, "dialog":Landroid/app/ProgressDialog;
    if-nez p1, :cond_0

    .line 283
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 284
    const v1, 0x7f0a0358

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 285
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 286
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 287
    return-object v0

    .line 289
    :cond_0
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 180
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 181
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 182
    return-void
.end method
