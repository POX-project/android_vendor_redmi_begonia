.class Lcom/mediatek/engineermode/antenna/AntennaActivity$2;
.super Landroid/os/Handler;
.source "AntennaActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/antenna/AntennaActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 189
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 12
    .param p1, "msg"    # Landroid/os/Message;

    .line 193
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, " for : "

    const-string v2, " return: "

    const-string v3, "Query Ant Mode EGMC ant "

    const-string v4, " succeed."

    const-string v5, " currect mode failed."

    const/16 v6, 0x8

    const-string v7, "Set EGMC ant "

    const/4 v8, 0x0

    const-string v9, "AntennaActivity"

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_6

    .line 270
    :pswitch_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 271
    .local v0, "asyncResult":Landroid/os/AsyncResult;
    const/4 v6, 0x0

    .line 272
    .local v6, "ret":Z
    if-eqz v0, :cond_1

    iget-object v10, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v10, :cond_1

    iget-object v10, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v10, :cond_1

    .line 274
    iget-object v10, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v10, [Ljava/lang/String;

    .line 275
    .local v10, "result":[Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    invoke-static {v10}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 275
    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 278
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v10

    if-ge v1, v2, :cond_1

    .line 279
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    aget-object v3, v10, v1

    const/4 v11, 0x1

    invoke-static {v2, v11, v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$2000(Lcom/mediatek/engineermode/antenna/AntennaActivity;ILjava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 280
    const/4 v6, 0x1

    .line 278
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 285
    .end local v1    # "i":I
    .end local v10    # "result":[Ljava/lang/String;
    :cond_1
    const-string v1, "Confirm EGMC ant"

    if-eqz v6, :cond_2

    .line 286
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " succeed!"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 289
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 291
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " failed!"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 294
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    goto/16 :goto_6

    .line 319
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    .end local v6    # "ret":Z
    :pswitch_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 320
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v2, "Init EGMC antenna mode for ant"

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v1

    if-nez v1, :cond_3

    .line 321
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v1, v8}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setEgmcAntForUser(I)V

    .line 322
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 325
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Init EGMC ant"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " failed."

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 327
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    goto/16 :goto_6

    .line 300
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_3
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 301
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v2, "set EGMC ant"

    if-nez v1, :cond_4

    .line 302
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " successful."

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 304
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " antenna mode succeed."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    .line 307
    :cond_4
    iget v1, p1, Landroid/os/Message;->what:I

    if-ne v1, v6, :cond_5

    .line 308
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->confirmEgmcAntNR()V

    goto :goto_1

    .line 310
    :cond_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " failed "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 314
    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " antenna mode failed: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 317
    goto/16 :goto_6

    .line 247
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_4
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 248
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    const/4 v4, 0x5

    if-eqz v0, :cond_7

    iget-object v6, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v6, :cond_7

    iget-object v6, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v6, :cond_7

    .line 250
    iget-object v5, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v5, [Ljava/lang/String;

    .line 251
    .local v5, "result":[Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v3

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 252
    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 251
    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 254
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_2
    array-length v2, v5

    if-ge v1, v2, :cond_6

    .line 255
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    iget v3, p1, Landroid/os/Message;->what:I

    sub-int/2addr v3, v4

    aget-object v6, v5, v1

    invoke-static {v2, v3, v6}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1900(Lcom/mediatek/engineermode/antenna/AntennaActivity;ILjava/lang/String;)V

    .line 254
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 258
    .end local v1    # "i":I
    .end local v5    # "result":[Ljava/lang/String;
    :cond_6
    goto/16 :goto_6

    .line 259
    :cond_7
    iget v1, p1, Landroid/os/Message;->what:I

    sub-int/2addr v1, v4

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v2

    if-ne v1, v2, :cond_9

    .line 260
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    iget v2, p1, Landroid/os/Message;->what:I

    if-ne v2, v4, :cond_8

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v2

    goto :goto_3

    .line 261
    :cond_8
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    move-result-object v2

    .line 260
    :goto_3
    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->resetAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V

    .line 263
    :cond_9
    const-string v1, "Query EGMC currect mode failed."

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 265
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Query EGMC ant"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    goto/16 :goto_6

    .line 217
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_5
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 218
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    if-eqz v0, :cond_b

    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_b

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_b

    .line 220
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 221
    .local v1, "result":[Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Query Ant Mode C2K return: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 223
    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 221
    invoke-static {v9, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 224
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_4
    array-length v3, v1

    if-ge v2, v3, :cond_a

    .line 225
    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    aget-object v4, v1, v2

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1800(Lcom/mediatek/engineermode/antenna/AntennaActivity;Ljava/lang/String;)I

    .line 224
    add-int/lit8 v2, v2, 0x1

    goto :goto_4

    .line 227
    .end local v1    # "result":[Ljava/lang/String;
    .end local v2    # "i":I
    :cond_a
    goto/16 :goto_6

    .line 228
    :cond_b
    const-string v1, "Query cdma antenna currect mode failed."

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 231
    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 233
    goto/16 :goto_6

    .line 235
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_6
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 236
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_c

    .line 237
    const-string v1, "Set successful."

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 239
    const-string v1, "set antenna mode succeed."

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_6

    .line 241
    :cond_c
    const-string v1, "Set failed."

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 242
    const-string v1, "set antenna mode failed."

    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 244
    goto :goto_6

    .line 195
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :pswitch_7
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 196
    .restart local v0    # "asyncResult":Landroid/os/AsyncResult;
    if-eqz v0, :cond_f

    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_f

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_f

    .line 198
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 199
    .restart local v1    # "result":[Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Query Ant Mode return: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 200
    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 199
    invoke-static {v9, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1500(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/LinearLayout;

    move-result-object v2

    invoke-virtual {v2, v6}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 202
    const/4 v2, 0x0

    .restart local v2    # "i":I
    :goto_5
    array-length v3, v1

    if-ge v2, v3, :cond_e

    .line 203
    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    aget-object v4, v1, v2

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1600(Lcom/mediatek/engineermode/antenna/AntennaActivity;Ljava/lang/String;)I

    move-result v3

    .line 204
    .local v3, "mode":I
    iget-object v4, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1700(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)Z

    move-result v4

    if-eqz v4, :cond_d

    .line 205
    iget-object v4, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;->this$0:Lcom/mediatek/engineermode/antenna/AntennaActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->access$1500(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/LinearLayout;

    move-result-object v4

    invoke-virtual {v4, v8}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 202
    .end local v3    # "mode":I
    :cond_d
    add-int/lit8 v2, v2, 0x1

    goto :goto_5

    .line 208
    .end local v1    # "result":[Ljava/lang/String;
    .end local v2    # "i":I
    :cond_e
    goto :goto_6

    .line 209
    :cond_f
    const-string v1, "Query 3G/4G/NR antenna currect mode failed."

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 212
    invoke-static {v9, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 214
    nop

    .line 334
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    :goto_6
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_7
        :pswitch_6
        :pswitch_0
        :pswitch_5
        :pswitch_4
        :pswitch_4
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method
