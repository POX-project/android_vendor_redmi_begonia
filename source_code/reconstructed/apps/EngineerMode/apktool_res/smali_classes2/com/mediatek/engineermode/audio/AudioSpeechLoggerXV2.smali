.class public Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
.super Landroid/app/Activity;
.source "AudioSpeechLoggerXV2.java"


# static fields
.field private static final ANC_DOWN_SAMPLE:Ljava/lang/String; = "downSample"

.field private static final ANC_NO_DOWN_SAMPLE:Ljava/lang/String; = "noDownSample"

.field public static final ANC_STATUS:Ljava/lang/String; = "anc_status"

.field private static final CMD_GET_COMMON_PARAMETER:Ljava/lang/String; = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para"

.field private static final CMD_GET_DEBUG_INFO:Ljava/lang/String; = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info"

.field private static final CMD_GET_VMLOG_STATE:Ljava/lang/String; = "GET_VMLOG_CONFIG"

.field private static final CMD_PREFIX:Ljava/lang/String; = "APP_GET_PARAM="

.field private static final CMD_SET_COMMON_PARAMETER:Ljava/lang/String; = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para#"

.field private static final CMD_SET_DEBUG_INFO:Ljava/lang/String; = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#"

.field public static final CMD_SET_VMLOG_STATE:Ljava/lang/String; = "SET_VMLOG_CONFIG="

.field private static final CONSTANT_0XFF:I = 0xff

.field private static final CONSTANT_256:I = 0x100

.field private static final CUST_XML_PARAM:Ljava/lang/String; = "GET_CUST_XML_ENABLE"

.field private static final CUST_XML_SET_SUPPORT_PARAM:Ljava/lang/String; = "SET_CUST_XML_ENABLE=1"

.field private static final CUST_XML_SET_UNSUPPORT_PARAM:Ljava/lang/String; = "SET_CUST_XML_ENABLE=0"

.field private static final DATA_SIZE:I = 0x5a4

.field private static final DIALOG_GET_DATA_ERROR:I = 0x0

.field private static final DIALOG_ID_DUMP_PATH_CHANGE:I = 0xa

.field private static final DIALOG_ID_NO_SDCARD:I = 0x1

.field private static final DIALOG_ID_SDCARD_BUSY:I = 0x2

.field private static final ENABLE_ANC_DOWN_SAMPLE:I = 0x1

.field private static final ENABLE_ANC_NO_DOWN_SAMPLE:I = 0x0

.field public static final ENGINEER_MODE_PREFERENCE:Ljava/lang/String; = "engineermode_audiolog_preferences"

.field public static final EPL_STATUS:Ljava/lang/String; = "epl_status"

.field private static final GET_DUMP_AP_SPEECH_EPL:I = 0xa1

.field private static final GET_SPEECH_ANC_LOG_STATUS:I = 0xb5

.field private static final GET_SPEECH_ANC_SUPPORT:I = 0xb0

.field private static final PARAM_DEVIDER:Ljava/lang/String; = "#"

.field private static final RESULT_SUPPORT:Ljava/lang/String; = "GET_CUST_XML_ENABLE=1"

.field private static final RESULT_UNSUPPORT:Ljava/lang/String; = "GET_CUST_XML_ENABLE=0"

.field private static final SET_DUMP_AP_SPEECH_EPL:I = 0xa0

.field private static final SET_DUMP_SPEECH_DEBUG_INFO:I = 0x61

.field private static final SET_SPEECH_ANC_DISABLE:I = 0xb4

.field private static final SET_SPEECH_ANC_LOG_STATUS:I = 0xb3

.field private static final SET_SPEECH_VM_ENABLE:I = 0x60

.field public static final TAG:Ljava/lang/String; = "Audio/SpeechLogger2"

.field private static final VERSION_DEVIDER:Ljava/lang/String; = "="

.field private static final VM_LOG_POS:I = 0x5a0


# instance fields
.field mAudioManager:Landroid/media/AudioManager;

.field private mBound:Z

.field private mCbAncLogger:Landroid/widget/CheckBox;

.field private mCbCtm4Way:Landroid/widget/CheckBox;

.field private mCbEplDebug:Landroid/widget/CheckBox;

.field private mCbMagiConf:Landroid/widget/CheckBox;

.field private mCbSpeechLogger:Landroid/widget/CheckBox;

.field private final mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private mClearDumpButton:Landroid/widget/Button;

.field private mConnection:Landroid/content/ServiceConnection;

.field private mCopy2SdButton:Landroid/widget/Button;

.field mCopyAudioDumpButtonListener:Landroid/view/View$OnClickListener;

.field private mCopyProgressTv:Landroid/widget/TextView;

.field private mForRefresh:Z

.field public mHandler:Landroid/os/Handler;

.field private mRbEpl:Landroid/widget/RadioButton;

.field private mRbNormalVm:Landroid/widget/RadioButton;

.field private mRgAnc:Landroid/widget/RadioGroup;

.field private final mRgCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

.field private mService:Lcom/mediatek/engineermode/audio/CopyHalDumpService;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 71
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 129
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mForRefresh:Z

    .line 138
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$1;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 308
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$2;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    .line 624
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mConnection:Landroid/content/ServiceConnection;

    .line 688
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyAudioDumpButtonListener:Landroid/view/View$OnClickListener;

    .line 728
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbSpeechLogger:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbMagiConf:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mService:Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    return-object v0
.end method

.method static synthetic access$1202(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Lcom/mediatek/engineermode/audio/CopyHalDumpService;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
    .param p1, "x1"    # Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mService:Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    return-object p1
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mBound:Z

    return v0
.end method

.method static synthetic access$1302(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
    .param p1, "x1"    # Z

    .line 71
    iput-boolean p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mBound:Z

    return p1
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->checkCopyDumpStatus()V

    return-void
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyProgressTv:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Landroid/content/SharedPreferences$Editor;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
    .param p1, "x1"    # Landroid/content/SharedPreferences$Editor;
    .param p2, "x2"    # Z

    .line 71
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->onClickSpeechLogger(Landroid/content/SharedPreferences$Editor;Z)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
    .param p1, "x1"    # Ljava/lang/String;

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
    .param p1, "x1"    # Ljava/lang/String;

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->setParameters(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mForRefresh:Z

    return v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
    .param p1, "x1"    # Z

    .line 71
    iput-boolean p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mForRefresh:Z

    return p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbAncLogger:Landroid/widget/CheckBox;

    return-object v0
.end method

.method private checkCopyDumpStatus()V
    .locals 5

    .line 656
    sget-object v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$8;->$SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS:[I

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mService:Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->getCopyDumpStatus()Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x0

    const-string v2, "Audio/SpeechLogger2"

    const/4 v3, 0x1

    if-eq v0, v3, :cond_3

    const/4 v4, 0x2

    if-eq v0, v4, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    .line 681
    const-string v0, "DEFAULT"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 682
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 683
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 675
    :cond_0
    const-string v0, "DELETE_DUMP_DONE"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 676
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 677
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 678
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyProgressTv:Landroid/widget/TextView;

    const v1, 0x7f0a0044

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 679
    goto :goto_0

    .line 669
    :cond_1
    const-string v0, "COPY_DUMP_DONE"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 670
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 671
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 672
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyProgressTv:Landroid/widget/TextView;

    const v1, 0x7f0a0042

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 673
    goto :goto_0

    .line 664
    :cond_2
    const-string v0, "DELETE_HAL_DUMP"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 665
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 666
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 667
    goto :goto_0

    .line 658
    :cond_3
    const-string v0, "COPY_HAL_DUMP"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 659
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    const v2, 0x7f0a0048

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setText(I)V

    .line 660
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 661
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 662
    nop

    .line 686
    :goto_0
    return-void
.end method

.method private checkStatus()V
    .locals 10

    .line 449
    nop

    .line 450
    const-string v0, "engineermode_audiolog_preferences"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 451
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const-string v2, "epl_status"

    const/4 v3, 0x1

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 452
    .local v2, "eplStatus":I
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v5, "GET_VMLOG_CONFIG"

    invoke-virtual {v4, v5}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 453
    .local v4, "vmLogState":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "return value is : "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "Audio/SpeechLogger2"

    invoke-static {v7, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 454
    if-eqz v4, :cond_0

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v6

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v8

    add-int/2addr v8, v3

    if-le v6, v8, :cond_0

    .line 455
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    add-int/2addr v5, v3

    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 458
    :cond_0
    const-string v5, "1"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_1

    .line 459
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbSpeechLogger:Landroid/widget/CheckBox;

    invoke-virtual {v5, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 460
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 461
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 462
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 463
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 465
    :cond_1
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbSpeechLogger:Landroid/widget/CheckBox;

    invoke-virtual {v5, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 466
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 467
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 468
    if-ne v2, v3, :cond_2

    .line 469
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 471
    :cond_2
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 473
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v5

    if-nez v5, :cond_4

    .line 474
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v6, "GET_CUST_XML_ENABLE"

    invoke-virtual {v5, v6}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 475
    .local v5, "check":Ljava/lang/String;
    if-eqz v5, :cond_3

    const-string v6, "GET_CUST_XML_ENABLE=1"

    invoke-virtual {v6, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 476
    const-string v6, "get CUST_XML_PARAM = 1"

    invoke-static {v7, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 478
    :cond_3
    const-string v6, "get CUST_XML_PARAM = 0"

    invoke-static {v7, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 479
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbSpeechLogger:Landroid/widget/CheckBox;

    invoke-virtual {v6, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 480
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v6, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 481
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v6, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 482
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v6, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 483
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v6, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 487
    .end local v5    # "check":Ljava/lang/String;
    :cond_4
    :goto_1
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    const/4 v6, 0x0

    invoke-virtual {v5, v6}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 488
    const-string v5, "2"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 489
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    invoke-virtual {v5, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 491
    :cond_5
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    invoke-virtual {v5, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 493
    :goto_2
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    iget-object v8, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v5, v8}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 494
    const/16 v5, 0xa1

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v5

    .line 495
    .local v5, "epl":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Get EPL setting: "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 496
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    invoke-virtual {v7, v6}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 497
    if-ne v5, v3, :cond_6

    .line 498
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_3

    .line 500
    :cond_6
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    invoke-virtual {v3, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 502
    :goto_3
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 503
    return-void
.end method

.method private getParameters(Ljava/lang/String;)Ljava/lang/String;
    .locals 9
    .param p1, "command"    # Ljava/lang/String;

    .line 560
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->getAudioTuningVer()Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    move-result-object v1

    const-string v2, "Audio/SpeechLogger2"

    if-eq v0, v1, :cond_1

    .line 561
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v0, p1}, Landroid/media/AudioManager;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 562
    .local v0, "result":Ljava/lang/String;
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const-string v3, "APP_GET_PARAM="

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    if-le v1, v4, :cond_0

    .line 563
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    .line 565
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getParameters return "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 566
    return-object v0

    .line 568
    .end local v0    # "result":Ljava/lang/String;
    :cond_1
    const-string v0, "="

    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    .line 569
    .local v0, "index":I
    add-int/lit8 v1, v0, 0x1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 570
    const-string v1, "#"

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 571
    .local v1, "params":[Ljava/lang/String;
    const/4 v3, 0x0

    .line 572
    .local v3, "result":Ljava/lang/String;
    array-length v4, v1

    const/4 v5, 0x3

    const/4 v6, 0x0

    const/4 v7, 0x2

    const/4 v8, 0x1

    if-ne v4, v5, :cond_2

    .line 573
    aget-object v4, v1, v6

    aget-object v5, v1, v8

    aget-object v6, v1, v7

    invoke-static {v4, v5, v6}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    .line 574
    :cond_2
    array-length v4, v1

    if-ne v4, v7, :cond_3

    .line 575
    aget-object v4, v1, v6

    aget-object v5, v1, v8

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getCategory(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    .line 577
    :cond_3
    const-string v4, "error parameter"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 579
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getParameters "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " return "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 580
    return-object v3
.end method

.method private initAncStatus()V
    .locals 7

    .line 505
    nop

    .line 506
    const-string v0, "engineermode_audiolog_preferences"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 507
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const/16 v2, 0xb5

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v2

    .line 508
    .local v2, "anc":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Get ANC setting: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Audio/SpeechLogger2"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 509
    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    .line 510
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbAncLogger:Landroid/widget/CheckBox;

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 511
    const-string v1, "anc_status"

    const-string v3, "downSample"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 512
    .local v1, "ancStatus":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Get ANC status: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 513
    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 514
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    const v4, 0x7f060009

    invoke-virtual {v3, v4}, Landroid/widget/RadioGroup;->check(I)V

    goto :goto_0

    .line 516
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    const v4, 0x7f06000c

    invoke-virtual {v3, v4}, Landroid/widget/RadioGroup;->check(I)V

    .line 518
    .end local v1    # "ancStatus":Ljava/lang/String;
    :goto_0
    goto :goto_2

    .line 519
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbAncLogger:Landroid/widget/CheckBox;

    invoke-virtual {v3, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 520
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_1
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v4

    if-ge v3, v4, :cond_2

    .line 521
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    invoke-virtual {v4, v3}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/view/View;->setEnabled(Z)V

    .line 520
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 524
    .end local v3    # "i":I
    :cond_2
    :goto_2
    return-void
.end method

.method private initCopyDumpUi()V
    .locals 2

    .line 646
    const v0, 0x7f06004d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    .line 647
    const v0, 0x7f06004a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    .line 648
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyAudioDumpButtonListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 649
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyAudioDumpButtonListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 650
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopy2SdButton:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 651
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mClearDumpButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 652
    const v0, 0x7f06004b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCopyProgressTv:Landroid/widget/TextView;

    .line 653
    return-void
.end method

.method private onClickSpeechLogger(Landroid/content/SharedPreferences$Editor;Z)V
    .locals 2
    .param p1, "edit"    # Landroid/content/SharedPreferences$Editor;
    .param p2, "checked"    # Z

    .line 334
    const-string v0, "Audio/SpeechLogger2"

    if-eqz p2, :cond_0

    .line 335
    const-string v1, "mCbSpeechLogger checked"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 336
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 337
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 338
    iput-boolean v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mForRefresh:Z

    .line 339
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 340
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 341
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v1, "SET_VMLOG_CONFIG=1"

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    goto :goto_0

    .line 343
    :cond_0
    const-string v1, "mCbSpeechLogger unchecked"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 345
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 347
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 348
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 351
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 352
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 353
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    const-string v1, "SET_VMLOG_CONFIG=0"

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    .line 355
    :goto_0
    return-void
.end method

.method private setParameters(Ljava/lang/String;)V
    .locals 7
    .param p1, "command"    # Ljava/lang/String;

    .line 585
    sget-object v0, Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;->VER_2_2:Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    invoke-static {}, Lcom/mediatek/engineermode/audio/Audio;->getAudioTuningVer()Lcom/mediatek/engineermode/audio/Audio$AudioTuningVer;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 586
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    invoke-virtual {v0, p1}, Landroid/media/AudioManager;->setParameters(Ljava/lang/String;)V

    goto :goto_0

    .line 588
    :cond_0
    const-string v0, "="

    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    .line 589
    .local v0, "index":I
    add-int/lit8 v1, v0, 0x1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 590
    const-string v1, "#"

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 591
    .local v1, "params":[Ljava/lang/String;
    array-length v2, v1

    const/4 v3, 0x4

    if-ne v2, v3, :cond_1

    .line 592
    const/4 v2, 0x0

    aget-object v3, v1, v2

    const/4 v4, 0x1

    aget-object v4, v1, v4

    const/4 v5, 0x2

    aget-object v5, v1, v5

    const/4 v6, 0x3

    aget-object v6, v1, v6

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    .line 593
    aget-object v2, v1, v2

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->saveToWork(Ljava/lang/String;)Z

    .line 596
    .end local v0    # "index":I
    .end local v1    # "params":[Ljava/lang/String;
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setParameters "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Audio/SpeechLogger2"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 597
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 10
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 359
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 360
    const v0, 0x7f080017

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->setContentView(I)V

    .line 362
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mAudioManager:Landroid/media/AudioManager;

    .line 363
    const v0, 0x7f060045

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbSpeechLogger:Landroid/widget/CheckBox;

    .line 364
    const v0, 0x7f060017

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    .line 365
    const v0, 0x7f06000d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    .line 366
    const v0, 0x7f06000a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbAncLogger:Landroid/widget/CheckBox;

    .line 367
    const v0, 0x7f06002b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbMagiConf:Landroid/widget/CheckBox;

    .line 368
    const v0, 0x7f060044

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    .line 369
    const v0, 0x7f060046

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    .line 370
    const v0, 0x7f0600b9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    .line 371
    const v0, 0x7f06005d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    .line 372
    .local v0, "dumpSpeechInfo":Landroid/widget/Button;
    const v1, 0x7f060047

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v1

    .line 373
    .local v1, "spliteView":Landroid/view/View;
    const v2, 0x7f06000e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 374
    .local v2, "ctm4WayText":Landroid/widget/TextView;
    const v3, 0x7f060049

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v3

    .line 375
    .local v3, "spliteView3":Landroid/view/View;
    const v4, 0x7f06000b

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 376
    .local v4, "ancText":Landroid/widget/TextView;
    const-string v5, "MTK_TTY_SUPPORT"

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->isFeatureSupported(Ljava/lang/String;)Z

    move-result v5

    const/16 v6, 0x8

    if-nez v5, :cond_0

    .line 377
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    invoke-virtual {v5, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 378
    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setVisibility(I)V

    .line 379
    invoke-virtual {v1, v6}, Landroid/view/View;->setVisibility(I)V

    .line 381
    :cond_0
    const/16 v5, 0xb0

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v5

    .line 382
    .local v5, "ancSupport":I
    if-nez v5, :cond_1

    .line 383
    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setVisibility(I)V

    .line 384
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbAncLogger:Landroid/widget/CheckBox;

    invoke-virtual {v7, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 385
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    invoke-virtual {v7, v6}, Landroid/widget/RadioGroup;->setVisibility(I)V

    .line 386
    invoke-virtual {v3, v6}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    .line 388
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->initAncStatus()V

    .line 390
    :goto_0
    const-string v7, "GET_MAGI_CONFERENCE_SUPPORT"

    invoke-static {v7}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 391
    .local v7, "magiSupport":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Get Magi support "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "Audio/SpeechLogger2"

    invoke-static {v9, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 392
    const-string v8, "="

    invoke-virtual {v7, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    .line 404
    .local v8, "magiStr":[Ljava/lang/String;
    const v9, 0x7f060048

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v9

    invoke-virtual {v9, v6}, Landroid/view/View;->setVisibility(I)V

    .line 405
    const v9, 0x7f06002c

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->findViewById(I)Landroid/view/View;

    move-result-object v9

    invoke-virtual {v9, v6}, Landroid/view/View;->setVisibility(I)V

    .line 406
    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbMagiConf:Landroid/widget/CheckBox;

    invoke-virtual {v9, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 408
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->checkStatus()V

    .line 410
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbSpeechLogger:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 411
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbEplDebug:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 412
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbCtm4Way:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 413
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbAncLogger:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 414
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCbMagiConf:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 415
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbEpl:Landroid/widget/RadioButton;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 416
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRbNormalVm:Landroid/widget/RadioButton;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 417
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgAnc:Landroid/widget/RadioGroup;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mRgCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 418
    new-instance v6, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$3;

    invoke-direct {v6, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$3;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    invoke-virtual {v0, v6}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 433
    const/16 v6, 0xa

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->showDialog(I)V

    .line 436
    new-instance v6, Landroid/content/Intent;

    invoke-direct {v6}, Landroid/content/Intent;-><init>()V

    .line 437
    .local v6, "intent":Landroid/content/Intent;
    const-class v9, Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    invoke-virtual {v6, p0, v9}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 438
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    .line 439
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->initCopyDumpUi()V

    .line 441
    return-void
.end method

.method public onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 528
    const v0, 0x104000a

    if-eqz p1, :cond_3

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq p1, v1, :cond_2

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/16 v1, 0xa

    if-eq p1, v1, :cond_0

    .line 556
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 551
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v3, 0x7f0a015d

    .line 552
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v3, 0x7f0a0132

    .line 553
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 554
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 551
    return-object v0

    .line 546
    :cond_1
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v3, 0x7f0a0592

    .line 547
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v3, 0x7f0a0591

    .line 548
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 549
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 546
    return-object v0

    .line 541
    :cond_2
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v3, 0x7f0a0488

    .line 542
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v3, 0x7f0a0487

    .line 543
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 544
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 541
    return-object v0

    .line 530
    :cond_3
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v2, 0x7f0a0337

    .line 531
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v2, 0x7f0a0336

    .line 532
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$4;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$4;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    .line 533
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 539
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 530
    return-object v0
.end method

.method public onDestroy()V
    .locals 0

    .line 445
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 446
    return-void
.end method

.method protected onStart()V
    .locals 3

    .line 608
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 610
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 611
    .local v0, "intent":Landroid/content/Intent;
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mConnection:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    .line 612
    return-void
.end method

.method protected onStop()V
    .locals 1

    .line 616
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 618
    iget-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mBound:Z

    if-eqz v0, :cond_0

    .line 619
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mConnection:Landroid/content/ServiceConnection;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->unbindService(Landroid/content/ServiceConnection;)V

    .line 620
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mBound:Z

    .line 622
    :cond_0
    return-void
.end method
