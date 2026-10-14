.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;
.super Landroid/os/Handler;
.source "McfConfigActivity93.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 177
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 21
    .param p1, "msg"    # Landroid/os/Message;

    .line 181
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    const/4 v2, 0x0

    .line 182
    .local v2, "ar":Landroid/os/AsyncResult;
    const/4 v3, 0x0

    .line 183
    .local v3, "return_code":Ljava/lang/String;
    iget v4, v1, Landroid/os/Message;->what:I

    const-string v5, " Succeed!"

    const-string v6, "\n"

    const-string v7, " Failed!\n"

    const-string v8, " returned exception:"

    const-string v9, "AT Command Failed: "

    const-string v10, "OPOTA"

    const-string v11, "OTA"

    const-string v12, ","

    const-string v13, " "

    const-string v14, ":"

    const/16 v16, 0x0

    const-string v15, ""

    move-object/from16 v18, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .local v18, "ar":Landroid/os/AsyncResult;
    const-string v2, "McfConfig/McfConfigActivity93"

    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .local v19, "return_code":Ljava/lang/String;
    const/4 v3, 0x1

    move-object/from16 v20, v10

    if-eqz v4, :cond_2c

    const/4 v10, 0x3

    if-eq v4, v3, :cond_1f

    const/4 v3, 0x2

    if-eq v4, v3, :cond_2c

    if-eq v4, v10, :cond_1f

    const/4 v3, 0x6

    if-eq v4, v3, :cond_1b

    const/16 v3, 0xb

    const/4 v5, 0x0

    if-eq v4, v3, :cond_13

    const/16 v3, 0x8

    if-eq v4, v3, :cond_7

    const/16 v6, 0x9

    if-eq v4, v6, :cond_7

    const/16 v3, 0x65

    if-eq v4, v3, :cond_3

    const/16 v5, 0x66

    if-eq v4, v5, :cond_0

    .line 418
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "unsupport msg :"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, v1, Landroid/os/Message;->what:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 403
    :cond_0
    iget-object v4, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Landroid/os/AsyncResult;

    .line 404
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v4, "ar":Landroid/os/AsyncResult;
    const/4 v5, 0x0

    .line 405
    .local v5, "isModem":Z
    iget-object v6, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v6, :cond_1

    iget-object v6, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v6, :cond_1

    .line 406
    iget-object v6, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v6, Ljava/lang/Boolean;

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    .line 407
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "IS MODEMENABLE: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v7, ", mIsModemEnabled: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 408
    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 407
    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 409
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v2

    if-nez v2, :cond_2

    if-eqz v5, :cond_2

    .line 410
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 413
    :cond_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Reboot Modem returned exception:"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 416
    nop

    .line 421
    .end local v5    # "isModem":Z
    :cond_2
    :goto_0
    move-object v2, v4

    move-object/from16 v3, v19

    goto/16 :goto_20

    .line 282
    .end local v4    # "ar":Landroid/os/AsyncResult;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :cond_3
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v3

    if-nez v3, :cond_6

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v3

    if-eqz v3, :cond_6

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;

    move-result-object v3

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_4

    goto :goto_2

    .line 290
    :cond_4
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;

    move-result-object v3

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 291
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v3, v3, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    if-eqz v3, :cond_5

    .line 292
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v3, v3, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v3}, Landroid/os/CountDownTimer;->cancel()V

    .line 293
    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iput-object v5, v3, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    .line 295
    :cond_5
    const-string v3, "Reset Modem Success!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const-string v3, "Reset Modem"

    const-string v4, "Reset Modem Completed!"

    invoke-static {v2, v3, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const/4 v3, 0x1

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$902(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Z)Z

    .line 298
    nop

    .line 421
    :goto_1
    move-object/from16 v2, v18

    move-object/from16 v3, v19

    goto/16 :goto_20

    .line 283
    :cond_6
    :goto_2
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "SIM"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " received MODEM_REBOOT_COMPLETE, but skiped! mIsModemEnabled:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 285
    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, " resetMd:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 286
    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, " taskSet:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 287
    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 283
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 288
    return-void

    .line 325
    :cond_7
    iget-object v4, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Landroid/os/AsyncResult;

    .line 326
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v4    # "ar":Landroid/os/AsyncResult;
    const/4 v5, 0x0

    .line 327
    .local v5, "queryOta":Z
    iget-object v6, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v6, :cond_e

    .line 328
    iget-object v6, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v6, :cond_f

    .line 329
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Query OTA ("

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, v1, Landroid/os/Message;->what:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " ): "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v7, [Ljava/lang/String;

    .line 330
    invoke-static {v7}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 329
    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 331
    iget-object v6, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v6, [Ljava/lang/String;

    aget-object v6, v6, v16

    .line 332
    const-string v7, "+EMCFC:"

    invoke-virtual {v7}, Ljava/lang/String;->length()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v6

    .line 333
    invoke-virtual {v6, v13, v15}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v12}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    .line 334
    .local v6, "results":[Ljava/lang/String;
    if-eqz v6, :cond_d

    .line 335
    const/4 v5, 0x1

    .line 336
    array-length v7, v6

    const/4 v8, 0x2

    if-lt v7, v8, :cond_8

    const/4 v7, 0x1

    aget-object v7, v6, v7

    goto :goto_3

    :cond_8
    move-object v7, v15

    .line 337
    .local v7, "type":Ljava/lang/String;
    :goto_3
    array-length v8, v6

    if-lt v8, v10, :cond_9

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 338
    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v8

    const/4 v9, 0x2

    aget-object v12, v6, v9

    invoke-virtual {v8, v12}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_9

    .line 339
    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v8

    aget-object v9, v6, v9

    invoke-virtual {v8, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    goto :goto_4

    :cond_9
    move-object v8, v15

    .line 340
    .local v8, "config":Ljava/lang/String;
    :goto_4
    array-length v9, v6

    const/4 v12, 0x4

    if-lt v9, v12, :cond_a

    aget-object v9, v6, v10

    goto :goto_5

    :cond_a
    move-object v9, v15

    .line 341
    .local v9, "value":Ljava/lang/String;
    :goto_5
    invoke-virtual {v9, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_b

    const-string v10, "No File"

    goto :goto_6

    :cond_b
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    :goto_6
    move-object v9, v10

    .line 342
    const-string v10, "0"

    invoke-virtual {v7, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_c

    .line 343
    iget-object v10, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1402(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_7

    .line 344
    :cond_c
    const-string v10, "1"

    invoke-virtual {v7, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_d

    .line 345
    iget-object v10, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v10, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1502(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;

    .line 348
    .end local v6    # "results":[Ljava/lang/String;
    .end local v7    # "type":Ljava/lang/String;
    .end local v8    # "config":Ljava/lang/String;
    .end local v9    # "value":Ljava/lang/String;
    :cond_d
    :goto_7
    goto :goto_8

    .line 350
    :cond_e
    const/4 v5, 0x0

    .line 351
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "AT with ota query returned exception:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 353
    :cond_f
    :goto_8
    if-eqz v5, :cond_11

    .line 354
    const-string v6, "ATCommand with ota query success!"

    invoke-static {v6}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 355
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "OTA: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", OPOTA: "

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 356
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget v6, v1, Landroid/os/Message;->what:I

    if-ne v6, v3, :cond_10

    .line 357
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_9

    .line 358
    :cond_10
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "OTA by OP: "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 356
    :goto_9
    const-string v6, "OTA Query "

    invoke-static {v2, v6, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 360
    :cond_11
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "Query "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 361
    iget v8, v1, Landroid/os/Message;->what:I

    if-ne v8, v3, :cond_12

    goto :goto_a

    .line 362
    :cond_12
    const-string v11, "OTA by OP"

    :goto_a
    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " failed!"

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 360
    const-string v7, "OTA Query"

    invoke-static {v6, v7, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 363
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "ATCommand with "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v1, Landroid/os/Message;->what:I

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " query failed!"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 365
    goto/16 :goto_0

    .line 367
    .end local v4    # "ar":Landroid/os/AsyncResult;
    .end local v5    # "queryOta":Z
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :cond_13
    iget-object v3, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Landroid/os/AsyncResult;

    .line 368
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v3, "ar":Landroid/os/AsyncResult;
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v6, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v6, [B

    invoke-virtual {v4, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->byteArrayToStr([B)Ljava/lang/String;

    move-result-object v4

    .line 369
    .local v4, "str":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Readback from urc = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 370
    const-string v6, "+EMCFRPT"

    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1a

    invoke-virtual {v4, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    array-length v6, v6

    const/4 v7, 0x2

    if-ge v6, v7, :cond_14

    .line 371
    goto/16 :goto_d

    .line 373
    :cond_14
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v6, v6, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    if-eqz v6, :cond_15

    .line 374
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-object v6, v6, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v6}, Landroid/os/CountDownTimer;->cancel()V

    .line 375
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iput-object v5, v6, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->timer:Landroid/os/CountDownTimer;

    .line 377
    :cond_15
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/app/ProgressDialog;

    move-result-object v6

    if-eqz v6, :cond_16

    .line 378
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/app/ProgressDialog;

    move-result-object v6

    invoke-virtual {v6}, Landroid/app/ProgressDialog;->dismiss()V

    .line 379
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 381
    :cond_16
    invoke-virtual {v4, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x1

    aget-object v5, v5, v6

    invoke-virtual {v5, v13, v15}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 382
    invoke-virtual {v4, v12}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 383
    .local v5, "data":[Ljava/lang/String;
    aget-object v7, v5, v16

    invoke-virtual {v7}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    .line 384
    .local v7, "type":I
    aget-object v8, v5, v6

    invoke-virtual {v8}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    .line 385
    .local v8, "result":I
    if-eq v7, v6, :cond_17

    .line 399
    goto/16 :goto_d

    .line 387
    :cond_17
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iput-wide v9, v6, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpEnd:J

    .line 388
    new-instance v6, Ljava/text/SimpleDateFormat;

    const-string v9, "HH:mm:ss"

    invoke-direct {v6, v9}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 389
    .local v6, "df":Ljava/text/SimpleDateFormat;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Dump OTA file end :"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v10, Ljava/util/Date;

    iget-object v11, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-wide v11, v11, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpBegain:J

    invoke-direct {v10, v11, v12}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v6, v10}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v2, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 390
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    if-nez v8, :cond_18

    .line 391
    const-string v10, "Success!"

    goto :goto_c

    :cond_18
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Failed with Error Code: "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 392
    iget-object v11, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v11}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v11

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_19

    .line 393
    iget-object v11, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v11}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v11

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/io/Serializable;

    goto :goto_b

    :cond_19
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    :goto_b
    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    :goto_c
    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "\nDump costs "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v10, 0x1

    new-array v11, v10, [Ljava/lang/Object;

    iget-object v10, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-wide v12, v10, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpEnd:J

    iget-object v10, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget-wide v14, v10, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->dumpBegain:J

    sub-long/2addr v12, v14

    long-to-float v10, v12

    const/high16 v12, 0x447a0000    # 1000.0f

    div-float/2addr v10, v12

    .line 395
    invoke-static {v10}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v10

    aput-object v10, v11, v16

    const-string v10, "%.2f"

    invoke-static {v10, v11}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, " s"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 390
    const-string v10, "Dump Result"

    invoke-static {v2, v10, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 396
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;

    move-result-object v2

    const/4 v9, 0x1

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-interface {v2, v9}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 397
    nop

    .line 421
    .end local v4    # "str":Ljava/lang/String;
    .end local v5    # "data":[Ljava/lang/String;
    .end local v6    # "df":Ljava/text/SimpleDateFormat;
    .end local v7    # "type":I
    .end local v8    # "result":I
    :cond_1a
    :goto_d
    move-object v2, v3

    move-object/from16 v3, v19

    goto/16 :goto_20

    .line 300
    .end local v3    # "ar":Landroid/os/AsyncResult;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :cond_1b
    iget-object v3, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Landroid/os/AsyncResult;

    .line 301
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v3    # "ar":Landroid/os/AsyncResult;
    const/4 v4, 0x0

    .line 302
    .local v4, "dumpOTA":Z
    iget-object v5, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v5, :cond_1c

    .line 303
    const/4 v4, 0x1

    .line 304
    iget-object v5, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v5, :cond_1d

    iget-object v5, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v5, v5, [Ljava/lang/String;

    if-eqz v5, :cond_1d

    .line 305
    iget-object v5, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v5, [Ljava/lang/String;

    .line 306
    .restart local v5    # "data":[Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "ATCommand with Dump OTA returned: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 307
    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 306
    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 308
    .end local v5    # "data":[Ljava/lang/String;
    goto :goto_e

    .line 310
    :cond_1c
    const/4 v4, 0x0

    .line 311
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "ATCommand with Dump OTA returned exception:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 313
    :cond_1d
    :goto_e
    if-eqz v4, :cond_1e

    .line 314
    const-string v2, "ATCommand with Dump OTA success!"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 315
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const/16 v5, 0xb4

    const/4 v6, 0x1

    invoke-virtual {v2, v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->startTimer(II)V

    .line 316
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const-string v5, "Waitting"

    const-string v7, "Dump OTA is ongoing......"

    invoke-static {v2, v5, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 317
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$1000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/Set;

    move-result-object v2

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v2, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_d

    .line 319
    :cond_1e
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    const-string v6, "Dump OTA"

    const-string v7, "Dump OTA failed!"

    invoke-static {v5, v6, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 320
    const-string v5, "ATCommand with Dump OTA failed!"

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 322
    goto/16 :goto_d

    .line 232
    .end local v3    # "ar":Landroid/os/AsyncResult;
    .end local v4    # "dumpOTA":Z
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :cond_1f
    iget-object v3, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Landroid/os/AsyncResult;

    .line 233
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v3    # "ar":Landroid/os/AsyncResult;
    iget v4, v1, Landroid/os/Message;->what:I

    const/4 v10, 0x1

    if-ne v4, v10, :cond_20

    move-object v10, v11

    goto :goto_f

    :cond_20
    move-object/from16 v10, v20

    :goto_f
    move-object v4, v10

    .line 234
    .local v4, "clearStr":Ljava/lang/String;
    const/4 v10, 0x0

    .line 235
    .local v10, "clearOTA":Z
    iget-object v11, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    move/from16 v18, v10

    .end local v10    # "clearOTA":Z
    .local v18, "clearOTA":Z
    const-string v10, "Clear "

    if-nez v11, :cond_24

    .line 236
    const/4 v8, 0x1

    .line 237
    .end local v18    # "clearOTA":Z
    .local v8, "clearOTA":Z
    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v9, :cond_23

    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v9, v9, [Ljava/lang/String;

    if-eqz v9, :cond_23

    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    array-length v9, v9

    if-lez v9, :cond_23

    .line 239
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Clear Result: "

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v11, [Ljava/lang/String;

    invoke-static {v11}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v2, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    aget-object v9, v9, v16

    invoke-virtual {v9, v12}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    .line 241
    .local v9, "results":[Ljava/lang/String;
    if-eqz v9, :cond_22

    const/4 v11, 0x1

    aget-object v12, v9, v11

    if-eqz v12, :cond_22

    const/4 v12, 0x2

    aget-object v14, v9, v12

    if-eqz v14, :cond_22

    .line 242
    aget-object v14, v9, v11

    invoke-virtual {v14}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    .line 243
    .local v11, "otaResult":I
    aget-object v12, v9, v12

    invoke-virtual {v12}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Integer;->intValue()I

    move-result v12

    .line 244
    .local v12, "dsbpResult":I
    if-nez v12, :cond_21

    if-nez v11, :cond_21

    .line 245
    const/4 v8, 0x1

    goto :goto_10

    .line 247
    :cond_21
    const/4 v8, 0x0

    .line 248
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v17, v8

    .end local v8    # "clearOTA":Z
    .local v17, "clearOTA":Z
    const-string v8, "Mcf Ota: "

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 249
    move-object/from16 v18, v9

    .end local v9    # "results":[Ljava/lang/String;
    .local v18, "results":[Ljava/lang/String;
    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v9

    invoke-virtual {v8, v11, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "\nDsbp: "

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 251
    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v9

    invoke-virtual {v8, v12, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    move-object/from16 v19, v8

    move/from16 v8, v17

    .end local v19    # "return_code":Ljava/lang/String;
    .local v8, "return_code":Ljava/lang/String;
    goto :goto_10

    .line 241
    .end local v11    # "otaResult":I
    .end local v12    # "dsbpResult":I
    .end local v17    # "clearOTA":Z
    .end local v18    # "results":[Ljava/lang/String;
    .local v8, "clearOTA":Z
    .restart local v9    # "results":[Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_22
    move-object/from16 v18, v9

    .line 254
    .end local v9    # "results":[Ljava/lang/String;
    :goto_10
    move-object/from16 v9, v19

    goto :goto_12

    .line 260
    :cond_23
    move-object/from16 v9, v19

    goto :goto_12

    .line 256
    .end local v8    # "clearOTA":Z
    .local v18, "clearOTA":Z
    :cond_24
    iget-object v11, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v11}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v11

    const/4 v12, 0x1

    aget-object v11, v11, v12

    if-eqz v11, :cond_25

    .line 257
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v9}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v9, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v12

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    goto :goto_11

    :cond_25
    move-object v9, v15

    .line 258
    .end local v19    # "return_code":Ljava/lang/String;
    .local v9, "return_code":Ljava/lang/String;
    :goto_11
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    move/from16 v8, v18

    .line 260
    .end local v18    # "clearOTA":Z
    .restart local v8    # "clearOTA":Z
    :goto_12
    if-eqz v8, :cond_2a

    .line 261
    iget v2, v1, Landroid/os/Message;->what:I

    const/4 v6, 0x1

    if-ne v2, v6, :cond_26

    .line 262
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/widget/TextView;

    move-result-object v2

    invoke-virtual {v2, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 263
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2, v15}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_13

    .line 264
    :cond_26
    iget v2, v1, Landroid/os/Message;->what:I

    const/4 v6, 0x3

    if-ne v2, v6, :cond_27

    .line 265
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Landroid/widget/TextView;

    move-result-object v2

    invoke-virtual {v2, v15}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 266
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v2, v15}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;)Ljava/lang/String;

    .line 268
    :cond_27
    :goto_13
    new-instance v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-direct {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Integer;

    .line 269
    iget v11, v1, Landroid/os/Message;->what:I

    if-ne v11, v6, :cond_28

    .line 270
    move/from16 v6, v16

    goto :goto_14

    .line 271
    :cond_28
    const/4 v6, 0x1

    .line 269
    :goto_14
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v7, v16

    .line 268
    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 272
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 273
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget v5, v1, Landroid/os/Message;->what:I

    const/4 v6, 0x1

    if-ne v5, v6, :cond_29

    const/4 v5, 0x1

    goto :goto_15

    :cond_29
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v5

    :goto_15
    invoke-static {v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Z)V

    goto :goto_17

    .line 275
    :cond_2a
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    if-nez v9, :cond_2b

    goto :goto_16

    :cond_2b
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    :goto_16
    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 277
    .local v5, "errorMsg":Ljava/lang/String;
    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 278
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 280
    .end local v5    # "errorMsg":Ljava/lang/String;
    nop

    .line 421
    .end local v4    # "clearStr":Ljava/lang/String;
    .end local v8    # "clearOTA":Z
    :goto_17
    move-object v2, v3

    move-object v3, v9

    goto/16 :goto_20

    .line 186
    .end local v3    # "ar":Landroid/os/AsyncResult;
    .end local v9    # "return_code":Ljava/lang/String;
    .local v18, "ar":Landroid/os/AsyncResult;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_2c
    iget v3, v1, Landroid/os/Message;->what:I

    if-nez v3, :cond_2d

    move-object v10, v11

    goto :goto_18

    :cond_2d
    move-object/from16 v10, v20

    :goto_18
    move-object v3, v10

    .line 187
    .local v3, "setStr":Ljava/lang/String;
    iget-object v4, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Landroid/os/AsyncResult;

    .line 188
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v4, "ar":Landroid/os/AsyncResult;
    const/4 v10, 0x0

    .line 189
    .local v10, "applyOTA":Z
    iget-object v11, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    move/from16 v18, v10

    .end local v10    # "applyOTA":Z
    .local v18, "applyOTA":Z
    const-string v10, "Apply "

    if-nez v11, :cond_31

    .line 190
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "ATCmd -> Return "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    invoke-virtual {v9}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    const/4 v8, 0x1

    .line 192
    .end local v18    # "applyOTA":Z
    .local v8, "applyOTA":Z
    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v9, :cond_30

    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v9, v9, [Ljava/lang/String;

    if-eqz v9, :cond_30

    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    array-length v9, v9

    if-lez v9, :cond_30

    .line 194
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Apply Result: "

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v11, [Ljava/lang/String;

    invoke-static {v11}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v2, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 195
    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    aget-object v9, v9, v16

    invoke-virtual {v9, v12}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    .line 196
    .local v9, "results":[Ljava/lang/String;
    if-eqz v9, :cond_2f

    const/4 v11, 0x1

    aget-object v12, v9, v11

    if-eqz v12, :cond_2f

    const/4 v12, 0x2

    aget-object v14, v9, v12

    if-eqz v14, :cond_2f

    .line 198
    aget-object v14, v9, v11

    invoke-virtual {v14}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    .line 199
    .restart local v11    # "otaResult":I
    aget-object v12, v9, v12

    invoke-virtual {v12}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Integer;->intValue()I

    move-result v12

    .line 200
    .restart local v12    # "dsbpResult":I
    if-nez v12, :cond_2e

    if-nez v11, :cond_2e

    .line 201
    const/4 v8, 0x1

    goto :goto_19

    .line 203
    :cond_2e
    const/4 v8, 0x0

    .line 204
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v17, v8

    .end local v8    # "applyOTA":Z
    .local v17, "applyOTA":Z
    const-string v8, "Mcf Ota: "

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 205
    move-object/from16 v18, v9

    .end local v9    # "results":[Ljava/lang/String;
    .local v18, "results":[Ljava/lang/String;
    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v9

    invoke-virtual {v8, v11, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "\nDsbp: "

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    .line 207
    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Ljava/util/HashMap;

    move-result-object v9

    invoke-virtual {v8, v12, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    move-object/from16 v19, v8

    move/from16 v8, v17

    .end local v19    # "return_code":Ljava/lang/String;
    .local v8, "return_code":Ljava/lang/String;
    goto :goto_19

    .line 196
    .end local v11    # "otaResult":I
    .end local v12    # "dsbpResult":I
    .end local v17    # "applyOTA":Z
    .end local v18    # "results":[Ljava/lang/String;
    .local v8, "applyOTA":Z
    .restart local v9    # "results":[Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_2f
    move-object/from16 v18, v9

    .line 210
    .end local v9    # "results":[Ljava/lang/String;
    :goto_19
    move-object/from16 v9, v19

    goto :goto_1b

    .line 216
    :cond_30
    move-object/from16 v9, v19

    goto :goto_1b

    .line 212
    .end local v8    # "applyOTA":Z
    .local v18, "applyOTA":Z
    :cond_31
    iget-object v11, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v11}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v11

    const/4 v12, 0x1

    aget-object v11, v11, v12

    if-eqz v11, :cond_32

    .line 213
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v9}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v9, v14}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v12

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    goto :goto_1a

    :cond_32
    move-object v9, v15

    .line 214
    .end local v19    # "return_code":Ljava/lang/String;
    .local v9, "return_code":Ljava/lang/String;
    :goto_1a
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    move/from16 v8, v18

    .line 216
    .end local v18    # "applyOTA":Z
    .restart local v8    # "applyOTA":Z
    :goto_1b
    if-eqz v8, :cond_35

    .line 217
    new-instance v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-direct {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)V

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Integer;

    .line 218
    iget v10, v1, Landroid/os/Message;->what:I

    if-nez v10, :cond_33

    .line 219
    move/from16 v10, v16

    goto :goto_1c

    .line 220
    :cond_33
    move v10, v6

    .line 218
    :goto_1c
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v7, v16

    .line 217
    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$saveOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 221
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Apply  "

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 222
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    iget v5, v1, Landroid/os/Message;->what:I

    if-nez v5, :cond_34

    move v5, v6

    goto :goto_1d

    :cond_34
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    invoke-static {v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;)Z

    move-result v5

    :goto_1d
    invoke-static {v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Z)V

    goto :goto_1f

    .line 224
    :cond_35
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 225
    if-nez v9, :cond_36

    goto :goto_1e

    :cond_36
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    :goto_1e
    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 226
    .restart local v5    # "errorMsg":Ljava/lang/String;
    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 227
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity93;Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    .end local v5    # "errorMsg":Ljava/lang/String;
    nop

    .line 421
    .end local v3    # "setStr":Ljava/lang/String;
    .end local v8    # "applyOTA":Z
    :goto_1f
    move-object v2, v4

    move-object v3, v9

    .end local v4    # "ar":Landroid/os/AsyncResult;
    .end local v9    # "return_code":Ljava/lang/String;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    .local v3, "return_code":Ljava/lang/String;
    :goto_20
    return-void
.end method
