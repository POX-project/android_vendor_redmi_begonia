.class public Lcom/mediatek/engineermode/misc/MiscConfig;
.super Landroid/preference/PreferenceActivity;
.source "MiscConfig.java"

# interfaces
.implements Landroid/preference/Preference$OnPreferenceChangeListener;


# static fields
.field private static final CMD_QUERY:Ljava/lang/String; = "AT+ECFGGET=\"sms_over_sgs\""

.field private static final CMD_SET:Ljava/lang/String; = "AT+ECFGSET=\"sms_over_sgs\""

.field public static final FK_MTK_MISC_SELF_REG_CONFIG:Ljava/lang/String; = "persist.vendor.radio.selfreg"

.field public static final FK_MTK_MISC_UCE_SUPPORT:Ljava/lang/String; = "persist.vendor.mtk_uce_support"

.field public static final FK_MTK_MISC_VIBRATE_CONFIG:Ljava/lang/String; = "persist.vendor.radio.telecom.vibrate"

.field private static final MSG_QUERY:I = 0x0

.field private static final MSG_QUERY_HVOLTE:I = 0x2

.field private static final MSG_QUERY_SLIENT:I = 0x3

.field private static final MSG_QUERY_STATUS_1X_TIME:I = 0x7

.field private static final MSG_QUERY_VOLTE_HYS:I = 0x4

.field private static final MSG_SET:I = 0x1

.field private static final MSG_SET_DISABLE_1X_TIME:I = 0x5

.field private static final MSG_SET_ENABLE_1X_TIME:I = 0x6

.field private static final TAG:Ljava/lang/String; = "MiscConfig"

.field private static final VALUE_DISABLE:Ljava/lang/String; = "0"

.field private static final VALUE_ENABLE:Ljava/lang/String; = "1"

.field private static final mATCmdValue9192md:[Ljava/lang/String;

.field private static final mATCmdValue93md:[Ljava/lang/String;

.field private static final mEGCMDEntries:[Ljava/lang/String;

.field private static final mEGCMDEntriesValue:[Ljava/lang/String;

.field private static final mEntries:[Ljava/lang/String;

.field private static final mEntriesValue:[Ljava/lang/String;


# instance fields
.field private mAudioManager:Landroid/media/AudioManager;

.field private mDisable1XTime:Landroid/preference/CheckBoxPreference;

.field private mHVolteDeviceModePreference:Landroid/preference/ListPreference;

.field private final mHandler:Landroid/os/Handler;

.field private mPresence:Landroid/preference/Preference;

.field private mSelfRegPreference:Landroid/preference/CheckBoxPreference;

.field private mSilentRedialPreference:Landroid/preference/CheckBoxPreference;

.field private mSmsSgsPreference:Landroid/preference/CheckBoxPreference;

.field private mSpeakerPreference:Landroid/preference/CheckBoxPreference;

.field private mTVolteHysPreference:Landroid/preference/EditTextPreference;

.field private mVdmImsReconfigPreference:Landroid/preference/ListPreference;

.field private mVibratePreference:Landroid/preference/CheckBoxPreference;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 85
    const-string v0, "bSRLTE"

    const-string v1, "hVolte"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/MiscConfig;->mEntries:[Ljava/lang/String;

    .line 86
    const-string v0, "1"

    const-string v1, "3"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/MiscConfig;->mEntriesValue:[Ljava/lang/String;

    .line 87
    const-string v0, "AT+EIMSCFG=0,0,0,0,1,1"

    const-string v1, "AT+EIMSCFG=1,0,0,0,1,1"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/MiscConfig;->mATCmdValue93md:[Ljava/lang/String;

    .line 89
    const-string v0, "AT+EIMSVOICE=0"

    const-string v1, "AT+EIMSVOICE=1"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/MiscConfig;->mATCmdValue9192md:[Ljava/lang/String;

    .line 92
    const-string v0, "Disable"

    const-string v1, "Enable"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/MiscConfig;->mEGCMDEntries:[Ljava/lang/String;

    .line 93
    const-string v0, "\"00\""

    const-string v1, "\"01\""

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/misc/MiscConfig;->mEGCMDEntriesValue:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 66
    invoke-direct {p0}, Landroid/preference/PreferenceActivity;-><init>()V

    .line 108
    new-instance v0, Lcom/mediatek/engineermode/misc/MiscConfig$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/misc/MiscConfig$1;-><init>(Lcom/mediatek/engineermode/misc/MiscConfig;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/misc/MiscConfig;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/MiscConfig;
    .param p1, "x1"    # Ljava/lang/String;

    .line 66
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/misc/MiscConfig;->parseSmsSgsValue(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/ListPreference;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/CheckBoxPreference;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSilentRedialPreference:Landroid/preference/CheckBoxPreference;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/EditTextPreference;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/misc/MiscConfig;)Landroid/preference/CheckBoxPreference;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/misc/MiscConfig;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mDisable1XTime:Landroid/preference/CheckBoxPreference;

    return-object v0
.end method

.method private getSelfRegConfig()Ljava/lang/String;
    .locals 3

    .line 454
    const-string v0, "persist.vendor.radio.selfreg"

    const-string v1, "11"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 455
    .local v0, "config":Ljava/lang/String;
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "10"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "01"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 456
    const-string v1, "00"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 457
    const-string v0, "11"

    .line 459
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "persist.vendor.radio.selfreg: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MiscConfig"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 460
    return-object v0
.end method

.method private parseCommandResponse(Ljava/lang/String;)Ljava/lang/String;
    .locals 6
    .param p1, "data"    # Ljava/lang/String;

    .line 519
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reply data: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MiscConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 520
    const-string v0, "\\+ECFGGET:\\s*\".*\"\\s*,\\s*\"(.*)\""

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 521
    .local v0, "p":Ljava/util/regex/Pattern;
    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    .line 522
    .local v2, "m":Ljava/util/regex/Matcher;
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->find()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 523
    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v3

    .line 524
    .local v3, "value":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "sms over sgs support value: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 525
    return-object v3

    .line 527
    .end local v3    # "value":Ljava/lang/String;
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "wrong format: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 528
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 529
    const-string v1, ""

    return-object v1
.end method

.method private parseSmsSgsValue(Ljava/lang/String;)V
    .locals 3
    .param p1, "data"    # Ljava/lang/String;

    .line 515
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSmsSgsPreference:Landroid/preference/CheckBoxPreference;

    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/misc/MiscConfig;->parseCommandResponse(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "1"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 516
    return-void
.end method

.method private query1XTimeStatus(I)V
    .locals 6
    .param p1, "msg"    # I

    .line 492
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 493
    .local v0, "cmd":[Ljava/lang/String;
    const-string v1, "AT+ECREGTYPE=0"

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 494
    const-string v1, "+ECREGTYPE:"

    const/4 v3, 0x1

    aput-object v1, v0, v3

    .line 495
    const/4 v1, 0x2

    const-string v4, "DESTRILD:C2K"

    aput-object v4, v0, v1

    .line 496
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 497
    .local v1, "cmd_s":[Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "query1XTimeStatus: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",cmd_s.length = "

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, v1

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "MiscConfig"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 498
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHandler:Landroid/os/Handler;

    invoke-virtual {v2, p1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    invoke-static {v3, v1, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 499
    return-void
.end method

.method private queryHVolteDeviceMode()V
    .locals 2

    .line 470
    const-string v0, "AT+CEVDP?"

    const-string v1, "+CEVDP:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x2

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 471
    return-void
.end method

.method private querySelfRegValue()V
    .locals 4

    .line 439
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getSelfRegConfig()Ljava/lang/String;

    move-result-object v0

    .line 441
    .local v0, "config":Ljava/lang/String;
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v2

    const/16 v3, 0x31

    if-ne v2, v3, :cond_0

    .line 442
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSelfRegPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v2, v1}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    goto :goto_0

    .line 444
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSelfRegPreference:Landroid/preference/CheckBoxPreference;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 446
    :goto_0
    return-void
.end method

.method private querySilentRedialMode()V
    .locals 2

    .line 474
    const-string v0, "AT+EHVOLTE=4,2"

    const-string v1, "+EHVOLTE:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x3

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 475
    return-void
.end method

.method private querySmsSgsValue()V
    .locals 3

    .line 502
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 503
    .local v0, "msg":Landroid/os/Message;
    const-string v1, "AT+ECFGGET=\"sms_over_sgs\""

    const-string v2, "+ECFGGET:"

    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 504
    const-string v1, "MiscConfig"

    const-string v2, "send AT+ECFGGET=\"sms_over_sgs\""

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 505
    return-void
.end method

.method private querySpeakerValue()V
    .locals 2

    .line 420
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v0}, Landroid/media/AudioManager;->isSpeakerphoneOn()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 421
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSpeakerPreference:Landroid/preference/CheckBoxPreference;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    goto :goto_0

    .line 423
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSpeakerPreference:Landroid/preference/CheckBoxPreference;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 425
    :goto_0
    return-void
.end method

.method private queryTVolteHys()V
    .locals 2

    .line 478
    const-string v0, "AT+EVZWT=0,11"

    const-string v1, "+EVZWT:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x4

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 479
    return-void
.end method

.method private queryVibrateValue()V
    .locals 3

    .line 428
    const-string v0, "persist.vendor.radio.telecom.vibrate"

    const-string v1, "1"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 429
    .local v0, "sFlag":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "queryVibrateValue flag is :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MiscConfig"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 431
    const-string v1, "0"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 432
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVibratePreference:Landroid/preference/CheckBoxPreference;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    goto :goto_0

    .line 434
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVibratePreference:Landroid/preference/CheckBoxPreference;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/preference/CheckBoxPreference;->setChecked(Z)V

    .line 436
    :goto_0
    return-void
.end method

.method private queryVolteValue()V
    .locals 0

    .line 464
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->queryHVolteDeviceMode()V

    .line 465
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->querySilentRedialMode()V

    .line 466
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->queryTVolteHys()V

    .line 467
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 533
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "send at cmd : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MiscConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 534
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHandler:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 535
    return-void
.end method

.method private set1XTime(II)V
    .locals 6
    .param p1, "command"    # I
    .param p2, "msg"    # I

    .line 482
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 483
    .local v0, "cmd":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+ECREGTYPE=0,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne p1, v3, :cond_0

    move v4, v3

    goto :goto_0

    :cond_0
    move v4, v2

    :goto_0
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v2

    .line 484
    const-string v1, ""

    aput-object v1, v0, v3

    .line 485
    const/4 v1, 0x2

    const-string v4, "DESTRILD:C2K"

    aput-object v4, v0, v1

    .line 486
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 487
    .local v1, "cmd_s":[Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "set1XTime AT command: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",cmd_s.length = "

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, v1

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "MiscConfig"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 488
    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHandler:Landroid/os/Handler;

    invoke-virtual {v2, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v2

    invoke-static {v3, v1, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 489
    return-void
.end method

.method private setSgsValue(Ljava/lang/String;)V
    .locals 6
    .param p1, "value"    # Ljava/lang/String;

    .line 508
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 509
    .local v0, "msg":Landroid/os/Message;
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AT+ECFGSET=\"sms_over_sgs\",\""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x0

    aput-object v3, v2, v5

    const-string v3, ""

    aput-object v3, v2, v1

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 511
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "send AT+ECFGSET=\"sms_over_sgs\",\""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MiscConfig"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 512
    return-void
.end method


# virtual methods
.method protected isValidFragment(Ljava/lang/String;)Z
    .locals 2
    .param p1, "fragmentName"    # Ljava/lang/String;

    .line 540
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fragmentName is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MiscConfig"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 541
    const/4 v0, 0x0

    return v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 229
    invoke-super {p0, p1}, Landroid/preference/PreferenceActivity;->onCreate(Landroid/os/Bundle;)V

    .line 230
    const v0, 0x7f0d0007

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->addPreferencesFromResource(I)V

    .line 232
    const-class v0, Landroid/media/AudioManager;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getSystemService(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mAudioManager:Landroid/media/AudioManager;

    .line 233
    new-instance v0, Landroid/preference/CheckBoxPreference;

    invoke-direct {v0, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSpeakerPreference:Landroid/preference/CheckBoxPreference;

    .line 234
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSpeakerPreference:Landroid/preference/CheckBoxPreference;

    const v2, 0x7f0a0437

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 236
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSpeakerPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 239
    new-instance v0, Landroid/preference/CheckBoxPreference;

    invoke-direct {v0, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVibratePreference:Landroid/preference/CheckBoxPreference;

    .line 240
    const v2, 0x7f0a043a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 241
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVibratePreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 242
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVibratePreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 245
    const-string v0, "ro.vendor.mtk_ct4greg_app"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    const-string v2, "MiscConfig"

    if-eqz v0, :cond_0

    .line 246
    new-instance v0, Landroid/preference/CheckBoxPreference;

    invoke-direct {v0, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSelfRegPreference:Landroid/preference/CheckBoxPreference;

    .line 247
    const v3, 0x7f0a0434

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSelfRegPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 249
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSelfRegPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v3}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    goto :goto_0

    .line 251
    :cond_0
    const-string v0, "Not show entry for CT4GREG."

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 255
    :goto_0
    new-instance v0, Landroid/preference/CheckBoxPreference;

    invoke-direct {v0, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSmsSgsPreference:Landroid/preference/CheckBoxPreference;

    .line 256
    const v3, 0x7f0a0435

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 257
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSmsSgsPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 258
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSmsSgsPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v3}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 261
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 262
    new-instance v0, Landroid/preference/CheckBoxPreference;

    invoke-direct {v0, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mDisable1XTime:Landroid/preference/CheckBoxPreference;

    .line 263
    const v3, 0x7f0a0432

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 264
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mDisable1XTime:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 265
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v3, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mDisable1XTime:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v3}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 269
    :cond_1
    const-string v0, "persist.vendor.mtk_uce_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "1"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 270
    const-string v0, "init presence"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 271
    new-instance v0, Landroid/preference/Preference;

    invoke-direct {v0, p0}, Landroid/preference/Preference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mPresence:Landroid/preference/Preference;

    .line 272
    const v2, 0x7f0a04e6

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/Preference;->setSummary(Ljava/lang/CharSequence;)V

    .line 273
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mPresence:Landroid/preference/Preference;

    invoke-virtual {v0, v1}, Landroid/preference/Preference;->setPersistent(Z)V

    .line 274
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mPresence:Landroid/preference/Preference;

    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 277
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is3GOnlyModem()Z

    move-result v0

    if-nez v0, :cond_3

    .line 279
    new-instance v0, Landroid/preference/ListPreference;

    invoke-direct {v0, p0}, Landroid/preference/ListPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    .line 280
    const v2, 0x7f0a0433

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    invoke-virtual {v0, v1}, Landroid/preference/ListPreference;->setPersistent(Z)V

    .line 282
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    sget-object v2, Lcom/mediatek/engineermode/misc/MiscConfig;->mEntries:[Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/preference/ListPreference;->setEntries([Ljava/lang/CharSequence;)V

    .line 283
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    sget-object v2, Lcom/mediatek/engineermode/misc/MiscConfig;->mEntriesValue:[Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/preference/ListPreference;->setEntryValues([Ljava/lang/CharSequence;)V

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    invoke-virtual {v0, p0}, Landroid/preference/ListPreference;->setOnPreferenceChangeListener(Landroid/preference/Preference$OnPreferenceChangeListener;)V

    .line 285
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 287
    new-instance v0, Landroid/preference/CheckBoxPreference;

    invoke-direct {v0, p0}, Landroid/preference/CheckBoxPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSilentRedialPreference:Landroid/preference/CheckBoxPreference;

    .line 288
    const v2, 0x7f0a0436

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/CheckBoxPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 289
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSilentRedialPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v1}, Landroid/preference/CheckBoxPreference;->setPersistent(Z)V

    .line 290
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSilentRedialPreference:Landroid/preference/CheckBoxPreference;

    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 292
    new-instance v0, Landroid/preference/EditTextPreference;

    invoke-direct {v0, p0}, Landroid/preference/EditTextPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    .line 293
    const v2, 0x7f0a0438

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/EditTextPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    invoke-virtual {v0, v1}, Landroid/preference/EditTextPreference;->setPersistent(Z)V

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    invoke-virtual {v0, p0}, Landroid/preference/EditTextPreference;->setOnPreferenceChangeListener(Landroid/preference/Preference$OnPreferenceChangeListener;)V

    .line 296
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 298
    new-instance v0, Landroid/preference/ListPreference;

    invoke-direct {v0, p0}, Landroid/preference/ListPreference;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    .line 299
    const v2, 0x7f0a0439

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 300
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    invoke-virtual {v0, v1}, Landroid/preference/ListPreference;->setPersistent(Z)V

    .line 301
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    sget-object v1, Lcom/mediatek/engineermode/misc/MiscConfig;->mEGCMDEntries:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/preference/ListPreference;->setEntries([Ljava/lang/CharSequence;)V

    .line 302
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    sget-object v1, Lcom/mediatek/engineermode/misc/MiscConfig;->mEGCMDEntriesValue:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/preference/ListPreference;->setEntryValues([Ljava/lang/CharSequence;)V

    .line 303
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    invoke-virtual {v0, p0}, Landroid/preference/ListPreference;->setOnPreferenceChangeListener(Landroid/preference/Preference$OnPreferenceChangeListener;)V

    .line 304
    invoke-virtual {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    invoke-virtual {v0, v1}, Landroid/preference/PreferenceScreen;->addPreference(Landroid/preference/Preference;)Z

    .line 306
    :cond_3
    return-void
.end method

.method public onPreferenceChange(Landroid/preference/Preference;Ljava/lang/Object;)Z
    .locals 10
    .param p1, "preference"    # Landroid/preference/Preference;
    .param p2, "objValue"    # Ljava/lang/Object;

    .line 378
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    const-string v1, ""

    const/4 v2, 0x0

    const/4 v3, 0x2

    const-string v4, "MiscConfig"

    const/4 v5, 0x1

    if-ne p1, v0, :cond_3

    .line 379
    move-object v6, p2

    check-cast v6, Ljava/lang/String;

    invoke-virtual {v0, v6}, Landroid/preference/ListPreference;->findIndexOfValue(Ljava/lang/String;)I

    move-result v0

    .line 380
    .local v0, "index":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mHVolteDeviceModePreference index is :"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 381
    const-string v6, ""

    .line 382
    .local v6, "value":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v7

    if-eqz v7, :cond_0

    .line 383
    sget-object v7, Lcom/mediatek/engineermode/misc/MiscConfig;->mATCmdValue93md:[Ljava/lang/String;

    aget-object v6, v7, v0

    goto :goto_0

    .line 384
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is92Modem()Z

    move-result v7

    if-nez v7, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is91Modem()Z

    move-result v7

    if-eqz v7, :cond_2

    .line 385
    :cond_1
    sget-object v7, Lcom/mediatek/engineermode/misc/MiscConfig;->mATCmdValue9192md:[Ljava/lang/String;

    aget-object v6, v7, v0

    .line 388
    :cond_2
    :goto_0
    new-array v7, v3, [Ljava/lang/String;

    aput-object v6, v7, v2

    aput-object v1, v7, v5

    invoke-direct {p0, v7, v5}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 390
    new-array v7, v3, [Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CEVDP="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v9, Lcom/mediatek/engineermode/misc/MiscConfig;->mEntriesValue:[Ljava/lang/String;

    aget-object v9, v9, v0

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v2

    aput-object v1, v7, v5

    invoke-direct {p0, v7, v5}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 392
    iget-object v7, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    sget-object v8, Lcom/mediatek/engineermode/misc/MiscConfig;->mEntries:[Ljava/lang/String;

    aget-object v8, v8, v0

    invoke-virtual {v7, v8}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 394
    .end local v0    # "index":I
    .end local v6    # "value":Ljava/lang/String;
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVdmImsReconfigPreference:Landroid/preference/ListPreference;

    if-ne p1, v0, :cond_4

    .line 395
    move-object v6, p2

    check-cast v6, Ljava/lang/String;

    invoke-virtual {v0, v6}, Landroid/preference/ListPreference;->findIndexOfValue(Ljava/lang/String;)I

    move-result v0

    .line 396
    .restart local v0    # "index":I
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mVdmImsReconfigPreference index is :"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 397
    new-array v6, v3, [Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "AT+EGCMD=499,0,"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/misc/MiscConfig;->mEGCMDEntriesValue:[Ljava/lang/String;

    aget-object v8, v8, v0

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v6, v2

    aput-object v1, v6, v5

    invoke-direct {p0, v6, v5}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 399
    iget-object v6, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mHVolteDeviceModePreference:Landroid/preference/ListPreference;

    sget-object v7, Lcom/mediatek/engineermode/misc/MiscConfig;->mEGCMDEntries:[Ljava/lang/String;

    aget-object v7, v7, v0

    invoke-virtual {v6, v7}, Landroid/preference/ListPreference;->setSummary(Ljava/lang/CharSequence;)V

    .line 402
    .end local v0    # "index":I
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    if-ne p1, v0, :cond_6

    .line 403
    move-object v0, p2

    check-cast v0, Ljava/lang/String;

    .line 404
    .local v0, "values":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Volte Hys value = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 406
    new-array v3, v3, [Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "AT+EVZWT=1,11,"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v3, v2

    aput-object v1, v3, v5

    invoke-direct {p0, v3, v5}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 409
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    invoke-virtual {v1}, Landroid/preference/EditTextPreference;->getText()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_5

    .line 410
    iget-object v1, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mTVolteHysPreference:Landroid/preference/EditTextPreference;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const v3, 0x7f0a0438

    .line 411
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/misc/MiscConfig;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 410
    invoke-virtual {v1, v2}, Landroid/preference/EditTextPreference;->setSummary(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 413
    :cond_5
    const-string v1, "mTVolteHysPreference.getText() = null"

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 416
    .end local v0    # "values":Ljava/lang/String;
    :cond_6
    :goto_1
    return v5
.end method

.method public onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z
    .locals 8
    .param p1, "preferenceScreen"    # Landroid/preference/PreferenceScreen;
    .param p2, "preference"    # Landroid/preference/Preference;

    .line 328
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSelfRegPreference:Landroid/preference/CheckBoxPreference;

    const-string v1, "MiscConfig"

    const-string v2, "1"

    const-string v3, "0"

    const/4 v4, 0x0

    if-ne p2, v0, :cond_1

    .line 329
    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    .line 330
    .local v0, "isChecked":Z
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->getSelfRegConfig()Ljava/lang/String;

    move-result-object v5

    .line 331
    .local v5, "config":Ljava/lang/String;
    if-eqz v0, :cond_0

    .line 332
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/String;->charAt(I)C

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    .line 334
    :cond_0
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/String;->charAt(I)C

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 336
    :goto_0
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "set self reg config value :"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 337
    const-string v6, "persist.vendor.radio.selfreg"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    .line 340
    .end local v0    # "isChecked":Z
    .end local v5    # "config":Ljava/lang/String;
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSpeakerPreference:Landroid/preference/CheckBoxPreference;

    if-ne p2, v0, :cond_2

    .line 341
    iget-object v5, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    invoke-virtual {v5, v0}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    .line 344
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mVibratePreference:Landroid/preference/CheckBoxPreference;

    if-ne p2, v0, :cond_4

    .line 345
    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    .line 346
    .local v0, "sFlag":Z
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "set VibrateValue flag is :"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 347
    if-eqz v0, :cond_3

    move-object v1, v2

    goto :goto_1

    :cond_3
    move-object v1, v3

    :goto_1
    const-string v5, "persist.vendor.radio.telecom.vibrate"

    invoke-static {v5, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    .line 350
    .end local v0    # "sFlag":Z
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSmsSgsPreference:Landroid/preference/CheckBoxPreference;

    if-ne p2, v0, :cond_6

    .line 351
    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_5

    move-object v0, v2

    goto :goto_2

    :cond_5
    move-object v0, v3

    :goto_2
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->setSgsValue(Ljava/lang/String;)V

    .line 354
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mDisable1XTime:Landroid/preference/CheckBoxPreference;

    const/4 v1, 0x1

    if-ne p2, v0, :cond_8

    .line 355
    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 356
    const/4 v0, 0x5

    invoke-direct {p0, v4, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->set1XTime(II)V

    goto :goto_3

    .line 358
    :cond_7
    const/4 v0, 0x6

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->set1XTime(II)V

    .line 362
    :cond_8
    :goto_3
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mPresence:Landroid/preference/Preference;

    if-ne p2, v0, :cond_9

    .line 363
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 364
    .local v0, "intent":Landroid/content/Intent;
    const-string v5, "com.mediatek.engineermode.misc.PresenceActivity"

    invoke-virtual {v0, p0, v5}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 365
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->startActivity(Landroid/content/Intent;)V

    .line 368
    .end local v0    # "intent":Landroid/content/Intent;
    :cond_9
    iget-object v0, p0, Lcom/mediatek/engineermode/misc/MiscConfig;->mSilentRedialPreference:Landroid/preference/CheckBoxPreference;

    if-ne p2, v0, :cond_b

    .line 369
    invoke-virtual {v0}, Landroid/preference/CheckBoxPreference;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_a

    goto :goto_4

    :cond_a
    move-object v2, v3

    :goto_4
    move-object v0, v2

    .line 370
    .local v0, "enable":Ljava/lang/String;
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT+EHVOLTE=4,"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v4

    const-string v3, ""

    aput-object v3, v2, v1

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/misc/MiscConfig;->sendATCommand([Ljava/lang/String;I)V

    .line 373
    .end local v0    # "enable":Ljava/lang/String;
    :cond_b
    invoke-super {p0, p1, p2}, Landroid/preference/PreferenceActivity;->onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z

    move-result v0

    return v0
.end method

.method protected onResume()V
    .locals 1

    .line 310
    invoke-super {p0}, Landroid/preference/PreferenceActivity;->onResume()V

    .line 311
    const-string v0, "ro.vendor.mtk_ct4greg_app"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 312
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->querySelfRegValue()V

    .line 314
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->querySpeakerValue()V

    .line 315
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->queryVibrateValue()V

    .line 316
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->querySmsSgsValue()V

    .line 317
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is3GOnlyModem()Z

    move-result v0

    if-nez v0, :cond_1

    .line 318
    invoke-direct {p0}, Lcom/mediatek/engineermode/misc/MiscConfig;->queryVolteValue()V

    .line 320
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 321
    const/4 v0, 0x7

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/misc/MiscConfig;->query1XTimeStatus(I)V

    .line 323
    :cond_2
    return-void
.end method
