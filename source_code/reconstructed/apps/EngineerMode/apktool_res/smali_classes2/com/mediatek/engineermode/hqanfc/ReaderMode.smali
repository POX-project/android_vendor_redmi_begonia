.class public Lcom/mediatek/engineermode/hqanfc/ReaderMode;
.super Landroid/app/Activity;
.source "ReaderMode.java"


# static fields
.field private static final CHECKBOXS_NUMBER:I = 0x5

.field private static final CHECKBOX_READER_KOVIO:I = 0x4

.field private static final CHECKBOX_READER_TYPEA:I = 0x0

.field private static final CHECKBOX_READER_TYPEB:I = 0x1

.field private static final CHECKBOX_READER_TYPEF:I = 0x2

.field private static final CHECKBOX_READER_TYPEV:I = 0x3

.field private static final DIALOG_ID_WAIT:I = 0x0

.field private static final HANDLER_MSG_GET_NTF:I = 0x64

.field private static final HANDLER_MSG_GET_RSP:I = 0xc8

.field protected static final KEY_READER_MODE_RSP_ARRAY:Ljava/lang/String; = "reader_mode_rsp_array"

.field protected static final KEY_READER_MODE_RSP_NDEF:Ljava/lang/String; = "reader_mode_rsp_ndef"

.field private static final RADIO_NUMBER:I = 0xc

.field private static final RADIO_READER_TYPEA_106:I = 0x0

.field private static final RADIO_READER_TYPEA_212:I = 0x1

.field private static final RADIO_READER_TYPEA_424:I = 0x2

.field private static final RADIO_READER_TYPEA_848:I = 0x3

.field private static final RADIO_READER_TYPEB_106:I = 0x4

.field private static final RADIO_READER_TYPEB_212:I = 0x5

.field private static final RADIO_READER_TYPEB_424:I = 0x6

.field private static final RADIO_READER_TYPEB_848:I = 0x7

.field private static final RADIO_READER_TYPEF_212:I = 0x8

.field private static final RADIO_READER_TYPEF_424:I = 0x9

.field private static final RADIO_READER_TYPEV_166:I = 0xa

.field private static final RADIO_READER_TYPEV_2648:I = 0xb


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

.field private mReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

.field private mRgTypeA:Landroid/widget/RadioGroup;

.field private mRgTypeB:Landroid/widget/RadioGroup;

.field private mRgTypeF:Landroid/widget/RadioGroup;

.field private mRgTypeVMode:Landroid/widget/RadioGroup;

.field private mRgTypeVRate:Landroid/widget/RadioGroup;

.field private mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

.field private mRspArray:[B

.field private mRunInBack:Z

.field private mSettingsCkBoxs:[Landroid/widget/CheckBox;

.field private mSettingsRadioButtons:[Landroid/widget/RadioButton;

.field private mUnregisterReceiver:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 36
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 67
    const/4 v0, 0x5

    new-array v0, v0, [Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    .line 68
    const/16 v0, 0xc

    new-array v0, v0, [Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    .line 83
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mEnableBackKey:Z

    .line 84
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mUnregisterReceiver:Z

    .line 85
    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRunInBack:Z

    .line 87
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;-><init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 114
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode$2;-><init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mHandler:Landroid/os/Handler;

    .line 212
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode$3;-><init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 242
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode$4;-><init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/ReaderMode;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # [B

    .line 36
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeA:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    .line 36
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mResponse:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    return-object p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeB:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeF:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVRate:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 36
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->doTestAction(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnSelectAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Z

    .line 36
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->changeAllSelect(Z)V

    return-void
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnClearAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnReturn:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnRunInBack:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    return-object v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    .line 36
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReadermNtf:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    return-object p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnStart:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Z

    .line 36
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->setButtonsStatus(Z)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRunInBack:Z

    return v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Z

    .line 36
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRunInBack:Z

    return p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/content/BroadcastReceiver;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReceiver:Landroid/content/BroadcastReceiver;

    return-object v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;
    .param p1, "x1"    # Z

    .line 36
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mUnregisterReceiver:Z

    return p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 36
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    return-object v0
.end method

.method private changeAllSelect(Z)V
    .locals 3
    .param p1, "checked"    # Z

    .line 377
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[ReaderMode]changeDisplay status is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 378
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 379
    aget-object v1, v1, v0

    invoke-virtual {v1, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 378
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 381
    .end local v0    # "i":I
    :cond_0
    if-eqz p1, :cond_1

    .line 382
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeA:Landroid/widget/RadioGroup;

    const v1, 0x7f060482

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 383
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeB:Landroid/widget/RadioGroup;

    const v1, 0x7f060486

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 384
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeF:Landroid/widget/RadioGroup;

    const v1, 0x7f06048a

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 385
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    const v1, 0x7f06048e

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 386
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    const v1, 0x7f060490

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 387
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVRate:Landroid/widget/RadioGroup;

    const v1, 0x7f06048c

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 389
    :cond_1
    return-void
.end method

.method private doTestAction(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 392
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->sendCommand(Ljava/lang/Boolean;)V

    .line 393
    return-void
.end method

.method private fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;)V
    .locals 10
    .param p1, "bStart"    # Ljava/lang/Boolean;
    .param p2, "requestCmd"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    .line 402
    const/4 v0, 0x2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p1, :cond_0

    .line 403
    iput v0, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mAction:I

    goto :goto_0

    .line 404
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 405
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mAction:I

    goto :goto_0

    .line 407
    :cond_1
    iput v2, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mAction:I

    .line 409
    :goto_0
    const/4 v3, 0x5

    new-array v4, v3, [Landroid/widget/CheckBox;

    iget-object v5, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v6, v5, v1

    aput-object v6, v4, v1

    aget-object v6, v5, v2

    aput-object v6, v4, v2

    aget-object v6, v5, v0

    aput-object v6, v4, v0

    const/4 v6, 0x3

    aget-object v7, v5, v6

    aput-object v7, v4, v6

    const/4 v7, 0x4

    aget-object v5, v5, v7

    aput-object v5, v4, v7

    .line 413
    .local v4, "typeBoxs":[Landroid/widget/CheckBox;
    invoke-static {v4}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeValue([Landroid/widget/CheckBox;)I

    move-result v5

    iput v5, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mSupportType:I

    .line 415
    new-array v5, v7, [Landroid/widget/RadioButton;

    iget-object v8, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    aget-object v9, v8, v1

    aput-object v9, v5, v1

    aget-object v9, v8, v2

    aput-object v9, v5, v2

    aget-object v9, v8, v0

    aput-object v9, v5, v0

    aget-object v8, v8, v6

    aput-object v8, v5, v6

    .line 418
    .local v5, "readerADateRateBoxs":[Landroid/widget/RadioButton;
    invoke-static {v5}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeAbDataRateValue([Landroid/widget/RadioButton;)I

    move-result v8

    iput v8, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeADataRate:I

    .line 420
    new-array v8, v7, [Landroid/widget/RadioButton;

    iget-object v9, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    aget-object v7, v9, v7

    aput-object v7, v8, v1

    aget-object v3, v9, v3

    aput-object v3, v8, v2

    const/4 v3, 0x6

    aget-object v3, v9, v3

    aput-object v3, v8, v0

    const/4 v3, 0x7

    aget-object v3, v9, v3

    aput-object v3, v8, v6

    move-object v3, v8

    .line 423
    .local v3, "readerBDateRateBoxs":[Landroid/widget/RadioButton;
    invoke-static {v3}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeAbDataRateValue([Landroid/widget/RadioButton;)I

    move-result v6

    iput v6, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeBDataRate:I

    .line 425
    new-array v6, v0, [Landroid/widget/RadioButton;

    iget-object v7, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const/16 v8, 0x8

    aget-object v8, v7, v8

    aput-object v8, v6, v1

    const/16 v8, 0x9

    aget-object v7, v7, v8

    aput-object v7, v6, v2

    .line 427
    .local v6, "readerFDateRateBoxs":[Landroid/widget/RadioButton;
    invoke-static {v6}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeFDataRateValue([Landroid/widget/RadioButton;)I

    move-result v7

    iput v7, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeFDataRate:I

    .line 429
    new-array v0, v0, [Landroid/widget/RadioButton;

    iget-object v7, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const/16 v8, 0xa

    aget-object v8, v7, v8

    aput-object v8, v0, v1

    const/16 v8, 0xb

    aget-object v7, v7, v8

    aput-object v7, v0, v2

    .line 431
    .local v0, "readerVDateRateBoxs":[Landroid/widget/RadioButton;
    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeVDataRateValue([Landroid/widget/RadioButton;)I

    move-result v7

    iput v7, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVDataRate:I

    .line 433
    iget-object v7, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    invoke-virtual {v7}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v7

    const v8, 0x7f060491

    if-ne v7, v8, :cond_2

    .line 434
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVSubcarrier:I

    goto :goto_1

    .line 436
    :cond_2
    iput v2, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVSubcarrier:I

    .line 439
    :goto_1
    iget-object v7, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    invoke-virtual {v7}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v7

    const v8, 0x7f060490

    if-ne v7, v8, :cond_3

    .line 440
    iput v1, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVCodingMode:I

    goto :goto_2

    .line 442
    :cond_3
    iput v2, p2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVCodingMode:I

    .line 452
    :goto_2
    return-void
.end method

.method private initComponents()V
    .locals 6

    .line 318
    const-string v0, "Nfc"

    const-string v1, "[ReaderMode]initComponents"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 319
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f06047e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 320
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v0, v0, v2

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 321
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f06047f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x1

    aput-object v1, v0, v3

    .line 322
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v0, v0, v3

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 323
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f060480

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v4, 0x2

    aput-object v1, v0, v4

    .line 324
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v0, v0, v4

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 325
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f060481

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v5, 0x3

    aput-object v1, v0, v5

    .line 326
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v0, v0, v5

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 328
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060482

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v2

    .line 329
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060483

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v3

    .line 330
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060484

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v4

    .line 331
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060485

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    aput-object v1, v0, v5

    .line 332
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060486

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v3, 0x4

    aput-object v1, v0, v3

    .line 333
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060487

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v4, 0x5

    aput-object v1, v0, v4

    .line 334
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060488

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v4, 0x6

    aput-object v1, v0, v4

    .line 335
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f060489

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/4 v4, 0x7

    aput-object v1, v0, v4

    .line 336
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f06048a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/16 v4, 0x8

    aput-object v1, v0, v4

    .line 337
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f06048b

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/16 v4, 0x9

    aput-object v1, v0, v4

    .line 338
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f06048c

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/16 v4, 0xa

    aput-object v1, v0, v4

    .line 339
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v1, 0x7f06048d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    const/16 v4, 0xb

    aput-object v1, v0, v4

    .line 341
    const v0, 0x7f060492

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeA:Landroid/widget/RadioGroup;

    .line 342
    const v0, 0x7f060493

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeB:Landroid/widget/RadioGroup;

    .line 343
    const v0, 0x7f060494

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeF:Landroid/widget/RadioGroup;

    .line 344
    const v0, 0x7f060497

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    .line 345
    const v0, 0x7f060495

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    .line 346
    const v0, 0x7f060496

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRgTypeVRate:Landroid/widget/RadioGroup;

    .line 349
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v1, 0x7f06047d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v3

    .line 350
    const v0, 0x7f06047b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnSelectAll:Landroid/widget/Button;

    .line 351
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 352
    const v0, 0x7f060478

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnClearAll:Landroid/widget/Button;

    .line 353
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 354
    const v0, 0x7f06047c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnStart:Landroid/widget/Button;

    .line 355
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 356
    const v0, 0x7f060479

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnReturn:Landroid/widget/Button;

    .line 357
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 358
    const v0, 0x7f06047a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnRunInBack:Landroid/widget/Button;

    .line 359
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 360
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnRunInBack:Landroid/widget/Button;

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 361
    return-void
.end method

.method private sendCommand(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 396
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;-><init>()V

    .line 397
    .local v0, "requestCmd":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;)V

    .line 398
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x65

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 399
    return-void
.end method

.method private setButtonsStatus(Z)V
    .locals 2
    .param p1, "b"    # Z

    .line 364
    if-eqz p1, :cond_0

    .line 365
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0383

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 367
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0384

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 369
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnRunInBack:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 370
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mEnableBackKey:Z

    .line 371
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnReturn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 372
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnSelectAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 373
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mBtnClearAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 374
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    .line 311
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mEnableBackKey:Z

    if-nez v0, :cond_0

    .line 312
    return-void

    .line 314
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 315
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 271
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 272
    const-string v0, "Nfc"

    const-string v1, "[ReaderMode]onCreate"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    const v0, 0x7f08006e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->setContentView(I)V

    .line 274
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->initComponents()V

    .line 275
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->changeAllSelect(Z)V

    .line 276
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 277
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.102"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 278
    const-string v1, "com.mediatek.hqanfc.118"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 279
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 280
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 456
    const/4 v0, 0x0

    .line 457
    .local v0, "dialog":Landroid/app/ProgressDialog;
    if-nez p1, :cond_0

    .line 458
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 459
    const v1, 0x7f0a0358

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 460
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 461
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 462
    return-object v0

    .line 464
    :cond_0
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 304
    const-string v0, "Nfc"

    const-string v1, "[ReaderMode]onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 305
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 306
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 307
    return-void
.end method

.method protected onStart()V
    .locals 3

    .line 289
    const-string v0, "Nfc"

    const-string v1, "[ReaderMode]onStart"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 290
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mRunInBack:Z

    .line 291
    iget-boolean v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mUnregisterReceiver:Z

    if-eqz v2, :cond_0

    .line 292
    const-string v2, "register receiver"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 293
    iput-boolean v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mUnregisterReceiver:Z

    .line 294
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 295
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.102"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 296
    const-string v1, "com.mediatek.hqanfc.118"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 297
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 299
    .end local v0    # "filter":Landroid/content/IntentFilter;
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 300
    return-void
.end method

.method protected onStop()V
    .locals 2

    .line 284
    const-string v0, "Nfc"

    const-string v1, "[ReaderMode]onStop"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 286
    return-void
.end method
