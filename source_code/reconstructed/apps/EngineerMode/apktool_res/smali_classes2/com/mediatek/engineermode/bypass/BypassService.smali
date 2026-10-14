.class public Lcom/mediatek/engineermode/bypass/BypassService;
.super Landroid/app/Service;
.source "BypassService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bypass/BypassService$Bypass;
    }
.end annotation


# static fields
.field private static final DEBUG:Z = true

.field private static final ID_FORE_GROUND:I = 0x133c7d9

.field private static final TAG:Ljava/lang/String; = "BypassService"


# instance fields
.field private mBypass:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method

.method private buildNotification()Landroid/app/Notification;
    .locals 6

    .line 340
    const-string v0, "BypassService"

    .line 341
    .local v0, "title":Ljava/lang/String;
    const-string v1, "Enable BypassService"

    .line 342
    .local v1, "content":Ljava/lang/String;
    new-instance v2, Landroid/support/v4/app/NotificationCompat$Builder;

    .line 343
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getSilentNotificationChannelID()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 344
    .local v2, "builder":Landroid/support/v4/app/NotificationCompat$Builder;
    const v3, 0x1080027

    invoke-virtual {v2, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 345
    invoke-virtual {v2, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 346
    invoke-virtual {v2, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 347
    invoke-virtual {v2}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    .line 348
    .local v3, "nty":Landroid/app/Notification;
    iget v4, v3, Landroid/app/Notification;->flags:I

    or-int/lit8 v4, v4, 0x20

    iput v4, v3, Landroid/app/Notification;->flags:I

    .line 349
    new-instance v4, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-direct {v4, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 350
    .local v4, "intent":Landroid/content/Intent;
    const/high16 v5, 0x14000000

    invoke-virtual {v4, v5}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 351
    const/4 v5, 0x0

    invoke-static {p0, v5, v4, v5}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v5

    .line 352
    .local v5, "pi":Landroid/app/PendingIntent;
    invoke-virtual {v3, p0, v0, v1, v5}, Landroid/app/Notification;->setLatestEventInfo(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V

    .line 353
    return-object v3
.end method

.method public static enableService(Landroid/content/Context;Z)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "on"    # Z

    .line 40
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 41
    .local v0, "servIntent":Landroid/content/Intent;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "enableService:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BypassService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    if-eqz p1, :cond_0

    .line 43
    invoke-virtual {p0, v0}, Landroid/content/Context;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_0

    .line 45
    :cond_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->stopService(Landroid/content/Intent;)Z

    .line 48
    :goto_0
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 309
    const/4 v0, 0x0

    return-object v0
.end method

.method public onCreate()V
    .locals 3

    .line 314
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 315
    const-string v0, "BypassService"

    const-string v1, "onCreate"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    new-instance v1, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/bypass/BypassService$Bypass;-><init>(Lcom/mediatek/engineermode/bypass/BypassService;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/bypass/BypassService;->mBypass:Lcom/mediatek/engineermode/bypass/BypassService$Bypass;

    .line 318
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    const-string v2, "1"

    invoke-interface {v1, v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setBypassService(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 322
    goto :goto_0

    .line 319
    :catch_0
    move-exception v1

    .line 320
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "set property failed ..."

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 321
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 323
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 334
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/bypass/BypassService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bypass/BypassService;->stopService(Landroid/content/Intent;)Z

    .line 335
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 336
    const-string v0, "BypassService"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 337
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 2
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 327
    invoke-direct {p0}, Lcom/mediatek/engineermode/bypass/BypassService;->buildNotification()Landroid/app/Notification;

    move-result-object v0

    const v1, 0x133c7d9

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/bypass/BypassService;->startForeground(ILandroid/app/Notification;)V

    .line 328
    const-string v0, "BypassService"

    const-string v1, "onStartCommand"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 329
    const/4 v0, 0x1

    return v0
.end method
