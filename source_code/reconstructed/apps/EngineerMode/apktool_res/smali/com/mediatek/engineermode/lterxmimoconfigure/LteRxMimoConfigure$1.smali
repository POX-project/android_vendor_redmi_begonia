.class Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;
.super Landroid/os/Handler;
.source "LteRxMimoConfigure.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;

    .line 86
    iput-object p1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 89
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 90
    .local v0, "asyncResult":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, "LteRx/MimoConfigure"

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_1

    .line 124
    :pswitch_0
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_0

    .line 125
    const-string v1, "4RX single band setting Succeed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 126
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 128
    :cond_0
    const-string v1, "4RX single band setting failed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 129
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    goto/16 :goto_1

    .line 115
    :pswitch_1
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_1

    .line 116
    const-string v1, "4x4MIMO single band setting  Succeed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 117
    const-string v1, "4x4MIMO single band setting Succeed!"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 119
    :cond_1
    const-string v1, "4x4MIMO single band setting failed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 120
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    goto :goto_1

    .line 105
    :pswitch_2
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_2

    .line 106
    const-string v1, "LteRxMimo Set Succeed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 107
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    iget-object v1, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->showDialog(I)V

    goto :goto_1

    .line 110
    :cond_2
    const-string v1, "LteRxMimo Set failed!"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 111
    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    goto :goto_1

    .line 92
    :pswitch_3
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 93
    .local v1, "result":[Ljava/lang/String;
    if-eqz v1, :cond_3

    array-length v3, v1

    if-lez v3, :cond_3

    .line 94
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "LteRxMimo Query Succeed,result = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v4, 0x0

    aget-object v5, v1, v4

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 95
    const-string v2, "LteRxMimo Query Succeed!"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 96
    iget-object v2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;

    aget-object v3, v1, v4

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->access$000(Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;Ljava/lang/String;)V

    goto :goto_0

    .line 98
    :cond_3
    const-string v3, "LteRxMimo Query Failed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 102
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure$1;->this$0:Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/lterxmimoconfigure/LteRxMimoConfigure;->updateButtonStatus()V

    .line 103
    nop

    .line 135
    .end local v1    # "result":[Ljava/lang/String;
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x65
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
