.class Lcom/mediatek/engineermode/forceant/ForceTx97$1;
.super Landroid/os/Handler;
.source "ForceTx97.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/forceant/ForceTx97;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/forceant/ForceTx97;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 138
    iput-object p1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 10
    .param p1, "msg"    # Landroid/os/Message;

    .line 141
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 142
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const-string v2, "AT cmd failed."

    const-string v3, "ForceAnt97"

    if-eqz v1, :cond_e

    const/4 v4, 0x1

    if-eq v1, v4, :cond_e

    const-string v5, "Received data is 0"

    const/4 v6, 0x2

    const-string v7, "receiveDate[0] = "

    const/4 v8, 0x0

    if-eq v1, v6, :cond_7

    const/4 v2, 0x6

    const-string v4, "\r\n"

    if-eq v1, v2, :cond_4

    const/4 v2, 0x7

    if-eq v1, v2, :cond_0

    goto/16 :goto_6

    .line 163
    :cond_0
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_1

    .line 164
    const-string v1, "AT cmd failed or The Index not support"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 165
    const-string v1, "AT cmd failed or The Index not supportz"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 167
    :cond_1
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 168
    .local v1, "receiveDate":[Ljava/lang/String;
    array-length v2, v1

    if-nez v2, :cond_2

    .line 169
    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    const-string v2, "The Index not support"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    const-string v2, "The Index not support, Please check the paramer"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 174
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, v8

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v2}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v2

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, v8

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->append(Ljava/lang/CharSequence;)V

    .line 176
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    aget-object v4, v1, v8

    invoke-virtual {v2, v4}, Lcom/mediatek/engineermode/forceant/ForceTx97;->parseAntStaus(Ljava/lang/String;)I

    move-result v2

    .line 177
    .local v2, "result":I
    if-gez v2, :cond_3

    .line 178
    const-string v4, "Query ANT state by index failed."

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 179
    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 181
    :cond_3
    const-string v4, "Query ANT state by index successfully."

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 186
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "result":I
    :goto_0
    goto/16 :goto_6

    .line 144
    :cond_4
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_5

    .line 145
    const-string v1, "The state not support"

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 146
    const-string v1, "AT cmd failed,The state not support"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 148
    :cond_5
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 149
    .restart local v1    # "receiveDate":[Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, v8

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v2}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;

    move-result-object v2

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, v8

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->append(Ljava/lang/CharSequence;)V

    .line 151
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    aget-object v4, v1, v8

    invoke-virtual {v2, v4}, Lcom/mediatek/engineermode/forceant/ForceTx97;->parseAntIndex(Ljava/lang/String;)I

    move-result v2

    .line 152
    .restart local v2    # "result":I
    if-gez v2, :cond_6

    .line 153
    const-string v4, "query ANT index by state failed."

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 154
    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 156
    :cond_6
    const-string v4, "query ANT index by state successfully."

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 157
    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "result":I
    :goto_1
    goto/16 :goto_6

    .line 200
    :cond_7
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v9, "Received data is null"

    if-nez v1, :cond_d

    .line 201
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 202
    .restart local v1    # "receiveDate":[Ljava/lang/String;
    if-nez v1, :cond_8

    .line 203
    const-string v2, "Warning: Received data is null!"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 204
    invoke-static {v3, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_5

    .line 207
    :cond_8
    aget-object v2, v1, v8

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-ge v2, v4, :cond_9

    .line 208
    invoke-static {v3, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 209
    return-void

    .line 211
    :cond_9
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, v8

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    const/4 v2, -0x1

    .line 213
    .local v2, "value_tx":I
    const/4 v5, -0x1

    .line 214
    .local v5, "value_rx":I
    aget-object v7, v1, v8

    const-string v9, "+ETXANT"

    invoke-virtual {v9, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    const-string v9, ","

    if-eqz v7, :cond_a

    .line 216
    :try_start_0
    aget-object v6, v1, v8

    invoke-virtual {v6, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    .line 217
    .local v6, "getDigitalVal":[Ljava/lang/String;
    aget-object v4, v6, v4

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v2, v4

    .end local v6    # "getDigitalVal":[Ljava/lang/String;
    goto :goto_2

    .line 218
    :catch_0
    move-exception v4

    .line 219
    .local v4, "e":Ljava/lang/Exception;
    const/4 v2, 0x0

    .line 220
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_2
    goto :goto_3

    .line 223
    :cond_a
    :try_start_1
    aget-object v7, v1, v8

    invoke-virtual {v7, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    .line 224
    .local v7, "getDigitalVal":[Ljava/lang/String;
    aget-object v4, v7, v4

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    move v2, v4

    .line 225
    aget-object v4, v7, v6

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move v5, v4

    .line 229
    .end local v7    # "getDigitalVal":[Ljava/lang/String;
    goto :goto_3

    .line 226
    :catch_1
    move-exception v4

    .line 227
    .restart local v4    # "e":Ljava/lang/Exception;
    const/4 v2, 0x0

    .line 228
    const/4 v5, 0x0

    .line 232
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "value_tx = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 233
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Query ANT state succeed,value_tx = "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 234
    const/16 v4, 0x18

    if-ltz v2, :cond_b

    if-ge v2, v4, :cond_b

    .line 235
    iget-object v6, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v6}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v6

    invoke-virtual {v6, v2}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_4

    .line 237
    :cond_b
    iget-object v6, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v6}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v6

    invoke-virtual {v6, v4}, Landroid/widget/Spinner;->setSelection(I)V

    .line 239
    :goto_4
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "value_rx = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Query ANT state succeed,value_rx = "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 241
    if-ltz v5, :cond_c

    if-ge v5, v4, :cond_c

    .line 242
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v3

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_5

    .line 244
    :cond_c
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;->this$0:Lcom/mediatek/engineermode/forceant/ForceTx97;

    invoke-static {v3}, Lcom/mediatek/engineermode/forceant/ForceTx97;->access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;

    move-result-object v3

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setSelection(I)V

    .line 247
    .end local v1    # "receiveDate":[Ljava/lang/String;
    .end local v2    # "value_tx":I
    .end local v5    # "value_rx":I
    :goto_5
    goto :goto_6

    .line 248
    :cond_d
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 249
    invoke-static {v3, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    goto :goto_6

    .line 191
    :cond_e
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_f

    .line 192
    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 193
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_6

    .line 195
    :cond_f
    const-string v1, "AT cmd successfully."

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 196
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    nop

    .line 255
    :goto_6
    return-void
.end method
