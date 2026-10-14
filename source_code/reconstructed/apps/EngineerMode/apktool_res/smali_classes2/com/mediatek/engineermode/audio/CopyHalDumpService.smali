.class public Lcom/mediatek/engineermode/audio/CopyHalDumpService;
.super Landroid/app/Service;
.source "CopyHalDumpService.java"

# interfaces
.implements Lcom/mediatek/engineermode/audio/OnCopyProgressChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;,
        Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;
    }
.end annotation


# static fields
.field private static final EMAUDIO_NOTIFICATION_NAME:Ljava/lang/String; = "CopyAudioHalDumpService is running"

.field private static final ID_EMAUDIO_SERVICE:I = 0x30353

.field public static final MSG_COPY_DONE:I = 0xc

.field public static final MSG_COPY_PROGRESS_UPDATE:I = 0xa

.field public static final MSG_DELETE_DONE:I = 0xd

.field public static final MSG_DELETE_PROGRESS_UPDATE:I = 0xb

.field private static final NOTIFICATION_CHANNEL:Ljava/lang/String; = "CopyAudioHalDumpService"

.field public static final TAG:Ljava/lang/String; = "Audio/Service"


# instance fields
.field private mActivityHandler:Landroid/os/Handler;

.field private final mBinder:Landroid/os/IBinder;

.field private mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 56
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 77
    new-instance v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;-><init>(Lcom/mediatek/engineermode/audio/CopyHalDumpService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mBinder:Landroid/os/IBinder;

    .line 79
    sget-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DEFAULT:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    return-void
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/audio/CopyHalDumpService;Landroid/os/Handler;)Landroid/os/Handler;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/audio/CopyHalDumpService;
    .param p1, "x1"    # Landroid/os/Handler;

    .line 56
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    return-object p1
.end method


# virtual methods
.method public getCopyDumpStatus()Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    return-object v0
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mBinder:Landroid/os/IBinder;

    return-object v0
.end method

.method public onCopyProgressChanged(Ljava/lang/String;FF)V
    .locals 4
    .param p1, "fileName"    # Ljava/lang/String;
    .param p2, "readSize"    # F
    .param p3, "tSize"    # F

    .line 146
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    const-string v1, "Audio/Service"

    if-nez v0, :cond_0

    .line 147
    const-string v0, "mActivityHandler is null, don\'t need update COPY UI"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 148
    return-void

    .line 150
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v2, "/"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    const-string v0, "SUCCESS"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 152
    const-string v0, "[onCopyProgressChanged] done"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 154
    sget-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    goto :goto_0

    .line 156
    :cond_1
    const v0, 0x7f0a0043

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 v2, 0x1

    invoke-static {p2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x2

    invoke-static {p3}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 157
    .local v0, "text":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    const/16 v2, 0xa

    invoke-virtual {v1, v2, v0}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v1

    .line 158
    .local v1, "msg":Landroid/os/Message;
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 159
    sget-object v2, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    iput-object v2, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 161
    .end local v0    # "text":Ljava/lang/String;
    .end local v1    # "msg":Landroid/os/Message;
    :goto_0
    return-void
.end method

.method public onCreate()V
    .locals 2

    .line 83
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 84
    const-string v0, "Audio/Service"

    const-string v1, "onCreate"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    return-void
.end method

.method public onDeleteProgressChanged(Ljava/lang/String;)V
    .locals 3
    .param p1, "fileName"    # Ljava/lang/String;

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    const-string v1, "Audio/Service"

    if-nez v0, :cond_0

    .line 166
    const-string v0, "mActivityHandler is null, don\'t need update DELETE UI"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 167
    return-void

    .line 169
    :cond_0
    invoke-static {v1, p1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    const-string v0, "SUCCESS"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 171
    const-string v0, "[onDeleteProgressChanged] done"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    const/16 v1, 0xd

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 173
    sget-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DELETE_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    goto :goto_0

    .line 175
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[onDeleteProgressChanged] delete"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    const v0, 0x7f0a0045

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 177
    .local v0, "text":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    const/16 v2, 0xa

    invoke-virtual {v1, v2, v0}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v1

    .line 178
    .local v1, "msg":Landroid/os/Message;
    iget-object v2, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 179
    sget-object v2, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DELETE_HAL_DUMP:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    iput-object v2, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 181
    .end local v0    # "text":Ljava/lang/String;
    .end local v1    # "msg":Landroid/os/Message;
    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 112
    const-string v0, "Audio/Service"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 114
    return-void
.end method

.method public onStart(Landroid/content/Intent;I)V
    .locals 0
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "startId"    # I

    .line 89
    invoke-super {p0, p1, p2}, Landroid/app/Service;->onStart(Landroid/content/Intent;I)V

    .line 90
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 6
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flag"    # I
    .param p3, "startId"    # I

    .line 94
    nop

    .line 95
    const-string v0, "notification"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 97
    .local v0, "mNotificationManager":Landroid/app/NotificationManager;
    new-instance v1, Landroid/app/NotificationChannel;

    const-string v2, "CopyAudioHalDumpService"

    const-string v3, "CopyAudioHalDumpService is running"

    const/4 v4, 0x2

    invoke-direct {v1, v2, v3, v4}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 100
    .local v1, "channel":Landroid/app/NotificationChannel;
    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 101
    new-instance v4, Landroid/app/Notification$Builder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->getApplicationContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    .line 102
    invoke-virtual {v4, v3}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v3

    .line 103
    const v4, 0x108009b

    invoke-virtual {v3, v4}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object v3

    .line 104
    invoke-virtual {v3, v2}, Landroid/app/Notification$Builder;->setChannelId(Ljava/lang/String;)Landroid/app/Notification$Builder;

    move-result-object v2

    .line 105
    invoke-virtual {v2}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v2

    .line 106
    .local v2, "notification":Landroid/app/Notification;
    const v3, 0x30353

    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->startForeground(ILandroid/app/Notification;)V

    .line 107
    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    move-result v3

    return v3
.end method

.method public removeUiHandler()V
    .locals 2

    .line 133
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mActivityHandler:Landroid/os/Handler;

    .line 134
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    sget-object v1, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->COPY_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    sget-object v1, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DELETE_DUMP_DONE:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    if-ne v0, v1, :cond_1

    .line 135
    :cond_0
    const-string v0, "Audio/Service"

    const-string v1, "reset dump status"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    sget-object v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;->DEFAULT:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    iput-object v0, p0, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->mStatus:Lcom/mediatek/engineermode/audio/CopyHalDumpService$DUMP_STATUS;

    .line 138
    :cond_1
    return-void
.end method
