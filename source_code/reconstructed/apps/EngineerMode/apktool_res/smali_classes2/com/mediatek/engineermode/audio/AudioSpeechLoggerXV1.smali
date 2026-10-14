.class public Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;
.super Landroid/app/Activity;
.source "AudioSpeechLoggerXV1.java"


# static fields
.field private static final ANC_DOWN_SAMPLE:Ljava/lang/String; = "downSample"

.field private static final ANC_NO_DOWN_SAMPLE:Ljava/lang/String; = "noDownSample"

.field public static final ANC_STATUS:Ljava/lang/String; = "anc_status"

.field private static final CONSTANT_0XFF:I = 0xff

.field private static final CONSTANT_256:I = 0x100

.field private static final DATA_SIZE:I = 0x5a4

.field private static final DIALOG_GET_DATA_ERROR:I = 0x0

.field private static final DIALOG_ID_NO_SDCARD:I = 0x1

.field private static final DIALOG_ID_SDCARD_BUSY:I = 0x2

.field private static final ENABLE_ANC_DOWN_SAMPLE:I = 0x1

.field private static final ENABLE_ANC_NO_DOWN_SAMPLE:I = 0x0

.field public static final ENGINEER_MODE_PREFERENCE:Ljava/lang/String; = "engineermode_audiolog_preferences"

.field public static final EPL_STATUS:Ljava/lang/String; = "epl_status"

.field private static final GET_DUMP_AP_SPEECH_EPL:I = 0xa1

.field private static final GET_SPEECH_ANC_LOG_STATUS:I = 0xb5

.field private static final GET_SPEECH_ANC_SUPPORT:I = 0xb0

.field private static final SET_DUMP_AP_SPEECH_EPL:I = 0xa0

.field private static final SET_DUMP_SPEECH_DEBUG_INFO:I = 0x61

.field private static final SET_SPEECH_ANC_DISABLE:I = 0xb4

.field private static final SET_SPEECH_ANC_LOG_STATUS:I = 0xb3

.field private static final SET_SPEECH_VM_ENABLE:I = 0x60

.field public static final TAG:Ljava/lang/String; = "Audio/SpeechLogger1"

.field private static final VM_LOG_POS:I = 0x5a0


# instance fields
.field private mCbAncLogger:Landroid/widget/CheckBox;

.field private mCbCtm4Way:Landroid/widget/CheckBox;

.field private mCbEplDebug:Landroid/widget/CheckBox;

.field private mCbMagiConf:Landroid/widget/CheckBox;

.field private mCbSpeechLogger:Landroid/widget/CheckBox;

.field private final mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private mData:[B

.field private mForRefresh:Z

.field private mRbEpl:Landroid/widget/RadioButton;

.field private mRbNormalVm:Landroid/widget/RadioButton;

.field private mRgAnc:Landroid/widget/RadioGroup;

.field private final mRgCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

.field private mVmLogState:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 62
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 99
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    .line 100
    iput-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mForRefresh:Z

    .line 102
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$1;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 197
    new-instance v0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$2;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbSpeechLogger:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;Landroid/content/SharedPreferences$Editor;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;
    .param p1, "x1"    # Landroid/content/SharedPreferences$Editor;
    .param p2, "x2"    # Z

    .line 62
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->onClickSpeechLogger(Landroid/content/SharedPreferences$Editor;Z)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbMagiConf:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbCtm4Way:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)[B
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mData:[B

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    return v0
.end method

.method static synthetic access$472(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;I)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;
    .param p1, "x1"    # I

    .line 62
    iget v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    and-int/2addr v0, p1

    iput v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    return v0
.end method

.method static synthetic access$476(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;I)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;
    .param p1, "x1"    # I

    .line 62
    iget v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    or-int/2addr v0, p1

    iput v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbEplDebug:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/RadioButton;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-boolean v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mForRefresh:Z

    return v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;
    .param p1, "x1"    # Z

    .line 62
    iput-boolean p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mForRefresh:Z

    return p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbAncLogger:Landroid/widget/CheckBox;

    return-object v0
.end method

.method private checkStatus()V
    .locals 10

    .line 337
    nop

    .line 338
    const-string v0, "engineermode_audiolog_preferences"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 339
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const-string v2, "epl_status"

    const/4 v3, 0x1

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 341
    .local v2, "eplStatus":I
    const/16 v4, 0x5a4

    new-array v5, v4, [B

    iput-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mData:[B

    .line 342
    invoke-static {v5, v4}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getEmParameter([BI)I

    move-result v4

    .line 343
    .local v4, "ret":I
    const-string v5, "Audio_SpeechLogger GetEMParameter return value is : "

    const-string v6, "Audio/SpeechLogger1"

    if-eqz v4, :cond_0

    .line 344
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->showDialog(I)V

    .line 345
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 348
    :cond_0
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mData:[B

    const/16 v8, 0x5a0

    aget-byte v8, v7, v8

    const/16 v9, 0x5a1

    aget-byte v7, v7, v9

    invoke-direct {p0, v8, v7}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->shortToInt(BB)I

    move-result v7

    iput v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    .line 349
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 351
    iget v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    and-int/2addr v5, v3

    if-nez v5, :cond_1

    .line 352
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbSpeechLogger:Landroid/widget/CheckBox;

    invoke-virtual {v5, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 353
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 354
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 355
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 356
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 358
    :cond_1
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbSpeechLogger:Landroid/widget/CheckBox;

    invoke-virtual {v5, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 359
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 360
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 361
    if-ne v2, v3, :cond_2

    .line 362
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 364
    :cond_2
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 368
    :goto_0
    iget v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mVmLogState:I

    and-int/lit8 v5, v5, 0x2

    if-nez v5, :cond_3

    .line 369
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbCtm4Way:Landroid/widget/CheckBox;

    invoke-virtual {v5, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 371
    :cond_3
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbCtm4Way:Landroid/widget/CheckBox;

    invoke-virtual {v5, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 373
    :goto_1
    const/16 v5, 0xa1

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v5

    .line 374
    .local v5, "epl":I
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "Get EPL setting: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 375
    if-ne v5, v3, :cond_4

    .line 376
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbEplDebug:Landroid/widget/CheckBox;

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 378
    :cond_4
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbEplDebug:Landroid/widget/CheckBox;

    invoke-virtual {v3, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 380
    :goto_2
    return-void
.end method

.method private initAncStatus()V
    .locals 7

    .line 382
    nop

    .line 383
    const-string v0, "engineermode_audiolog_preferences"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 384
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const/16 v2, 0xb5

    invoke-static {v2}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v2

    .line 385
    .local v2, "anc":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Get ANC setting: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Audio/SpeechLogger1"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 386
    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    .line 387
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbAncLogger:Landroid/widget/CheckBox;

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 388
    const-string v1, "anc_status"

    const-string v3, "downSample"

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 389
    .local v1, "ancStatus":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Get ANC status: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 390
    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 391
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    const v4, 0x7f060009

    invoke-virtual {v3, v4}, Landroid/widget/RadioGroup;->check(I)V

    goto :goto_0

    .line 393
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    const v4, 0x7f06000c

    invoke-virtual {v3, v4}, Landroid/widget/RadioGroup;->check(I)V

    .line 395
    .end local v1    # "ancStatus":Ljava/lang/String;
    :goto_0
    goto :goto_2

    .line 396
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbAncLogger:Landroid/widget/CheckBox;

    invoke-virtual {v3, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 397
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_1
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v4

    if-ge v3, v4, :cond_2

    .line 398
    iget-object v4, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    invoke-virtual {v4, v3}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/view/View;->setEnabled(Z)V

    .line 397
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 401
    .end local v3    # "i":I
    :cond_2
    :goto_2
    return-void
.end method

.method private onClickSpeechLogger(Landroid/content/SharedPreferences$Editor;Z)V
    .locals 9
    .param p1, "edit"    # Landroid/content/SharedPreferences$Editor;
    .param p2, "checked"    # Z

    .line 223
    const v0, 0x7f0a05b0

    const-string v1, "set mAutoVM parameter failed"

    const/16 v2, -0x26

    const/16 v3, 0x5a0

    const/16 v4, 0x5a4

    const-string v5, "Audio/SpeechLogger1"

    const/4 v6, 0x1

    if-eqz p2, :cond_1

    .line 224
    const-string v7, "mCbSpeechLogger checked"

    invoke-static {v5, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v7, v6}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 226
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v7, v6}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 227
    iput-boolean v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mForRefresh:Z

    .line 228
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v7, v6}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 229
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v7, v6}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 230
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mData:[B

    aget-byte v8, v7, v3

    or-int/2addr v8, v6

    int-to-byte v8, v8

    aput-byte v8, v7, v3

    .line 231
    invoke-static {v7, v4}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setEmParameter([BI)I

    move-result v3

    .line 232
    .local v3, "index":I
    if-eqz v3, :cond_0

    if-eq v3, v2, :cond_0

    .line 233
    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 234
    invoke-static {p0, v0, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 236
    .end local v3    # "index":I
    :cond_0
    goto :goto_0

    .line 237
    :cond_1
    const-string v7, "mCbSpeechLogger unchecked"

    invoke-static {v5, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 238
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v7}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v7

    const/4 v8, 0x0

    if-eqz v7, :cond_2

    .line 239
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v7, v8}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 241
    :cond_2
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v7}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v7

    if-eqz v7, :cond_3

    .line 242
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v7, v8}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 245
    :cond_3
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    invoke-virtual {v7, v8}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 246
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    invoke-virtual {v7, v8}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 247
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mData:[B

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getEmParameter([BI)I

    .line 248
    const-string v7, "epl_status"

    invoke-interface {p1, v7, v8}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 249
    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 250
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mData:[B

    aget-byte v8, v7, v3

    and-int/lit8 v8, v8, -0x2

    int-to-byte v8, v8

    aput-byte v8, v7, v3

    .line 251
    invoke-static {v7, v4}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->setEmParameter([BI)I

    move-result v3

    .line 252
    .restart local v3    # "index":I
    if-eqz v3, :cond_4

    if-eq v3, v2, :cond_4

    .line 253
    invoke-static {v5, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 254
    invoke-static {p0, v0, v6}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 257
    .end local v3    # "index":I
    :cond_4
    :goto_0
    return-void
.end method

.method private shortToInt(BB)I
    .locals 4
    .param p1, "low"    # B
    .param p2, "high"    # B

    .line 408
    add-int/lit16 v0, p2, 0x100

    and-int/lit16 v0, v0, 0xff

    .line 409
    .local v0, "temp":I
    mul-int/lit16 v1, v0, 0x100

    .line 410
    .local v1, "highByte":I
    add-int/lit16 v2, p1, 0x100

    and-int/lit16 v2, v2, 0xff

    .line 411
    .local v2, "lowByte":I
    add-int v3, v1, v2

    return v3
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 10
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 261
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 262
    const v0, 0x7f080017

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->setContentView(I)V

    .line 264
    const v0, 0x7f060045

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbSpeechLogger:Landroid/widget/CheckBox;

    .line 265
    const v0, 0x7f060017

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbEplDebug:Landroid/widget/CheckBox;

    .line 266
    const v0, 0x7f06000d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbCtm4Way:Landroid/widget/CheckBox;

    .line 267
    const v0, 0x7f06000a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbAncLogger:Landroid/widget/CheckBox;

    .line 268
    const v0, 0x7f06002b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbMagiConf:Landroid/widget/CheckBox;

    .line 269
    const v0, 0x7f060044

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    .line 270
    const v0, 0x7f060046

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    .line 271
    const v0, 0x7f0600b9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    .line 272
    const v0, 0x7f06005d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    .line 273
    .local v0, "dumpSpeechInfo":Landroid/widget/Button;
    const v1, 0x7f060047

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v1

    .line 274
    .local v1, "spliteView":Landroid/view/View;
    const v2, 0x7f06000e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 275
    .local v2, "ctm4WayText":Landroid/widget/TextView;
    const v3, 0x7f060049

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v3

    .line 276
    .local v3, "spliteView3":Landroid/view/View;
    const v4, 0x7f06000b

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 277
    .local v4, "ancText":Landroid/widget/TextView;
    const-string v5, "MTK_TTY_SUPPORT"

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->isFeatureSupported(Ljava/lang/String;)Z

    move-result v5

    const/16 v6, 0x8

    if-nez v5, :cond_0

    .line 278
    iget-object v5, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbCtm4Way:Landroid/widget/CheckBox;

    invoke-virtual {v5, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 279
    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setVisibility(I)V

    .line 280
    invoke-virtual {v1, v6}, Landroid/view/View;->setVisibility(I)V

    .line 282
    :cond_0
    const/16 v5, 0xb0

    invoke-static {v5}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->getAudioCommand(I)I

    move-result v5

    .line 283
    .local v5, "ancSupport":I
    if-nez v5, :cond_1

    .line 284
    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setVisibility(I)V

    .line 285
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbAncLogger:Landroid/widget/CheckBox;

    invoke-virtual {v7, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 286
    iget-object v7, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    invoke-virtual {v7, v6}, Landroid/widget/RadioGroup;->setVisibility(I)V

    .line 287
    invoke-virtual {v3, v6}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    .line 289
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->initAncStatus()V

    .line 291
    :goto_0
    const-string v7, "GET_MAGI_CONFERENCE_SUPPORT"

    invoke-static {v7}, Landroid/media/AudioSystem;->getParameters(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 292
    .local v7, "magiSupport":Ljava/lang/String;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Get Magi support "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "Audio/SpeechLogger1"

    invoke-static {v9, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 293
    const-string v8, "="

    invoke-virtual {v7, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    .line 305
    .local v8, "magiStr":[Ljava/lang/String;
    const v9, 0x7f060048

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v9

    invoke-virtual {v9, v6}, Landroid/view/View;->setVisibility(I)V

    .line 306
    const v9, 0x7f06002c

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->findViewById(I)Landroid/view/View;

    move-result-object v9

    invoke-virtual {v9, v6}, Landroid/view/View;->setVisibility(I)V

    .line 307
    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbMagiConf:Landroid/widget/CheckBox;

    invoke-virtual {v9, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 309
    invoke-direct {p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->checkStatus()V

    .line 311
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbSpeechLogger:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 312
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbEplDebug:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 313
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbCtm4Way:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 314
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbAncLogger:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 315
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCbMagiConf:Landroid/widget/CheckBox;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 316
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbEpl:Landroid/widget/RadioButton;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 317
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRbNormalVm:Landroid/widget/RadioButton;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 318
    iget-object v6, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgAnc:Landroid/widget/RadioGroup;

    iget-object v9, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;->mRgCheckedListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    invoke-virtual {v6, v9}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 319
    new-instance v6, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$3;

    invoke-direct {v6, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$3;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)V

    invoke-virtual {v0, v6}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 334
    return-void
.end method

.method public onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 416
    const v0, 0x104000a

    if-eqz p1, :cond_2

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq p1, v1, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_0

    .line 439
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 434
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v3, 0x7f0a0592

    .line 435
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v3, 0x7f0a0591

    .line 436
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 437
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 434
    return-object v0

    .line 429
    :cond_1
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v3, 0x7f0a0488

    .line 430
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v3, 0x7f0a0487

    .line 431
    invoke-virtual {v1, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 432
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 429
    return-object v0

    .line 418
    :cond_2
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v2, 0x7f0a0337

    .line 419
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v2, 0x7f0a0336

    .line 420
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$4;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1$4;-><init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV1;)V

    .line 421
    invoke-virtual {v1, v0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 427
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 418
    return-object v0
.end method
