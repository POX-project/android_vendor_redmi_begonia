.class final Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;
.super Landroid/os/Handler;
.source "BtRelayerModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "WorkHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 130
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 131
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 132
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$1;

    .line 129
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 137
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-ne v0, v1, :cond_1

    .line 138
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 139
    .local v0, "msgResult":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$400(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lcom/mediatek/engineermode/bluetooth/BtTest;->startRelayerMode(II)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 140
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    goto :goto_0

    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 141
    .local v1, "result":Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    :goto_0
    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v2

    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 142
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "-->relayerStart-"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v3}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$400(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " uart "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 143
    invoke-static {v3}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "result 0 success,-1 fail: result= "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 142
    const-string v3, "BtRelayerMode"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .end local v0    # "msgResult":Landroid/os/Message;
    .end local v1    # "result":Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    goto :goto_2

    .line 146
    :cond_1
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc

    if-ne v0, v1, :cond_3

    .line 147
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 148
    .restart local v0    # "msgResult":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->stopRelayerMode()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 149
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    goto :goto_1

    :cond_2
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 150
    .restart local v1    # "result":Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    :goto_1
    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v2

    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 151
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_3

    .line 146
    .end local v0    # "msgResult":Landroid/os/Message;
    .end local v1    # "result":Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    :cond_3
    :goto_2
    nop

    .line 153
    :goto_3
    return-void
.end method
