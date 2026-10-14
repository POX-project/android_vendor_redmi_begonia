.class Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;
.super Landroid/os/Handler;
.source "AudioSpeechLoggerXV2.java"


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

    .line 728
    iput-object p1, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 732
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 733
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    .line 746
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/TextView;

    move-result-object v0

    const v2, 0x7f0a0044

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(I)V

    .line 747
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 748
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 749
    goto :goto_0

    .line 741
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/TextView;

    move-result-object v0

    const v2, 0x7f0a0042

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(I)V

    .line 742
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1500(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    const v2, 0x7f0a0047

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setText(I)V

    .line 743
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1600(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 744
    goto :goto_0

    .line 738
    :pswitch_2
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 739
    goto :goto_0

    .line 735
    :pswitch_3
    iget-object v0, p0, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2$7;->this$0:Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;

    invoke-static {v0}, Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;->access$1700(Lcom/mediatek/engineermode/audio/AudioSpeechLoggerXV2;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 736
    nop

    .line 754
    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0xa
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
