.class Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;
.super Ljava/lang/Object;
.source "AudioSpeechLoggerXV2.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    .line 624
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 3
    .param p1, "className"    # Landroid/content/ComponentName;
    .param p2, "service"    # Landroid/os/IBinder;

    .line 630
    const-string v0, "Audio/SpeechLogger2"

    const-string v1, "onServiceConnected"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 631
    move-object v0, p2

    check-cast v0, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;

    .line 632
    .local v0, "binder":Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    iget-object v2, v1, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->mHandler:Landroid/os/Handler;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/audio/CopyHalDumpService$LocalBinder;->getService(Landroid/os/Handler;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1202(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Lcom/mediatek/engineermode/audio/CopyHalDumpService;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    .line 633
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1302(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Z)Z

    .line 634
    iget-object v1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1400(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)V

    .line 635
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 2
    .param p1, "arg0"    # Landroid/content/ComponentName;

    .line 639
    const-string v0, "Audio/SpeechLogger2"

    const-string v1, "onServiceDisconnected"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 640
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/engineermode/audio/CopyHalDumpService;->removeUiHandler()V

    .line 641
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$5;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1302(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;Z)Z

    .line 642
    return-void
.end method
