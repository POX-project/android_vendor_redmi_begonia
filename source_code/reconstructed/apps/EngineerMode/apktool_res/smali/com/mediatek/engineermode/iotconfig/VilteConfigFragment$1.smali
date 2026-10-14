.class Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;
.super Landroid/os/Handler;
.source "VilteConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    .line 76
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 79
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_3

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 88
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const-string v1, "Write profile completed!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->showToast(Ljava/lang/String;)V

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->access$000(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;)Landroid/widget/EditText;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 90
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;-><init>(Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$XmlParserThread;->start()V

    .line 91
    goto :goto_0

    .line 93
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const-string v1, "Write profile failed!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->showToast(Ljava/lang/String;)V

    .line 94
    goto :goto_0

    .line 81
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const-string v1, "Read profile template completed!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->showToast(Ljava/lang/String;)V

    .line 82
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->updateVideoProfileUI()V

    .line 83
    goto :goto_0

    .line 85
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;

    const-string v1, "Read profile template failed!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/VilteConfigFragment;->showToast(Ljava/lang/String;)V

    .line 86
    nop

    .line 98
    :goto_0
    return-void
.end method
