.class public Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
.super Landroid/app/Activity;
.source "OtaAirplaneModeActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;,
        Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;
    }
.end annotation


# static fields
.field private static final DEFAULT_AIRPLANE_TIMEOUT:F = 1.0f

.field private static final DEFAULT_DL_TPUT_TIMEOUT:I = 0x2710

.field private static final KEY_FLAG_ENABLE:Ljava/lang/String; = "enable_status"

.field private static final KEY_LAST_TIME:Ljava/lang/String; = "last_time"

.field private static final MSG_ID_DL_TPUT_0_TIMEOUT:I = 0x2

.field private static final MSG_ID_TIMEOUT:I = 0x1

.field private static final SHREDPRE_NAME:Ljava/lang/String; = "OtaAirplaneMode"

.field private static final SubscribeMsgIdName:[Ljava/lang/String;

.field private static final TAG:Ljava/lang/String; = "OtaAirplaneMode"

.field private static airplane_network_status:Landroid/widget/TextView;

.field private static componentsArray:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;",
            ">;"
        }
    .end annotation
.end field

.field private static mAirplaneCountTv:Landroid/widget/TextView;

.field private static mAirplaneLastTimeEt:Landroid/widget/EditText;

.field private static mCount:I

.field private static mEnableFeatureCb:Landroid/widget/CheckBox;

.field private static mLastCallState:I

.field private static mLastSS:Landroid/telephony/ServiceState;

.field private static mLastTimeSetBt:Landroid/widget/Button;

.field private static mSimCardStatusTv:Landroid/widget/TextView;


# instance fields
.field private mAirplanTimeout:F

.field private mCurrectTime:Ljava/text/SimpleDateFormat;

.field private mDlTputTimeout:I

.field private mHandler:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

.field private mLastDlTput:I

.field private mPhoneStateListener:Landroid/telephony/PhoneStateListener;

.field private mSimTypeToShow:I

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 45
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->SubscribeMsgIdName:[Ljava/lang/String;

    .line 46
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCount:I

    .line 47
    const/4 v1, 0x0

    sput-object v1, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastSS:Landroid/telephony/ServiceState;

    .line 48
    sput v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastCallState:I

    .line 55
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->componentsArray:Ljava/util/List;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 34
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 58
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;-><init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mHandler:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

    .line 59
    iput-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCurrectTime:Ljava/text/SimpleDateFormat;

    .line 60
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mSimTypeToShow:I

    .line 61
    const/16 v1, 0x2710

    iput v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mDlTputTimeout:I

    .line 62
    const/high16 v1, 0x3f800000    # 1.0f

    iput v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplanTimeout:F

    .line 63
    iput v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastDlTput:I

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p1, "x1"    # Landroid/telephony/ServiceState;

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->is2GCSHasService(Landroid/telephony/ServiceState;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$1000()I
    .locals 1

    .line 34
    sget v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCount:I

    return v0
.end method

.method static synthetic access$1004()I
    .locals 1

    .line 34
    sget v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCount:I

    add-int/lit8 v0, v0, 0x1

    sput v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCount:I

    return v0
.end method

.method static synthetic access$1100()Landroid/widget/TextView;
    .locals 1

    .line 34
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplaneCountTv:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$200()Landroid/telephony/ServiceState;
    .locals 1

    .line 34
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastSS:Landroid/telephony/ServiceState;

    return-object v0
.end method

.method static synthetic access$202(Landroid/telephony/ServiceState;)Landroid/telephony/ServiceState;
    .locals 0
    .param p0, "x0"    # Landroid/telephony/ServiceState;

    .line 34
    sput-object p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastSS:Landroid/telephony/ServiceState;

    return-object p0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # I

    .line 34
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->updateNetworkstatus(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Landroid/telephony/ServiceState;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p1, "x1"    # Landroid/telephony/ServiceState;

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->is3G4GPSHasService(Landroid/telephony/ServiceState;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 34
    invoke-direct {p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->handleOTARequest()V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;I)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p1, "x1"    # I

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->isInCall(I)Z

    move-result v0

    return v0
.end method

.method static synthetic access$700()I
    .locals 1

    .line 34
    sget v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastCallState:I

    return v0
.end method

.method static synthetic access$702(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 34
    sput p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastCallState:I

    return p0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;

    .line 34
    invoke-direct {p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;
    .param p1, "x1"    # Z

    .line 34
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->setAirplaneMode(Z)V

    return-void
.end method

.method private getCurrectTime()Ljava/lang/String;
    .locals 2

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCurrectTime:Ljava/text/SimpleDateFormat;

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 166
    .local v0, "mTimes":Ljava/lang/String;
    return-object v0
.end method

.method private handleOTARequest()V
    .locals 4

    .line 210
    const-string v0, "handleOTARequest"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 211
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->setAirplaneMode(Z)V

    .line 212
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mHandler:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    iget v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplanTimeout:F

    const/high16 v3, 0x447a0000    # 1000.0f

    mul-float/2addr v2, v3

    float-to-int v2, v2

    int-to-long v2, v2

    invoke-virtual {v1, v0, v2, v3}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 214
    return-void
.end method

.method private handleOtaPSDisconnect(Z)V
    .locals 4
    .param p1, "disconnect"    # Z

    .line 365
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PSD status:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 366
    const/4 v0, 0x2

    if-eqz p1, :cond_0

    .line 367
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mHandler:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

    .line 368
    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    iget v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mDlTputTimeout:I

    int-to-long v2, v2

    .line 367
    invoke-virtual {v1, v0, v2, v3}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto :goto_0

    .line 370
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mHandler:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->removeMessages(I)V

    .line 372
    :goto_0
    return-void
.end method

.method private is2G(I)Z
    .locals 2
    .param p1, "networkType"    # I

    .line 241
    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/16 v1, 0x10

    if-eq p1, v1, :cond_1

    const/4 v1, 0x4

    if-eq p1, v1, :cond_1

    const/4 v1, 0x7

    if-ne p1, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :cond_1
    :goto_0
    return v0
.end method

.method private is2GCSHasService(Landroid/telephony/ServiceState;)Z
    .locals 3
    .param p1, "ss"    # Landroid/telephony/ServiceState;

    .line 224
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 225
    return v0

    .line 228
    :cond_0
    invoke-virtual {p1}, Landroid/telephony/ServiceState;->getVoiceNetworkType()I

    move-result v1

    .line 229
    .local v1, "voiceNetworkType":I
    invoke-virtual {p1}, Landroid/telephony/ServiceState;->getVoiceRegState()I

    move-result v2

    if-nez v2, :cond_2

    .line 230
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->is2G(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 231
    const/4 v0, 0x1

    return v0

    .line 233
    :cond_1
    return v0

    .line 236
    :cond_2
    return v0
.end method

.method private is3G4G(I)Z
    .locals 1
    .param p1, "networkType"    # I

    .line 267
    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    const/16 v0, 0x8

    if-eq p1, v0, :cond_1

    const/16 v0, 0x9

    if-eq p1, v0, :cond_1

    const/16 v0, 0xa

    if-eq p1, v0, :cond_1

    const/16 v0, 0xd

    if-eq p1, v0, :cond_1

    const/16 v0, 0xf

    if-eq p1, v0, :cond_1

    const/16 v0, 0x11

    if-eq p1, v0, :cond_1

    const/4 v0, 0x5

    if-eq p1, v0, :cond_1

    const/4 v0, 0x6

    if-eq p1, v0, :cond_1

    const/16 v0, 0xc

    if-eq p1, v0, :cond_1

    const/16 v0, 0xe

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private is3G4GPSHasService(Landroid/telephony/ServiceState;)Z
    .locals 3
    .param p1, "ss"    # Landroid/telephony/ServiceState;

    .line 250
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 251
    return v0

    .line 254
    :cond_0
    invoke-virtual {p1}, Landroid/telephony/ServiceState;->getDataNetworkType()I

    move-result v1

    .line 255
    .local v1, "dataNetworkType":I
    invoke-virtual {p1}, Landroid/telephony/ServiceState;->getDataRegState()I

    move-result v2

    if-nez v2, :cond_2

    .line 256
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->is3G4G(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 257
    const/4 v0, 0x1

    return v0

    .line 259
    :cond_1
    return v0

    .line 262
    :cond_2
    return v0
.end method

.method private isInCall(I)Z
    .locals 1
    .param p1, "state"    # I

    .line 282
    if-eqz p1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private isOtaPSDisconnect(I)Z
    .locals 1
    .param p1, "dl_tput"    # I

    .line 361
    if-nez p1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private log(Ljava/lang/String;)V
    .locals 1
    .param p1, "s"    # Ljava/lang/String;

    .line 301
    const-string v0, "OtaAirplaneMode"

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 302
    return-void
.end method

.method private setAirplaneMode(Z)V
    .locals 3
    .param p1, "onOff"    # Z

    .line 217
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->getCurrectTime()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const v1, -0xff0100

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->updateNetworkstatus(Ljava/lang/String;I)V

    .line 218
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setAirplaneMode, onOff: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->updateNetworkstatus(Ljava/lang/String;I)V

    .line 219
    invoke-static {p1}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 220
    return-void
.end method

.method private updateNetworkstatus(Ljava/lang/String;I)V
    .locals 5
    .param p1, "msg"    # Ljava/lang/String;
    .param p2, "color"    # I

    .line 170
    new-instance v0, Landroid/text/SpannableString;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\r\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    .line 171
    .local v0, "WordToSpan":Landroid/text/Spannable;
    new-instance v1, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {v1, p2}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    invoke-interface {v0}, Landroid/text/Spannable;->length()I

    move-result v2

    const/4 v3, 0x0

    const/16 v4, 0x21

    invoke-interface {v0, v1, v3, v2, v4}, Landroid/text/Spannable;->setSpan(Ljava/lang/Object;III)V

    .line 173
    sget-object v1, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->airplane_network_status:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->append(Ljava/lang/CharSequence;)V

    .line 174
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 306
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f06018a

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 308
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->setAirplaneSecond()V

    .line 311
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 67
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 68
    const v0, 0x7f0800c4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->setContentView(I)V

    .line 69
    const-string v0, "Enter: onCreate"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 71
    const v0, 0x7f060185

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mSimCardStatusTv:Landroid/widget/TextView;

    .line 72
    const v0, 0x7f06018a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastTimeSetBt:Landroid/widget/Button;

    .line 73
    const v0, 0x7f060187

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mEnableFeatureCb:Landroid/widget/CheckBox;

    .line 74
    new-instance v1, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$CheckBoxListener;-><init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 75
    const v0, 0x7f060186

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplaneCountTv:Landroid/widget/TextView;

    .line 76
    const v0, 0x7f060189

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplaneLastTimeEt:Landroid/widget/EditText;

    .line 77
    const v0, 0x7f060188

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    sput-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->airplane_network_status:Landroid/widget/TextView;

    .line 78
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastTimeSetBt:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 79
    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "HH:mm:ss.S"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCurrectTime:Ljava/text/SimpleDateFormat;

    .line 81
    const/4 v0, -0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 82
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mSimCardStatusTv:Landroid/widget/TextView;

    const-string v2, "please insert only one card"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 83
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 84
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastTimeSetBt:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 85
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mEnableFeatureCb:Landroid/widget/CheckBox;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 86
    return-void

    .line 89
    :cond_0
    const-string v0, "The sim insert "

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 90
    sget-object v2, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mSimCardStatusTv:Landroid/widget/TextView;

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 91
    iput v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mSimTypeToShow:I

    .line 92
    new-instance v0, Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;

    invoke-direct {v0}, Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;-><init>()V

    .line 93
    .local v0, "components":Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;
    sget-object v1, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->SubscribeMsgIdName:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/MdmBaseComponent;->setEmComponentName([Ljava/lang/String;)V

    .line 94
    sget-object v1, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->componentsArray:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 95
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v1

    sget-object v2, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->componentsArray:Ljava/util/List;

    iget v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mSimTypeToShow:I

    invoke-virtual {v1, v2, v3}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mdmParametersSeting(Ljava/util/List;I)V

    .line 96
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->setOnMDMChangedListener(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;)V

    .line 97
    const-string v1, "phone"

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    iput-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 99
    new-instance v1, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$1;-><init>(Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    .line 149
    const/high16 v1, 0x3f800000    # 1.0f

    .line 150
    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    .line 149
    const-string v2, "OtaAirplaneMode"

    const-string v3, "last_time"

    invoke-static {v2, v3, v1}, Lcom/mediatek/engineermode/EmUtils;->readSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplanTimeout:F

    .line 151
    sget-object v3, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplaneLastTimeEt:Landroid/widget/EditText;

    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 152
    const-string v1, "enable_status"

    const-string v3, "0"

    invoke-static {v2, v1, v3}, Lcom/mediatek/engineermode/EmUtils;->readSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 153
    .local v1, "buttonFlag":Ljava/lang/String;
    const-string v2, "1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 154
    sget-object v2, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mEnableFeatureCb:Landroid/widget/CheckBox;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 156
    :cond_1
    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 160
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 161
    const-string v0, "onDestroy"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 162
    return-void
.end method

.method public onUpdateMDMData(Ljava/lang/String;Lcom/mediatek/mdml/Msg;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "data"    # Lcom/mediatek/mdml/Msg;

    .line 339
    const-string v0, "MSG_ID_EM_EL1_STATUS_IND"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 340
    const-string v0, "dl_info[0]."

    .line 341
    .local v0, "coName":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "DL_Tput"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {v1, p2, v2, v3}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v1

    .line 343
    .local v1, "dl_tput":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "PrimaryCellDlThroughput,dl_tput : "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 345
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->isOtaPSDisconnect(I)Z

    move-result v2

    const-string v4, "PSD status(Serving):"

    const-string v5, "PSD status(Last):"

    const-string v6, "The Ota PSD status changed:"

    if-eqz v2, :cond_0

    iget v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastDlTput:I

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->isOtaPSDisconnect(I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 346
    invoke-direct {p0, v6}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 347
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastDlTput:I

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 348
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 349
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->handleOtaPSDisconnect(Z)V

    goto :goto_0

    .line 350
    :cond_0
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->isOtaPSDisconnect(I)Z

    move-result v2

    if-nez v2, :cond_1

    iget v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastDlTput:I

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->isOtaPSDisconnect(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 351
    invoke-direct {p0, v6}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 352
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastDlTput:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 353
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 354
    const/4 v2, 0x0

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->handleOtaPSDisconnect(Z)V

    .line 356
    :cond_1
    :goto_0
    iput v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mLastDlTput:I

    .line 358
    .end local v0    # "coName":Ljava/lang/String;
    .end local v1    # "dl_tput":I
    :cond_2
    return-void
.end method

.method public onUpdateMDMStatus(I)V
    .locals 1
    .param p1, "msg_id"    # I

    .line 315
    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 327
    :cond_0
    const-string v0, "UnSubscribe message id done"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 328
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mdmlClosing()Z

    .line 329
    goto :goto_0

    .line 322
    :cond_1
    const-string v0, "Subscribe message id done"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 323
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mdmlEnableSubscribe()V

    .line 324
    goto :goto_0

    .line 317
    :cond_2
    const-string v0, "MDM Service init done"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 318
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mdmlSubscribe()V

    .line 319
    nop

    .line 334
    :goto_0
    return-void
.end method

.method registerNetworkListen()V
    .locals 3

    .line 177
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    const/16 v2, 0x21

    invoke-virtual {v0, v1, v2}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 181
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mdmInitialize(Landroid/content/Context;)V

    .line 182
    return-void
.end method

.method public setAirplaneSecond()V
    .locals 4

    .line 286
    const-string v0, "onClick, setAirplaneSecond"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 288
    sget-object v0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplaneLastTimeEt:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 289
    .local v0, "input":Ljava/lang/String;
    if-eqz v0, :cond_1

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 293
    :cond_0
    invoke-static {v0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplanTimeout:F

    .line 294
    nop

    .line 295
    invoke-static {v1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v1

    .line 294
    const-string v2, "OtaAirplaneMode"

    const-string v3, "last_time"

    invoke-static {v2, v3, v1}, Lcom/mediatek/engineermode/EmUtils;->writeSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Set the Airplane Last time to(s):"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplanTimeout:F

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 297
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Set the Airplane Last time to(s): "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplanTimeout:F

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 298
    return-void

    .line 290
    :cond_1
    :goto_0
    const-string v1, "Use the default value: 1s"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 291
    return-void
.end method

.method setupOtaRequest(Z)V
    .locals 4
    .param p1, "enable"    # Z

    .line 192
    const-string v0, "enable_status"

    const-string v1, "OtaAirplaneMode"

    if-eqz p1, :cond_0

    .line 193
    invoke-virtual {p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->registerNetworkListen()V

    .line 194
    sget-object v2, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->airplane_network_status:Landroid/widget/TextView;

    const-string v3, ""

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 195
    sget-object v2, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mAirplaneCountTv:Landroid/widget/TextView;

    sget v3, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCount:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 196
    const-string v2, "Enable the status listen succeed"

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 197
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 198
    const-string v2, "1"

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/EmUtils;->writeSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 200
    :cond_0
    const/4 v2, 0x0

    sput v2, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mCount:I

    .line 201
    invoke-virtual {p0}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->unRegisterNetworkListen()V

    .line 202
    const-string v2, "Disable the listen succeed"

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->log(Ljava/lang/String;)V

    .line 203
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 204
    const-string v2, "0"

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/EmUtils;->writeSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 206
    :goto_0
    return-void
.end method

.method unRegisterNetworkListen()V
    .locals 3

    .line 185
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 187
    invoke-static {}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->getInstance()Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mdmlUnSubscribe()V

    .line 188
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity;->mHandler:Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/otaairplanemode/OtaAirplaneModeActivity$MsgHandler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 189
    return-void
.end method
