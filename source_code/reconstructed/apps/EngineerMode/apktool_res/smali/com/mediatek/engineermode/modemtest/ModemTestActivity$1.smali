.class Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;
.super Landroid/os/Handler;
.source "ModemTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/modemtest/ModemTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    .line 127
    iput-object p1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7
    .param p1, "msg"    # Landroid/os/Message;

    .line 131
    const/4 v0, 0x0

    .line 132
    .local v0, "rebootFlag":Z
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, "AT cmd success."

    const-string v3, "AT cmd failed."

    const-string v4, " Query failed."

    const-string v5, "Query success."

    const-string v6, "ModemTest"

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_0

    .line 209
    :pswitch_0
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 210
    .local v1, "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_0

    .line 211
    const-string v2, "LAA AT cmd success."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 213
    :cond_0
    const-string v2, "LAA AT cmd failed."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 215
    goto/16 :goto_0

    .line 199
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_1
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 200
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_1

    .line 201
    const-string v2, "Query LAA success."

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    iget-object v2, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 203
    .local v2, "data":[Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$600(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V

    .line 204
    .end local v2    # "data":[Ljava/lang/String;
    goto/16 :goto_0

    .line 205
    :cond_1
    const-string v2, "Query LAA failed."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 207
    goto/16 :goto_0

    .line 191
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_2
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 192
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v4, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v4, :cond_2

    .line 193
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 195
    :cond_2
    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 197
    goto/16 :goto_0

    .line 181
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_3
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 182
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_3

    .line 183
    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    iget-object v2, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 185
    .restart local v2    # "data":[Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$500(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V

    .line 186
    .end local v2    # "data":[Ljava/lang/String;
    goto/16 :goto_0

    .line 187
    :cond_3
    const-string v2, "Query failed."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 189
    goto/16 :goto_0

    .line 172
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_4
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 173
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v4, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v4, :cond_4

    .line 174
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 175
    const/4 v0, 0x1

    goto/16 :goto_0

    .line 177
    :cond_4
    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 179
    goto/16 :goto_0

    .line 162
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_5
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 163
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_5

    .line 164
    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    iget-object v2, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 166
    .restart local v2    # "data":[Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$400(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V

    .line 167
    .end local v2    # "data":[Ljava/lang/String;
    goto :goto_0

    .line 168
    :cond_5
    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 170
    goto :goto_0

    .line 148
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_6
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 149
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_7

    .line 150
    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    iget-object v2, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 152
    .restart local v2    # "data":[Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$100(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;[Ljava/lang/String;)V

    .line 153
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v3

    if-eqz v3, :cond_6

    .line 154
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$200(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 155
    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$300(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 157
    .end local v2    # "data":[Ljava/lang/String;
    :cond_6
    goto :goto_0

    .line 158
    :cond_7
    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 160
    goto :goto_0

    .line 139
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :pswitch_7
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 140
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_8

    .line 141
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    iget v4, p1, Landroid/os/Message;->what:I

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " AT cmd success."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 142
    const/4 v0, 0x1

    goto :goto_0

    .line 144
    :cond_8
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    iget v4, p1, Landroid/os/Message;->what:I

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$000(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " AT cmd failed."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 146
    nop

    .line 219
    .end local v1    # "ar":Landroid/os/AsyncResult;
    :goto_0
    if-eqz v0, :cond_9

    .line 220
    const-string v1, "disableAllButton."

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    iget-object v1, p0, Lcom/mediatek/engineermode/modemtest/ModemTestActivity$1;->this$0:Lcom/mediatek/engineermode/modemtest/ModemTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/modemtest/ModemTestActivity;->access$700(Lcom/mediatek/engineermode/modemtest/ModemTestActivity;)V

    .line 223
    :cond_9
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_7
        :pswitch_7
        :pswitch_7
        :pswitch_7
        :pswitch_6
        :pswitch_7
        :pswitch_7
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
