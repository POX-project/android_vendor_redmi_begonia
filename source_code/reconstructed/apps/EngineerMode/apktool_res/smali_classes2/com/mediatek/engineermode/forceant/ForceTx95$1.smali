.class Lcom/mediatek/engineermode/forceant/ForceTx95$1;
.super Landroid/os/Handler;
.source "ForceTx95.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/forceant/ForceTx95;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/forceant/ForceTx95;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 128
    iput-object p1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7
    .param p1, "msg"    # Landroid/os/Message;

    .line 131
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 132
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, "\r\n"

    const-string v3, "receiveDate[0] = "

    const-string v4, "AT cmd failed."

    const/4 v5, 0x0

    const-string v6, "ForceAnt95"

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_4

    .line 153
    :pswitch_0
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_0

    .line 154
    const-string v1, "AT cmd failed or The Index not support"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 155
    const-string v1, "AT cmd failed or The Index not supportz"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_4

    .line 157
    :cond_0
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 158
    .local v1, "receiveDate":[Ljava/lang/String;
    array-length v4, v1

    if-nez v4, :cond_1

    .line 159
    const-string v2, "The Index not support"

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    const-string v2, "The Index not support, Please check the paramer"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 163
    :cond_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v1, v5

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$000(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/TextView;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v5

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->append(Ljava/lang/CharSequence;)V

    .line 165
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    aget-object v3, v1, v5

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->parseAntStaus(Ljava/lang/String;)I

    move-result v2

    .line 166
    .local v2, "result":I
    if-gez v2, :cond_2

    .line 167
    const-string v3, "Query ANT states by index failed."

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 168
    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 170
    :cond_2
    const-string v3, "Query ANT states by index successfully."

    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 175
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "result":I
    :goto_0
    goto/16 :goto_4

    .line 134
    :pswitch_1
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_3

    .line 135
    const-string v1, "The states not support"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 136
    const-string v1, "AT cmd failed,The States not support"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_4

    .line 138
    :cond_3
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 139
    .restart local v1    # "receiveDate":[Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v1, v5

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$000(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/TextView;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v5

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->append(Ljava/lang/CharSequence;)V

    .line 141
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    aget-object v3, v1, v5

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->parseAntIndex(Ljava/lang/String;)I

    move-result v2

    .line 142
    .restart local v2    # "result":I
    if-gez v2, :cond_4

    .line 143
    const-string v3, "query ANT index by states failed."

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 144
    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 146
    :cond_4
    const-string v3, "query ANT index by states successfully."

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 147
    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "result":I
    :goto_1
    goto/16 :goto_4

    .line 191
    :pswitch_2
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v2, "Received data is null"

    if-nez v1, :cond_7

    .line 192
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 193
    .restart local v1    # "receiveDate":[Ljava/lang/String;
    if-nez v1, :cond_5

    .line 194
    const-string v3, "Warning: Received data is null!"

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 195
    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 197
    :cond_5
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v1, v5

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    const/4 v2, 0x0

    .line 200
    .local v2, "value":I
    :try_start_0
    aget-object v3, v1, v5

    const-string v4, ","

    invoke-virtual {v3, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 201
    .local v3, "getDigitalVal":[Ljava/lang/String;
    const/4 v4, 0x1

    aget-object v4, v3, v4

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v2, v4

    .line 204
    .end local v3    # "getDigitalVal":[Ljava/lang/String;
    goto :goto_2

    .line 202
    :catch_0
    move-exception v3

    .line 203
    .local v3, "e":Ljava/lang/Exception;
    const/4 v2, 0x0

    .line 205
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_2
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "value = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 206
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Query ANT states succeed,value = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 207
    const/16 v3, 0x8

    if-ltz v2, :cond_6

    if-ge v2, v3, :cond_6

    .line 208
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_3

    .line 210
    :cond_6
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx95;

    invoke-static {v4}, Lcom/mediatek/engineermode/forceant/ForceTx95;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 213
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "value":I
    :goto_3
    goto :goto_4

    .line 214
    :cond_7
    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 215
    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 217
    goto :goto_4

    .line 181
    :pswitch_3
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_8

    .line 182
    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 183
    invoke-static {v6, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 185
    :cond_8
    const-string v1, "AT cmd successfully."

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 186
    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    nop

    .line 221
    :goto_4
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
