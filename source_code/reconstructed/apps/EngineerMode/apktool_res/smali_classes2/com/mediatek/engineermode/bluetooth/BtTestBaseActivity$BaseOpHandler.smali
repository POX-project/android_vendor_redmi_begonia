.class final Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;
.super Landroid/os/Handler;
.source "BtTestBaseActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "BaseOpHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 176
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 177
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 178
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;

    .line 175
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 182
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "work handler msg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestBaseActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v2, 0xb

    if-ne v0, v2, :cond_3

    .line 184
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 185
    .local v0, "msgUI":Landroid/os/Message;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "msg.arg1:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " mAntSwapInTestProcess:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v4}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$400(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$400(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 187
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget v3, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v3, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->switchAnt(IZ)Z

    move-result v1

    if-eqz v1, :cond_0

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    goto :goto_0

    .line 188
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_SWAP_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    :goto_0
    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_2

    .line 190
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 192
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget v2, p1, Landroid/os/Message;->arg1:I

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Lcom/mediatek/engineermode/bluetooth/BtTest;->switchAnt(IZ)Z

    move-result v1

    if-eqz v1, :cond_2

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    goto :goto_1

    .line 193
    :cond_2
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_SWAP_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    :goto_1
    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 194
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 197
    :goto_2
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .end local v0    # "msgUI":Landroid/os/Message;
    goto :goto_4

    .line 198
    :cond_3
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc

    if-ne v0, v1, :cond_5

    .line 199
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 200
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 201
    .local v0, "msgFinish":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 202
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->initAntSwap()Z

    move-result v1

    if-nez v1, :cond_4

    .line 203
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_INIT_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_3

    .line 205
    :cond_4
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->initParams()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 207
    :goto_3
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 208
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_5

    .line 198
    .end local v0    # "msgFinish":Landroid/os/Message;
    :cond_5
    :goto_4
    nop

    .line 210
    :goto_5
    return-void
.end method
