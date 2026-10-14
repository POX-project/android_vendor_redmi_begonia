.class public Lcom/mediatek/engineermode/bluetooth/BleScanService;
.super Landroid/app/Service;
.source "BleScanService.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "BleScanService"


# instance fields
.field private final mBtStateReceiver:Landroid/content/BroadcastReceiver;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 52
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 71
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BleScanService$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BleScanService$1;-><init>(Lcom/mediatek/engineermode/bluetooth/BleScanService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleScanService;->mBtStateReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method public static enableService(Landroid/content/Context;Z)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "on"    # Z

    .line 62
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/bluetooth/BleScanService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 63
    .local v0, "servIntent":Landroid/content/Intent;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "enableService:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BleScanService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 64
    if-eqz p1, :cond_0

    .line 65
    invoke-virtual {p0, v0}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_0

    .line 67
    :cond_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->stopService(Landroid/content/Intent;)Z

    .line 69
    :goto_0
    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 85
    const/4 v0, 0x0

    return-object v0
.end method

.method public onCreate()V
    .locals 3

    .line 90
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 91
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.bluetooth.adapter.action.STATE_CHANGED"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 93
    .local v0, "btIntentFilter":Landroid/content/IntentFilter;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleScanService;->mBtStateReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BleScanService;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 94
    const-string v1, "BleScanService"

    const-string v2, "registerReceiver"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 95
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleScanService;->mBtStateReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleScanService;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 105
    const-string v0, "BleScanService"

    const-string v1, "unregisterReceiver"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 107
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 99
    const/4 v0, 0x1

    return v0
.end method
