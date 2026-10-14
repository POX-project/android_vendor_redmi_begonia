.class public Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
.super Landroid/app/Activity;
.source "PollingLoopMode.java"


# static fields
.field private static final CHECKBOXS_NUMBER:I = 0x12

.field private static final CHECKBOX_CARD_MODE:I = 0xe

.field private static final CHECKBOX_CARD_MODE_TYPEA:I = 0xf

.field private static final CHECKBOX_CARD_MODE_TYPEB:I = 0x10

.field private static final CHECKBOX_CARD_MODE_TYPEF:I = 0x11

.field private static final CHECKBOX_P2P_ACTIVE_MODE:I = 0xa

.field private static final CHECKBOX_P2P_DISABLE_CARD:I = 0xd

.field private static final CHECKBOX_P2P_INITIATOR:I = 0xb

.field private static final CHECKBOX_P2P_MODE:I = 0x6

.field private static final CHECKBOX_P2P_PASSIVE_MODE:I = 0x9

.field private static final CHECKBOX_P2P_TARGET:I = 0xc

.field private static final CHECKBOX_P2P_TYPEA:I = 0x7

.field private static final CHECKBOX_P2P_TYPEF:I = 0x8

.field private static final CHECKBOX_READER_KOVIO:I = 0x5

.field private static final CHECKBOX_READER_MODE:I = 0x0

.field private static final CHECKBOX_READER_TYPEA:I = 0x1

.field private static final CHECKBOX_READER_TYPEB:I = 0x2

.field private static final CHECKBOX_READER_TYPEF:I = 0x3

.field private static final CHECKBOX_READER_TYPEV:I = 0x4

.field private static final DIALOG_ID_RESULT:I = 0x0

.field private static final DIALOG_ID_WAIT:I = 0x1

.field private static final HANDLER_MSG_GET_NTF:I = 0x64

.field private static final HANDLER_MSG_GET_RSP:I = 0xc8

.field private static final RADIO_CARD_SWIO1:I = 0x12

.field private static final RADIO_CARD_SWIO2:I = 0x13

.field private static final RADIO_CARD_SWIOSE:I = 0x14

.field private static final RADIO_NUMBER:I = 0x15

.field private static final RADIO_P2P_TYPEA_106:I = 0xc

.field private static final RADIO_P2P_TYPEA_212:I = 0xd

.field private static final RADIO_P2P_TYPEA_424:I = 0xe

.field private static final RADIO_P2P_TYPEA_848:I = 0xf

.field private static final RADIO_P2P_TYPEF_212:I = 0x10

.field private static final RADIO_P2P_TYPEF_424:I = 0x11

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
.field private mAlertDialog:Landroid/app/AlertDialog;

.field private mBtnClearAll:Landroid/widget/Button;

.field private mBtnReturn:Landroid/widget/Button;

.field private mBtnRunInBack:Landroid/widget/Button;

.field private mBtnSelectAll:Landroid/widget/Button;

.field private mBtnStart:Landroid/widget/Button;

.field private mCbTypeA:Landroid/widget/CheckBox;

.field private mCbTypeB:Landroid/widget/CheckBox;

.field private mCbTypeF:Landroid/widget/CheckBox;

.field private final mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private final mClickListener:Landroid/view/View$OnClickListener;

.field private mEnableBackKey:Z

.field private final mHandler:Landroid/os/Handler;

.field private mNtfContent:Ljava/lang/String;

.field private mPollingNty:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

.field private mPollingRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;

.field private mRbPollingSelectListen:Landroid/widget/RadioButton;

.field private mRbPollingSelectPause:Landroid/widget/RadioButton;

.field private final mReceiver:Landroid/content/BroadcastReceiver;

.field private mRgCardSwio:Landroid/widget/RadioGroup;

.field private mRgP2pTypeA:Landroid/widget/RadioGroup;

.field private mRgP2pTypeF:Landroid/widget/RadioGroup;

.field private mRgPollingSelect:Landroid/widget/RadioGroup;

.field private mRgTypeA:Landroid/widget/RadioGroup;

.field private mRgTypeB:Landroid/widget/RadioGroup;

.field private mRgTypeF:Landroid/widget/RadioGroup;

.field private mRgTypeVMode:Landroid/widget/RadioGroup;

.field private mRgTypeVRate:Landroid/widget/RadioGroup;

.field private mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

.field private mRspArray:[B

.field private mSettingsCkBoxs:[Landroid/widget/CheckBox;

.field private mSettingsRadioButtons:[Landroid/widget/RadioButton;

.field private mTvPeriod:Landroid/widget/EditText;

.field private mUnregisterReceiver:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 41
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 96
    const/16 v0, 0x12

    new-array v0, v0, [Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    .line 97
    const/16 v0, 0x15

    new-array v0, v0, [Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    .line 124
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mAlertDialog:Landroid/app/AlertDialog;

    .line 130
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mEnableBackKey:Z

    .line 131
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mUnregisterReceiver:Z

    .line 132
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$1;-><init>(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 158
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$2;-><init>(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mHandler:Landroid/os/Handler;

    .line 234
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$3;-><init>(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 277
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode$4;-><init>(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRspArray:[B

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;[B)[B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # [B

    .line 41
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRspArray:[B

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mPollingRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeA:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;

    .line 41
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mPollingRsp:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingRsp;

    return-object p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Landroid/widget/RadioGroup;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Landroid/widget/RadioGroup;
    .param p2, "x2"    # Z

    .line 41
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->setRadioGroup(Landroid/widget/RadioGroup;Z)V

    return-void
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeB:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeF:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVRate:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgP2pTypeA:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgP2pTypeF:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgCardSwio:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->checkRoleSelect()Z

    move-result v0

    return v0
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Ljava/lang/Boolean;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Ljava/lang/Boolean;

    .line 41
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->doTestAction(Ljava/lang/Boolean;)V

    return-void
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnSelectAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Z

    .line 41
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->changeAllSelect(Z)V

    return-void
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnClearAll:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$2500(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnReturn:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$2600(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnRunInBack:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mPollingNty:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    return-object v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    .line 41
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mPollingNty:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingNty;

    return-object p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnStart:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Z

    .line 41
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->setButtonsStatus(Z)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/app/AlertDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mAlertDialog:Landroid/app/AlertDialog;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)Landroid/content/BroadcastReceiver;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mReceiver:Landroid/content/BroadcastReceiver;

    return-object v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;
    .param p1, "x1"    # Z

    .line 41
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mUnregisterReceiver:Z

    return p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;)[Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;

    .line 41
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    return-object v0
.end method

.method private changeAllSelect(Z)V
    .locals 3
    .param p1, "checked"    # Z

    .line 454
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[PollingLoopMode]changeDisplay status is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Nfc"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 455
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgPollingSelect:Landroid/widget/RadioGroup;

    const v1, 0x7f06044e

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 456
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mTvPeriod:Landroid/widget/EditText;

    const-string v1, "500"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 457
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 458
    aget-object v1, v1, v0

    invoke-virtual {v1, p1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 457
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 460
    .end local v0    # "i":I
    :cond_0
    const/16 v0, 0xd

    aget-object v0, v1, v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 461
    if-eqz p1, :cond_1

    .line 462
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeA:Landroid/widget/RadioGroup;

    const v1, 0x7f060450

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 463
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeB:Landroid/widget/RadioGroup;

    const v1, 0x7f060454

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 464
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeF:Landroid/widget/RadioGroup;

    const v1, 0x7f060458

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 465
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    const v1, 0x7f06045c

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 466
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    const v1, 0x7f06045e

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 467
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVRate:Landroid/widget/RadioGroup;

    const v1, 0x7f06045a

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 469
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgP2pTypeA:Landroid/widget/RadioGroup;

    const v1, 0x7f060448

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 470
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgP2pTypeF:Landroid/widget/RadioGroup;

    const v1, 0x7f06044c

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 472
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgCardSwio:Landroid/widget/RadioGroup;

    const v1, 0x7f060445

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    .line 474
    :cond_1
    return-void
.end method

.method private checkRoleSelect()Z
    .locals 3

    .line 618
    const/4 v0, 0x1

    .line 619
    .local v0, "result":Z
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v2, 0xb

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v2, 0xc

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-nez v1, :cond_0

    .line 620
    const/4 v0, 0x0

    .line 622
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v2, 0x9

    aget-object v1, v1, v2

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v2, 0xa

    aget-object v1, v1, v2

    .line 623
    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    if-nez v1, :cond_1

    .line 624
    const/4 v0, 0x0

    .line 626
    :cond_1
    return v0
.end method

.method private doTestAction(Ljava/lang/Boolean;)V
    .locals 0
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 477
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->sendCommand(Ljava/lang/Boolean;)V

    .line 478
    return-void
.end method

.method private fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;)V
    .locals 23
    .param p1, "bStart"    # Ljava/lang/Boolean;
    .param p2, "requestCmd"    # Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;

    .line 487
    move-object/from16 v1, p0

    move-object/from16 v2, p2

    const/4 v3, 0x2

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-nez p1, :cond_0

    .line 488
    iput v3, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mAction:I

    .line 489
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iput v3, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mAction:I

    .line 490
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v3, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mAction:I

    .line 491
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mCardmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    iput v3, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mAction:I

    goto :goto_0

    .line 492
    :cond_0
    invoke-virtual/range {p1 .. p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 493
    iput v5, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mAction:I

    .line 494
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iput v5, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mAction:I

    .line 495
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v5, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mAction:I

    .line 496
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mCardmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    iput v5, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mAction:I

    goto :goto_0

    .line 498
    :cond_1
    iput v4, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mAction:I

    .line 499
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iput v4, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mAction:I

    .line 500
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v4, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mAction:I

    .line 501
    iget-object v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mCardmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    iput v4, v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mAction:I

    .line 503
    :goto_0
    iget-object v0, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRbPollingSelectListen:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    xor-int/2addr v0, v4

    iput v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mPhase:I

    .line 505
    :try_start_0
    iget-object v0, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mTvPeriod:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mPeriod:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 508
    goto :goto_1

    .line 506
    :catch_0
    move-exception v0

    .line 507
    .local v0, "e":Ljava/lang/NumberFormatException;
    const-string v6, "Please input the right Period."

    invoke-static {v1, v6, v5}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v6

    invoke-virtual {v6}, Landroid/widget/Toast;->show()V

    .line 509
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    :goto_1
    const/4 v0, 0x3

    new-array v6, v0, [Landroid/widget/CheckBox;

    iget-object v7, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v8, v7, v5

    aput-object v8, v6, v5

    const/16 v8, 0xe

    aget-object v9, v7, v8

    aput-object v9, v6, v4

    const/4 v9, 0x6

    aget-object v7, v7, v9

    aput-object v7, v6, v3

    .line 511
    .local v6, "functionBoxs":[Landroid/widget/CheckBox;
    invoke-static {v6}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getFunctionValue([Landroid/widget/CheckBox;)I

    move-result v7

    iput v7, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mEnableFunc:I

    .line 513
    const/4 v7, 0x0

    .line 514
    .local v7, "p2pTemp":I
    iget-object v10, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/4 v11, 0x7

    aget-object v10, v10, v11

    invoke-virtual {v10}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v10

    or-int/2addr v7, v10

    .line 515
    iget-object v10, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v12, 0x8

    aget-object v10, v10, v12

    invoke-virtual {v10}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v10

    const/4 v13, 0x4

    if-eqz v10, :cond_2

    move v10, v13

    goto :goto_2

    :cond_2
    move v10, v5

    :goto_2
    or-int/2addr v7, v10

    .line 516
    iget-object v10, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iput v7, v10, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mSupportType:I

    .line 518
    new-array v10, v13, [Landroid/widget/RadioButton;

    iget-object v14, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const/16 v15, 0xc

    aget-object v16, v14, v15

    aput-object v16, v10, v5

    const/16 v16, 0xd

    aget-object v17, v14, v16

    aput-object v17, v10, v4

    aget-object v8, v14, v8

    aput-object v8, v10, v3

    const/16 v8, 0xf

    aget-object v14, v14, v8

    aput-object v14, v10, v0

    .line 520
    .local v10, "typeADateRateBoxs":[Landroid/widget/RadioButton;
    iget-object v14, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    invoke-static {v10}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeAbDataRateValue([Landroid/widget/RadioButton;)I

    move-result v8

    iput v8, v14, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mTypeADataRate:I

    .line 522
    new-array v8, v3, [Landroid/widget/RadioButton;

    iget-object v14, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const/16 v18, 0x10

    aget-object v19, v14, v18

    aput-object v19, v8, v5

    const/16 v19, 0x11

    aget-object v14, v14, v19

    aput-object v14, v8, v4

    .line 523
    .local v8, "typeFDateRateBoxs":[Landroid/widget/RadioButton;
    iget-object v14, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    invoke-static {v8}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeFDataRateValue([Landroid/widget/RadioButton;)I

    move-result v12

    iput v12, v14, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mTypeFDataRate:I

    .line 525
    iget-object v12, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iget-object v14, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v14, v14, v16

    invoke-virtual {v14}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v14

    if-eqz v14, :cond_3

    .line 526
    move v14, v4

    goto :goto_3

    :cond_3
    move v14, v5

    :goto_3
    iput v14, v12, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mIsDisableCardM:I

    .line 527
    const/4 v7, 0x0

    .line 528
    iget-object v12, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v14, 0xb

    aget-object v12, v12, v14

    invoke-virtual {v12}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v12

    or-int/2addr v7, v12

    .line 529
    iget-object v12, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v12, v12, v15

    invoke-virtual {v12}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v12

    if-eqz v12, :cond_4

    move v12, v3

    goto :goto_4

    :cond_4
    move v12, v5

    :goto_4
    or-int/2addr v7, v12

    .line 530
    iget-object v12, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iput v7, v12, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mRole:I

    .line 531
    const/4 v7, 0x0

    .line 532
    iget-object v12, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v15, 0x9

    aget-object v12, v12, v15

    invoke-virtual {v12}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v12

    or-int/2addr v7, v12

    .line 533
    iget-object v12, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v16, 0xa

    aget-object v12, v12, v16

    invoke-virtual {v12}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v12

    if-eqz v12, :cond_5

    move v12, v3

    goto :goto_5

    :cond_5
    move v12, v5

    :goto_5
    or-int/2addr v7, v12

    .line 534
    iget-object v12, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mP2pmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;

    iput v7, v12, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pReq;->mMode:I

    .line 537
    const/4 v12, 0x5

    new-array v14, v12, [Landroid/widget/CheckBox;

    iget-object v15, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v20, v15, v4

    aput-object v20, v14, v5

    aget-object v20, v15, v3

    aput-object v20, v14, v4

    aget-object v20, v15, v0

    aput-object v20, v14, v3

    aget-object v20, v15, v13

    aput-object v20, v14, v0

    aget-object v15, v15, v12

    aput-object v15, v14, v13

    .line 540
    .local v14, "typeBoxs":[Landroid/widget/CheckBox;
    iget-object v15, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    invoke-static {v14}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeValue([Landroid/widget/CheckBox;)I

    move-result v11

    iput v11, v15, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mSupportType:I

    .line 542
    new-array v11, v13, [Landroid/widget/RadioButton;

    iget-object v15, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    aget-object v21, v15, v5

    aput-object v21, v11, v5

    aget-object v21, v15, v4

    aput-object v21, v11, v4

    aget-object v21, v15, v3

    aput-object v21, v11, v3

    aget-object v15, v15, v0

    aput-object v15, v11, v0

    .line 545
    .local v11, "readerADateRateBoxs":[Landroid/widget/RadioButton;
    iget-object v15, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    invoke-static {v11}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeAbDataRateValue([Landroid/widget/RadioButton;)I

    move-result v0

    iput v0, v15, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeADataRate:I

    .line 547
    new-array v0, v13, [Landroid/widget/RadioButton;

    iget-object v15, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    aget-object v22, v15, v13

    aput-object v22, v0, v5

    aget-object v12, v15, v12

    aput-object v12, v0, v4

    aget-object v9, v15, v9

    aput-object v9, v0, v3

    const/4 v9, 0x7

    aget-object v9, v15, v9

    const/4 v12, 0x3

    aput-object v9, v0, v12

    .line 550
    .local v0, "readerBDateRateBoxs":[Landroid/widget/RadioButton;
    iget-object v9, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeAbDataRateValue([Landroid/widget/RadioButton;)I

    move-result v12

    iput v12, v9, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeBDataRate:I

    .line 552
    new-array v9, v3, [Landroid/widget/RadioButton;

    iget-object v12, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const/16 v15, 0x8

    aget-object v15, v12, v15

    aput-object v15, v9, v5

    const/16 v15, 0x9

    aget-object v12, v12, v15

    aput-object v12, v9, v4

    .line 554
    .local v9, "readerFDateRateBoxs":[Landroid/widget/RadioButton;
    iget-object v12, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    invoke-static {v9}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeFDataRateValue([Landroid/widget/RadioButton;)I

    move-result v15

    iput v15, v12, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeFDataRate:I

    .line 556
    new-array v12, v3, [Landroid/widget/RadioButton;

    iget-object v15, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    aget-object v16, v15, v16

    aput-object v16, v12, v5

    const/16 v16, 0xb

    aget-object v15, v15, v16

    aput-object v15, v12, v4

    .line 558
    .local v12, "readerVDateRateBoxs":[Landroid/widget/RadioButton;
    iget-object v15, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    invoke-static {v12}, Lcom/mediatek/engineermode/hqanfc/NfcCommand$BitMapValue;->getTypeVDataRateValue([Landroid/widget/RadioButton;)I

    move-result v3

    iput v3, v15, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVDataRate:I

    .line 560
    iget-object v3, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    invoke-virtual {v3}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v3

    const v15, 0x7f06045f

    if-ne v3, v15, :cond_6

    .line 561
    iget-object v3, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v5, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVSubcarrier:I

    goto :goto_6

    .line 563
    :cond_6
    iget-object v3, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v4, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVSubcarrier:I

    .line 566
    :goto_6
    iget-object v3, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    invoke-virtual {v3}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v3

    const v15, 0x7f06045e

    if-ne v3, v15, :cond_7

    .line 567
    iget-object v3, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v5, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVCodingMode:I

    goto :goto_7

    .line 569
    :cond_7
    iget-object v3, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mReadermReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;

    iput v4, v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermReq;->mTypeVCodingMode:I

    .line 573
    :goto_7
    const/4 v3, 0x0

    .line 575
    .local v3, "cardTemp":I
    iget-object v4, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const/16 v15, 0xf

    aget-object v4, v4, v15

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    or-int/2addr v3, v4

    .line 576
    iget-object v4, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v4, v4, v18

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_8

    const/16 v16, 0x2

    goto :goto_8

    :cond_8
    move/from16 v16, v5

    :goto_8
    or-int v3, v3, v16

    .line 577
    iget-object v4, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v4, v4, v19

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_9

    goto :goto_9

    :cond_9
    move v13, v5

    :goto_9
    or-int/2addr v3, v13

    .line 578
    iget-object v4, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mCardmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    iput v3, v4, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mSupportType:I

    .line 580
    const/4 v3, 0x0

    .line 582
    iget-object v4, v1, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgCardSwio:Landroid/widget/RadioGroup;

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v4

    packed-switch v4, :pswitch_data_0

    goto :goto_a

    .line 590
    :pswitch_0
    const/4 v3, 0x4

    .line 591
    goto :goto_a

    .line 587
    :pswitch_1
    const/4 v3, 0x2

    .line 588
    goto :goto_a

    .line 584
    :pswitch_2
    const/4 v3, 0x1

    .line 585
    nop

    .line 595
    :goto_a
    iget-object v4, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mCardmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    iput v3, v4, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mSwNum:I

    .line 596
    iget-object v4, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;->mCardmReq:Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;

    iput v5, v4, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmReq;->mFgVirtualCard:I

    .line 597
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x7f060445
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private initComponents()V
    .locals 10

    .line 350
    const-string v0, "Nfc"

    const-string v1, "[PollingLoopMode]initComponents"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 352
    const v0, 0x7f060462

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgPollingSelect:Landroid/widget/RadioGroup;

    .line 353
    const v0, 0x7f06044e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRbPollingSelectListen:Landroid/widget/RadioButton;

    .line 354
    const v1, 0x7f06044f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRbPollingSelectPause:Landroid/widget/RadioButton;

    .line 355
    const v1, 0x7f060444

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mTvPeriod:Landroid/widget/EditText;

    .line 356
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f06043f

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    .line 357
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v3

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 358
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060440

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    .line 359
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v4

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 360
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060441

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v5, 0x2

    aput-object v2, v1, v5

    .line 361
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v5

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 362
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060442

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v6, 0x3

    aput-object v2, v1, v6

    .line 363
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v6

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 364
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060443

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v7, 0x4

    aput-object v2, v1, v7

    .line 365
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v7

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 366
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060436

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v8, 0x5

    aput-object v2, v1, v8

    .line 368
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060450

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v3

    .line 369
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060451

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v4

    .line 370
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060452

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v5

    .line 371
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060453

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v6

    .line 372
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060454

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v7

    .line 373
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060455

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v8

    .line 374
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060456

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/4 v4, 0x6

    aput-object v2, v1, v4

    .line 375
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060457

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/4 v5, 0x7

    aput-object v2, v1, v5

    .line 376
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060458

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v6, 0x8

    aput-object v2, v1, v6

    .line 377
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060459

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v7, 0x9

    aput-object v2, v1, v7

    .line 378
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f06045a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v8, 0xa

    aput-object v2, v1, v8

    .line 379
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f06045b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v9, 0xb

    aput-object v2, v1, v9

    .line 381
    const v1, 0x7f060464

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeA:Landroid/widget/RadioGroup;

    .line 382
    const v1, 0x7f060465

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeB:Landroid/widget/RadioGroup;

    .line 383
    const v1, 0x7f060466

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeF:Landroid/widget/RadioGroup;

    .line 384
    const v1, 0x7f060469

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVSubCarrier:Landroid/widget/RadioGroup;

    .line 385
    const v1, 0x7f060467

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVMode:Landroid/widget/RadioGroup;

    .line 386
    const v1, 0x7f060468

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgTypeVRate:Landroid/widget/RadioGroup;

    .line 389
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f06043a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v4

    .line 390
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v4

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 391
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f06043d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v5

    .line 392
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v5

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 393
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f06043e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v6

    .line 394
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v6

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 395
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f06043b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v7

    .line 396
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060437

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v8

    .line 397
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060439

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v9

    .line 398
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f06043c

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/16 v4, 0xc

    aput-object v2, v1, v4

    .line 399
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060438

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/16 v5, 0xd

    aput-object v2, v1, v5

    .line 401
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060448

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v4

    .line 402
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060449

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    aput-object v2, v1, v5

    .line 403
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f06044a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v4, 0xe

    aput-object v2, v1, v4

    .line 404
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f06044b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v5, 0xf

    aput-object v2, v1, v5

    .line 405
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f06044c

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v6, 0x10

    aput-object v2, v1, v6

    .line 406
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f06044d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v7, 0x11

    aput-object v2, v1, v7

    .line 408
    const v1, 0x7f060460

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgP2pTypeA:Landroid/widget/RadioGroup;

    .line 409
    const v1, 0x7f060461

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgP2pTypeF:Landroid/widget/RadioGroup;

    .line 412
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060432

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v4

    .line 413
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    aget-object v1, v1, v4

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 414
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060433

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v5

    .line 415
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060434

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v6

    .line 416
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsCkBoxs:[Landroid/widget/CheckBox;

    const v2, 0x7f060435

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    aput-object v2, v1, v7

    .line 418
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060445

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v4, 0x12

    aput-object v2, v1, v4

    .line 419
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060446

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v4, 0x13

    aput-object v2, v1, v4

    .line 420
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mSettingsRadioButtons:[Landroid/widget/RadioButton;

    const v2, 0x7f060447

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioButton;

    const/16 v4, 0x14

    aput-object v2, v1, v4

    .line 422
    const v1, 0x7f060463

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgCardSwio:Landroid/widget/RadioGroup;

    .line 424
    const v1, 0x7f060430

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnSelectAll:Landroid/widget/Button;

    .line 425
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 426
    const v1, 0x7f06042d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnClearAll:Landroid/widget/Button;

    .line 427
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 428
    const v1, 0x7f060431

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnStart:Landroid/widget/Button;

    .line 429
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 430
    const v1, 0x7f06042e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnReturn:Landroid/widget/Button;

    .line 431
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 432
    const v1, 0x7f06042f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnRunInBack:Landroid/widget/Button;

    .line 433
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 434
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnRunInBack:Landroid/widget/Button;

    invoke-virtual {v1, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 435
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mRgPollingSelect:Landroid/widget/RadioGroup;

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->check(I)V

    .line 436
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mTvPeriod:Landroid/widget/EditText;

    const-string v1, "500"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 437
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mTvPeriod:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setSelection(I)V

    .line 438
    return-void
.end method

.method private sendCommand(Ljava/lang/Boolean;)V
    .locals 3
    .param p1, "bStart"    # Ljava/lang/Boolean;

    .line 481
    new-instance v0, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;

    invoke-direct {v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;-><init>()V

    .line 482
    .local v0, "requestCmd":Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;
    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->fillRequest(Ljava/lang/Boolean;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmPollingReq;)V

    .line 483
    invoke-static {}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->getInstance()Lcom/mediatek/engineermode/hqanfc/NfcClient;

    move-result-object v1

    const/16 v2, 0x6d

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcClient;->sendCommand(ILcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmReq;)I

    .line 484
    return-void
.end method

.method private setButtonsStatus(Z)V
    .locals 2
    .param p1, "b"    # Z

    .line 441
    if-eqz p1, :cond_0

    .line 442
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0383

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 444
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnStart:Landroid/widget/Button;

    const v1, 0x7f0a0384

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 446
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnRunInBack:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 447
    iput-boolean p1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mEnableBackKey:Z

    .line 448
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnReturn:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 449
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnSelectAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 450
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mBtnClearAll:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 451
    return-void
.end method

.method private setRadioGroup(Landroid/widget/RadioGroup;Z)V
    .locals 2
    .param p1, "rg"    # Landroid/widget/RadioGroup;
    .param p2, "checked"    # Z

    .line 306
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 307
    invoke-virtual {p1, v0}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/view/View;->setEnabled(Z)V

    .line 306
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 309
    .end local v0    # "i":I
    :cond_0
    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    .line 343
    iget-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mEnableBackKey:Z

    if-nez v0, :cond_0

    .line 344
    return-void

    .line 346
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 347
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 313
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 314
    const v0, 0x7f08006d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->setContentView(I)V

    .line 315
    invoke-direct {p0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->initComponents()V

    .line 316
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->changeAllSelect(Z)V

    .line 317
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 318
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.110"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 319
    const-string v1, "com.mediatek.hqanfc.117"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 320
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 321
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 601
    const/4 v0, 0x1

    if-ne v0, p1, :cond_0

    .line 602
    const/4 v0, 0x0

    .line 603
    .local v0, "dialog":Landroid/app/ProgressDialog;
    new-instance v1, Landroid/app/ProgressDialog;

    invoke-direct {v1, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 604
    const v1, 0x7f0a0358

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 605
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setProgressStyle(I)V

    .line 606
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 607
    return-object v0

    .line 608
    .end local v0    # "dialog":Landroid/app/ProgressDialog;
    :cond_0
    const/4 v0, 0x0

    if-nez p1, :cond_1

    .line 609
    const/4 v1, 0x0

    .line 610
    .local v1, "alertDialog":Landroid/app/AlertDialog;
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v3, 0x7f0a036b

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 611
    const-string v3, "P2P link is up"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    const v3, 0x104000a

    invoke-virtual {v2, v3, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 612
    .end local v1    # "alertDialog":Landroid/app/AlertDialog;
    .local v0, "alertDialog":Landroid/app/AlertDialog;
    return-object v0

    .line 614
    .end local v0    # "alertDialog":Landroid/app/AlertDialog;
    :cond_1
    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 337
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 338
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 339
    return-void
.end method

.method protected onStart()V
    .locals 3

    .line 324
    const-string v0, "Nfc"

    const-string v1, "[PollingLoopMode]onStart"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    iget-boolean v1, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mUnregisterReceiver:Z

    if-eqz v1, :cond_0

    .line 326
    const-string v1, "register receiver"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 327
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mUnregisterReceiver:Z

    .line 328
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 329
    .local v0, "filter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.hqanfc.110"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 330
    const-string v1, "com.mediatek.hqanfc.117"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 331
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/PollingLoopMode;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    .line 333
    .end local v0    # "filter":Landroid/content/IntentFilter;
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 334
    return-void
.end method
