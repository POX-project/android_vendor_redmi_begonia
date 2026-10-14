.class Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;
.super Landroid/os/Handler;
.source "NetworkSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    .line 67
    iput-object p1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 70
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "NetworkMode_cdma"

    const/4 v2, 0x0

    packed-switch v0, :pswitch_data_0

    goto/16 :goto_2

    .line 142
    :pswitch_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 143
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v3, :cond_5

    .line 144
    const v3, 0x7f0a05a8

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(II)V

    .line 145
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$400(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)V

    goto/16 :goto_2

    .line 124
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :pswitch_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 125
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_2

    .line 126
    iget-object v3, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v3, :cond_5

    iget-object v3, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v3, v3, [Ljava/lang/String;

    if-eqz v3, :cond_5

    .line 127
    iget-object v3, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/String;

    .line 128
    .local v3, "data":[Ljava/lang/String;
    array-length v4, v3

    if-lez v4, :cond_1

    aget-object v4, v3, v2

    if-eqz v4, :cond_1

    .line 129
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "data[0]:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v3, v2

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$200(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 131
    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$202(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z

    .line 133
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$300(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/CheckBox;

    move-result-object v1

    aget-object v2, v3, v2

    const-string v4, "+EHRPD:0"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 135
    .end local v3    # "data":[Ljava/lang/String;
    :cond_1
    goto/16 :goto_2

    .line 137
    :cond_2
    const v3, 0x7f0a0507

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(II)V

    .line 138
    iget-object v2, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    goto/16 :goto_2

    .line 113
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :pswitch_2
    const-string v0, ""

    .line 114
    .local v0, "info":Ljava/lang/String;
    iget v2, p1, Landroid/os/Message;->arg1:I

    .line 115
    .local v2, "status":I
    if-nez v2, :cond_3

    .line 116
    const-string v0, "set the network succeed"

    goto :goto_0

    .line 118
    :cond_3
    const-string v0, "set the network failed"

    .line 120
    :goto_0
    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 121
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    goto/16 :goto_2

    .line 72
    .end local v0    # "info":Ljava/lang/String;
    .end local v2    # "status":I
    :pswitch_3
    const-string v0, "Get response EVENT_QUERY_NETWORKMODE_DONE"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 74
    .local v0, "type":I
    if-lez v0, :cond_4

    .line 75
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Get Preferred Type "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Get NetworkMode Type "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 77
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    const/4 v4, 0x1

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$002(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z

    .line 78
    packed-switch v0, :pswitch_data_1

    .line 99
    :pswitch_4
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$002(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;Z)Z

    goto :goto_1

    .line 89
    :pswitch_5
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;

    move-result-object v3

    const/4 v5, 0x3

    invoke-virtual {v3, v5, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 90
    goto :goto_1

    .line 95
    :pswitch_6
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;

    move-result-object v3

    const/4 v5, 0x5

    .line 96
    invoke-virtual {v3, v5, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 97
    goto :goto_1

    .line 92
    :pswitch_7
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;

    move-result-object v3

    const/4 v5, 0x4

    invoke-virtual {v3, v5, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 93
    goto :goto_1

    .line 86
    :pswitch_8
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;

    move-result-object v3

    const/4 v5, 0x2

    invoke-virtual {v3, v5, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 87
    goto :goto_1

    .line 83
    :pswitch_9
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;

    move-result-object v3

    invoke-virtual {v3, v4, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 84
    goto :goto_1

    .line 80
    :pswitch_a
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$100(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Landroid/widget/Spinner;

    move-result-object v3

    invoke-virtual {v3, v2, v4}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 81
    nop

    .line 102
    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity$1;->this$0:Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;->access$000(Lcom/mediatek/engineermode/cdmanetworkselect/NetworkSelectActivity;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 103
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cdma netwok select not support the type: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 105
    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 108
    :cond_4
    const-string v2, "query preferred failed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 111
    nop

    .line 152
    .end local v0    # "type":I
    :cond_5
    :goto_2
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x65
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x4
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_4
        :pswitch_7
        :pswitch_6
        :pswitch_5
    .end packed-switch
.end method
