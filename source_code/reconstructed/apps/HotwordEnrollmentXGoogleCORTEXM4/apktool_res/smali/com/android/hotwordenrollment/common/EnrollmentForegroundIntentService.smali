.class public Lcom/android/hotwordenrollment/common/EnrollmentForegroundIntentService;
.super Landroid/app/IntentService;
.source "EnrollmentForegroundIntentService.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 39
    const-class v0, Lcom/android/hotwordenrollment/common/EnrollmentForegroundIntentService;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 45
    const-class v0, Lcom/android/hotwordenrollment/common/EnrollmentForegroundIntentService;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Landroid/app/IntentService;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method private startForegroundWithNotification()V
    .locals 7

    .line 64
    const-class v0, Lcom/android/hotwordenrollment/common/EnrollmentForegroundIntentService;

    invoke-virtual {v0}, Ljava/lang/Class;->getPackage()Ljava/lang/Package;

    move-result-object v0

    .line 66
    invoke-virtual {v0}, Ljava/lang/Package;->getName()Ljava/lang/String;

    move-result-object v0

    .line 69
    const-class v1, Lcom/android/hotwordenrollment/common/EnrollmentForegroundIntentService;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    .line 70
    new-instance v2, Landroid/app/NotificationChannel;

    const/4 v3, 0x0

    invoke-direct {v2, v0, v1, v3}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 72
    invoke-virtual {v2, v3}, Landroid/app/NotificationChannel;->setLockscreenVisibility(I)V

    .line 73
    const-class v1, Landroid/app/NotificationManager;

    .line 74
    invoke-virtual {p0, v1}, Landroid/app/IntentService;->getSystemService(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/NotificationManager;

    .line 77
    invoke-virtual {v1, v2}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 79
    new-instance v1, Landroidx/core/app/NotificationCompat$Builder;

    invoke-direct {v1, p0, v0}, Landroidx/core/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 82
    invoke-virtual {p0}, Landroid/app/IntentService;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 83
    invoke-virtual {p0}, Landroid/app/IntentService;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const-string v3, "notification_setup_language_msg"

    const-string v4, "string"

    .line 82
    invoke-virtual {v0, v3, v4, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    const/4 v2, 0x1

    .line 84
    invoke-virtual {v1, v2}, Landroidx/core/app/NotificationCompat$Builder;->setOngoing(Z)Landroidx/core/app/NotificationCompat$Builder;

    .line 85
    invoke-virtual {p0}, Landroid/app/IntentService;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {p0}, Landroid/app/IntentService;->getPackageName()Ljava/lang/String;

    move-result-object v4

    const-string v5, "ic_app"

    const-string v6, "drawable"

    invoke-virtual {v3, v5, v6, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroidx/core/app/NotificationCompat$Builder;->setSmallIcon(I)Landroidx/core/app/NotificationCompat$Builder;

    .line 86
    invoke-virtual {p0}, Landroid/app/IntentService;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroidx/core/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroidx/core/app/NotificationCompat$Builder;

    .line 87
    invoke-virtual {v1, v2}, Landroidx/core/app/NotificationCompat$Builder;->setPriority(I)Landroidx/core/app/NotificationCompat$Builder;

    const-string v0, "service"

    .line 88
    invoke-virtual {v1, v0}, Landroidx/core/app/NotificationCompat$Builder;->setCategory(Ljava/lang/String;)Landroidx/core/app/NotificationCompat$Builder;

    .line 89
    invoke-virtual {v1}, Landroidx/core/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    .line 91
    invoke-virtual {p0, v2, v0}, Landroid/app/IntentService;->startForeground(ILandroid/app/Notification;)V

    return-void
.end method


# virtual methods
.method public onCreate()V
    .locals 2

    const-string v0, "EnrollmentForegroundSrv"

    const-string v1, "onCreate"

    .line 59
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 60
    invoke-super {p0}, Landroid/app/IntentService;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    const-string v0, "EnrollmentForegroundSrv"

    const-string v1, "onDestroy"

    .line 96
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 97
    invoke-super {p0}, Landroid/app/IntentService;->onDestroy()V

    return-void
.end method

.method protected onHandleIntent(Landroid/content/Intent;)V
    .locals 2

    const-string v0, "EnrollmentForegroundSrv"

    const-string v1, "onHandleIntent"

    .line 102
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 103
    invoke-static {p1}, Lcom/android/hotwordenrollment/common/EnrollmentIntentHandler;->isValidIntent(Landroid/content/Intent;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 107
    :cond_0
    invoke-direct {p0}, Lcom/android/hotwordenrollment/common/EnrollmentForegroundIntentService;->startForegroundWithNotification()V

    .line 108
    invoke-static {p0, p1}, Lcom/android/hotwordenrollment/common/EnrollmentIntentHandler;->handleIntent(Landroid/content/Context;Landroid/content/Intent;)Z

    const/4 p1, 0x1

    .line 109
    invoke-virtual {p0, p1}, Landroid/app/IntentService;->stopForeground(Z)V

    return-void
.end method
