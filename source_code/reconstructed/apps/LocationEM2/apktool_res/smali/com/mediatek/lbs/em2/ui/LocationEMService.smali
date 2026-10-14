.class public Lcom/mediatek/lbs/em2/ui/LocationEMService;
.super Landroid/app/Service;
.source "LocationEMService.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method

.method private getLaunchIntent(Landroid/content/Context;)Landroid/content/Intent;
    .locals 1

    .line 48
    new-instance p0, Landroid/content/Intent;

    const-class v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;

    invoke-direct {p0, p1, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    return-object p0
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 84
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_LocationEMService"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private setServiceForeground()V
    .locals 7

    const-string v0, "setServiceForeground"

    .line 53
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->log(Ljava/lang/Object;)V

    const-string v0, "notification"

    .line 58
    invoke-virtual {p0, v0}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 60
    new-instance v1, Landroid/app/NotificationChannel;

    const-string v2, "mtk_app_channel_id"

    const-string v3, "MTK APP"

    const/4 v4, 0x2

    invoke-direct {v1, v2, v3, v4}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    const/4 v3, 0x0

    .line 62
    invoke-virtual {v1, v3}, Landroid/app/NotificationChannel;->enableLights(Z)V

    const/high16 v4, -0x10000

    .line 63
    invoke-virtual {v1, v4}, Landroid/app/NotificationChannel;->setLightColor(I)V

    .line 64
    invoke-virtual {v1, v3}, Landroid/app/NotificationChannel;->enableVibration(Z)V

    .line 65
    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 68
    invoke-direct {p0, p0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->getLaunchIntent(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object v0

    .line 67
    invoke-static {p0, v3, v0, v3}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 69
    new-instance v1, Landroid/app/Notification$Builder;

    invoke-direct {v1, p0}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    const/4 v4, 0x1

    .line 70
    invoke-virtual {v1, v4}, Landroid/app/Notification$Builder;->setAutoCancel(Z)Landroid/app/Notification$Builder;

    move-result-object v1

    const-string v5, "LocationEM Service"

    .line 71
    invoke-virtual {v1, v5}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v1

    const-string v5, "Service is Running! Tap to launch Activity."

    .line 72
    invoke-virtual {v1, v5}, Landroid/app/Notification$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v1

    .line 73
    invoke-virtual {v1, v0}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object v0

    const v1, 0x7f040005

    .line 74
    invoke-virtual {v0, v1}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 75
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v0, v5, v6}, Landroid/app/Notification$Builder;->setWhen(J)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 76
    invoke-virtual {v0, v2}, Landroid/app/Notification$Builder;->setChannel(Ljava/lang/String;)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 77
    invoke-virtual {v0}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    new-array v1, v4, [Ljava/lang/Object;

    aput-object v0, v1, v3

    const-string v2, "notification = %s"

    .line 79
    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->log(Ljava/lang/Object;)V

    const/16 v1, 0x5678

    .line 80
    invoke-virtual {p0, v1, v0}, Landroid/app/Service;->startForeground(ILandroid/app/Notification;)V

    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    const/4 p0, 0x0

    return-object p0
.end method

.method public onCreate()V
    .locals 1

    const-string v0, "onCreate"

    .line 24
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->log(Ljava/lang/Object;)V

    .line 26
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 27
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->setServiceForeground()V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    const-string v0, "onDestroy"

    .line 42
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->log(Ljava/lang/Object;)V

    .line 43
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    const/4 v0, 0x1

    .line 44
    invoke-virtual {p0, v0}, Landroid/app/Service;->stopForeground(Z)V

    return-void
.end method

.method public onStart(Landroid/content/Intent;I)V
    .locals 0

    const-string p0, "onStart"

    .line 39
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->log(Ljava/lang/Object;)V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 1

    const-string v0, "onStartCommand"

    .line 33
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LocationEMService;->log(Ljava/lang/Object;)V

    .line 34
    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    move-result p0

    return p0
.end method
