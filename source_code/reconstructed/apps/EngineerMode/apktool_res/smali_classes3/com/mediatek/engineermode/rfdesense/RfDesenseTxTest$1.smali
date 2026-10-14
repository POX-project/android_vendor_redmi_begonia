.class Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;
.super Landroid/os/Handler;
.source "RfDesenseTxTest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 209
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 20
    .param p1, "msg"    # Landroid/os/Message;

    .line 212
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    iget-object v2, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Landroid/os/AsyncResult;

    .line 213
    .local v2, "ar":Landroid/os/AsyncResult;
    iget v3, v1, Landroid/os/Message;->what:I

    const-wide/16 v4, 0x3e8

    const/4 v6, 0x2

    const/4 v7, 0x1

    const-string v8, "RfDesense/TxTest"

    if-eq v3, v7, :cond_1b

    const/16 v9, 0xa

    const/4 v10, 0x4

    const/4 v11, 0x3

    if-eq v3, v6, :cond_18

    if-eq v3, v11, :cond_16

    const/16 v4, 0x10

    const/4 v5, 0x0

    if-eq v3, v10, :cond_11

    const/4 v10, 0x5

    if-eq v3, v10, :cond_10

    const/4 v10, 0x7

    const-string v12, "failed\n"

    const-string v13, "(b"

    const-string v14, "%-20s %-15s %-10s"

    const-string v15, "%10s"

    const-string v6, ")"

    if-eq v3, v10, :cond_a

    if-eq v3, v9, :cond_5

    const-string v5, " "

    const-string v6, "send: "

    const/16 v9, 0x12

    if-eq v3, v4, :cond_2

    if-eq v3, v9, :cond_0

    move-object v1, v2

    goto/16 :goto_9

    .line 256
    :cond_0
    iget-object v3, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_1

    .line 257
    const-string v3, "switch ant status succeed"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-static {v7}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 259
    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v7}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;I)V

    .line 260
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 261
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 260
    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    move-object v1, v2

    goto/16 :goto_9

    .line 263
    :cond_1
    const-string v3, "switch ant status failed"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 265
    move-object v1, v2

    goto/16 :goto_9

    .line 267
    :cond_2
    const-string v3, "start tx test"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v3

    sput-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 269
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    if-eqz v3, :cond_4

    .line 270
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdAntSwitch()Ljava/lang/String;

    move-result-object v3

    const-string v4, "0"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 272
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-static {v7}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 273
    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v7}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;I)V

    .line 274
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 275
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 274
    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    move-object v1, v2

    goto/16 :goto_9

    .line 277
    :cond_3
    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdAntSwitch()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;I)V

    .line 278
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "switch ant statrus: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 279
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdAntSwitch()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 278
    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    move-object v1, v2

    goto/16 :goto_9

    .line 282
    :cond_4
    const-string v3, "mCurrectRatInfo is null"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 284
    move-object v1, v2

    goto/16 :goto_9

    .line 357
    :cond_5
    iget-object v3, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_9

    .line 358
    const-string v3, "read tx power succeed"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 359
    iget-object v3, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/String;

    .line 360
    .local v3, "value":[Ljava/lang/String;
    if-eqz v3, :cond_8

    array-length v4, v3

    if-lez v4, :cond_8

    sget-object v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    if-eqz v4, :cond_8

    .line 361
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "value = "

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v3, v5

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 362
    aget-object v4, v3, v5

    const-string v8, ","

    invoke-virtual {v4, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    aget-object v4, v4, v7

    invoke-static {v4}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v4

    .line 363
    .local v4, "getPower":F
    sget-object v8, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatPowerSet()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    .line 364
    .local v8, "getRatPowerSet":I
    sget-object v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatband()Ljava/lang/String;

    move-result-object v9

    .line 365
    .local v9, "ratband_s":Ljava/lang/String;
    int-to-float v10, v8

    sub-float/2addr v10, v4

    invoke-static {v10}, Ljava/lang/Math;->abs(F)F

    move-result v10

    move/from16 v16, v8

    .end local v8    # "getRatPowerSet":I
    .local v16, "getRatPowerSet":I
    sget-wide v7, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    long-to-float v7, v7

    cmpl-float v7, v10, v7

    if-lez v7, :cond_6

    .line 366
    const-string v7, "failed\n"

    .local v7, "result":Ljava/lang/String;
    goto :goto_0

    .line 368
    .end local v7    # "result":Ljava/lang/String;
    :cond_6
    const-string v7, "succeed\n"

    .line 370
    .restart local v7    # "result":Ljava/lang/String;
    :goto_0
    new-array v8, v11, [Ljava/lang/Object;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v11, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v11}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v8, v5

    .line 371
    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v10, 0x1

    aput-object v6, v8, v10

    invoke-static {v4}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    const/4 v10, 0x2

    aput-object v6, v8, v10

    .line 370
    invoke-static {v14, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    .line 373
    .local v6, "rat":Ljava/lang/String;
    iget-object v8, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 375
    invoke-virtual {v7, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_7

    .line 376
    iget-object v8, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    const/4 v10, 0x1

    new-array v10, v10, [Ljava/lang/Object;

    aput-object v7, v10, v5

    invoke-static {v15, v10}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    goto :goto_1

    .line 378
    :cond_7
    const/4 v10, 0x1

    iget-object v8, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    new-array v10, v10, [Ljava/lang/Object;

    aput-object v7, v10, v5

    invoke-static {v15, v10}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 381
    .end local v3    # "value":[Ljava/lang/String;
    .end local v4    # "getPower":F
    .end local v6    # "rat":Ljava/lang/String;
    .end local v7    # "result":Ljava/lang/String;
    .end local v9    # "ratband_s":Ljava/lang/String;
    .end local v16    # "getRatPowerSet":I
    :cond_8
    :goto_1
    move-object v1, v2

    goto/16 :goto_9

    .line 382
    :cond_9
    const-string v3, "read tx power failed"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 384
    move-object v1, v2

    goto/16 :goto_9

    .line 215
    :cond_a
    iget-object v3, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [I

    .line 216
    .local v3, "data":[I
    const-string v4, ""

    .line 217
    .local v4, "result":Ljava/lang/String;
    const-string v7, ""

    .line 218
    .local v7, "rat":Ljava/lang/String;
    const-string v8, "PCL"

    .line 219
    .local v8, "ratPowerSet":Ljava/lang/String;
    const-string v9, ""

    .line 220
    .restart local v9    # "ratband_s":Ljava/lang/String;
    const/4 v10, 0x1

    aget v11, v3, v10

    int-to-float v10, v11

    const/high16 v11, 0x41000000    # 8.0f

    div-float/2addr v10, v11

    .line 221
    .local v10, "getPower":F
    sget-object v11, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v11}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatPowerSet()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    .line 222
    .local v11, "getRatPowerSet":I
    sget-object v17, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual/range {v17 .. v17}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatband()Ljava/lang/String;

    move-result-object v17

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 223
    .local v1, "ratband":I
    aget v17, v3, v5

    if-nez v17, :cond_d

    .line 224
    iget-object v5, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[Ljava/lang/String;

    move-result-object v5

    aget-object v5, v5, v1

    .line 225
    .end local v9    # "ratband_s":Ljava/lang/String;
    .local v5, "ratband_s":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v18, v3

    .end local v3    # "data":[I
    .local v18, "data":[I
    const-string v3, "("

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 226
    .end local v8    # "ratPowerSet":Ljava/lang/String;
    .local v3, "ratPowerSet":Ljava/lang/String;
    if-eqz v1, :cond_c

    const/4 v8, 0x1

    if-eq v1, v8, :cond_c

    const/4 v8, 0x2

    if-eq v1, v8, :cond_c

    const/4 v8, 0x3

    if-ne v1, v8, :cond_b

    goto :goto_2

    .line 230
    :cond_b
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[I

    move-result-object v9

    aget v9, v9, v11

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 231
    iget-object v8, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[I

    move-result-object v8

    aget v11, v8, v11

    goto :goto_3

    .line 227
    :cond_c
    :goto_2
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[I

    move-result-object v9

    aget v9, v9, v11

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 228
    iget-object v8, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[I

    move-result-object v8

    aget v11, v8, v11

    goto :goto_3

    .line 234
    .end local v5    # "ratband_s":Ljava/lang/String;
    .end local v18    # "data":[I
    .local v3, "data":[I
    .restart local v8    # "ratPowerSet":Ljava/lang/String;
    .restart local v9    # "ratband_s":Ljava/lang/String;
    :cond_d
    move-object/from16 v18, v3

    .end local v3    # "data":[I
    .restart local v18    # "data":[I
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatband()Ljava/lang/String;

    move-result-object v5

    .line 235
    .end local v9    # "ratband_s":Ljava/lang/String;
    .restart local v5    # "ratband_s":Ljava/lang/String;
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatPowerSet()Ljava/lang/String;

    move-result-object v3

    .line 238
    .end local v8    # "ratPowerSet":Ljava/lang/String;
    .local v3, "ratPowerSet":Ljava/lang/String;
    :goto_3
    int-to-float v8, v11

    sub-float/2addr v8, v10

    invoke-static {v8}, Ljava/lang/Math;->abs(F)F

    move-result v8

    move v9, v1

    move-object/from16 v19, v2

    .end local v1    # "ratband":I
    .end local v2    # "ar":Landroid/os/AsyncResult;
    .local v9, "ratband":I
    .local v19, "ar":Landroid/os/AsyncResult;
    sget-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    long-to-float v1, v1

    cmpl-float v1, v8, v1

    if-lez v1, :cond_e

    .line 239
    const-string v1, "failed\n"

    .end local v4    # "result":Ljava/lang/String;
    .local v1, "result":Ljava/lang/String;
    goto :goto_4

    .line 241
    .end local v1    # "result":Ljava/lang/String;
    .restart local v4    # "result":Ljava/lang/String;
    :cond_e
    const-string v1, "succeed\n"

    .line 244
    .end local v4    # "result":Ljava/lang/String;
    .restart local v1    # "result":Ljava/lang/String;
    :goto_4
    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v8, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    aput-object v4, v2, v6

    const/4 v4, 0x1

    aput-object v3, v2, v4

    .line 245
    invoke-static {v10}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v4

    const/4 v6, 0x2

    aput-object v4, v2, v6

    .line 244
    invoke-static {v14, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    .line 247
    .end local v7    # "rat":Ljava/lang/String;
    .local v2, "rat":Ljava/lang/String;
    iget-object v4, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 249
    invoke-virtual {v1, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_f

    .line 250
    iget-object v4, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/Object;

    const/4 v7, 0x0

    aput-object v1, v6, v7

    invoke-static {v15, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    move-object/from16 v1, v19

    goto/16 :goto_9

    .line 252
    :cond_f
    const/4 v6, 0x1

    const/4 v7, 0x0

    iget-object v4, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    new-array v6, v6, [Ljava/lang/Object;

    aput-object v1, v6, v7

    invoke-static {v15, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 254
    move-object/from16 v1, v19

    goto/16 :goto_9

    .line 286
    .end local v1    # "result":Ljava/lang/String;
    .end local v3    # "ratPowerSet":Ljava/lang/String;
    .end local v5    # "ratband_s":Ljava/lang/String;
    .end local v9    # "ratband":I
    .end local v10    # "getPower":F
    .end local v11    # "getRatPowerSet":I
    .end local v18    # "data":[I
    .end local v19    # "ar":Landroid/os/AsyncResult;
    .local v2, "ar":Landroid/os/AsyncResult;
    :cond_10
    move-object/from16 v19, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .restart local v19    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V

    .line 287
    move-object/from16 v1, v19

    goto/16 :goto_9

    .line 320
    .end local v19    # "ar":Landroid/os/AsyncResult;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    :cond_11
    move-object/from16 v19, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .restart local v19    # "ar":Landroid/os/AsyncResult;
    move-object/from16 v1, v19

    .end local v19    # "ar":Landroid/os/AsyncResult;
    .local v1, "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_12

    .line 321
    const-string v2, "stop cmd ok"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 322
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " stop cmd ok \n"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    goto :goto_5

    .line 324
    :cond_12
    const-string v2, "stop cmd failed"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " stop cmd failed \n"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 327
    :goto_5
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    sput-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 328
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const-wide/16 v5, 0x7d0

    if-eqz v2, :cond_13

    .line 329
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v2

    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v3

    invoke-static {v3, v4}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v3

    invoke-virtual {v2, v3, v5, v6}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto/16 :goto_9

    .line 331
    :cond_13
    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCountSended:J

    const-wide/16 v9, 0x1

    add-long/2addr v2, v9

    sput-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCountSended:J

    .line 332
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "send done,mTestCountSended = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCountSended:J

    invoke-virtual {v2, v9, v10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCountSended:J

    sget-wide v7, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    cmp-long v2, v2, v7

    if-gez v2, :cond_15

    .line 334
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_6
    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    iget-object v3, v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_14

    .line 335
    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    iget-object v3, v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const/4 v7, 0x0

    invoke-static {v7}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v8

    invoke-virtual {v3, v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 334
    add-int/lit8 v2, v2, 0x1

    goto :goto_6

    .line 337
    .end local v2    # "i":I
    :cond_14
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v2

    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v3

    invoke-static {v3, v4}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v3

    invoke-virtual {v2, v3, v5, v6}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto/16 :goto_9

    .line 339
    :cond_15
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    const-string v3, "send all rat done\n"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 340
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V

    .line 344
    goto/16 :goto_9

    .line 289
    .end local v1    # "ar":Landroid/os/AsyncResult;
    .local v2, "ar":Landroid/os/AsyncResult;
    :cond_16
    move-object v1, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_17

    .line 290
    const-string v2, "Stop all succeed"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    .line 292
    :cond_17
    const-string v2, "Stop all failed"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 294
    :goto_7
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V

    .line 295
    goto/16 :goto_9

    .line 297
    .end local v1    # "ar":Landroid/os/AsyncResult;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    :cond_18
    move-object v1, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    invoke-static {}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$800()I

    move-result v2

    const/4 v3, 0x2

    if-ne v2, v3, :cond_19

    .line 298
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 299
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    const/4 v3, 0x3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;I)V

    .line 300
    return-void

    .line 302
    :cond_19
    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDurationSended:J

    sget-wide v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    add-long/2addr v2, v6

    sput-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDurationSended:J

    .line 303
    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDurationSended:J

    sget-wide v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    cmp-long v2, v2, v6

    if-lez v2, :cond_1a

    .line 304
    const-wide/16 v2, 0x0

    sput-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDurationSended:J

    .line 305
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2, v10}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;I)V

    goto/16 :goto_9

    .line 307
    :cond_1a
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v2

    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v3

    const/4 v6, 0x2

    invoke-static {v3, v6}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v3

    sget-wide v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    mul-long/2addr v6, v4

    invoke-virtual {v2, v3, v6, v7}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 309
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-eqz v2, :cond_1d

    .line 310
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    if-eqz v2, :cond_1d

    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 311
    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdPowerRead()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1d

    .line 312
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "send read tx power:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 313
    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdPowerRead()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 312
    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdPowerRead()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;I)V

    goto/16 :goto_9

    .line 346
    .end local v1    # "ar":Landroid/os/AsyncResult;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    :cond_1b
    move-object v1, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .restart local v1    # "ar":Landroid/os/AsyncResult;
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_1c

    .line 347
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " start cmd ok"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 348
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " start cmd ok\n"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    goto :goto_8

    .line 350
    :cond_1c
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " start cmd failed"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 351
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " start cmd failed\n"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V

    .line 353
    :goto_8
    iget-object v2, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v2

    iget-object v3, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-static {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;

    move-result-object v3

    const/4 v6, 0x2

    invoke-static {v3, v6}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v3

    invoke-virtual {v2, v3, v4, v5}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 355
    nop

    .line 389
    :cond_1d
    :goto_9
    return-void
.end method
