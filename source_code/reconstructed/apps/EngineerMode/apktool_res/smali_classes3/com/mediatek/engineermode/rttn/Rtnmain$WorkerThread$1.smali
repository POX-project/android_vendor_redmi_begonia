.class Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;
.super Landroid/os/Handler;
.source "Rtnmain.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;)V
    .locals 0
    .param p1, "this$1"    # Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    .line 317
    iput-object p1, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 12
    .param p1, "msg"    # Landroid/os/Message;

    .line 320
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eq v0, v1, :cond_e

    const/4 v1, 0x3

    const-wide/16 v4, 0x7d0

    if-eq v0, v1, :cond_7

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto/16 :goto_a

    .line 398
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1000()Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 399
    :try_start_0
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 400
    .local v1, "asyncResult":Landroid/os/AsyncResult;
    iget-object v6, v1, Landroid/os/AsyncResult;->userObj:Ljava/lang/Object;

    check-cast v6, Ljava/lang/String;

    .line 401
    .local v6, "expected":Ljava/lang/String;
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 402
    if-eqz v1, :cond_4

    iget-object v7, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v7, :cond_4

    .line 403
    iget-object v7, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v7, [Ljava/lang/String;

    .line 405
    .local v7, "result":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v8

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Response result.length= "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v10, v7

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " result: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    array-length v8, v7

    if-lt v8, v2, :cond_3

    aget-object v8, v7, v3

    if-eqz v8, :cond_3

    .line 408
    const/4 v8, 0x0

    .line 410
    .local v8, "counter":I
    :goto_0
    array-length v9, v7

    if-ge v8, v9, :cond_1

    .line 411
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v9

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "result["

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, "]= "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v11, v7, v8

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 412
    add-int/lit8 v8, v8, 0x1

    goto :goto_0

    .line 415
    :cond_1
    aget-object v9, v7, v3

    const-string v10, "+CME ERROR:"

    invoke-virtual {v9, v10}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v9

    if-eqz v9, :cond_2

    .line 416
    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 417
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 418
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1400()Landroid/os/Handler;

    move-result-object v9

    iget-object v10, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    iget-object v10, v10, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v10}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1300(Lcom/mediatek/engineermode/rttn/Rtnmain;)Ljava/lang/Runnable;

    move-result-object v10

    invoke-virtual {v9, v10, v4, v5}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 421
    :cond_2
    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 423
    :try_start_1
    aget-object v4, v7, v3

    const-string v5, ":"

    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    aget-object v2, v4, v2

    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1102(Ljava/lang/String;)Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 427
    goto :goto_1

    .line 424
    :catch_0
    move-exception v2

    .line 425
    .local v2, "e":Ljava/lang/Exception;
    :try_start_2
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v4

    const-string v5, "Exception in split command. Use result as is."

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 426
    aget-object v3, v7, v3

    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1102(Ljava/lang/String;)Ljava/lang/String;

    .line 429
    .end local v2    # "e":Ljava/lang/Exception;
    .end local v7    # "result":[Ljava/lang/String;
    .end local v8    # "counter":I
    :cond_3
    :goto_1
    goto :goto_2

    :cond_4
    if-eqz v1, :cond_5

    .line 430
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 431
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v3

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " failed with exception"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v3, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 432
    iget-object v3, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    check-cast v3, Lcom/android/internal/telephony/CommandException;

    invoke-virtual {v3}, Lcom/android/internal/telephony/CommandException;->getCommandError()Lcom/android/internal/telephony/CommandException$Error;

    move-result-object v3

    sget-object v7, Lcom/android/internal/telephony/CommandException$Error;->OPERATION_NOT_ALLOWED:Lcom/android/internal/telephony/CommandException$Error;

    if-ne v3, v7, :cond_6

    .line 434
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v3

    const-string v7, "Fail case with RIL_E_OPERATION_NOT_ALLOWED"

    invoke-static {v3, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 436
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1400()Landroid/os/Handler;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    iget-object v3, v3, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1300(Lcom/mediatek/engineermode/rttn/Rtnmain;)Ljava/lang/Runnable;

    move-result-object v3

    invoke-virtual {v2, v3, v4, v5}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_2

    .line 439
    :cond_5
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 440
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " failed"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 442
    :cond_6
    :goto_2
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1000()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->notifyAll()V

    .line 443
    .end local v1    # "asyncResult":Landroid/os/AsyncResult;
    .end local v6    # "expected":Ljava/lang/String;
    monitor-exit v0

    .line 444
    goto/16 :goto_a

    .line 443
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v1

    .line 349
    :cond_7
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1000()Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 350
    :try_start_3
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 351
    .restart local v1    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v6, v1, Landroid/os/AsyncResult;->userObj:Ljava/lang/Object;

    check-cast v6, Ljava/lang/String;

    .line 352
    .restart local v6    # "expected":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1400()Landroid/os/Handler;

    move-result-object v7

    iget-object v8, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    iget-object v8, v8, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1300(Lcom/mediatek/engineermode/rttn/Rtnmain;)Ljava/lang/Runnable;

    move-result-object v8

    invoke-virtual {v7, v8}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 354
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 355
    if-eqz v1, :cond_d

    iget-object v7, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v7, :cond_d

    .line 356
    iget-object v7, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v7, [Ljava/lang/String;

    .line 357
    .restart local v7    # "result":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v8

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "ATCommand for poll returned: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v7}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 358
    if-eqz v7, :cond_c

    array-length v8, v7

    if-lt v8, v2, :cond_c

    aget-object v8, v7, v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v8, :cond_c

    .line 361
    :try_start_4
    aget-object v8, v7, v3

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    aget-object v8, v8, v2

    invoke-static {v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1102(Ljava/lang/String;)Ljava/lang/String;

    .line 362
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1100()Ljava/lang/String;

    move-result-object v8

    const-string v9, "FF9000"

    invoke-virtual {v8, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_b

    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1100()Ljava/lang/String;

    move-result-object v8

    const-string v9, "FF91"

    invoke-virtual {v8, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_8

    goto :goto_4

    .line 370
    :cond_8
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1100()Ljava/lang/String;

    move-result-object v4

    const-string v5, "019000"

    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_a

    .line 371
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1100()Ljava/lang/String;

    move-result-object v4

    const-string v5, "0191"

    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_9

    goto :goto_3

    .line 378
    :cond_9
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v2

    const-string v4, "FAIL case. Reason:Other codes"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 379
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 380
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    goto :goto_5

    .line 372
    :cond_a
    :goto_3
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v4

    const-string v5, "The return contains success codes. So exit with pass."

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 374
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 375
    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    goto :goto_5

    .line 363
    :cond_b
    :goto_4
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v8

    const-string v9, "The return contains FF9000 error code"

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 366
    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 368
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1400()Landroid/os/Handler;

    move-result-object v2

    iget-object v8, p0, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread$1;->this$1:Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;

    iget-object v8, v8, Lcom/mediatek/engineermode/rttn/Rtnmain$WorkerThread;->this$0:Lcom/mediatek/engineermode/rttn/Rtnmain;

    invoke-static {v8}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1300(Lcom/mediatek/engineermode/rttn/Rtnmain;)Ljava/lang/Runnable;

    move-result-object v8

    invoke-virtual {v2, v8, v4, v5}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 369
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 386
    :goto_5
    goto :goto_6

    .line 382
    :catch_1
    move-exception v2

    .line 383
    .restart local v2    # "e":Ljava/lang/Exception;
    :try_start_5
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 384
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 385
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Exception in split command."

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 388
    .end local v2    # "e":Ljava/lang/Exception;
    .end local v7    # "result":[Ljava/lang/String;
    :cond_c
    :goto_6
    goto :goto_7

    .line 389
    :cond_d
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 390
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1502(Z)Z

    .line 391
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " failed"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 393
    :goto_7
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1000()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->notifyAll()V

    .line 394
    .end local v1    # "asyncResult":Landroid/os/AsyncResult;
    .end local v6    # "expected":Ljava/lang/String;
    monitor-exit v0

    .line 395
    goto/16 :goto_a

    .line 394
    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    throw v1

    .line 322
    :cond_e
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1000()Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 323
    :try_start_6
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 324
    .restart local v1    # "asyncResult":Landroid/os/AsyncResult;
    iget-object v4, v1, Landroid/os/AsyncResult;->userObj:Ljava/lang/Object;

    check-cast v4, Ljava/lang/String;

    .line 325
    .local v4, "expected":Ljava/lang/String;
    if-eqz v1, :cond_10

    iget-object v5, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v5, :cond_10

    .line 327
    iget-object v5, v1, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v5, [Ljava/lang/String;

    .line 329
    .local v5, "result":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "ATCommand for query returned: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    if-eqz v5, :cond_f

    array-length v6, v5

    if-lt v6, v2, :cond_f

    aget-object v6, v5, v3
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    if-eqz v6, :cond_f

    .line 332
    :try_start_7
    aget-object v6, v5, v3

    const-string v7, ":"

    invoke-virtual {v6, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v2

    invoke-static {v6}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1102(Ljava/lang/String;)Ljava/lang/String;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_2
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    .line 337
    goto :goto_8

    .line 333
    :catch_2
    move-exception v6

    .line 334
    .local v6, "e":Ljava/lang/Exception;
    :try_start_8
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v7

    const-string v8, "Exception in split command. Use result as is."

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 336
    aget-object v3, v5, v3

    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1102(Ljava/lang/String;)Ljava/lang/String;

    .line 339
    .end local v6    # "e":Ljava/lang/Exception;
    :cond_f
    :goto_8
    invoke-static {v2}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 340
    nop

    .end local v5    # "result":[Ljava/lang/String;
    goto :goto_9

    .line 341
    :cond_10
    invoke-static {v3}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1202(I)I

    .line 342
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$000()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " failed"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    :goto_9
    invoke-static {}, Lcom/mediatek/engineermode/rttn/Rtnmain;->access$1000()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->notifyAll()V

    .line 345
    .end local v1    # "asyncResult":Landroid/os/AsyncResult;
    .end local v4    # "expected":Ljava/lang/String;
    monitor-exit v0

    .line 346
    nop

    .line 449
    :goto_a
    return-void

    .line 345
    :catchall_2
    move-exception v1

    monitor-exit v0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    throw v1
.end method
