.class Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;
.super Landroid/os/Handler;
.source "XCAPConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 86
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 89
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_6

    const/4 v1, 0x1

    if-eq v0, v1, :cond_5

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    const/4 v1, 0x4

    if-eq v0, v1, :cond_2

    goto/16 :goto_0

    .line 98
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->updateUI(Ljava/util/List;)V

    .line 99
    const-string v0, "Reset values done!"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 100
    goto :goto_0

    .line 102
    :cond_1
    const-string v0, "Set values failed!"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 103
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 104
    invoke-virtual {v1, v0}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1$1;-><init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;)V

    .line 105
    const-string v2, "OK"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 111
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    .line 113
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 114
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v2, "Iot/XCAPConfigFragment"

    if-eqz v1, :cond_3

    .line 115
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "SET_SS_PROPERTY: ar.exception="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    const-string v1, "Set values to modem failed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 118
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$000(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/concurrent/CountDownLatch;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 119
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$000(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/concurrent/CountDownLatch;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    .line 121
    :cond_4
    const-string v1, "SET_SS_PROPERTY done"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    goto :goto_0

    .line 94
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->updateUI(Ljava/util/List;)V

    .line 95
    const-string v0, "Set values done!"

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 96
    goto :goto_0

    .line 91
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->updateUI(Ljava/util/List;)V

    .line 92
    nop

    .line 126
    :goto_0
    return-void
.end method
