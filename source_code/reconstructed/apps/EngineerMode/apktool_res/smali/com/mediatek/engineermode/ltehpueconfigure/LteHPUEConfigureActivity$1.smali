.class Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;
.super Landroid/os/Handler;
.source "LteHPUEConfigureActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    .line 66
    iput-object p1, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;->this$0:Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 69
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 76
    :cond_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 77
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const/4 v2, 0x0

    const-string v3, "LteHPUEConfigureActivity"

    if-eqz v1, :cond_1

    .line 78
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    const-string v1, "Failed to set"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 80
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 82
    :cond_1
    const-string v1, "Succeed to set"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 83
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 85
    goto :goto_0

    .line 71
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 72
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;->this$0:Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->access$100(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;Landroid/os/AsyncResult;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->access$002(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;Z)Z

    .line 73
    iget-object v1, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;->this$0:Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->access$200(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;)Landroid/widget/CheckBox;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity$1;->this$0:Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;->access$000(Lcom/mediatek/engineermode/ltehpueconfigure/LteHPUEConfigureActivity;)Z

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 74
    nop

    .line 89
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_0
    return-void
.end method
