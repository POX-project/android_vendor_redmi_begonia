.class Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;
.super Landroid/os/Handler;
.source "McfConfigActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 244
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 20
    .param p1, "msg"    # Landroid/os/Message;

    .line 248
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    const/4 v2, 0x0

    .line 249
    .local v2, "ar":Landroid/os/AsyncResult;
    const/4 v3, 0x0

    .line 250
    .local v3, "return_code":Ljava/lang/String;
    iget v4, v1, Landroid/os/Message;->what:I

    const/16 v5, 0x65

    const-string v8, "McfConfig"

    if-eq v4, v5, :cond_47

    const/16 v10, 0x66

    if-eq v4, v10, :cond_44

    const-string v5, "General OPOTA"

    const-string v10, "\nDsbp: "

    const-string v11, "\n"

    const-string v12, " Failed!\n"

    const-string v13, " returned exception:"

    const-string v14, "AT Command Failed: "

    const-string v15, "OTA"

    const-string v6, ","

    const-string v7, " "

    const-string v9, ":"

    move-object/from16 v18, v2

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .local v18, "ar":Landroid/os/AsyncResult;
    const-string v2, ""

    packed-switch v4, :pswitch_data_0

    .line 647
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "unsupport msg :"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, v1, Landroid/os/Message;->what:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v19, v3

    goto/16 :goto_25

    .line 566
    :pswitch_0
    iget-object v4, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Landroid/os/AsyncResult;

    .line 567
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v4, "ar":Landroid/os/AsyncResult;
    iget v5, v1, Landroid/os/Message;->what:I

    add-int/lit8 v5, v5, -0xc

    div-int/lit8 v5, v5, 0x6

    .line 568
    .local v5, "curPhoneId":I
    const/4 v15, 0x0

    .line 569
    .local v15, "certResult":Z
    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .local v19, "return_code":Ljava/lang/String;
    iget-object v3, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    move/from16 v16, v15

    .end local v15    # "certResult":Z
    .local v16, "certResult":Z
    const-string v15, "Certification with Sim"

    if-nez v3, :cond_3

    .line 570
    iget-object v3, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v3, :cond_2

    iget-object v3, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v3, v3, [Ljava/lang/String;

    if-eqz v3, :cond_2

    iget-object v3, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/String;

    array-length v3, v3

    if-lez v3, :cond_2

    .line 572
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Certification Result: "

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    .line 574
    invoke-static {v9}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 572
    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 575
    iget-object v3, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/String;

    const/4 v9, 0x0

    aget-object v3, v3, v9

    invoke-virtual {v3, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 576
    .local v3, "results":[Ljava/lang/String;
    if-eqz v3, :cond_1

    const/4 v6, 0x1

    aget-object v9, v3, v6

    if-eqz v9, :cond_1

    const/4 v9, 0x2

    aget-object v13, v3, v9

    if-eqz v13, :cond_1

    .line 578
    aget-object v13, v3, v6

    invoke-virtual {v13}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    .line 579
    .local v6, "otaResult":I
    aget-object v13, v3, v9

    invoke-virtual {v13}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 580
    .local v9, "dsbpResult":I
    if-nez v9, :cond_0

    if-nez v6, :cond_0

    .line 581
    const/4 v10, 0x1

    move/from16 v16, v10

    move-object/from16 v3, v19

    .end local v16    # "certResult":Z
    .local v10, "certResult":Z
    goto :goto_0

    .line 583
    .end local v10    # "certResult":Z
    .restart local v16    # "certResult":Z
    :cond_0
    const/4 v13, 0x0

    .line 584
    .end local v16    # "certResult":Z
    .local v13, "certResult":Z
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v18, v3

    .end local v3    # "results":[Ljava/lang/String;
    .local v18, "results":[Ljava/lang/String;
    const-string v3, "Certification Ota: "

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 586
    move/from16 v16, v13

    .end local v13    # "certResult":Z
    .restart local v16    # "certResult":Z
    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v13

    .line 585
    invoke-virtual {v3, v6, v13}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 589
    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v10

    .line 588
    invoke-virtual {v3, v9, v10}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    goto :goto_0

    .line 576
    .end local v6    # "otaResult":I
    .end local v9    # "dsbpResult":I
    .end local v18    # "results":[Ljava/lang/String;
    .local v3, "results":[Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_1
    move-object/from16 v18, v3

    .line 592
    .end local v3    # "results":[Ljava/lang/String;
    move-object/from16 v3, v19

    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    :goto_0
    goto :goto_2

    .line 600
    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_2
    move-object/from16 v3, v19

    goto :goto_2

    .line 594
    :cond_3
    iget-object v3, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v3}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    const/4 v6, 0x1

    aget-object v3, v3, v6

    if-eqz v3, :cond_4

    .line 595
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v10}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v10, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v6

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_1

    .line 596
    :cond_4
    move-object v3, v2

    :goto_1
    nop

    .line 597
    .end local v19    # "return_code":Ljava/lang/String;
    .restart local v3    # "return_code":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 600
    :goto_2
    if-eqz v16, :cond_9

    .line 601
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " Cmd "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 602
    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " succeed!"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 601
    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 603
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v2

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v6

    const/4 v7, 0x1

    invoke-virtual {v2, v5, v6, v7}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCmdResult(IIZ)V

    .line 604
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-virtual {v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v2

    if-nez v2, :cond_5

    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    add-int/lit8 v6, v5, 0x1

    const/4 v7, 0x2

    rem-int/2addr v6, v7

    invoke-virtual {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->isSimReady(I)Z

    move-result v2

    if-nez v2, :cond_5

    .line 605
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v6, "Certification"

    const-string v7, "Certification Succeed!"

    invoke-static {v2, v6, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 606
    new-instance v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Integer;

    iget v8, v1, Landroid/os/Message;->what:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/4 v9, 0x0

    aput-object v8, v7, v9

    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 607
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)V

    goto/16 :goto_4

    .line 608
    :cond_5
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v2

    invoke-virtual {v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v2

    const/4 v6, 0x3

    if-ge v2, v6, :cond_7

    .line 609
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v2

    invoke-virtual {v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v2

    const/4 v6, 0x1

    if-ne v2, v6, :cond_6

    .line 610
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    add-int/lit8 v6, v5, 0x1

    const/4 v7, 0x2

    rem-int/2addr v6, v7

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)V

    .line 612
    :cond_6
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;I)V

    goto/16 :goto_4

    .line 614
    :cond_7
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v2

    add-int/lit8 v6, v5, 0x1

    const/4 v7, 0x2

    rem-int/2addr v6, v7

    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v7

    invoke-virtual {v7, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v7

    invoke-virtual {v2, v6, v7}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCmdResult(II)Z

    move-result v2

    if-eqz v2, :cond_8

    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 615
    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v2

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v6

    invoke-virtual {v2, v5, v6}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCmdResult(II)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 616
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v6, "Certification"

    const-string v7, "Certification Succeed!"

    invoke-static {v2, v6, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 617
    new-instance v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Integer;

    iget v8, v1, Landroid/os/Message;->what:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/4 v9, 0x0

    aput-object v8, v7, v9

    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 618
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)V

    goto :goto_4

    .line 620
    :cond_8
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " succeed!"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 624
    :cond_9
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v6

    iget-object v9, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Lcom/mediatek/engineermode/mcfconfig/McfCertification;

    move-result-object v9

    invoke-virtual {v9, v5}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->getCurrentCmd(I)I

    move-result v9

    const/4 v10, 0x0

    invoke-virtual {v6, v5, v9, v10}, Lcom/mediatek/engineermode/mcfconfig/McfCertification;->setCmdResult(IIZ)V

    .line 625
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 626
    if-nez v3, :cond_a

    goto :goto_3

    :cond_a
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_3
    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 627
    .local v2, "errorMsg":Ljava/lang/String;
    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 628
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 630
    .end local v2    # "errorMsg":Ljava/lang/String;
    nop

    .line 650
    .end local v5    # "curPhoneId":I
    .end local v16    # "certResult":Z
    :goto_4
    move-object v2, v4

    goto/16 :goto_26

    .line 503
    .end local v4    # "ar":Landroid/os/AsyncResult;
    .local v18, "ar":Landroid/os/AsyncResult;
    :pswitch_1
    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v3, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Landroid/os/AsyncResult;

    .line 504
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v3, "ar":Landroid/os/AsyncResult;
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v5, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v5, [B

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->byteArrayToStr([B)Ljava/lang/String;

    move-result-object v4

    .line 505
    .local v4, "str":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Readback from urc = "

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 506
    const-string v5, "+EMCFRPT"

    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_15

    invoke-virtual {v4, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    array-length v5, v5

    const/4 v10, 0x2

    if-ge v5, v10, :cond_b

    .line 507
    goto/16 :goto_8

    .line 509
    :cond_b
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v5, v5, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    if-eqz v5, :cond_c

    .line 510
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v5, v5, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v5}, Landroid/os/CountDownTimer;->cancel()V

    .line 511
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v10, 0x0

    iput-object v10, v5, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    .line 513
    :cond_c
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/app/ProgressDialog;

    move-result-object v5

    if-eqz v5, :cond_d

    .line 514
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/app/ProgressDialog;

    move-result-object v5

    invoke-virtual {v5}, Landroid/app/ProgressDialog;->dismiss()V

    .line 515
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v10, 0x0

    invoke-static {v5, v10}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2002(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Landroid/app/ProgressDialog;)Landroid/app/ProgressDialog;

    .line 517
    :cond_d
    invoke-virtual {v4, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    const/4 v9, 0x1

    aget-object v5, v5, v9

    invoke-virtual {v5, v7, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 518
    .end local v4    # "str":Ljava/lang/String;
    .local v2, "str":Ljava/lang/String;
    invoke-virtual {v2, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 519
    .local v4, "data":[Ljava/lang/String;
    const/4 v5, 0x0

    aget-object v6, v4, v5

    invoke-virtual {v6}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 520
    .local v5, "type":I
    aget-object v6, v4, v9

    invoke-virtual {v6}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    .line 521
    .local v6, "result":I
    if-eq v5, v9, :cond_12

    const/4 v7, 0x3

    if-eq v5, v7, :cond_e

    .line 551
    goto/16 :goto_8

    .line 542
    :cond_e
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Ini Refresh end with result:"

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 543
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    if-nez v6, :cond_f

    const-string v8, "Success!"

    goto :goto_5

    .line 544
    :cond_f
    const/4 v8, 0x1

    if-ne v6, v8, :cond_10

    const-string v8, "Reset Modem"

    goto :goto_5

    .line 545
    :cond_10
    const/4 v8, 0x2

    if-ne v6, v8, :cond_11

    const-string v8, "AP retry"

    goto :goto_5

    .line 547
    :cond_11
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Failed with error_code: "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 543
    :goto_5
    const-string v9, "Ini Refresh"

    invoke-static {v7, v9, v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 548
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v7

    const/4 v8, 0x3

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-interface {v7, v8}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 549
    goto/16 :goto_8

    .line 523
    :cond_12
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iput-wide v9, v7, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpEnd:J

    .line 524
    new-instance v7, Ljava/text/SimpleDateFormat;

    const-string v9, "HH:mm:ss"

    invoke-direct {v7, v9}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 525
    .local v7, "df":Ljava/text/SimpleDateFormat;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Dump OTA file end :"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v10, Ljava/util/Date;

    iget-object v11, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-wide v11, v11, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpBegain:J

    invoke-direct {v10, v11, v12}, Ljava/util/Date;-><init>(J)V

    .line 527
    invoke-virtual {v7, v10}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 525
    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 528
    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    .line 530
    if-nez v6, :cond_13

    const-string v10, "Success!"

    goto :goto_7

    .line 531
    :cond_13
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Failed with Error Code: "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 532
    iget-object v11, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 531
    invoke-static {v11}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v11

    .line 532
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_14

    .line 533
    iget-object v11, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 532
    invoke-static {v11}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v11

    .line 533
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/io/Serializable;

    goto :goto_6

    :cond_14
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    :goto_6
    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    :goto_7
    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "\nDump costs "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v10, 0x1

    new-array v11, v10, [Ljava/lang/Object;

    iget-object v10, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-wide v12, v10, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpEnd:J

    iget-object v10, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-wide v14, v10, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->dumpBegain:J

    sub-long/2addr v12, v14

    long-to-float v10, v12

    const/high16 v12, 0x447a0000    # 1000.0f

    div-float/2addr v10, v12

    .line 537
    invoke-static {v10}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v10

    const/4 v12, 0x0

    aput-object v10, v11, v12

    .line 536
    const-string v10, "%.2f"

    invoke-static {v10, v11}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, " s"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 528
    const-string v10, "Dump Result"

    invoke-static {v8, v10, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 539
    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v8

    const/4 v9, 0x1

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-interface {v8, v9}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 540
    nop

    .line 650
    .end local v2    # "str":Ljava/lang/String;
    .end local v4    # "data":[Ljava/lang/String;
    .end local v5    # "type":I
    .end local v6    # "result":I
    .end local v7    # "df":Ljava/text/SimpleDateFormat;
    :cond_15
    :goto_8
    move-object v2, v3

    move-object/from16 v3, v19

    goto/16 :goto_26

    .line 442
    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :pswitch_2
    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v3, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Landroid/os/AsyncResult;

    .line 443
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v3, "ar":Landroid/os/AsyncResult;
    const/4 v4, 0x0

    .line 444
    .local v4, "queryOta":Z
    iget-object v5, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v5, :cond_1d

    .line 445
    iget-object v5, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v5, :cond_1e

    .line 446
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "Query OTA ("

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v10, v1, Landroid/os/Message;->what:I

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " ): "

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v10, [Ljava/lang/String;

    .line 448
    invoke-static {v10}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 446
    invoke-static {v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 449
    iget-object v5, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v5, [Ljava/lang/String;

    const/4 v10, 0x0

    aget-object v5, v5, v10

    .line 450
    const-string v10, "+EMCFC:"

    invoke-virtual {v10}, Ljava/lang/String;->length()I

    move-result v10

    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 451
    invoke-virtual {v5, v7, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 452
    .local v5, "results":[Ljava/lang/String;
    if-eqz v5, :cond_1c

    .line 453
    const/4 v4, 0x1

    .line 454
    array-length v6, v5

    const/4 v7, 0x2

    if-lt v6, v7, :cond_16

    const/4 v6, 0x1

    aget-object v6, v5, v6

    goto :goto_9

    :cond_16
    move-object v6, v2

    .line 456
    .local v6, "type":Ljava/lang/String;
    :goto_9
    array-length v7, v5

    const/4 v10, 0x3

    if-lt v7, v10, :cond_17

    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v7

    const/4 v10, 0x2

    aget-object v11, v5, v10

    invoke-virtual {v7, v11}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_17

    .line 457
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 456
    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v7

    aget-object v10, v5, v10

    .line 457
    invoke-virtual {v7, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    goto :goto_a

    :cond_17
    move-object v7, v2

    .line 458
    .local v7, "config":Ljava/lang/String;
    :goto_a
    array-length v10, v5

    const/4 v11, 0x4

    if-lt v10, v11, :cond_18

    const/4 v10, 0x3

    aget-object v10, v5, v10

    goto :goto_b

    .line 459
    :cond_18
    move-object v10, v2

    :goto_b
    nop

    .line 460
    .local v10, "value":Ljava/lang/String;
    invoke-virtual {v10, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_19

    const-string v2, "No File"

    goto :goto_c

    .line 461
    :cond_19
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_c
    nop

    .line 462
    .end local v10    # "value":Ljava/lang/String;
    .local v2, "value":Ljava/lang/String;
    const-string v9, "0"

    invoke-virtual {v6, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_1a

    .line 463
    iget-object v9, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v9, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_d

    .line 464
    :cond_1a
    const-string v9, "1"

    invoke-virtual {v6, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_1b

    .line 465
    iget-object v9, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v9, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1702(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_d

    .line 466
    :cond_1b
    const-string v9, "2"

    invoke-virtual {v6, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_1c

    .line 467
    iget-object v9, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v9, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 470
    .end local v2    # "value":Ljava/lang/String;
    .end local v5    # "results":[Ljava/lang/String;
    .end local v6    # "type":Ljava/lang/String;
    .end local v7    # "config":Ljava/lang/String;
    :cond_1c
    :goto_d
    goto :goto_e

    .line 472
    :cond_1d
    const/4 v4, 0x0

    .line 473
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT with ota query returned exception:"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    :cond_1e
    :goto_e
    const/16 v2, 0xa

    if-eqz v4, :cond_21

    .line 477
    iget v5, v1, Landroid/os/Message;->what:I

    const/16 v6, 0x8

    if-ne v5, v6, :cond_1f

    .line 478
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v6, "AT+EMCFC=4,2"

    invoke-static {v5, v6, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;I)V

    .line 480
    goto/16 :goto_8

    .line 482
    :cond_1f
    const-string v5, "ATCommand with ota query success!"

    invoke-static {v5}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 483
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "OTA: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", OPOTA: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 484
    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ", General OPOTA: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 485
    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 483
    invoke-static {v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 486
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 488
    iget v6, v1, Landroid/os/Message;->what:I

    if-ne v6, v2, :cond_20

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "OTA: \n"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 489
    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1600(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "\nGeneral OTA by OP:\n"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1800(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_f

    .line 490
    :cond_20
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "OTA by OP: "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 486
    :goto_f
    const-string v6, "OTA Query "

    invoke-static {v5, v6, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_8

    .line 492
    :cond_21
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Query "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 495
    iget v7, v1, Landroid/os/Message;->what:I

    const/16 v9, 0x8

    if-ne v7, v9, :cond_22

    goto :goto_10

    .line 496
    :cond_22
    iget v7, v1, Landroid/os/Message;->what:I

    if-ne v7, v2, :cond_23

    const-string v15, "General OTA by OP"

    goto :goto_10

    .line 497
    :cond_23
    const-string v15, "OTA by OP"

    :goto_10
    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " failed!"

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 492
    const-string v6, "OTA Query"

    invoke-static {v5, v6, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 499
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ATCommand with "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, v1, Landroid/os/Message;->what:I

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " query failed!"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 501
    goto/16 :goto_8

    .line 415
    .end local v4    # "queryOta":Z
    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :pswitch_3
    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v2, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Landroid/os/AsyncResult;

    .line 416
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v2, "ar":Landroid/os/AsyncResult;
    const/4 v3, 0x0

    .line 417
    .local v3, "iniRefresh":Z
    iget-object v4, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v4, :cond_24

    .line 418
    const/4 v3, 0x1

    .line 419
    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v4, :cond_25

    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v4, v4, [Ljava/lang/String;

    if-eqz v4, :cond_25

    .line 420
    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v4, [Ljava/lang/String;

    .line 421
    .local v4, "data":[Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "AT with ini refresh returned:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 423
    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 421
    invoke-static {v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 424
    .end local v4    # "data":[Ljava/lang/String;
    goto :goto_11

    .line 426
    :cond_24
    const/4 v3, 0x0

    .line 427
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT with ini refresh returned exception:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 430
    :cond_25
    :goto_11
    if-eqz v3, :cond_26

    .line 431
    const-string v4, "ATCommand with ini refresh success!"

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 432
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/16 v5, 0x12c

    const/4 v6, 0x3

    invoke-virtual {v4, v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->startTimer(II)V

    .line 433
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v4

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v4, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto/16 :goto_24

    .line 435
    :cond_26
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v5, "INI Refresh"

    const-string v6, "INI Refresh failed!"

    invoke-static {v4, v5, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 436
    const-string v4, "ATCommand with INI Refresh failed!"

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 438
    goto/16 :goto_24

    .line 390
    .end local v2    # "ar":Landroid/os/AsyncResult;
    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :pswitch_4
    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v2, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Landroid/os/AsyncResult;

    .line 391
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    const/4 v3, 0x0

    .line 392
    .local v3, "dumpOTA":Z
    iget-object v4, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v4, :cond_27

    .line 393
    const/4 v3, 0x1

    .line 394
    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v4, :cond_28

    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v4, v4, [Ljava/lang/String;

    if-eqz v4, :cond_28

    .line 395
    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v4, [Ljava/lang/String;

    .line 396
    .restart local v4    # "data":[Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "ATCommand with Dump OTA returned: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 397
    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 396
    invoke-static {v8, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 398
    .end local v4    # "data":[Ljava/lang/String;
    goto :goto_12

    .line 400
    :cond_27
    const/4 v3, 0x0

    .line 401
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ATCommand with Dump OTA returned exception:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 404
    :cond_28
    :goto_12
    if-eqz v3, :cond_29

    .line 405
    const-string v4, "ATCommand with Dump OTA success!"

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 406
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/16 v5, 0xb4

    const/4 v6, 0x1

    invoke-virtual {v4, v6, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->startTimer(II)V

    .line 407
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v5, "Waitting"

    const-string v7, "Dump OTA is ongoing......"

    invoke-static {v4, v5, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 408
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v4

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v4, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto/16 :goto_24

    .line 410
    :cond_29
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v5, "Dump OTA"

    const-string v6, "Dump OTA failed!"

    invoke-static {v4, v5, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 411
    const-string v4, "ATCommand with Dump OTA failed!"

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 413
    goto/16 :goto_24

    .line 308
    .end local v2    # "ar":Landroid/os/AsyncResult;
    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    :pswitch_5
    move-object/from16 v19, v3

    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v3, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Landroid/os/AsyncResult;

    .line 309
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v3, "ar":Landroid/os/AsyncResult;
    iget v4, v1, Landroid/os/Message;->what:I

    move-object/from16 v16, v5

    const/4 v5, 0x1

    if-ne v4, v5, :cond_2a

    move-object v5, v15

    goto :goto_13

    .line 310
    :cond_2a
    iget v4, v1, Landroid/os/Message;->what:I

    const/4 v5, 0x3

    if-ne v4, v5, :cond_2b

    const-string v5, "OPOTA"

    goto :goto_13

    .line 311
    :cond_2b
    move-object/from16 v5, v16

    :goto_13
    move-object v4, v5

    .line 312
    .local v4, "clearStr":Ljava/lang/String;
    const/4 v5, 0x0

    .line 313
    .local v5, "clearOTA":Z
    iget-object v15, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    move/from16 v16, v5

    .end local v5    # "clearOTA":Z
    .local v16, "clearOTA":Z
    const-string v5, "Clear "

    if-nez v15, :cond_2f

    .line 314
    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v9, :cond_2e

    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v9, v9, [Ljava/lang/String;

    if-eqz v9, :cond_2e

    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    array-length v9, v9

    if-lez v9, :cond_2e

    .line 316
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "Clear Result: "

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v13, [Ljava/lang/String;

    .line 318
    invoke-static {v13}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 316
    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 319
    iget-object v9, v3, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    const/4 v13, 0x0

    aget-object v9, v9, v13

    invoke-virtual {v9, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    .line 320
    .local v6, "results":[Ljava/lang/String;
    if-eqz v6, :cond_2d

    const/4 v9, 0x1

    aget-object v13, v6, v9

    if-eqz v13, :cond_2d

    const/4 v13, 0x2

    aget-object v14, v6, v13

    if-eqz v14, :cond_2d

    .line 322
    aget-object v14, v6, v9

    invoke-virtual {v14}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 323
    .local v9, "otaResult":I
    aget-object v14, v6, v13

    invoke-virtual {v14}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v13

    invoke-virtual {v13}, Ljava/lang/Integer;->intValue()I

    move-result v13

    .line 324
    .local v13, "dsbpResult":I
    if-nez v13, :cond_2c

    if-nez v9, :cond_2c

    .line 325
    const/4 v10, 0x1

    move/from16 v16, v10

    .end local v16    # "clearOTA":Z
    .local v10, "clearOTA":Z
    goto :goto_14

    .line 327
    .end local v10    # "clearOTA":Z
    .restart local v16    # "clearOTA":Z
    :cond_2c
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "Mcf Ota: "

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v15, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 329
    move-object/from16 v18, v6

    .end local v6    # "results":[Ljava/lang/String;
    .local v18, "results":[Ljava/lang/String;
    invoke-static {v15}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v6

    .line 328
    invoke-virtual {v15, v9, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 332
    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v10

    .line 331
    invoke-virtual {v6, v13, v10}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    move-object/from16 v19, v6

    .end local v19    # "return_code":Ljava/lang/String;
    .local v6, "return_code":Ljava/lang/String;
    goto :goto_14

    .line 320
    .end local v9    # "otaResult":I
    .end local v13    # "dsbpResult":I
    .end local v18    # "results":[Ljava/lang/String;
    .local v6, "results":[Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_2d
    move-object/from16 v18, v6

    .line 335
    .end local v6    # "results":[Ljava/lang/String;
    :goto_14
    move-object/from16 v6, v19

    goto :goto_16

    .line 343
    :cond_2e
    move-object/from16 v6, v19

    goto :goto_16

    .line 337
    :cond_2f
    iget-object v6, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v6}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    const/4 v10, 0x1

    aget-object v6, v6, v10

    if-eqz v6, :cond_30

    .line 338
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v14}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v14, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v10

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    goto :goto_15

    .line 339
    :cond_30
    move-object v6, v2

    :goto_15
    nop

    .line 340
    .end local v19    # "return_code":Ljava/lang/String;
    .local v6, "return_code":Ljava/lang/String;
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v3, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 343
    :goto_16
    if-eqz v16, :cond_36

    .line 344
    iget v7, v1, Landroid/os/Message;->what:I

    const/4 v8, 0x1

    if-ne v7, v8, :cond_31

    .line 345
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$500(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v7

    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 346
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$602(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_17

    .line 347
    :cond_31
    iget v7, v1, Landroid/os/Message;->what:I

    const/4 v8, 0x3

    if-ne v7, v8, :cond_32

    .line 348
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$700(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v7

    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 349
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$802(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_17

    .line 351
    :cond_32
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$900(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/widget/TextView;

    move-result-object v7

    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 352
    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v7, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1002(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;)Ljava/lang/String;

    .line 354
    :goto_17
    new-instance v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;

    iget-object v7, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v2, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    const/4 v7, 0x1

    new-array v8, v7, [Ljava/lang/Integer;

    .line 355
    iget v9, v1, Landroid/os/Message;->what:I

    if-ne v9, v7, :cond_33

    const/4 v7, 0x0

    goto :goto_18

    .line 356
    :cond_33
    iget v7, v1, Landroid/os/Message;->what:I

    const/4 v9, 0x3

    if-ne v7, v9, :cond_34

    const/4 v7, 0x1

    goto :goto_18

    .line 357
    :cond_34
    const/4 v7, 0x2

    .line 355
    :goto_18
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    const/4 v9, 0x0

    aput-object v7, v8, v9

    invoke-virtual {v2, v8}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 358
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " Succeed!"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 359
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget v5, v1, Landroid/os/Message;->what:I

    const/4 v7, 0x1

    if-ne v5, v7, :cond_35

    const/4 v9, 0x1

    goto :goto_19

    .line 360
    :cond_35
    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v9

    .line 359
    :goto_19
    invoke-static {v2, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)V

    goto :goto_1b

    .line 362
    :cond_36
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 363
    if-nez v6, :cond_37

    goto :goto_1a

    :cond_37
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_1a
    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 364
    .local v2, "errorMsg":Ljava/lang/String;
    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 365
    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v5, v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 367
    .end local v2    # "errorMsg":Ljava/lang/String;
    nop

    .line 650
    .end local v4    # "clearStr":Ljava/lang/String;
    .end local v16    # "clearOTA":Z
    :goto_1b
    move-object v2, v3

    move-object v3, v6

    goto/16 :goto_26

    .line 254
    .end local v6    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    .local v18, "ar":Landroid/os/AsyncResult;
    :pswitch_6
    move-object/from16 v19, v3

    move-object/from16 v16, v5

    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget v3, v1, Landroid/os/Message;->what:I

    if-nez v3, :cond_38

    move-object v5, v15

    goto :goto_1c

    .line 255
    :cond_38
    iget v3, v1, Landroid/os/Message;->what:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_39

    const-string v5, "OPOTA"

    goto :goto_1c

    .line 256
    :cond_39
    move-object/from16 v5, v16

    :goto_1c
    move-object v3, v5

    .line 257
    .local v3, "setStr":Ljava/lang/String;
    iget-object v4, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Landroid/os/AsyncResult;

    .line 258
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .local v4, "ar":Landroid/os/AsyncResult;
    const/4 v5, 0x0

    .line 259
    .local v5, "applyOTA":Z
    iget-object v15, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    move-object/from16 v16, v2

    const-string v2, "Apply "

    if-nez v15, :cond_3d

    .line 260
    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v9, :cond_3c

    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    instance-of v9, v9, [Ljava/lang/String;

    if-eqz v9, :cond_3c

    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    array-length v9, v9

    if-lez v9, :cond_3c

    .line 262
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "Apply Result: "

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v13, [Ljava/lang/String;

    .line 264
    invoke-static {v13}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 262
    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 265
    iget-object v9, v4, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v9, [Ljava/lang/String;

    const/4 v13, 0x0

    aget-object v9, v9, v13

    invoke-virtual {v9, v6}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    .line 266
    .local v6, "results":[Ljava/lang/String;
    if-eqz v6, :cond_3b

    const/4 v9, 0x1

    aget-object v13, v6, v9

    if-eqz v13, :cond_3b

    const/4 v13, 0x2

    aget-object v14, v6, v13

    if-eqz v14, :cond_3b

    .line 268
    aget-object v14, v6, v9

    invoke-virtual {v14}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 269
    .restart local v9    # "otaResult":I
    aget-object v14, v6, v13

    invoke-virtual {v14}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v13

    invoke-virtual {v13}, Ljava/lang/Integer;->intValue()I

    move-result v13

    .line 270
    .restart local v13    # "dsbpResult":I
    if-nez v13, :cond_3a

    if-nez v9, :cond_3a

    .line 271
    const/4 v5, 0x1

    goto :goto_1d

    .line 273
    :cond_3a
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "Mcf Ota: "

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v15, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 275
    move/from16 v18, v5

    .end local v5    # "applyOTA":Z
    .local v18, "applyOTA":Z
    invoke-static {v15}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$000(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v5

    .line 274
    invoke-virtual {v15, v9, v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 278
    invoke-static {v5}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/HashMap;

    move-result-object v10

    .line 277
    invoke-virtual {v5, v13, v10}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->getStringValueFromMap(ILjava/util/HashMap;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    move-object/from16 v19, v5

    move/from16 v5, v18

    .end local v19    # "return_code":Ljava/lang/String;
    .local v5, "return_code":Ljava/lang/String;
    goto :goto_1d

    .line 266
    .end local v9    # "otaResult":I
    .end local v13    # "dsbpResult":I
    .end local v18    # "applyOTA":Z
    .local v5, "applyOTA":Z
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_3b
    move/from16 v18, v5

    .line 281
    .end local v5    # "applyOTA":Z
    .end local v6    # "results":[Ljava/lang/String;
    .restart local v18    # "applyOTA":Z
    move/from16 v5, v18

    .end local v18    # "applyOTA":Z
    .restart local v5    # "applyOTA":Z
    :goto_1d
    move/from16 v18, v5

    move-object/from16 v5, v19

    goto :goto_1f

    .line 260
    :cond_3c
    move/from16 v18, v5

    .line 289
    .end local v5    # "applyOTA":Z
    .restart local v18    # "applyOTA":Z
    move-object/from16 v5, v19

    goto :goto_1f

    .line 283
    .end local v18    # "applyOTA":Z
    .restart local v5    # "applyOTA":Z
    :cond_3d
    move/from16 v18, v5

    .end local v5    # "applyOTA":Z
    .restart local v18    # "applyOTA":Z
    iget-object v5, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v5}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x1

    aget-object v5, v5, v6

    if-eqz v5, :cond_3e

    .line 284
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v10, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v10}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v10, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    aget-object v9, v9, v6

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_1e

    .line 285
    :cond_3e
    move-object/from16 v5, v16

    :goto_1e
    nop

    .line 286
    .end local v19    # "return_code":Ljava/lang/String;
    .local v5, "return_code":Ljava/lang/String;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v4, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 289
    :goto_1f
    if-eqz v18, :cond_42

    .line 290
    new-instance v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-direct {v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;-><init>(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)V

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Integer;

    .line 291
    iget v6, v1, Landroid/os/Message;->what:I

    if-nez v6, :cond_3f

    const/16 v17, 0x0

    goto :goto_20

    .line 292
    :cond_3f
    iget v6, v1, Landroid/os/Message;->what:I

    const/4 v8, 0x2

    if-ne v6, v8, :cond_40

    const/16 v17, 0x1

    goto :goto_20

    .line 293
    :cond_40
    const/16 v17, 0x2

    .line 291
    :goto_20
    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const/4 v8, 0x0

    aput-object v6, v7, v8

    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$saveOTAPathTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 294
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Apply  "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " Succeed!"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 295
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget v6, v1, Landroid/os/Message;->what:I

    if-nez v6, :cond_41

    const/4 v9, 0x1

    goto :goto_21

    .line 296
    :cond_41
    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v9

    .line 295
    :goto_21
    invoke-static {v2, v9}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)V

    goto :goto_23

    .line 298
    :cond_42
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 299
    if-nez v5, :cond_43

    move-object/from16 v9, v16

    goto :goto_22

    :cond_43
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    :goto_22
    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 301
    .local v6, "errorMsg":Ljava/lang/String;
    invoke-static {v8, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 302
    iget-object v8, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2, v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 304
    .end local v6    # "errorMsg":Ljava/lang/String;
    nop

    .line 650
    .end local v3    # "setStr":Ljava/lang/String;
    .end local v18    # "applyOTA":Z
    :goto_23
    move-object v2, v4

    move-object v3, v5

    goto/16 :goto_26

    .line 632
    .end local v4    # "ar":Landroid/os/AsyncResult;
    .end local v5    # "return_code":Ljava/lang/String;
    .local v2, "ar":Landroid/os/AsyncResult;
    .local v3, "return_code":Ljava/lang/String;
    :cond_44
    move-object/from16 v18, v2

    move-object/from16 v19, v3

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .end local v3    # "return_code":Ljava/lang/String;
    .local v18, "ar":Landroid/os/AsyncResult;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v2, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Landroid/os/AsyncResult;

    .line 633
    .end local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    const/4 v3, 0x0

    .line 634
    .local v3, "isModem":Z
    iget-object v4, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v4, :cond_45

    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    if-eqz v4, :cond_45

    .line 635
    iget-object v4, v2, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v4, Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    .line 636
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "IS MODEMENABLE: "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v6, ", mIsModemEnabled: "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 637
    invoke-static {v6}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 636
    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 638
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v4

    if-nez v4, :cond_46

    if-eqz v3, :cond_46

    .line 639
    iget-object v4, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$2400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Landroid/os/Handler;

    move-result-object v4

    invoke-virtual {v4, v5}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_24

    .line 642
    :cond_45
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Reboot Modem returned exception:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v2, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 645
    nop

    .line 650
    .end local v3    # "isModem":Z
    :cond_46
    :goto_24
    move-object/from16 v3, v19

    goto :goto_26

    .line 369
    .end local v19    # "return_code":Ljava/lang/String;
    .local v3, "return_code":Ljava/lang/String;
    :cond_47
    move-object/from16 v18, v2

    move-object/from16 v19, v3

    .end local v2    # "ar":Landroid/os/AsyncResult;
    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v19    # "return_code":Ljava/lang/String;
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v2

    if-nez v2, :cond_4a

    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v2

    if-eqz v2, :cond_4a

    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 370
    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v2, v4}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_48

    goto :goto_27

    .line 380
    :cond_48
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 381
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v2, v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    if-eqz v2, :cond_49

    .line 382
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    iget-object v2, v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    invoke-virtual {v2}, Landroid/os/CountDownTimer;->cancel()V

    .line 383
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v3, 0x0

    iput-object v3, v2, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->timer:Landroid/os/CountDownTimer;

    .line 385
    :cond_49
    const-string v2, "Reset Modem Success!"

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 386
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const-string v3, "Reset Modem"

    const-string v4, "Reset Modem Completed!"

    invoke-static {v2, v3, v4}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$400(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 387
    iget-object v2, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    const/4 v3, 0x1

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1102(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;Z)Z

    .line 388
    nop

    .line 650
    .end local v19    # "return_code":Ljava/lang/String;
    .restart local v3    # "return_code":Ljava/lang/String;
    :goto_25
    move-object/from16 v2, v18

    move-object/from16 v3, v19

    .end local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v2    # "ar":Landroid/os/AsyncResult;
    :goto_26
    return-void

    .line 371
    .end local v2    # "ar":Landroid/os/AsyncResult;
    .end local v3    # "return_code":Ljava/lang/String;
    .restart local v18    # "ar":Landroid/os/AsyncResult;
    .restart local v19    # "return_code":Ljava/lang/String;
    :cond_4a
    :goto_27
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "SIM"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 373
    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1300(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " received MODEM_REBOOT_COMPLETE, but skiped! mIsModemEnabled:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 375
    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1100(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " resetMd:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 376
    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " taskSet:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity$5;->this$0:Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;

    .line 377
    invoke-static {v3}, Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;->access$1200(Lcom/mediatek/engineermode/mcfconfig/McfConfigActivity;)Ljava/util/Set;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 371
    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 378
    return-void

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_6
        :pswitch_5
        :pswitch_6
        :pswitch_5
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method
