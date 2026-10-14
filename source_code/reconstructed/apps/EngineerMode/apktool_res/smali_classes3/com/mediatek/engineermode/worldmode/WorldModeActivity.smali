.class public Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
.super Landroid/app/Activity;
.source "WorldModeActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final ACTION_SERVICE_STATE_CHANGED:Ljava/lang/String; = "android.intent.action.SERVICE_STATE"

.field private static final ACTION_SET_RADIO_CAPABILITY_DONE:Ljava/lang/String; = "android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE"

.field private static final ACTION_WORLD_MODE_CHANGED:Ljava/lang/String; = "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED"

.field private static final BAND_GSM_INDEX:I = 0x0

.field private static final BAND_LTEFDD_INDEX:I = 0x2

.field private static final BAND_LTETDD_INDEX:I = 0x3

.field private static final BAND_UTMS_INDEX:I = 0x1

.field private static final C2K_WORLD_MODE_AUTO:I = 0xc

.field private static final DIALOG_WAIT:I = 0x1

.field private static final ERROR:I = 0x3

.field private static final EVENT_QUERY_CURRENT:I = 0x0

.field private static final INDEX_BAND_MAX:I = 0x5

.field private static final IS_NR_SUPPORT:Z

.field private static final MASK_GSM:I = 0x1

.field private static final MASK_LTEFDD:I = 0x10

.field private static final MASK_LTETDD:I = 0x8

.field private static final MASK_TDSCDMA:I = 0x2

.field private static final MASK_WCDMA:I = 0x4

.field private static final REBOOT_RF:I = 0x0

.field private static final TAG:Ljava/lang/String; = "WorldModeActivity"

.field private static final UNSUPPORT:I = 0x2

.field private static final WORLD_MODE_AUTO:I = 0xa

.field private static final WORLD_MODE_LFWG:I = 0xe

.field private static final WORLD_MODE_LTCTG:I = 0x11

.field private static final WORLD_MODE_LTG:I = 0x8

.field private static final WORLD_MODE_LTTG:I = 0xd

.field private static final WORLD_MODE_LWCG:I = 0xb

.field private static final WORLD_MODE_LWG:I = 0x9

.field private static final WORLD_MODE_RESULT_ERROR:I = 0x65

.field private static final WORLD_MODE_RESULT_SUCCESS:I = 0x64

.field private static final WORLD_MODE_RESULT_WM_ID_NOT_SUPPORT:I = 0x66

.field private static mBandMode:I

.field private static mMode:I

.field private static mOldMode:I

.field private static mSetWorldMode:I


# instance fields
.field private final WAIT_TIME:I

.field private final mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private final mBroadcastReceiverServiceStateChanged:Landroid/content/BroadcastReceiver;

.field private mButtonSet:Landroid/widget/Button;

.field private mButtonSetValue:Landroid/widget/Button;

.field private mPhoneStateListener:Landroid/telephony/PhoneStateListener;

.field private mProgressDialog:Landroid/app/ProgressDialog;

.field private mRadioAuto:Landroid/widget/RadioButton;

.field private mRadioGroup:Landroid/widget/RadioGroup;

.field private mRadioLtctg:Landroid/widget/RadioButton;

.field private mRadioLttg:Landroid/widget/RadioButton;

.field private mRadioLwcg:Landroid/widget/RadioButton;

.field private mRadioLwg:Landroid/widget/RadioButton;

.field private final mResponseHander:Landroid/os/Handler;

.field private mStateFlag:Z

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;

.field private mTextCurrentMode:Landroid/widget/TextView;

.field private mTextMainProtocol:Landroid/widget/TextView;

.field private mTextWorldModeHint:Landroid/widget/TextView;

.field private mToast:Landroid/widget/Toast;

.field private mValue:Landroid/widget/EditText;

.field private mWorldMode:[Ljava/lang/String;

.field private mWorldModeFor6M:[Ljava/lang/String;

.field private timer:Landroid/os/CountDownTimer;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 119
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isNrSupported()Z

    move-result v0

    sput-boolean v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->IS_NR_SUPPORT:Z

    .line 120
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    .line 121
    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mOldMode:I

    .line 122
    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mSetWorldMode:I

    .line 123
    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBandMode:I

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 80
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 124
    const/16 v0, 0xf

    iput v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->WAIT_TIME:I

    .line 127
    const-string v0, "unknown"

    const-string v1, "lwg"

    const-string v2, "lttg"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mWorldMode:[Ljava/lang/String;

    .line 128
    const-string v1, "LWCG"

    const-string v2, "LtCTG"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mWorldModeFor6M:[Ljava/lang/String;

    .line 142
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mStateFlag:Z

    .line 144
    new-instance v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$1;-><init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mResponseHander:Landroid/os/Handler;

    .line 199
    new-instance v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$2;-><init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    .line 209
    new-instance v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$3;-><init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    .line 227
    new-instance v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$4;-><init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBroadcastReceiverServiceStateChanged:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic access$000()I
    .locals 1

    .line 80
    sget v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBandMode:I

    return v0
.end method

.method static synthetic access$012(I)I
    .locals 1
    .param p0, "x0"    # I

    .line 80
    sget v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBandMode:I

    add-int/2addr v0, p0

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBandMode:I

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 80
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->updateUi()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 80
    iget-boolean v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mStateFlag:Z

    return v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
    .param p1, "x1"    # Z

    .line 80
    iput-boolean p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mStateFlag:Z

    return p1
.end method

.method static synthetic access$300()I
    .locals 1

    .line 80
    sget v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mSetWorldMode:I

    return v0
.end method

.method static synthetic access$302(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 80
    sput p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mSetWorldMode:I

    return p0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/os/CountDownTimer;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->timer:Landroid/os/CountDownTimer;

    return-object v0
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;
    .param p1, "x1"    # Landroid/os/CountDownTimer;

    .line 80
    iput-object p1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->timer:Landroid/os/CountDownTimer;

    return-object p1
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/app/ProgressDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)Landroid/telephony/TelephonyManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/worldmode/WorldModeActivity;

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    return-object v0
.end method

.method static synthetic access$700()I
    .locals 1

    .line 80
    sget v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    return v0
.end method

.method private getWorldMode()I
    .locals 1

    .line 507
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->getWorldModeId()I

    move-result v0

    return v0
.end method

.method private is6m()Z
    .locals 2

    .line 519
    const/4 v0, 0x0

    .line 520
    .local v0, "result":Z
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 521
    const/4 v0, 0x1

    .line 523
    :cond_0
    return v0
.end method

.method private queryCurrentBandModeAndSetNewWorldMode()V
    .locals 4

    .line 497
    const-string v0, "AT+EPBSE?"

    const-string v1, "+EPBSE:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 498
    .local v0, "modeString":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT String:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v3, v0, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "WorldModeActivity"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 499
    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->sendATCommand([Ljava/lang/String;I)V

    .line 500
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 1
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 503
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mResponseHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 504
    return-void
.end method

.method private showToast(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 511
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 512
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 514
    :cond_0
    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mToast:Landroid/widget/Toast;

    .line 515
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 516
    return-void
.end method

.method private updateUi()V
    .locals 7

    .line 341
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getWorldMode()I

    move-result v0

    .line 342
    .local v0, "mode":I
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->get3GDivisionDuplexMode()I

    move-result v1

    .line 343
    .local v1, "currentMode":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MTK Get world mode: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "WorldModeActivity"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    const-string v2, ""

    .line 345
    .local v2, "modeString":Ljava/lang/String;
    sget-boolean v3, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->IS_NR_SUPPORT:Z

    const/4 v4, 0x1

    if-ne v4, v3, :cond_0

    .line 346
    invoke-static {v0}, Lcom/mediatek/engineermode/WorldModeUtil;->worldModeIdToString(I)Ljava/lang/String;

    move-result-object v2

    goto/16 :goto_2

    .line 347
    :cond_0
    const/16 v3, 0xa

    if-eq v0, v3, :cond_8

    const/16 v3, 0xc

    if-ne v0, v3, :cond_1

    goto/16 :goto_0

    .line 355
    :cond_1
    const/16 v3, 0x8

    const/4 v5, -0x1

    if-ne v0, v3, :cond_2

    .line 356
    const v3, 0x7f0a077f

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 357
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioGroup:Landroid/widget/RadioGroup;

    invoke-virtual {v3, v5}, Landroid/widget/RadioGroup;->check(I)V

    goto/16 :goto_2

    .line 358
    :cond_2
    const/16 v3, 0x9

    if-ne v0, v3, :cond_3

    .line 359
    const v3, 0x7f0a0782

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 360
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto/16 :goto_2

    .line 361
    :cond_3
    const/16 v3, 0xd

    if-ne v0, v3, :cond_4

    .line 362
    const v3, 0x7f0a0780

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 363
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLttg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto/16 :goto_2

    .line 364
    :cond_4
    const/16 v3, 0x11

    if-ne v0, v3, :cond_5

    .line 365
    const v3, 0x7f0a077e

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 366
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLtctg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto/16 :goto_2

    .line 367
    :cond_5
    const/16 v3, 0xb

    if-ne v0, v3, :cond_6

    .line 368
    const v3, 0x7f0a0781

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 369
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwcg:Landroid/widget/RadioButton;

    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 370
    :cond_6
    const/16 v3, 0xe

    if-ne v0, v3, :cond_7

    .line 371
    const v3, 0x7f0a077d

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 372
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioGroup:Landroid/widget/RadioGroup;

    invoke-virtual {v3, v5}, Landroid/widget/RadioGroup;->check(I)V

    goto :goto_2

    .line 374
    :cond_7
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mWorldMode:[Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v2, v3, v4

    .line 375
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioGroup:Landroid/widget/RadioGroup;

    invoke-virtual {v3, v5}, Landroid/widget/RadioGroup;->check(I)V

    goto :goto_2

    .line 348
    :cond_8
    :goto_0
    const v3, 0x7f0a0777

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 349
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->is6m()Z

    move-result v3

    const-string v5, ")"

    const-string v6, "("

    if-eqz v3, :cond_9

    .line 350
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mWorldModeFor6M:[Ljava/lang/String;

    aget-object v6, v6, v1

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 352
    :cond_9
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mWorldMode:[Ljava/lang/String;

    aget-object v6, v6, v1

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 354
    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioAuto:Landroid/widget/RadioButton;

    invoke-virtual {v3, v4}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 377
    :goto_2
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextCurrentMode:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const v5, 0x7f0a0779

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 378
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mValue:Landroid/widget/EditText;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 379
    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mOldMode:I

    .line 380
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 384
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mButtonSetValue:Landroid/widget/Button;

    const-string v1, "WorldModeActivity"

    if-ne p1, v0, :cond_0

    .line 385
    const/4 v0, 0x0

    .line 387
    .local v0, "mode":I
    :try_start_0
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mValue:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 391
    goto/16 :goto_0

    .line 388
    :catch_0
    move-exception v2

    .line 389
    .local v2, "e":Ljava/lang/NumberFormatException;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Invalid format: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mValue:Landroid/widget/EditText;

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 390
    const-string v3, "Invalid value"

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 392
    .end local v0    # "mode":I
    .end local v2    # "e":Ljava/lang/NumberFormatException;
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mButtonSet:Landroid/widget/Button;

    if-ne p1, v0, :cond_7

    .line 393
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 394
    const/16 v0, 0x9

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    goto :goto_1

    .line 395
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLttg:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 396
    const/16 v0, 0xd

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    goto :goto_1

    .line 397
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioAuto:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 398
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->is6m()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 399
    const/16 v0, 0xc

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    goto :goto_1

    .line 401
    :cond_3
    const/16 v0, 0xa

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    goto :goto_1

    .line 403
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLtctg:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 404
    const/16 v0, 0x11

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    goto :goto_1

    .line 405
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwcg:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 406
    const/16 v0, 0xb

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    goto :goto_1

    .line 408
    :cond_6
    return-void

    .line 392
    :cond_7
    :goto_0
    nop

    .line 411
    :goto_1
    sget v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mOldMode:I

    sget v2, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mMode:I

    if-eq v0, v2, :cond_8

    .line 412
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBandMode:I

    .line 413
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->queryCurrentBandModeAndSetNewWorldMode()V

    goto :goto_2

    .line 415
    :cond_8
    const-string v0, "The mode is not changed!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    :goto_2
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 259
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 260
    const v0, 0x7f080110

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->setContentView(I)V

    .line 261
    const v0, 0x7f060879

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLtctg:Landroid/widget/RadioButton;

    .line 262
    const v0, 0x7f06087a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLttg:Landroid/widget/RadioButton;

    .line 263
    const v0, 0x7f06087c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwg:Landroid/widget/RadioButton;

    .line 264
    const v0, 0x7f06087b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwcg:Landroid/widget/RadioButton;

    .line 265
    const v0, 0x7f060876

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioAuto:Landroid/widget/RadioButton;

    .line 266
    const v0, 0x7f06087e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioGroup:Landroid/widget/RadioGroup;

    .line 267
    const v0, 0x7f06087f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mButtonSet:Landroid/widget/Button;

    .line 268
    const v0, 0x7f060877

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextCurrentMode:Landroid/widget/TextView;

    .line 269
    const v0, 0x7f06087d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextMainProtocol:Landroid/widget/TextView;

    .line 270
    const v0, 0x7f060878

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextWorldModeHint:Landroid/widget/TextView;

    .line 271
    const v1, 0x7f0a077c

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 272
    const v0, 0x7f060881

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mValue:Landroid/widget/EditText;

    .line 273
    const v0, 0x7f060880

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mButtonSetValue:Landroid/widget/Button;

    .line 275
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->is6m()Z

    move-result v0

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    .line 276
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 277
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLttg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    goto :goto_0

    .line 279
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLtctg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 280
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwcg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 283
    :goto_0
    const/4 v0, 0x1

    sget-boolean v2, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->IS_NR_SUPPORT:Z

    if-ne v0, v2, :cond_1

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLtctg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 285
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLttg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 286
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 287
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLttg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 288
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioLwcg:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 289
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mRadioAuto:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setVisibility(I)V

    .line 290
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mButtonSet:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setVisibility(I)V

    .line 291
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextWorldModeHint:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 294
    :cond_1
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 297
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 300
    const-string v1, "android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 302
    iget-object v1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 305
    new-instance v1, Landroid/content/IntentFilter;

    invoke-direct {v1}, Landroid/content/IntentFilter;-><init>()V

    .line 307
    .local v1, "intentFilterServiceStateChanged":Landroid/content/IntentFilter;
    const-string v2, "android.intent.action.SERVICE_STATE"

    invoke-virtual {v1, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 309
    iget-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBroadcastReceiverServiceStateChanged:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v2, v1}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 311
    const-string v2, "phone"

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/telephony/TelephonyManager;

    iput-object v2, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 312
    iget-object v3, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    const/high16 v4, 0x800000

    invoke-virtual {v2, v3, v4}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 315
    invoke-direct {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->updateUi()V

    .line 316
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 440
    const/4 v0, 0x0

    const-string v1, "Confirm"

    if-eqz p1, :cond_3

    const/4 v2, 0x1

    if-eq p1, v2, :cond_2

    const/4 v2, 0x2

    if-eq p1, v2, :cond_1

    const/4 v2, 0x3

    if-eq p1, v2, :cond_0

    .line 493
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 488
    :cond_0
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v3, "Error"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 489
    const-string v3, "The world mode is set error!"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 490
    invoke-virtual {v2, v1, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 491
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 488
    return-object v0

    .line 483
    :cond_1
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v3, "Unsupport"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 484
    const-string v3, "The band is not support the world mode id!"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 485
    invoke-virtual {v2, v1, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 486
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 483
    return-object v0

    .line 475
    :cond_2
    new-instance v0, Landroid/app/ProgressDialog;

    invoke-direct {v0, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    .line 476
    const-string v1, "Waiting"

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 477
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    const-string v1, "Waiting rf reboot"

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 478
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 479
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    invoke-virtual {v0, v2}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 480
    const-string v0, "WorldModeActivity"

    const-string v1, "After timer.start("

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 481
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mProgressDialog:Landroid/app/ProgressDialog;

    return-object v0

    .line 442
    :cond_3
    new-instance v2, Landroid/app/AlertDialog$Builder;

    invoke-direct {v2, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v3, "Hint"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 443
    const-string v3, "This will cost several seconds,\nUI will hang during reboot RF!"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$6;-><init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;)V

    .line 445
    invoke-virtual {v2, v1, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 471
    const-string v2, "Cancel"

    invoke-virtual {v1, v2, v0}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 472
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 442
    return-object v0
.end method

.method protected onDestroy()V
    .locals 3

    .line 332
    const-string v0, "WorldModeActivity"

    const-string v1, "onDestroy()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 334
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mBroadcastReceiverServiceStateChanged:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 335
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mResponseHander:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 336
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 337
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 338
    return-void
.end method

.method protected onResume()V
    .locals 5

    .line 320
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 321
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    const v1, 0x7f0a0783

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v0, :cond_0

    .line 322
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextMainProtocol:Landroid/widget/TextView;

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    aput-object v1, v3, v2

    const-string v1, "%sSIM1"

    invoke-static {v1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 324
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    if-ne v0, v3, :cond_1

    .line 325
    iget-object v0, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->mTextMainProtocol:Landroid/widget/TextView;

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    aput-object v1, v3, v2

    const-string v1, "%sSIM2"

    invoke-static {v1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 328
    :cond_1
    :goto_0
    return-void
.end method

.method public startTimer()V
    .locals 7

    .line 420
    new-instance v6, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$5;

    const-wide/16 v2, 0x3a98

    const-wide/16 v4, 0x3e8

    move-object v0, v6

    move-object v1, p0

    invoke-direct/range {v0 .. v5}, Lcom/mediatek/engineermode/worldmode/WorldModeActivity$5;-><init>(Lcom/mediatek/engineermode/worldmode/WorldModeActivity;JJ)V

    iput-object v6, p0, Lcom/mediatek/engineermode/worldmode/WorldModeActivity;->timer:Landroid/os/CountDownTimer;

    .line 435
    invoke-virtual {v6}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 436
    return-void
.end method
