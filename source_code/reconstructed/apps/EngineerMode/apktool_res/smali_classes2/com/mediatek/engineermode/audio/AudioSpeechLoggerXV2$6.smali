.class Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;
.super Ljava/lang/Object;
.source "AudioSpeechLoggerXV2.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


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

    .line 688
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 691
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1300(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Z

    move-result v0

    const-string v1, "Audio/SpeechLogger2"

    if-nez v0, :cond_0

    .line 692
    const-string v0, "onClick CopyAudioDumpButtons should connect Service first"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 694
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v2, 0x7f06004a

    const/4 v3, 0x0

    if-eq v0, v2, :cond_3

    const v2, 0x7f06004d

    if-eq v0, v2, :cond_1

    goto/16 :goto_2

    .line 696
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 697
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_2

    .line 698
    const-string v0, "copy hal dump"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 699
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    const v1, 0x7f0a0048

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 700
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->copyAudioHalDumpFilesToSdcard(Lcom/mediatek/engineermode/audio/OnCopyProgressChangeListener;)V

    .line 701
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_0

    .line 703
    :cond_2
    const-string v0, "stop copying hal dump"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 704
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    const v1, 0x7f0a0047

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 705
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/TextView;

    move-result-object v0

    const v1, 0x7f0a0049

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 706
    invoke-static {}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->cancleCopyAudioHalDumpFile()V

    .line 707
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 710
    :goto_0
    const-wide/16 v0, 0xc8

    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 713
    goto :goto_1

    .line 711
    :catch_0
    move-exception v0

    .line 714
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 715
    goto :goto_2

    .line 717
    :cond_3
    const-string v0, "clear hal dump"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 718
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 719
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 720
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$6;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1200(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Lcom/mediatek/engineermode/audio/CopyHalDumpService;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioTuningJni;->delAudioHalDumpFiles(Lcom/mediatek/engineermode/audio/OnCopyProgressChangeListener;)V

    .line 721
    nop

    .line 725
    :goto_2
    return-void
.end method
