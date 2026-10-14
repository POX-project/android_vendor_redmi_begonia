.class Lcom/mediatek/engineermode/bandselect/BandSelect$1;
.super Landroid/os/Handler;
.source "BandSelect.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bandselect/BandSelect;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bandselect/BandSelect;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bandselect/BandSelect;

    .line 109
    iput-object p1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v0}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$000(Lcom/mediatek/engineermode/bandselect/BandSelect;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 112
    return-void

    .line 115
    :cond_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    packed-switch v0, :pswitch_data_0

    const-string v2, "BandSelect"

    packed-switch v0, :pswitch_data_1

    goto/16 :goto_1

    .line 170
    :pswitch_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 171
    .local v0, "asyncResult":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_1

    .line 172
    const-string v3, "set NR BandMode succeed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 173
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 175
    :cond_1
    const-string v3, "set NR BandMode failed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 176
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    goto/16 :goto_1

    .line 157
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 158
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_2

    .line 159
    const-string v3, "set CDMA BandMode succeed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 160
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 162
    :cond_2
    const-string v3, "set CDMA BandMode failed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 163
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v1

    if-eqz v1, :cond_a

    .line 166
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$400(Lcom/mediatek/engineermode/bandselect/BandSelect;)Lcom/mediatek/engineermode/RadioStateManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/RadioStateManager;->rebootModem()V

    goto/16 :goto_1

    .line 180
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 181
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_4

    .line 182
    const-string v3, "set Gsm BandMode succeed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 183
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    invoke-static {}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$500()I

    move-result v1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimNRCapability(I)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 185
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$600(Lcom/mediatek/engineermode/bandselect/BandSelect;)[J

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$700(Lcom/mediatek/engineermode/bandselect/BandSelect;[J)V

    .line 187
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v1

    if-eqz v1, :cond_a

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v1

    if-nez v1, :cond_a

    .line 188
    invoke-static {}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$500()I

    move-result v1

    invoke-static {v1}, Lcom/mediatek/engineermode/ModemCategory;->CheckViceSimCdmaCapability(I)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 189
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    invoke-static {v1}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$800(Lcom/mediatek/engineermode/bandselect/BandSelect;)J

    move-result-wide v2

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$900(Lcom/mediatek/engineermode/bandselect/BandSelect;J)V

    goto/16 :goto_1

    .line 193
    :cond_4
    const-string v3, "set Gsm BandMode failed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 194
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 196
    goto/16 :goto_1

    .line 141
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_3
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 142
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_5

    .line 143
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    const/16 v2, 0x68

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$200(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V

    goto :goto_1

    .line 145
    :cond_5
    const-string v2, "Query NR Current Mode Failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 147
    goto :goto_1

    .line 133
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_4
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 134
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_6

    .line 135
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    const/16 v2, 0x67

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$200(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V

    goto :goto_1

    .line 137
    :cond_6
    const-string v2, "Query NR Supported Mode Failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 139
    goto :goto_1

    .line 149
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_5
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 150
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_7

    .line 151
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    const/16 v2, 0x66

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$300(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V

    goto :goto_1

    .line 153
    :cond_7
    const-string v2, "Query CDMA Current Mode Failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;Z)V

    .line 155
    goto :goto_1

    .line 125
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_6
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 126
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_8

    .line 127
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    const/16 v2, 0x65

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$100(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V

    goto :goto_1

    .line 129
    :cond_8
    const-string v1, "Query GSM Current Mode Failed."

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 131
    goto :goto_1

    .line 117
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_7
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 118
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_9

    .line 119
    iget-object v1, p0, Lcom/mediatek/engineermode/bandselect/BandSelect$1;->this$0:Lcom/mediatek/engineermode/bandselect/BandSelect;

    const/16 v2, 0x64

    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/bandselect/BandSelect;->access$100(Lcom/mediatek/engineermode/bandselect/BandSelect;Landroid/os/AsyncResult;I)V

    goto :goto_1

    .line 121
    :cond_9
    const-string v1, "Query GSM Supported Mode Failed."

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 123
    nop

    .line 200
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :cond_a
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x64
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x6e
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
