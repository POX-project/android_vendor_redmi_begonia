.class public Lcom/mediatek/engineermode/nonsleep/NonSleepMode;
.super Landroid/app/Activity;
.source "NonSleepMode.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/content/ServiceConnection;


# static fields
.field private static final TAG:Ljava/lang/String; = "NonSleep"


# instance fields
.field private mSetButton:Landroid/widget/Button;

.field private mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 61
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 65
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    return-void
.end method

.method private static isServiceRunning(Landroid/content/Context;Ljava/lang/Class;)Z
    .locals 7
    .param p0, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "+",
            "Landroid/app/Service;",
            ">;)Z"
        }
    .end annotation

    .line 68
    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/app/Service;>;"
    const/4 v0, 0x0

    .line 69
    .local v0, "isRunning":Z
    const-string v1, "activity"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/ActivityManager;

    .line 70
    .local v1, "am":Landroid/app/ActivityManager;
    const/16 v2, 0x64

    .line 71
    .local v2, "maxCount":I
    invoke-virtual {v1, v2}, Landroid/app/ActivityManager;->getRunningServices(I)Ljava/util/List;

    move-result-object v3

    .line 72
    .local v3, "runningServices":Ljava/util/List;, "Ljava/util/List<Landroid/app/ActivityManager$RunningServiceInfo;>;"
    :goto_0
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v4

    if-ne v4, v2, :cond_0

    .line 73
    add-int/lit8 v2, v2, 0x32

    .line 74
    invoke-virtual {v1, v2}, Landroid/app/ActivityManager;->getRunningServices(I)Ljava/util/List;

    move-result-object v3

    goto :goto_0

    .line 77
    :cond_0
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_1
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_2

    .line 78
    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/app/ActivityManager$RunningServiceInfo;

    .line 79
    .local v5, "info":Landroid/app/ActivityManager$RunningServiceInfo;
    iget-object v6, v5, Landroid/app/ActivityManager$RunningServiceInfo;->service:Landroid/content/ComponentName;

    invoke-virtual {v6}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v6

    invoke-virtual {v6, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 80
    const/4 v0, 0x1

    .line 81
    goto :goto_2

    .line 77
    .end local v5    # "info":Landroid/app/ActivityManager$RunningServiceInfo;
    :cond_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 84
    .end local v4    # "i":I
    :cond_2
    :goto_2
    return v0
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "arg0"    # Landroid/view/View;

    .line 127
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    if-ne p1, v0, :cond_1

    .line 128
    const v0, 0x7f0a048b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->getString(I)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    .line 129
    invoke-virtual {v2}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    .line 128
    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 130
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    const v1, 0x7f0a048a

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 131
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->isHeld()Z

    move-result v0

    if-nez v0, :cond_1

    .line 132
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    const-class v1, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->acquire(Ljava/lang/Class;)V

    goto :goto_0

    .line 135
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setText(I)V

    .line 136
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->isHeld()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 137
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->release()V

    .line 141
    :cond_1
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 89
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 90
    const v0, 0x7f0800b2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->setContentView(I)V

    .line 91
    const v0, 0x7f0605b8

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    .line 93
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 94
    const-class v0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-static {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->isServiceRunning(Landroid/content/Context;Ljava/lang/Class;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 95
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    .line 97
    :cond_0
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 115
    const-class v0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-static {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->isServiceRunning(Landroid/content/Context;Ljava/lang/Class;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    if-eqz v0, :cond_0

    .line 116
    invoke-virtual {v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->isHeld()Z

    move-result v0

    if-nez v0, :cond_0

    .line 117
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->stopService(Landroid/content/Intent;)Z

    .line 119
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 120
    return-void
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 3
    .param p1, "className"    # Landroid/content/ComponentName;
    .param p2, "service"    # Landroid/os/IBinder;

    .line 145
    move-object v0, p2

    check-cast v0, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService$LocalBinder;

    .line 146
    .local v0, "binder":Lcom/mediatek/engineermode/nonsleep/EMWakeLockService$LocalBinder;
    invoke-virtual {v0}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService$LocalBinder;->getService()Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    .line 147
    if-nez v1, :cond_0

    .line 148
    const/4 v1, 0x0

    const-string v2, "Connect PowerManager fail, finish activity"

    invoke-static {p0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 149
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 150
    invoke-virtual {p0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->finish()V

    .line 152
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 153
    iget-object v1, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mWakeLockServ:Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;->isHeld()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 154
    iget-object v1, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    const v2, 0x7f0a048a

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 156
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    const v2, 0x7f0a048b

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setText(I)V

    .line 158
    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 2
    .param p1, "className"    # Landroid/content/ComponentName;

    .line 162
    const-string v0, "NonSleep"

    const-string v1, "onServiceDisconnected"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    return-void
.end method

.method protected onStart()V
    .locals 2

    .line 101
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->mSetButton:Landroid/widget/Button;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 103
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/nonsleep/EMWakeLockService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 104
    .local v0, "intent":Landroid/content/Intent;
    const/4 v1, 0x1

    invoke-virtual {p0, v0, p0, v1}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    .line 105
    return-void
.end method

.method protected onStop()V
    .locals 0

    .line 109
    invoke-virtual {p0, p0}, Lcom/mediatek/engineermode/nonsleep/NonSleepMode;->unbindService(Landroid/content/ServiceConnection;)V

    .line 110
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 111
    return-void
.end method
