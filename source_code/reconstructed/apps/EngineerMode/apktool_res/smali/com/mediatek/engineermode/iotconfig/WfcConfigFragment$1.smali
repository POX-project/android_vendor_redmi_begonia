.class Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;
.super Landroid/os/Handler;
.source "WfcConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    .line 69
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 72
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 84
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    const-string v1, "Set MCC/MNC failed!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->showToast(Ljava/lang/String;)V

    .line 85
    goto :goto_0

    .line 79
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->setAddMccMncLayoutVisibility(Z)V

    .line 80
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->access$000(Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->updateUI(I)V

    .line 81
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    const-string v1, "Set/Reset MCC/MNC ok!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->showToast(Ljava/lang/String;)V

    .line 82
    goto :goto_0

    .line 76
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;

    const-string v1, "MCC/MNC input illegal!"

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/WfcConfigFragment;->showToast(Ljava/lang/String;)V

    .line 77
    nop

    .line 89
    :goto_0
    return-void
.end method
