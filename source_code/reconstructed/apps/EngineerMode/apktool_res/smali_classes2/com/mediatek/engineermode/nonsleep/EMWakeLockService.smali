.class public Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;
.super Landroid/app/Service;
.source "EMWakeLockService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/nonsleep/EMWakeLockService$LocalBinder;
    }
.end annotation


# static fields
.field private static final ID_FORE_GROUND_NOTIF:I = 0xb

.field private static final TAG:Ljava/lang/String; = "NonSleep/WakeLock"


# instance fields
.field private final mBinder:Landroid/os/IBinder;

.field private mWakeLock:Landroid/os/PowerManager$WakeLock;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 23
    new-instance v0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService$LocalBinder;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService$LocalBinder;-><init>(Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mBinder:Landroid/os/IBinder;

    .line 24
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    return-void
.end method

.method private buildNotification(Ljava/lang/Class;)Landroid/app/Notification;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Landroid/app/Activity;",
            ">;)",
            "Landroid/app/Notification;"
        }
    .end annotation

    .line 88
    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/app/Activity;>;"
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    .line 89
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getSilentNotificationChannelID()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 90
    .local v0, "builder":Landroid/support/v4/app/NotificationCompat$Builder;
    const v1, 0x1080027

    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v1

    .line 91
    const-string v2, "No Sleep Mode is Enabled"

    invoke-virtual {v1, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    move-result-object v1

    .line 92
    const-string v2, "Click Here to Switch No Sleep Mode"

    invoke-virtual {v1, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 93
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, p1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v2, 0x20000000

    invoke-virtual {v1, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    move-result-object v1

    .line 94
    .local v1, "intent":Landroid/content/Intent;
    const/4 v2, 0x0

    invoke-static {p0, v2, v1, v2}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v2

    .line 95
    .local v2, "pi":Landroid/app/PendingIntent;
    invoke-virtual {v0, v2}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 96
    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    return-object v3
.end method


# virtual methods
.method public acquire(Ljava/lang/Class;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Landroid/app/Activity;",
            ">;)V"
        }
    .end annotation

    .line 74
    .local p1, "targetClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/app/Activity;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->isHeld()Z

    move-result v0

    if-nez v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->acquire()V

    .line 76
    const/16 v0, 0xb

    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->buildNotification(Ljava/lang/Class;)Landroid/app/Notification;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->startForeground(ILandroid/app/Notification;)V

    .line 78
    :cond_0
    return-void
.end method

.method public acquire(Ljava/lang/Class;J)V
    .locals 2
    .param p2, "milliSec"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Landroid/app/Activity;",
            ">;J)V"
        }
    .end annotation

    .line 81
    .local p1, "targetClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/app/Activity;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->isHeld()Z

    move-result v0

    if-nez v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    invoke-virtual {v0, p2, p3}, Landroid/os/PowerManager$WakeLock;->acquire(J)V

    .line 83
    const/16 v0, 0xb

    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->buildNotification(Ljava/lang/Class;)Landroid/app/Notification;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->startForeground(ILandroid/app/Notification;)V

    .line 85
    :cond_0
    return-void
.end method

.method public isHeld()Z
    .locals 1

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->isHeld()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 3
    .param p1, "intent"    # Landroid/content/Intent;

    .line 51
    const-string v0, "power"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/PowerManager;

    .line 52
    .local v0, "pm":Landroid/os/PowerManager;
    if-eqz v0, :cond_0

    .line 53
    const v1, 0x1000001a

    const-string v2, "NonSleep/WakeLock"

    invoke-virtual {v0, v1, v2}, Landroid/os/PowerManager;->newWakeLock(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    .line 56
    iget-object v1, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mBinder:Landroid/os/IBinder;

    return-object v1

    .line 58
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public onCreate()V
    .locals 2

    .line 35
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 36
    const-string v0, "NonSleep/WakeLock"

    const-string v1, "onCreate()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 41
    const-string v0, "NonSleep/WakeLock"

    const-string v1, "onDestroy()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->isHeld()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 43
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->release()V

    .line 44
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    .line 46
    :cond_0
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 47
    return-void
.end method

.method public release()V
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->isHeld()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->mWakeLock:Landroid/os/PowerManager$WakeLock;

    invoke-virtual {v0}, Landroid/os/PowerManager$WakeLock;->release()V

    .line 69
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->stopForeground(Z)V

    .line 71
    :cond_0
    return-void
.end method
