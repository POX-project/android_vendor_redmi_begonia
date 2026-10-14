.class final Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;
.super Landroid/os/Handler;
.source "TestModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TestModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "WorkHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 206
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 207
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 208
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;

    .line 205
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 213
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-ne v0, v1, :cond_1

    .line 214
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$600(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 215
    .local v0, "msgResult":Landroid/os/Message;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "power:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BtTestMode"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 217
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 218
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->enableTestMode(I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 219
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->pollingStart()I

    .line 220
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_0

    .line 223
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v1, v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 224
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 226
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$600(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .end local v0    # "msgResult":Landroid/os/Message;
    goto :goto_1

    .line 228
    :cond_1
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc

    if-ne v0, v1, :cond_2

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->pollingStop()I

    .line 230
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->runHCIResetCmd()V

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$600(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_2

    .line 228
    :cond_2
    :goto_1
    nop

    .line 234
    :goto_2
    return-void
.end method
