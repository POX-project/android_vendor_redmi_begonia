.class public Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;
.super Landroid/app/Activity;
.source "DiagnosticMonitoringSettingActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmActivationSettingTask;,
        Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$ApmServiceSettingTask;,
        Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogPkmSettingTask;,
        Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$LogSettingTask;
    }
.end annotation


# static fields
.field private static final ACTION_START_APM_SERVICE:Ljava/lang/String; = "com.mediatek.apmonitor.ACTION_START_APM_SERVICE"

.field private static final ACTION_STOP_APM_SERVICE:Ljava/lang/String; = "com.mediatek.apmonitor.ACTION_STOP_APM_SERVICE"

.field private static final APM_PROCESS_NAME:Ljava/lang/String; = "com.mediatek.apmonitor"

.field private static final APM_SERVICE_NAME:Ljava/lang/String; = "com.mediatek.apmonitor.ApmService"

.field private static final CONTROL_APM_SERVICE_RETRY:I = 0x5

.field private static final CONTROL_APM_SERVICE_TIMEOUT:I = 0x3e8

.field private static final DLG_DM_APM_ACTIVATION_SWITCHING:I = 0x3

.field private static final DLG_DM_APM_SERVICE_SWITCHING:I = 0x2

.field private static final DLG_DM_LOG_PKM_SETTING_SWITCHING:I = 0x1

.field private static final DLG_DM_LOG_SETTING_SWITCHING:I = 0x0

.field private static final TAG:Ljava/lang/String; = "DM-Setting"

.field private static final mApmServiceComp:Landroid/content/ComponentName;


# instance fields
.field private mBtnApmActivationSetting:Landroid/widget/Button;

.field private mBtnApmServiceSetting:Landroid/widget/Button;

.field private mBtnLogPkmSetting:Landroid/widget/Button;

.field private mBtnLogSetting:Landroid/widget/Button;

.field private mDmSettingCtrl:Lcom/mediatek/engineermode/dm/DmSettingController;

.field private mTvDmcFo:Landroid/widget/TextView;

.field private mTvMapiFo:Landroid/widget/TextView;

.field private mTvMdmiFo:Landroid/widget/TextView;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 70
    new-instance v0, Landroid/content/ComponentName;

    const-string v1, "com.mediatek.apmonitor"

    const-string v2, "com.mediatek.apmonitor.ApmService"

    invoke-direct {v0, v1, v2}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mApmServiceComp:Landroid/content/ComponentName;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 65
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 77
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvDmcFo:Landroid/widget/TextView;

    .line 78
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvMapiFo:Landroid/widget/TextView;

    .line 79
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvMdmiFo:Landroid/widget/TextView;

    .line 80
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogSetting:Landroid/widget/Button;

    .line 81
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogPkmSetting:Landroid/widget/Button;

    .line 82
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    .line 83
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmActivationSetting:Landroid/widget/Button;

    .line 85
    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mDmSettingCtrl:Lcom/mediatek/engineermode/dm/DmSettingController;

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    .line 65
    invoke-direct {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->isApmServiceRunning()Z

    move-result v0

    return v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Lcom/mediatek/engineermode/dm/DmSettingController;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    .line 65
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mDmSettingCtrl:Lcom/mediatek/engineermode/dm/DmSettingController;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    .line 65
    invoke-direct {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->updateUI()V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;

    .line 65
    invoke-direct {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->isActivityAlive()Z

    move-result v0

    return v0
.end method

.method static synthetic access$700()Landroid/content/ComponentName;
    .locals 1

    .line 65
    sget-object v0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mApmServiceComp:Landroid/content/ComponentName;

    return-object v0
.end method

.method static synthetic access$800(J)V
    .locals 0
    .param p0, "x0"    # J

    .line 65
    invoke-static {p0, p1}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->sleep(J)V

    return-void
.end method

.method private isActivityAlive()Z
    .locals 3

    .line 361
    invoke-virtual {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->isFinishing()Z

    move-result v0

    .line 362
    .local v0, "isFinishing":Z
    invoke-virtual {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->isDestroyed()Z

    move-result v1

    .line 363
    .local v1, "isDestroyed":Z
    if-nez v0, :cond_0

    if-nez v1, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    return v2
.end method

.method private isApmServiceRunning()Z
    .locals 5

    .line 375
    nop

    .line 376
    const-string v0, "activity"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 377
    .local v0, "am":Landroid/app/ActivityManager;
    const v1, 0x7fffffff

    invoke-virtual {v0, v1}, Landroid/app/ActivityManager;->getRunningServices(I)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/ActivityManager$RunningServiceInfo;

    .line 378
    .local v2, "serviceInfo":Landroid/app/ActivityManager$RunningServiceInfo;
    iget-object v3, v2, Landroid/app/ActivityManager$RunningServiceInfo;->service:Landroid/content/ComponentName;

    invoke-virtual {v3}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "DM-Setting"

    invoke-static {v4, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 379
    iget-object v3, v2, Landroid/app/ActivityManager$RunningServiceInfo;->service:Landroid/content/ComponentName;

    invoke-virtual {v3}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "com.mediatek.apmonitor.ApmService"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 380
    const/4 v1, 0x1

    return v1

    .line 382
    .end local v2    # "serviceInfo":Landroid/app/ActivityManager$RunningServiceInfo;
    :cond_0
    goto :goto_0

    .line 383
    :cond_1
    const/4 v1, 0x0

    return v1
.end method

.method public static isSupport()Z
    .locals 1

    .line 354
    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmcVendorEnabled()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 355
    const/4 v0, 0x1

    return v0

    .line 357
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static sleep(J)V
    .locals 1
    .param p0, "time"    # J

    .line 368
    :try_start_0
    invoke-static {p0, p1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 371
    goto :goto_0

    .line 369
    :catch_0
    move-exception v0

    .line 370
    .local v0, "e":Ljava/lang/InterruptedException;
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 372
    .end local v0    # "e":Ljava/lang/InterruptedException;
    :goto_0
    return-void
.end method

.method private updateUI()V
    .locals 8

    .line 157
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 158
    .local v0, "dmcFoString":Ljava/lang/StringBuilder;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 159
    .local v1, "mapiFoString":Ljava/lang/StringBuilder;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 162
    .local v2, "mdmiFoString":Ljava/lang/StringBuilder;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "DMC: system("

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmcSystemEnabled()Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, ") "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 163
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "vendor("

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmcVendorEnabled()Z

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v6, ")"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 164
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvDmcFo:Landroid/widget/TextView;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 166
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "MAPI: system("

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isMapiSystemEnabled()Z

    move-result v7

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 167
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isMapiVendorEnabled()Z

    move-result v7

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 168
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvMapiFo:Landroid/widget/TextView;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 170
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "MDMI: system("

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isMdmiSystemEnabled()Z

    move-result v7

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 171
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isMdmiVendorEnabled()Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 172
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvMdmiFo:Landroid/widget/TextView;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 175
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mDmSettingCtrl:Lcom/mediatek/engineermode/dm/DmSettingController;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmLogEnabled()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 176
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogSetting:Landroid/widget/Button;

    const v4, 0x7f0a02d2

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 178
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogSetting:Landroid/widget/Button;

    const v4, 0x7f0a02d3

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    .line 181
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mDmSettingCtrl:Lcom/mediatek/engineermode/dm/DmSettingController;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/dm/DmSettingController;->isPkmLogEnabled()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 182
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogPkmSetting:Landroid/widget/Button;

    const v4, 0x7f0a02d4

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    goto :goto_1

    .line 184
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogPkmSetting:Landroid/widget/Button;

    const v4, 0x7f0a02d5

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    .line 187
    :goto_1
    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmcSystemEnabled()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 188
    invoke-direct {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->isApmServiceRunning()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 189
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    const v4, 0x7f0a02cd

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    goto :goto_2

    .line 191
    :cond_2
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    const v4, 0x7f0a02cc

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    .line 195
    :goto_2
    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmcApmActivated()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 196
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmActivationSetting:Landroid/widget/Button;

    const v4, 0x7f0a02cb

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    goto :goto_3

    .line 198
    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmActivationSetting:Landroid/widget/Button;

    const v4, 0x7f0a02ca

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    goto :goto_3

    .line 201
    :cond_4
    iget-object v3, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    const v4, 0x7f0a02ce

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setText(I)V

    .line 203
    :goto_3
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 96
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 97
    const v0, 0x7f080048

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->setContentView(I)V

    .line 99
    const v0, 0x7f06032e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvDmcFo:Landroid/widget/TextView;

    .line 100
    const v0, 0x7f06032f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvMapiFo:Landroid/widget/TextView;

    .line 101
    const v0, 0x7f060330

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mTvMdmiFo:Landroid/widget/TextView;

    .line 103
    const v0, 0x7f060332

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogSetting:Landroid/widget/Button;

    .line 104
    const v0, 0x7f060331

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogPkmSetting:Landroid/widget/Button;

    .line 105
    const v0, 0x7f06032d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    .line 106
    const v0, 0x7f06032c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmActivationSetting:Landroid/widget/Button;

    .line 108
    new-instance v0, Lcom/mediatek/engineermode/dm/DmSettingController;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/dm/DmSettingController;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mDmSettingCtrl:Lcom/mediatek/engineermode/dm/DmSettingController;

    .line 109
    invoke-direct {p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->updateUI()V

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogSetting:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$1;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 119
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnLogPkmSetting:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$2;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 127
    invoke-static {}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmcSystemEnabled()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 128
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$3;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmActivationSetting:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$4;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity$4;-><init>(Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    .line 150
    :cond_0
    const-string v0, "DM-Setting"

    const-string v1, "Not support APM service"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmServiceSetting:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 152
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->mBtnApmActivationSetting:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 154
    :goto_0
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I

    .line 331
    const/4 v0, 0x0

    .line 332
    .local v0, "dialog":Landroid/app/ProgressDialog;
    const/4 v1, 0x1

    if-eqz p1, :cond_0

    if-eq p1, v1, :cond_0

    const/4 v2, 0x2

    if-eq p1, v2, :cond_0

    const/4 v2, 0x3

    if-eq p1, v2, :cond_0

    goto :goto_0

    .line 337
    :cond_0
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    move-object v0, v2

    .line 339
    const v2, 0x7f0a02d0

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 340
    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 341
    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 342
    nop

    .line 346
    :goto_0
    return-object v0
.end method
