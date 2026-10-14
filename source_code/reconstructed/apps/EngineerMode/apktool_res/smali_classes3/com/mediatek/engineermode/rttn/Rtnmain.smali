.class public Lcom/mediatek/engineermode/rttn/Rtnmain;
.super Landroid/app/Activity;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_profile_update;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$handle_view_click;,
        Lcom/mediatek/engineermode/rttn/Rtnmain$Rtnmain_async_task;
    }
.end annotation


# static fields
.field private static final DEVICE_UPDATE:I = 0x3

.field private static final DIALOG_BIP_TIMEOUT:I = 0x259

.field private static final EVENT_POLL_MDN:I = 0x3

.field private static final EVENT_RESET_MDN:I = 0x2

.field private static final EVENT_SET_MDN:I = 0x1

.field private static final FACTORY_REST_PERMISSION:Ljava/lang/String; = "android.permission.MASTER_CLEAR"

.field private static final FAIL:I = 0x0

.field private static final MAX_TIME:I = 0xbb8

.field private static final MSG_POLL:I = 0x3

.field private static final MSG_QUERY:I = 0x2

.field private static final MSG_QUERY_POLL:I = 0x4

.field private static final MSG_SET:I = 0x1

.field private static final PASS:I = 0x1

.field private static final POLL_TIME:I = 0x7d0

.field private static final PREFERRED_APN_URI:Ljava/lang/String; = "content://telephony/carriers/preferapn"

.field private static final PRL_UPDATE:I = 0x2

.field private static final PROFILE_UPDATE:I = 0x1

.field public static RIL_NV_DEVICE_MSL:I = 0x0

.field private static TAG:Ljava/lang/String; = null

.field private static final UNKNOWN:I = -0x1

.field private static final WAIT_TIME:I = 0x258

.field private static atcmd:[Ljava/lang/String; = null

.field private static final cgla_code:Ljava/lang/String; = " 4, \"9000\""

.field private static ch_id:I

.field private static ch_id_s:Ljava/lang/String;

.field private static handler:Landroid/os/Handler;

.field private static mBtReBoot:Landroid/widget/Button;

.field private static mIsPolling:Z

.field private static mObject:Ljava/lang/Object;

.field private static mResult:I

.field private static progressDialog:Landroid/app/ProgressDialog;

.field protected static rtn_msl:Ljava/lang/String;

.field private static sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

.field private static sContext:Landroid/content/Context;

.field private static sCurrentUpdate:I

.field private static sIsBipReceiverRegistered:Z

.field private static sIsBipSessionStarted:Z

.field private static sMainHandler:Landroid/os/Handler;

.field public static sim_id:I

.field private static wt:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;


# instance fields
.field private final RtnOnSubscriptionsChangeListener:Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;

.field private mPollRunnable:Ljava/lang/Runnable;

.field private mReceiverTimer:Landroid/os/CountDownTimer;

.field protected mResponseHander:Landroid/os/Handler;

.field private mSubscriptionManager:Landroid/telephony/SubscriptionManager;

.field protected tm:Landroid/telephony/TelephonyManager;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 48
    const-string v0, "EM/Rtnmain"

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    .line 49
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->handler:Landroid/os/Handler;

    .line 58
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    sput-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->mObject:Ljava/lang/Object;

    .line 59
    const/4 v1, -0x1

    sput v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResult:I

    .line 60
    const/16 v1, 0xb

    sput v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->RIL_NV_DEVICE_MSL:I

    .line 61
    const/4 v1, 0x0

    sput v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    .line 73
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mBtReBoot:Landroid/widget/Button;

    .line 74
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    .line 76
    const/4 v2, 0x4

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    .line 77
    sput-boolean v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->mIsPolling:Z

    .line 78
    sput-boolean v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipReceiverRegistered:Z

    .line 79
    sput-boolean v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipSessionStarted:Z

    .line 80
    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/String;

    sput-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    .line 81
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->wt:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    .line 84
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->progressDialog:Landroid/app/ProgressDialog;

    .line 85
    sput v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sCurrentUpdate:I

    .line 86
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    .line 88
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 47
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 207
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$1;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->RtnOnSubscriptionsChangeListener:Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;

    .line 875
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$2;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mPollRunnable:Ljava/lang/Runnable;

    .line 883
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$3;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResponseHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000()Ljava/lang/String;
    .locals 1

    .line 47
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100()Landroid/app/ProgressDialog;
    .locals 1

    .line 47
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->progressDialog:Landroid/app/ProgressDialog;

    return-object v0
.end method

.method static synthetic access$1000()Ljava/lang/Object;
    .locals 1

    .line 47
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mObject:Ljava/lang/Object;

    return-object v0
.end method

.method static synthetic access$102(Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;
    .locals 0
    .param p0, "x0"    # Landroid/app/ProgressDialog;

    .line 47
    sput-object p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->progressDialog:Landroid/app/ProgressDialog;

    return-object p0
.end method

.method static synthetic access$1100()Ljava/lang/String;
    .locals 1

    .line 47
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1102(Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Ljava/lang/String;

    .line 47
    sput-object p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1202(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 47
    sput p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResult:I

    return p0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/rttn/Rtnmain;)Ljava/lang/Runnable;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 47
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mPollRunnable:Ljava/lang/Runnable;

    return-object v0
.end method

.method static synthetic access$1400()Landroid/os/Handler;
    .locals 1

    .line 47
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sMainHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$1502(Z)Z
    .locals 0
    .param p0, "x0"    # Z

    .line 47
    sput-boolean p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mIsPolling:Z

    return p0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/rttn/Rtnmain;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 47
    invoke-direct {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->executePollingRequestForDeviceUpdate()Z

    move-result v0

    return v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 47
    invoke-direct {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->registerBipReceiver()V

    return-void
.end method

.method static synthetic access$1800()I
    .locals 1

    .line 47
    sget v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sCurrentUpdate:I

    return v0
.end method

.method static synthetic access$1802(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 47
    sput p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sCurrentUpdate:I

    return p0
.end method

.method static synthetic access$1900()Z
    .locals 1

    .line 47
    sget-boolean v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipSessionStarted:Z

    return v0
.end method

.method static synthetic access$1902(Z)Z
    .locals 0
    .param p0, "x0"    # Z

    .line 47
    sput-boolean p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipSessionStarted:Z

    return p0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/rttn/Rtnmain;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 47
    invoke-direct {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->unregisterBipReceiver()V

    return-void
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/rttn/Rtnmain;)Landroid/os/CountDownTimer;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;

    .line 47
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    return-object v0
.end method

.method static synthetic access$2102(Lcom/mediatek/engineermode/rttn/Rtnmain;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rttn/Rtnmain;
    .param p1, "x1"    # Landroid/os/CountDownTimer;

    .line 47
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    return-object p1
.end method

.method static synthetic access$902(Landroid/os/Handler;)Landroid/os/Handler;
    .locals 0
    .param p0, "x0"    # Landroid/os/Handler;

    .line 47
    sput-object p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->handler:Landroid/os/Handler;

    return-object p0
.end method

.method private executePollingRequestForDeviceUpdate()Z
    .locals 5

    .line 821
    const/4 v0, 0x0

    .line 822
    .local v0, "status":Z
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->updateProfileStatusCheck()I

    move-result v1

    .line 823
    .local v1, "failed_flag":I
    sget-boolean v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->mIsPolling:Z

    const/4 v3, 0x1

    if-ne v2, v3, :cond_0

    .line 824
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v3, "Polling is enabled. So no further action."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 825
    return v0

    .line 827
    :cond_0
    const/4 v0, 0x1

    .line 828
    sget v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sCurrentUpdate:I

    if-eq v2, v3, :cond_5

    const/4 v4, 0x2

    if-eq v2, v4, :cond_3

    const/4 v4, 0x3

    if-eq v2, v4, :cond_1

    goto/16 :goto_0

    .line 852
    :cond_1
    if-nez v1, :cond_2

    .line 853
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    const v4, 0x7f0a02bd

    .line 854
    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 853
    invoke-static {v2, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 854
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 855
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v3, "The device update check succeed"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 857
    :cond_2
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    const v4, 0x7f0a02be

    .line 858
    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 857
    invoke-static {v2, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 858
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 859
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "The device update failed at flag: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 861
    goto/16 :goto_0

    .line 841
    :cond_3
    if-nez v1, :cond_4

    .line 842
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    const v4, 0x7f0a04fe

    .line 843
    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 842
    invoke-static {v2, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 843
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 844
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v3, "The PRL update status check succeed"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 846
    :cond_4
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    const v4, 0x7f0a04ff

    .line 847
    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 846
    invoke-static {v2, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 847
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 848
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "The PRL update failed at flag: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 850
    goto :goto_0

    .line 830
    :cond_5
    if-nez v1, :cond_6

    .line 831
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    const v4, 0x7f0a0503

    .line 832
    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 831
    invoke-static {v2, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 832
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 833
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v3, "The Profile update status check succeed"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 835
    :cond_6
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    const v4, 0x7f0a0504

    .line 836
    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 835
    invoke-static {v2, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 836
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 837
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "The Profile update failed at flag: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 839
    nop

    .line 865
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->progressDialog:Landroid/app/ProgressDialog;

    if-eqz v2, :cond_7

    .line 866
    invoke-virtual {v2}, Landroid/app/ProgressDialog;->dismiss()V

    .line 867
    const/4 v2, 0x0

    sput-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->progressDialog:Landroid/app/ProgressDialog;

    .line 868
    const/4 v2, 0x0

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sCurrentUpdate:I

    .line 869
    sput-boolean v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipSessionStarted:Z

    .line 870
    invoke-direct {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->unregisterBipReceiver()V

    .line 872
    :cond_7
    return v0
.end method

.method public static factoryResetSim()I
    .locals 11

    .line 763
    const/4 v0, 0x0

    .line 764
    .local v0, "ret":Z
    const/4 v1, 0x0

    .line 766
    .local v1, "failed_flag":I
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v3, "AT+CCHO=\"A00000003053F11083050101525354\""

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 767
    const-string v3, "+CCHO:"

    const/4 v5, 0x1

    aput-object v3, v2, v5

    .line 768
    const/4 v3, 0x2

    const-string v6, "DESTRILD:C2K"

    aput-object v6, v2, v3

    .line 770
    aget-object v7, v2, v4

    invoke-static {v2, v3, v7}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 771
    if-eqz v0, :cond_3

    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    if-nez v2, :cond_0

    goto/16 :goto_2

    .line 777
    :cond_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "[factoryResetSim] ch_id_s = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 780
    :try_start_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 783
    goto :goto_0

    .line 781
    :catch_0
    move-exception v2

    .line 782
    .local v2, "e":Ljava/lang/Exception;
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v8, "[factoryResetSim] Wrong ch_id_s mode format"

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 784
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    const-string v2, ""

    .line 786
    .local v2, "cgla":Ljava/lang/String;
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "%02d"

    new-array v9, v5, [Ljava/lang/Object;

    sget v10, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "B1000000"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v2, v7

    .line 789
    goto :goto_1

    .line 787
    :catch_1
    move-exception v7

    .line 788
    .local v7, "e":Ljava/lang/Exception;
    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v9, "[factoryResetSim] Wrong ch_id mode format"

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 790
    .end local v7    # "e":Ljava/lang/Exception;
    :goto_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CGLA="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0xa

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 791
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CGLA: 4, \"9000\""

    aput-object v8, v7, v5

    .line 792
    aput-object v6, v7, v3

    .line 794
    aget-object v8, v7, v4

    invoke-static {v7, v3, v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 795
    if-nez v0, :cond_1

    .line 796
    const/4 v1, 0x2

    .line 797
    return v1

    .line 799
    :cond_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CCHC="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 800
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CCHC:"

    aput-object v8, v7, v5

    .line 801
    aput-object v6, v7, v3

    .line 803
    aget-object v4, v7, v4

    invoke-static {v7, v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 804
    if-nez v0, :cond_2

    .line 805
    const/4 v1, 0x3

    .line 806
    return v1

    .line 808
    :cond_2
    return v1

    .line 772
    .end local v2    # "cgla":Ljava/lang/String;
    :cond_3
    :goto_2
    const/4 v1, 0x1

    .line 773
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[factoryResetSim] "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    aget-object v4, v5, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " reply failed, ch_id_s: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " ret: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 775
    return v1
.end method

.method public static factoryUpdatePrl()I
    .locals 11

    .line 702
    const/4 v0, 0x0

    .line 704
    .local v0, "ret":Z
    const/4 v1, 0x0

    .line 706
    .local v1, "failed_flag":I
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v3, "AT+CCHO=\"A00000003044F11566630101434931\""

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 707
    const-string v3, "+CCHO:"

    const/4 v5, 0x1

    aput-object v3, v2, v5

    .line 708
    const/4 v3, 0x2

    const-string v6, "DESTRILD:C2K"

    aput-object v6, v2, v3

    .line 710
    aget-object v7, v2, v4

    invoke-static {v2, v3, v7}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 711
    if-eqz v0, :cond_3

    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    if-nez v2, :cond_0

    goto/16 :goto_2

    .line 716
    :cond_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "ch_id_s = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 719
    :try_start_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 722
    goto :goto_0

    .line 720
    :catch_0
    move-exception v2

    .line 721
    .local v2, "e":Ljava/lang/Exception;
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v8, "[factoryUpdateUicc] Wrong ch_id_s mode format"

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 723
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    const-string v2, ""

    .line 725
    .local v2, "cgla":Ljava/lang/String;
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "%02d"

    new-array v9, v5, [Ljava/lang/Object;

    sget v10, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "A200000102"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v2, v7

    .line 728
    goto :goto_1

    .line 726
    :catch_1
    move-exception v7

    .line 727
    .local v7, "e":Ljava/lang/Exception;
    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v9, "[factoryUpdateUicc] Wrong ch_id mode format"

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 729
    .end local v7    # "e":Ljava/lang/Exception;
    :goto_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CGLA="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0xc

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 730
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CGLA: 4, \"9000\""

    aput-object v8, v7, v5

    .line 731
    aput-object v6, v7, v3

    .line 733
    aget-object v8, v7, v4

    invoke-static {v7, v3, v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 734
    if-nez v0, :cond_1

    .line 735
    const/4 v1, 0x2

    .line 736
    return v1

    .line 738
    :cond_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CCHC="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 739
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CCHC:"

    aput-object v8, v7, v5

    .line 740
    aput-object v6, v7, v3

    .line 742
    aget-object v4, v7, v4

    invoke-static {v7, v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 743
    if-nez v0, :cond_2

    .line 744
    const/4 v1, 0x3

    .line 745
    return v1

    .line 747
    :cond_2
    return v1

    .line 712
    .end local v2    # "cgla":Ljava/lang/String;
    :cond_3
    :goto_2
    const/4 v1, 0x1

    .line 713
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[factoryUpdatePrl]"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    aget-object v4, v5, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " reply failed"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 714
    return v1
.end method

.method public static factoryUpdateProfile()I
    .locals 11

    .line 643
    const/4 v0, 0x0

    .line 644
    .local v0, "ret":Z
    const/4 v1, 0x0

    .line 646
    .local v1, "failed_flag":I
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v3, "AT+CCHO=\"A00000003044F11566630101434931\""

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 647
    const-string v3, "+CCHO:"

    const/4 v5, 0x1

    aput-object v3, v2, v5

    .line 648
    const/4 v3, 0x2

    const-string v6, "DESTRILD:C2K"

    aput-object v6, v2, v3

    .line 650
    aget-object v7, v2, v4

    invoke-static {v2, v3, v7}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 651
    if-eqz v0, :cond_3

    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    if-nez v2, :cond_0

    goto/16 :goto_2

    .line 656
    :cond_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "ch_id_s = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 658
    :try_start_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 661
    goto :goto_0

    .line 659
    :catch_0
    move-exception v2

    .line 660
    .local v2, "e":Ljava/lang/Exception;
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v8, "[factoryUpdateUicc] Wrong ch_id_s mode format"

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 662
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    const-string v2, ""

    .line 664
    .local v2, "cgla":Ljava/lang/String;
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "%02d"

    new-array v9, v5, [Ljava/lang/Object;

    sget v10, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "A200000101"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v2, v7

    .line 667
    goto :goto_1

    .line 665
    :catch_1
    move-exception v7

    .line 666
    .local v7, "e":Ljava/lang/Exception;
    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v9, "[factoryUpdateUicc] Wrong ch_id mode format"

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 668
    .end local v7    # "e":Ljava/lang/Exception;
    :goto_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CGLA="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0xc

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 669
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CGLA: 4, \"9000\""

    aput-object v8, v7, v5

    .line 670
    aput-object v6, v7, v3

    .line 672
    aget-object v8, v7, v4

    invoke-static {v7, v3, v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 673
    if-nez v0, :cond_1

    .line 674
    const/4 v1, 0x2

    .line 675
    return v1

    .line 677
    :cond_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CCHC="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 678
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CCHC:"

    aput-object v8, v7, v5

    .line 679
    aput-object v6, v7, v3

    .line 681
    aget-object v4, v7, v4

    invoke-static {v7, v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 682
    if-nez v0, :cond_2

    .line 683
    const/4 v1, 0x3

    .line 684
    return v1

    .line 686
    :cond_2
    return v1

    .line 652
    .end local v2    # "cgla":Ljava/lang/String;
    :cond_3
    :goto_2
    const/4 v1, 0x1

    .line 653
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[factoryUpdateProfile]"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    aget-object v4, v5, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " reply failed"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 654
    return v1
.end method

.method public static factoryUpdateUicc()I
    .locals 11

    .line 582
    const/4 v0, 0x0

    .line 584
    .local v0, "ret":Z
    const/4 v1, 0x0

    .line 586
    .local v1, "failed_flag":I
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v3, "AT+CCHO=\"A00000003044F11566630101434931\""

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 587
    const-string v3, "+CCHO:"

    const/4 v5, 0x1

    aput-object v3, v2, v5

    .line 588
    const/4 v3, 0x2

    const-string v6, "DESTRILD:C2K"

    aput-object v6, v2, v3

    .line 590
    aget-object v7, v2, v4

    invoke-static {v2, v3, v7}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 591
    if-eqz v0, :cond_3

    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    if-nez v2, :cond_0

    goto/16 :goto_2

    .line 596
    :cond_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "ch_id_s = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 599
    :try_start_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 602
    goto :goto_0

    .line 600
    :catch_0
    move-exception v2

    .line 601
    .local v2, "e":Ljava/lang/Exception;
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v8, "[factoryUpdateUicc]Wrong ch_id_s mode format"

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 603
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    const-string v2, ""

    .line 605
    .local v2, "cgla":Ljava/lang/String;
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "%02d"

    new-array v9, v5, [Ljava/lang/Object;

    sget v10, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "A200000100"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v2, v7

    .line 608
    goto :goto_1

    .line 606
    :catch_1
    move-exception v7

    .line 607
    .local v7, "e":Ljava/lang/Exception;
    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v9, "Wrong ch_id mode format"

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 609
    .end local v7    # "e":Ljava/lang/Exception;
    :goto_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CGLA="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0xc

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 610
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CGLA: 4, \"9000\""

    aput-object v8, v7, v5

    .line 611
    aput-object v6, v7, v3

    .line 613
    aget-object v8, v7, v4

    invoke-static {v7, v3, v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 614
    if-nez v0, :cond_1

    .line 615
    const/4 v1, 0x2

    .line 616
    return v1

    .line 618
    :cond_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CCHC="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 619
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CCHC:"

    aput-object v8, v7, v5

    .line 620
    aput-object v6, v7, v3

    .line 622
    aget-object v4, v7, v4

    invoke-static {v7, v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 623
    if-nez v0, :cond_2

    .line 624
    const/4 v1, 0x3

    .line 625
    return v1

    .line 627
    :cond_2
    return v1

    .line 592
    .end local v2    # "cgla":Ljava/lang/String;
    :cond_3
    :goto_2
    const/4 v1, 0x1

    .line 593
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[factoryUpdateUicc]"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    aget-object v4, v5, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " reply failed"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 594
    return v1
.end method

.method private getPreferApnUri(I)Landroid/net/Uri;
    .locals 4
    .param p1, "subId"    # I

    .line 812
    const-string v0, "content://telephony/carriers/preferapn"

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "/subId/"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/net/Uri;->withAppendedPath(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 814
    .local v0, "preferredUri":Landroid/net/Uri;
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getPreferredApnUri: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 817
    return-object v0
.end method

.method private registerBipReceiver()V
    .locals 4

    .line 245
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 246
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "mediatek.intent.action.BIP_STATE_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 248
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "registerBipReceiver sIsBipReceiverRegistered:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipReceiverRegistered:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " ,intentFilter:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " ,sBipStateChangeReceiver:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    sget-boolean v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipReceiverRegistered:Z

    if-eqz v1, :cond_0

    .line 252
    return-void

    .line 254
    :cond_0
    const/4 v1, 0x0

    sput-boolean v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipSessionStarted:Z

    .line 255
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    if-eqz v1, :cond_1

    .line 257
    const/4 v2, 0x1

    sput-boolean v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipReceiverRegistered:Z

    .line 258
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    invoke-virtual {v2, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 259
    invoke-direct {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->startTimer()V

    .line 261
    :cond_1
    return-void
.end method

.method private static sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z
    .locals 5
    .param p0, "cmd"    # [Ljava/lang/String;
    .param p1, "msg_id"    # I
    .param p2, "msg_name"    # Ljava/lang/String;

    .line 480
    const/4 v0, 0x0

    .line 481
    .local v0, "ret":Z
    invoke-static {p0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 482
    .local v1, "command":[Ljava/lang/String;
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "send cdma cmd: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 483
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->mObject:Ljava/lang/Object;

    monitor-enter v2

    .line 484
    const/4 v3, -0x1

    :try_start_0
    sput v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResult:I

    .line 485
    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 486
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->handler:Landroid/os/Handler;

    .line 487
    invoke-virtual {v2, p1, p2}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v2

    .line 486
    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 488
    const/4 v2, 0x0

    aget-object v2, v1, v2

    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->waitForResult(Ljava/lang/String;)Z

    move-result v0

    .line 489
    return v0

    .line 485
    :catchall_0
    move-exception v3

    :try_start_1
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v3
.end method

.method private startTimer()V
    .locals 7

    .line 1190
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    if-eqz v0, :cond_0

    .line 1191
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v1, "start timer again, cancel it"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1192
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 1193
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    .line 1195
    :cond_0
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$4;

    const-wide/32 v3, 0x927c0

    const-wide/16 v5, 0x3e8

    move-object v1, v0

    move-object v2, p0

    invoke-direct/range {v1 .. v6}, Lcom/mediatek/engineermode/rttn/Rtnmain$4;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;JJ)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    .line 1214
    invoke-virtual {v0}, Landroid/os/CountDownTimer;->start()Landroid/os/CountDownTimer;

    .line 1215
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v1, "mReceiverTimer started"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1216
    return-void
.end method

.method private unregisterBipReceiver()V
    .locals 2

    .line 264
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v1, "unregisterBipReceiver"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 265
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    if-eqz v0, :cond_0

    .line 266
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v1, "unregisterBipReceiver, cancel timer"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    invoke-virtual {v0}, Landroid/os/CountDownTimer;->cancel()V

    .line 268
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mReceiverTimer:Landroid/os/CountDownTimer;

    .line 271
    :cond_0
    sget-boolean v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipReceiverRegistered:Z

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    if-eqz v0, :cond_1

    .line 273
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    invoke-virtual {v1, v0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 274
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sIsBipReceiverRegistered:Z

    .line 276
    :cond_1
    return-void
.end method

.method public static updateProfileStatusCheck()I
    .locals 11

    .line 515
    const/4 v0, 0x0

    .line 517
    .local v0, "ret":Z
    const/4 v1, 0x0

    .line 519
    .local v1, "failed_flag":I
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v3, "AT+CCHO=\"A00000003044F11566630101434931\""

    const/4 v4, 0x0

    aput-object v3, v2, v4

    .line 520
    const-string v3, "+CCHO:"

    const/4 v5, 0x1

    aput-object v3, v2, v5

    .line 521
    const/4 v3, 0x2

    const-string v6, "DESTRILD:C2K"

    aput-object v6, v2, v3

    .line 523
    aget-object v7, v2, v4

    const/4 v8, 0x4

    invoke-static {v2, v8, v7}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 524
    sget-boolean v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->mIsPolling:Z

    const-string v7, "[updateProfileStatusCheck]"

    if-ne v2, v5, :cond_0

    .line 525
    const/4 v1, 0x4

    .line 526
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    aget-object v4, v5, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " returned special case +CME ERROR:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 528
    return v1

    .line 529
    :cond_0
    if-eqz v0, :cond_4

    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    if-nez v2, :cond_1

    goto/16 :goto_2

    .line 534
    :cond_1
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "ch_id_s = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 537
    :try_start_0
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id_s:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    sput v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 540
    goto :goto_0

    .line 538
    :catch_0
    move-exception v2

    .line 539
    .local v2, "e":Ljava/lang/Exception;
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v8, "Wrong ch_id_s mode format"

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 541
    .end local v2    # "e":Ljava/lang/Exception;
    :goto_0
    const-string v2, ""

    .line 543
    .local v2, "cgla":Ljava/lang/String;
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "%02d"

    new-array v9, v5, [Ljava/lang/Object;

    sget v10, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v9, v4

    invoke-static {v8, v9}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "A3000000"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v2, v7

    .line 546
    goto :goto_1

    .line 544
    :catch_1
    move-exception v7

    .line 545
    .local v7, "e":Ljava/lang/Exception;
    sget-object v8, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v9, "Wrong ch_id mode format"

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 547
    .end local v7    # "e":Ljava/lang/Exception;
    :goto_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CGLA="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v9, 0xa

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 548
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CGLA:"

    aput-object v8, v7, v5

    .line 549
    aput-object v6, v7, v3

    .line 551
    const/4 v8, 0x3

    aget-object v9, v7, v4

    invoke-static {v7, v8, v9}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 552
    if-nez v0, :cond_2

    sget-boolean v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->mIsPolling:Z

    if-nez v7, :cond_2

    .line 553
    const/4 v1, 0x5

    .line 554
    return v1

    .line 556
    :cond_2
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "AT+CCHC="

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/rttn/Rtnmain;->ch_id:I

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 557
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    const-string v8, "+CCHC:"

    aput-object v8, v7, v5

    .line 558
    aput-object v6, v7, v3

    .line 560
    aget-object v4, v7, v4

    invoke-static {v7, v3, v4}, Lcom/mediatek/engineermode/rttn/Rtnmain;->sendCdmaCommand([Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    .line 561
    if-nez v0, :cond_3

    .line 562
    const/4 v1, 0x6

    .line 563
    return v1

    .line 565
    :cond_3
    return v1

    .line 530
    .end local v2    # "cgla":Ljava/lang/String;
    :cond_4
    :goto_2
    const/4 v1, 0x4

    .line 531
    sget-object v2, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/rttn/Rtnmain;->atcmd:[Ljava/lang/String;

    aget-object v4, v5, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " reply failed"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 532
    return v1
.end method

.method private static waitForResult(Ljava/lang/String;)Z
    .locals 10
    .param p0, "info"    # Ljava/lang/String;

    .line 456
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v1, "waitForResult"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 457
    const/4 v0, 0x0

    .line 458
    .local v0, "ret":Z
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 459
    .local v1, "startTime":J
    sget-object v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->mObject:Ljava/lang/Object;

    monitor-enter v3

    .line 461
    const-wide/16 v4, 0xbb8

    :try_start_0
    sget-object v6, Lcom/mediatek/engineermode/rttn/Rtnmain;->mObject:Ljava/lang/Object;

    invoke-virtual {v6, v4, v5}, Ljava/lang/Object;->wait(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 464
    goto :goto_0

    .line 475
    :catchall_0
    move-exception v4

    goto/16 :goto_2

    .line 462
    :catch_0
    move-exception v6

    .line 463
    .local v6, "e":Ljava/lang/Exception;
    :try_start_1
    sget-object v7, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Exception "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 465
    .end local v6    # "e":Ljava/lang/Exception;
    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v1

    cmp-long v4, v6, v4

    if-ltz v4, :cond_0

    .line 466
    sget-object v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " : time out"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 467
    const/4 v0, 0x0

    goto :goto_1

    .line 468
    :cond_0
    sget v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResult:I

    const/4 v5, 0x1

    if-ne v4, v5, :cond_1

    .line 469
    sget-object v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " : mResult appears"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 470
    const/4 v0, 0x1

    goto :goto_1

    .line 471
    :cond_1
    sget v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->mResult:I

    if-nez v4, :cond_2

    .line 472
    sget-object v4, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " : mResult fail"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 473
    const/4 v0, 0x0

    .line 475
    :cond_2
    :goto_1
    monitor-exit v3

    .line 476
    return v0

    .line 475
    :goto_2
    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v4
.end method


# virtual methods
.method protected Masterclear()V
    .locals 4

    .line 1132
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.FACTORY_RESET"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 1133
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "android"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 1134
    const/high16 v1, 0x10000000

    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 1135
    const-string v1, "android.intent.extra.REASON"

    const-string v2, "MasterClearConfirm"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1136
    const-string v1, "android.intent.extra.WIPE_EXTERNAL_STORAGE"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1137
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "android.permission.MASTER_CLEAR"

    invoke-virtual {v1, v0, v2}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;Ljava/lang/String;)V

    .line 1138
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[Masterclear] send BroadCast "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1139
    return-void
.end method

.method public factoryResetSimInit()V
    .locals 2

    .line 493
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->wt:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    .line 494
    invoke-virtual {v0}, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->start()V

    .line 496
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sMainHandler:Landroid/os/Handler;

    .line 498
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    const-string v1, "factoryResetSimInit"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 499
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 225
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 226
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    .line 227
    const v0, 0x7f0800d3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->setContentView(I)V

    .line 228
    invoke-static {p0}, Landroid/telephony/SubscriptionManager;->from(Landroid/content/Context;)Landroid/telephony/SubscriptionManager;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mSubscriptionManager:Landroid/telephony/SubscriptionManager;

    .line 229
    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->RtnOnSubscriptionsChangeListener:Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;

    invoke-virtual {v0, v1}, Landroid/telephony/SubscriptionManager;->addOnSubscriptionsChangedListener(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V

    .line 230
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->factoryResetSimInit()V

    .line 231
    const v0, 0x7f06011b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_view_click;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_view_click;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 232
    const v0, 0x7f0600ba

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_reset_click;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 233
    const v0, 0x7f0600bc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_scrtn_reset;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 234
    const v0, 0x7f060112

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_uicc_update;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 235
    const v0, 0x7f060113

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_update_operation;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 236
    const v0, 0x7f0600b7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_profile_update;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_profile_update;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 237
    const v0, 0x7f0600b6

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->findViewById(I)Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;

    invoke-direct {v1, p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain$handle_prl_update;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;Lcom/mediatek/engineermode/rttn/Rtnmain$1;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 239
    sget-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    if-nez v0, :cond_0

    .line 240
    new-instance v0, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;-><init>(Lcom/mediatek/engineermode/rttn/Rtnmain;)V

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    .line 242
    :cond_0
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 1220
    const/16 v0, 0x259

    if-ne p1, v0, :cond_0

    .line 1221
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 1222
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    const-string v1, "Warning"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 1223
    const-string v2, "SIM didn\'t trigger BIP, please try again!"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const/4 v2, 0x0

    .line 1224
    const-string v3, "Confirm"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 1225
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 1222
    return-object v1

    .line 1227
    .end local v0    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_0
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0
.end method

.method protected onDestroy()V
    .locals 2

    .line 280
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->mSubscriptionManager:Landroid/telephony/SubscriptionManager;

    iget-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->RtnOnSubscriptionsChangeListener:Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;

    invoke-virtual {v0, v1}, Landroid/telephony/SubscriptionManager;->removeOnSubscriptionsChangedListener(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V

    .line 282
    invoke-direct {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->unregisterBipReceiver()V

    .line 283
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sContext:Landroid/content/Context;

    .line 284
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->progressDialog:Landroid/app/ProgressDialog;

    .line 285
    sput-object v0, Lcom/mediatek/engineermode/rttn/Rtnmain;->sBipStateChangeReceiver:Lcom/mediatek/engineermode/rttn/Rtnmain$BipStateChangeReceiver;

    .line 286
    return-void
.end method

.method protected onResume()V
    .locals 4

    .line 290
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 292
    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultDataSubscriptionId()I

    move-result v0

    .line 293
    .local v0, "subId":I
    const-string v1, "phone"

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    iput-object v1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain;->tm:Landroid/telephony/TelephonyManager;

    .line 294
    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getSlotIndex(I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    .line 296
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onResume subId: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 298
    sget v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    if-gez v1, :cond_0

    .line 299
    sget-object v1, Lcom/mediatek/engineermode/rttn/Rtnmain;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sim_id: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/rttn/Rtnmain;->sim_id:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 300
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const v2, 0x7f0a00a9

    .line 301
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->getString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    .line 300
    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 301
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 302
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rttn/Rtnmain;->finish()V

    .line 304
    :cond_0
    return-void
.end method
