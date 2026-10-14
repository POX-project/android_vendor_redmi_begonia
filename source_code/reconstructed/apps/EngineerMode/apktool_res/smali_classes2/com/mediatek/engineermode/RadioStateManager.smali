.class public Lcom/mediatek/engineermode/RadioStateManager;
.super Ljava/lang/Object;
.source "RadioStateManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/RadioStateManager$RadioListener;
    }
.end annotation


# static fields
.field public static final DIALOG_WAIT_REBOOT:I = 0x3e9

.field public static final MSG_RADIO_STATE_CHANGED:I = 0x7d1

.field public static final TAG:Ljava/lang/String; = "RadioStateManager"

.field public static final WAIT_TIME:I = 0x1e


# instance fields
.field private mActivity:Landroid/app/Activity;

.field private final mHandler:Landroid/os/Handler;

.field private mRadioListener:Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

.field private mResetMdDialog:Landroid/app/ProgressDialog;

.field private mTimer:Landroid/os/CountDownTimer;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 128
    new-instance v0, Lcom/mediatek/engineermode/RadioStateManager$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/RadioStateManager$2;-><init>(Lcom/mediatek/engineermode/RadioStateManager;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mHandler:Landroid/os/Handler;

    .line 31
    iput-object p1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mActivity:Landroid/app/Activity;

    .line 32
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/RadioStateManager;

    .line 16
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/RadioStateManager;

    .line 16
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mRadioListener:Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/os/CountDownTimer;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/RadioStateManager;

    .line 16
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    return-object v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/RadioStateManager;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/RadioStateManager;
    .param p1, "x1"    # Landroid/os/CountDownTimer;

    .line 16
    iput-object p1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    return-object p1
.end method

.method private startTimer()V
    .locals 8

    .line 94
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    const-string v1, "RadioStateManager"

    if-eqz v0, :cond_0

    .line 95
    const-string v0, "start timer again, cancel it"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 97
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    .line 99
    :cond_0
    new-instance v0, Lcom/mediatek/engineermode/RadioStateManager$1;

    const-wide/16 v4, 0x7530

    const-wide/16 v6, 0x3e8

    move-object v2, v0

    move-object v3, p0

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/RadioStateManager$1;-><init>(Lcom/mediatek/engineermode/RadioStateManager;JJ)V

    iput-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    .line 124
    invoke-virtual {v0}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 125
    const-string v0, "timer started"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    return-void
.end method


# virtual methods
.method public getRebootModemDialog()Landroid/app/ProgressDialog;
    .locals 2

    .line 82
    const-string v0, "RadioStateManager"

    const-string v1, "+++getRebootModemDialog+++"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    new-instance v0, Landroid/app/ProgressDialog;

    iget-object v1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mActivity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    .line 84
    const-string v1, "Waiting"

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 85
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    const-string v1, "Please wait until modem reset succeed"

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 87
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 88
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method public rebootModem()V
    .locals 2

    .line 75
    invoke-direct {p0}, Lcom/mediatek/engineermode/RadioStateManager;->startTimer()V

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mActivity:Landroid/app/Activity;

    const/16 v1, 0x3e9

    invoke-virtual {v0, v1}, Landroid/app/Activity;->showDialog(I)V

    .line 77
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->rebootModem()V

    .line 78
    return-void
.end method

.method public registerRadioStateChanged(Lcom/mediatek/engineermode/RadioStateManager$RadioListener;)V
    .locals 3
    .param p1, "listener"    # Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    .line 39
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    const/16 v2, 0x7d1

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/EmUtils;->registerForradioStateChanged(ILandroid/os/Handler;I)V

    .line 40
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "registerRadioStateChanged "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RadioStateManager"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    iput-object p1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mRadioListener:Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    .line 42
    return-void
.end method

.method public setAirplaneModeEnabled(Z)V
    .locals 0
    .param p1, "on"    # Z

    .line 62
    invoke-direct {p0}, Lcom/mediatek/engineermode/RadioStateManager;->startTimer()V

    .line 63
    invoke-static {p1}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 64
    return-void
.end method

.method public unregisterRadioStateChanged()V
    .locals 2

    .line 48
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->unregisterradioStateChanged(I)V

    .line 49
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 50
    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 51
    iput-object v1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mTimer:Landroid/os/CountDownTimer;

    .line 53
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    if-eqz v0, :cond_1

    .line 54
    invoke-virtual {v0}, Landroid/app/ProgressDialog;->dismiss()V

    .line 55
    iput-object v1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mResetMdDialog:Landroid/app/ProgressDialog;

    .line 57
    :cond_1
    iput-object v1, p0, Lcom/mediatek/engineermode/RadioStateManager;->mRadioListener:Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    .line 58
    return-void
.end method
