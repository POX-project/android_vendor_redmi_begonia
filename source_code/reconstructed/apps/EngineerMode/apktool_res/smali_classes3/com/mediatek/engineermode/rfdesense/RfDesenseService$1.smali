.class Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;
.super Landroid/os/Handler;
.source "RfDesenseService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 59
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 11
    .param p1, "msg"    # Landroid/os/Message;

    .line 62
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 63
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const-wide/16 v2, 0x3e8

    const/4 v4, 0x2

    const/4 v5, 0x1

    const-string v6, "RfDesense/TxTestService"

    if-eq v1, v5, :cond_10

    const/4 v7, 0x4

    if-eq v1, v4, :cond_d

    const-string v8, ""

    if-eq v1, v7, :cond_8

    const/4 v7, 0x6

    const/16 v9, 0x8

    if-eq v1, v7, :cond_7

    const-string v7, "RfService ->entry airplane..."

    if-eq v1, v9, :cond_5

    const/16 v8, 0x9

    if-eq v1, v8, :cond_4

    const/16 v8, 0xe

    const-string v10, "RfService ->AT+EWMPOLICY=0 send succeed"

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_1

    .line 65
    :pswitch_0
    const-string v1, "RfService -> entry airplane succeed..."

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 67
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 68
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V

    .line 70
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RfService ->send: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 71
    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 70
    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 73
    :cond_0
    const-string v1, "mCurrectRatInfo == null"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    goto/16 :goto_1

    .line 96
    :pswitch_1
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_3

    .line 97
    const-string v1, "RfService ->switch rat succeed"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v2, v2, v5

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "AT+EWMPOLICY=0"

    const-string v3, "RfService ->send AT+EWMPOLICY=0"

    if-eqz v1, :cond_1

    .line 100
    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const/16 v3, 0xc

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V

    goto/16 :goto_1

    .line 102
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v1

    sget-object v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v4, v5, v4

    .line 103
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 105
    invoke-static {v6, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const/16 v3, 0xd

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V

    goto/16 :goto_1

    .line 108
    :cond_2
    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->startAirplane()V

    goto/16 :goto_1

    .line 112
    :cond_3
    const-string v1, "RfService ->switch rat failed"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v4

    invoke-static {v4, v9}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v1, v4, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 117
    goto/16 :goto_1

    .line 92
    :pswitch_2
    const-string v1, "RfService ->AT+ECSRA send succeed"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->startAirplane()V

    .line 94
    goto/16 :goto_1

    .line 82
    :pswitch_3
    invoke-static {v6, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    const-string v1, "RfService ->send AT+ECSRA=2,1,0,1,1,0 ..."

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 84
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const-string v2, "AT+ECSRA=2,1,0,1,1,0"

    invoke-static {v1, v2, v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V

    .line 85
    goto/16 :goto_1

    .line 87
    :pswitch_4
    invoke-static {v6, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    const-string v1, "RfService ->send AT+ECSRA=2,0,1,0,1,0 ..."

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const-string v2, "AT+ECSRA=2,0,1,0,1,0"

    invoke-static {v1, v2, v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V

    .line 90
    goto/16 :goto_1

    .line 77
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v2

    const/16 v3, 0x10

    invoke-static {v2, v3}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v2

    const-wide/16 v3, 0x7d0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 80
    goto/16 :goto_1

    .line 119
    :cond_5
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    move-result v1

    if-ne v1, v5, :cond_12

    .line 120
    const-string v1, "RfService ->reboot modem succeed"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 121
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$002(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 122
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 123
    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdSwitch()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 124
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RfService ->switch rat("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    .line 125
    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdSwitch()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 124
    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdSwitch()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0xf

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V

    goto/16 :goto_1

    .line 129
    :cond_6
    const-string v1, "RfService ->no need switch rat "

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 130
    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->startAirplane()V

    goto/16 :goto_1

    .line 136
    :cond_7
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v4

    invoke-static {v4, v9}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v1, v4, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 138
    goto/16 :goto_1

    .line 157
    :cond_8
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_c

    .line 158
    const-string v1, "RfService ->stop cmd ok"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$002(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 161
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v1

    if-eqz v1, :cond_9

    .line 162
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$800(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V

    goto/16 :goto_1

    .line 164
    :cond_9
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RfService ->send done,mTestCountSended = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 165
    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 164
    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 166
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$908(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    .line 167
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    move-result v1

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    move-result v2

    if-ge v1, v2, :cond_b

    .line 168
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_a

    .line 169
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 168
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 171
    .end local v1    # "i":I
    :cond_a
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$800(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V

    goto/16 :goto_1

    .line 173
    :cond_b
    const-string v1, "RfService ->send all rat done"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const/16 v2, 0x7d0

    invoke-virtual {v1, v2, v8}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 175
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V

    .line 176
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->stopSelf()V

    goto/16 :goto_1

    .line 180
    :cond_c
    const-string v1, "RfService ->stop cmd failed"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$1200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V

    .line 184
    goto/16 :goto_1

    .line 141
    :cond_d
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I

    move-result v1

    if-ne v1, v4, :cond_e

    .line 142
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->stopTx()V

    .line 143
    return-void

    .line 145
    :cond_e
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const-wide/16 v8, 0x1

    invoke-static {v1, v8, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$514(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;J)J

    .line 146
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "RfService ->mTestDurationSended:"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)J

    move-result-wide v8

    invoke-virtual {v1, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)J

    move-result-wide v5

    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)J

    move-result-wide v8

    cmp-long v1, v5, v8

    if-lez v1, :cond_f

    .line 148
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const-wide/16 v2, 0x0

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$502(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;J)J

    .line 149
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1, v7}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;I)V

    goto :goto_1

    .line 151
    :cond_f
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v1

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v5

    invoke-static {v5, v4}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v1, v4, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 155
    goto :goto_1

    .line 186
    :cond_10
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_11

    .line 187
    const-string v1, "RfService ->start cmd ok"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 188
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "RfService ->mTestDuration = "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)J

    move-result-wide v7

    invoke-virtual {v1, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    const/16 v5, 0x7d1

    const-string v6, "start test"

    invoke-virtual {v1, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 190
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v1

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v5

    invoke-static {v5, v4}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v1, v4, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto :goto_1

    .line 194
    :cond_11
    const-string v1, "RfService ->start cmd failed"

    invoke-static {v6, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 196
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v1

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;->this$0:Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    invoke-static {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;

    move-result-object v5

    invoke-static {v5, v4}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v4

    invoke-virtual {v1, v4, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 201
    :cond_12
    :goto_1
    return-void

    :pswitch_data_0
    .packed-switch 0xc
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
