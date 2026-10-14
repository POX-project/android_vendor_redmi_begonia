.class Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;
.super Landroid/os/Handler;
.source "NetworkSelectActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    .line 174
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 178
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "NetworkMode93"

    packed-switch v0, :pswitch_data_0

    goto/16 :goto_2

    .line 223
    :pswitch_0
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 224
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v2, :cond_0

    .line 225
    const v2, 0x7f0a05a8

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(I)V

    .line 226
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 228
    :cond_0
    const v2, 0x7f0a05a9

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(I)V

    .line 229
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 231
    goto/16 :goto_2

    .line 201
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :pswitch_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 202
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_3

    .line 203
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v2, :cond_6

    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v2, v2, [Ljava/lang/String;

    if-eqz v2, :cond_6

    .line 204
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 206
    .local v2, "data":[Ljava/lang/String;
    array-length v3, v2

    if-lez v3, :cond_2

    const/4 v3, 0x0

    aget-object v4, v2, v3

    if-eqz v4, :cond_2

    .line 207
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "data[0]:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v2, v3

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 208
    aget-object v1, v2, v3

    const-string v4, "+EHRPD:0"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 209
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    const/4 v3, 0x1

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$102(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;Z)Z

    .line 210
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$200(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)Landroid/widget/CheckBox;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 212
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$102(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;Z)Z

    .line 213
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v1}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$200(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)Landroid/widget/CheckBox;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 216
    .end local v2    # "data":[Ljava/lang/String;
    :cond_2
    :goto_0
    goto/16 :goto_2

    .line 218
    :cond_3
    const v2, 0x7f0a0507

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(I)V

    .line 219
    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    goto :goto_2

    .line 190
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :pswitch_2
    const-string v0, ""

    .line 191
    .local v0, "info":Ljava/lang/String;
    iget v2, p1, Landroid/os/Message;->arg1:I

    .line 192
    .local v2, "status":I
    const-string v3, "set the network to : "

    if-nez v2, :cond_4

    .line 193
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " succeed"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 195
    :cond_4
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    invoke-static {v3}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->access$000(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;)I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " failed"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 197
    :goto_1
    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 198
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    goto :goto_2

    .line 180
    .end local v0    # "info":Ljava/lang/String;
    .end local v2    # "status":I
    :pswitch_3
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 181
    .local v0, "result":I
    if-ltz v0, :cond_5

    .line 182
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Get Preferred Type = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93$1;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity93;->updateNetworkType(I)V

    goto :goto_2

    .line 185
    :cond_5
    const-string v2, "query_preferred_failed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 188
    nop

    .line 235
    .end local v0    # "result":I
    :cond_6
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
.end method
