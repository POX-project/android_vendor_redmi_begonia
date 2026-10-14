.class Lcom/mediatek/engineermode/ims/ImsActivity$2;
.super Landroid/os/Handler;
.source "ImsActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/ims/ImsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field private mReturnData:[Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/engineermode/ims/ImsActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/ims/ImsActivity;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 220
    iput-object p1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 221
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->mReturnData:[Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 13
    .param p1, "msg"    # Landroid/os/Message;

    .line 225
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    const-string v2, "Ims/ImsActivity"

    if-nez v0, :cond_1

    .line 226
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 227
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_0

    .line 228
    const-string v3, "Set operator_code successful."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 230
    invoke-static {}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$100()I

    move-result v3

    .line 229
    const-string v3, "ims_signaling_qci"

    const-string v4, "5"

    invoke-static {v2, v3, v4, v1}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$500(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_0

    .line 233
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v2, "Set operator_code failed."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 235
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_0
    goto/16 :goto_10

    :cond_1
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x2

    const-string v4, "1"

    const-string v5, "0"

    if-ne v0, v1, :cond_4

    .line 236
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 237
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v6, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v6, :cond_3

    .line 238
    const-string v6, "Set ims_signaling_qci successful."

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 239
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    .line 240
    invoke-static {}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$100()I

    move-result v6

    if-ne v6, v1, :cond_2

    move-object v4, v5

    .line 239
    :cond_2
    const-string v1, "UA_call_precondition"

    invoke-static {v2, v1, v4, v3}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$500(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_1

    .line 243
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v2, "Set ims_signaling_qci failed."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 245
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_1
    goto/16 :goto_10

    :cond_4
    iget v0, p1, Landroid/os/Message;->what:I

    if-ne v0, v3, :cond_6

    .line 246
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 247
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_5

    .line 248
    const-string v1, "Set UA_call_precondition successful."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    new-instance v1, Landroid/os/Message;

    invoke-direct {v1}, Landroid/os/Message;-><init>()V

    .line 250
    .local v1, "msgSetting":Landroid/os/Message;
    const/4 v2, 0x3

    iput v2, v1, Landroid/os/Message;->what:I

    .line 251
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$600(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 252
    .end local v1    # "msgSetting":Landroid/os/Message;
    goto :goto_2

    .line 253
    :cond_5
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v2, "Set UA_call_precondition failed."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 255
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_2
    goto/16 :goto_10

    :cond_6
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x10

    if-eq v0, v3, :cond_1a

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x11

    if-eq v0, v3, :cond_1a

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x12

    if-eq v0, v3, :cond_1a

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x13

    if-ne v0, v3, :cond_7

    goto/16 :goto_e

    .line 268
    :cond_7
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x4

    if-ne v0, v3, :cond_9

    .line 269
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 270
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_8

    .line 271
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v2, "Set VDP successfully."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    goto :goto_3

    .line 273
    :cond_8
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v2, "Set VDP failed."

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 275
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_3
    goto/16 :goto_10

    :cond_9
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x5

    const/4 v6, 0x0

    if-ne v0, v3, :cond_b

    .line 276
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 277
    .local v0, "asyncResult":Landroid/os/AsyncResult;
    if-eqz v0, :cond_a

    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_a

    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v1, :cond_a

    .line 279
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 280
    .local v1, "result":[Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$700(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/widget/EditText;

    move-result-object v2

    aget-object v3, v1, v6

    const-string v4, "+CEVDP:"

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 282
    .end local v0    # "asyncResult":Landroid/os/AsyncResult;
    .end local v1    # "result":[Ljava/lang/String;
    :cond_a
    goto/16 :goto_10

    :cond_b
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x6

    const-string v7, ": "

    if-ne v0, v3, :cond_11

    .line 283
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 284
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    const-string v6, "Set test mode failed"

    const-string v8, "Set ims test mode failed."

    if-nez v3, :cond_10

    .line 285
    iget-object v3, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [B

    .line 286
    .local v3, "rawData":[B
    const-string v9, ""

    .line 287
    .local v9, "error_num":Ljava/lang/String;
    new-instance v10, Ljava/lang/String;

    invoke-direct {v10, v3}, Ljava/lang/String;-><init>([B)V

    .line 288
    .local v10, "txt":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "Result(byte): "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v2, v11}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 290
    invoke-virtual {v10}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v11

    const-string v12, "OK"

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_c

    .line 291
    const-string v1, "0"

    .end local v9    # "error_num":Ljava/lang/String;
    .local v1, "error_num":Ljava/lang/String;
    goto :goto_4

    .line 294
    .end local v1    # "error_num":Ljava/lang/String;
    .restart local v9    # "error_num":Ljava/lang/String;
    :cond_c
    :try_start_0
    invoke-virtual {v10, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    aget-object v1, v7, v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    move-object v9, v1

    .line 295
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "error_num: "

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 298
    move-object v1, v9

    goto :goto_4

    .line 296
    :catch_0
    move-exception v1

    .line 297
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    move-object v1, v9

    .line 301
    .end local v9    # "error_num":Ljava/lang/String;
    .local v1, "error_num":Ljava/lang/String;
    :goto_4
    const-string v7, "100"

    invoke-virtual {v1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_e

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_d

    goto :goto_5

    .line 312
    :cond_d
    iget-object v4, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-static {v4, v8}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 313
    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_8

    .line 303
    :cond_e
    :goto_5
    :try_start_1
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v6

    .line 304
    iget-object v7, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$800(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/widget/RadioButton;

    move-result-object v7

    invoke-virtual {v7}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v7

    if-eqz v7, :cond_f

    goto :goto_6

    :cond_f
    move-object v4, v5

    :goto_6
    invoke-interface {v6, v4}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setImsTestMode(Ljava/lang/String;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 308
    goto :goto_7

    .line 305
    :catch_1
    move-exception v4

    .line 306
    .local v4, "e":Ljava/lang/Exception;
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 307
    const-string v5, "set property failed ..."

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 309
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_7
    iget-object v4, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v5, "Set test mode done"

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 310
    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 315
    .end local v1    # "error_num":Ljava/lang/String;
    .end local v3    # "rawData":[B
    .end local v10    # "txt":Ljava/lang/String;
    :goto_8
    goto :goto_9

    .line 316
    :cond_10
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-static {v1, v8}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 317
    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_9

    .line 319
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_11
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x20

    if-eq v0, v3, :cond_13

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x21

    if-eq v0, v3, :cond_13

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v3, 0x23

    if-ne v0, v3, :cond_12

    goto :goto_a

    :cond_12
    :goto_9
    goto/16 :goto_10

    .line 322
    :cond_13
    :goto_a
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 323
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_19

    .line 324
    iget-object v3, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/String;

    iput-object v3, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->mReturnData:[Ljava/lang/String;

    .line 325
    array-length v3, v3

    if-lez v3, :cond_1c

    .line 326
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "mReturnData = "

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->mReturnData:[Ljava/lang/String;

    aget-object v8, v8, v6

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 327
    const-string v3, ""

    .line 329
    .local v3, "result":Ljava/lang/String;
    :try_start_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v8

    if-eqz v8, :cond_15

    .line 330
    iget-object v7, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->mReturnData:[Ljava/lang/String;

    aget-object v6, v7, v6

    const-string v7, ","

    invoke-virtual {v6, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    aget-object v1, v6, v1

    move-object v3, v1

    .line 331
    const-string v1, "\"0\""

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_14

    .line 332
    move-object v1, v5

    move-object v3, v1

    .end local v3    # "result":Ljava/lang/String;
    .local v1, "result":Ljava/lang/String;
    goto :goto_b

    .line 333
    .end local v1    # "result":Ljava/lang/String;
    .restart local v3    # "result":Ljava/lang/String;
    :cond_14
    const-string v1, "\"1\""

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_16

    .line 334
    move-object v1, v4

    move-object v3, v1

    .end local v3    # "result":Ljava/lang/String;
    .restart local v1    # "result":Ljava/lang/String;
    goto :goto_b

    .line 337
    .end local v1    # "result":Ljava/lang/String;
    .restart local v3    # "result":Ljava/lang/String;
    :cond_15
    iget-object v8, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->mReturnData:[Ljava/lang/String;

    aget-object v6, v8, v6

    invoke-virtual {v6, v7}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    aget-object v1, v6, v1

    .end local v3    # "result":Ljava/lang/String;
    .restart local v1    # "result":Ljava/lang/String;
    move-object v3, v1

    .line 339
    .end local v1    # "result":Ljava/lang/String;
    .restart local v3    # "result":Ljava/lang/String;
    :cond_16
    :goto_b
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "result = "

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 342
    goto :goto_c

    .line 340
    :catch_2
    move-exception v1

    .line 341
    .local v1, "e":Ljava/lang/Exception;
    const-string v6, "mReturnData error "

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_c
    new-instance v1, Landroid/os/Message;

    invoke-direct {v1}, Landroid/os/Message;-><init>()V

    .line 345
    .local v1, "msgSetting":Landroid/os/Message;
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_17

    .line 346
    const/16 v2, 0x30

    iput v2, v1, Landroid/os/Message;->what:I

    goto :goto_d

    .line 347
    :cond_17
    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_18

    .line 348
    const/16 v2, 0x31

    iput v2, v1, Landroid/os/Message;->what:I

    .line 350
    :cond_18
    :goto_d
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$600(Lcom/mediatek/engineermode/ims/ImsActivity;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 351
    .end local v1    # "msgSetting":Landroid/os/Message;
    .end local v3    # "result":Ljava/lang/String;
    goto :goto_10

    .line 354
    :cond_19
    const-string v1, "quary QUERY_IMS_OVER_SGS failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 355
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_10

    .line 260
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_1a
    :goto_e
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 261
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_1b

    .line 262
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v3, "Set succeed."

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 263
    const-string v1, "Set ims over SGS prefer successful."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_f

    .line 265
    :cond_1b
    iget-object v1, p0, Lcom/mediatek/engineermode/ims/ImsActivity$2;->this$0:Lcom/mediatek/engineermode/ims/ImsActivity;

    const-string v3, "Set failed."

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/ims/ImsActivity;->access$200(Lcom/mediatek/engineermode/ims/ImsActivity;Ljava/lang/String;)V

    .line 266
    const-string v1, "Set ims over SGS prefer failed."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_f
    nop

    .line 358
    :cond_1c
    :goto_10
    return-void
.end method
