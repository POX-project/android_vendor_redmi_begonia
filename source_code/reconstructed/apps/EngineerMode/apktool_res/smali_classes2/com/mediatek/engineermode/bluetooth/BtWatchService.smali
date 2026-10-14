.class public Lcom/mediatek/engineermode/bluetooth/BtWatchService;
.super Landroid/app/Service;
.source "BtWatchService.java"


# static fields
.field private static final NOTIFICATION_ID:I = 0x7e4

.field private static final TAG:Ljava/lang/String; = "BtWatchService"


# instance fields
.field private final mBtStateReceiver:Landroid/content/BroadcastReceiver;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 79
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtWatchService$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BtWatchService$1;-><init>(Lcom/mediatek/engineermode/bluetooth/BtWatchService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->mBtStateReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method private buildNotification()Landroid/app/Notification;
    .locals 6

    .line 117
    const v0, 0x7f0a01c7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 118
    .local v0, "title":Ljava/lang/String;
    const v1, 0x7f0a0190

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 119
    .local v1, "content":Ljava/lang/String;
    new-instance v2, Landroid/support/v4/app/NotificationCompat$Builder;

    .line 120
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getSilentNotificationChannelID()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 121
    .local v2, "builder":Landroid/support/v4/app/NotificationCompat$Builder;
    const v3, 0x1080027

    invoke-virtual {v2, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 122
    invoke-virtual {v2, v0}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 123
    invoke-virtual {v2, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 124
    invoke-virtual {v2}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    .line 125
    .local v3, "nty":Landroid/app/Notification;
    iget v4, v3, Landroid/app/Notification;->flags:I

    or-int/lit8 v4, v4, 0x20

    iput v4, v3, Landroid/app/Notification;->flags:I

    .line 126
    new-instance v4, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    invoke-direct {v4, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 127
    .local v4, "intent":Landroid/content/Intent;
    const/high16 v5, 0x14000000

    invoke-virtual {v4, v5}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 128
    const/4 v5, 0x0

    invoke-static {p0, v5, v4, v5}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v5

    .line 129
    .local v5, "pi":Landroid/app/PendingIntent;
    invoke-virtual {v3, p0, v0, v1, v5}, Landroid/app/Notification;->setLatestEventInfo(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V

    .line 130
    return-object v3
.end method

.method public static enableService(Landroid/content/Context;Z)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "on"    # Z

    .line 68
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/bluetooth/BtWatchService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 69
    .local v0, "servIntent":Landroid/content/Intent;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "enableService:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BtWatchService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    if-eqz p1, :cond_0

    .line 71
    invoke-virtual {p0, v0}, Landroid/content/Context;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_0

    .line 73
    :cond_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->stopService(Landroid/content/Intent;)Z

    .line 76
    :goto_0
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 91
    const/4 v0, 0x0

    return-object v0
.end method

.method public onCreate()V
    .locals 3

    .line 96
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 97
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.bluetooth.adapter.action.SCAN_MODE_CHANGED"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 99
    .local v0, "btIntentFilter":Landroid/content/IntentFilter;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->mBtStateReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 100
    const-string v1, "BtWatchService"

    const-string v2, "registerReceiver"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->mBtStateReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 112
    const-string v0, "BtWatchService"

    const-string v1, "unregisterReceiver"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 114
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 2
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 105
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->buildNotification()Landroid/app/Notification;

    move-result-object v0

    const/16 v1, 0x7e4

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->startForeground(ILandroid/app/Notification;)V

    .line 106
    const/4 v0, 0x1

    return v0
.end method
