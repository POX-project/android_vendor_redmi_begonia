.class public Lcom/mediatek/ygps/YgpsService;
.super Landroid/app/Service;
.source "YgpsService.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;
    }
.end annotation


# instance fields
.field private mBinder:Landroid/os/Binder;

.field private mForeground:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 56
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    const/4 v0, 0x0

    .line 62
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsService;->mForeground:Z

    .line 63
    new-instance v0, Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/YgpsService$LocalYgpsBinder;-><init>(Lcom/mediatek/ygps/YgpsService;)V

    iput-object v0, p0, Lcom/mediatek/ygps/YgpsService;->mBinder:Landroid/os/Binder;

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

    .line 77
    new-instance v0, Landroid/app/NotificationChannel;

    const/high16 v1, 0x7f080000

    .line 78
    invoke-virtual {p0, v1}, Landroid/app/Service;->getString(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "ygps_channel_id"

    const/4 v3, 0x2

    invoke-direct {v0, v2, v1, v3}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    const-string v1, "notification"

    .line 80
    invoke-virtual {p0, v1}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/NotificationManager;

    .line 81
    invoke-virtual {v1, v0}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 82
    new-instance v0, Landroid/support/v4/app/NotificationCompat$Builder;

    invoke-direct {v0, p0, v2}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    const v1, 0x1080027

    .line 83
    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    const v1, 0x7f080002

    .line 84
    invoke-virtual {p0, v1}, Landroid/app/Service;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    const v1, 0x7f080001

    .line 85
    invoke-virtual {p0, v1}, Landroid/app/Service;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 86
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, p1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/4 p1, 0x0

    .line 87
    invoke-static {p0, p1, v1, p1}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p0

    .line 88
    invoke-virtual {v0, p0}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 89
    invoke-virtual {v0}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public dismissForeground()V
    .locals 1

    const/4 v0, 0x1

    .line 96
    invoke-virtual {p0, v0}, Landroid/app/Service;->stopForeground(Z)V

    const/4 v0, 0x0

    .line 97
    iput-boolean v0, p0, Lcom/mediatek/ygps/YgpsService;->mForeground:Z

    return-void
.end method

.method public isForeground()Z
    .locals 0

    .line 105
    iget-boolean p0, p0, Lcom/mediatek/ygps/YgpsService;->mForeground:Z

    return p0
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    .line 134
    iget-object p0, p0, Lcom/mediatek/ygps/YgpsService;->mBinder:Landroid/os/Binder;

    return-object p0
.end method

.method public onDestroy()V
    .locals 1

    .line 110
    iget-boolean v0, p0, Lcom/mediatek/ygps/YgpsService;->mForeground:Z

    if-eqz v0, :cond_0

    .line 111
    invoke-virtual {p0}, Lcom/mediatek/ygps/YgpsService;->dismissForeground()V

    :cond_0
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 0

    .line 118
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "onStartCommand "

    invoke-virtual {p0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " flags "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YGPS/Service"

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x1

    return p0
.end method

.method public requestForeground(Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Landroid/app/Activity;",
            ">;)V"
        }
    .end annotation

    .line 70
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/YgpsService;->buildNotification(Ljava/lang/Class;)Landroid/app/Notification;

    move-result-object p1

    const/16 v0, 0xa

    invoke-virtual {p0, v0, p1}, Landroid/app/Service;->startForeground(ILandroid/app/Notification;)V

    const/4 p1, 0x1

    .line 71
    iput-boolean p1, p0, Lcom/mediatek/ygps/YgpsService;->mForeground:Z

    return-void
.end method
