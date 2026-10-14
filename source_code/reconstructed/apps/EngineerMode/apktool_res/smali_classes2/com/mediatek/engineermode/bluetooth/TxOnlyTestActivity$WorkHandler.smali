.class final Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;
.super Landroid/os/Handler;
.source "TxOnlyTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "WorkHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 154
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 155
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 156
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;

    .line 153
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 160
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "work handler msg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTxOnlyTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 161
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-eq v0, v1, :cond_1

    const/16 v1, 0xc

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 169
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->runHCIResetCmd()V

    .line 170
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    iget-object v0, v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 171
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 172
    goto :goto_0

    .line 163
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 164
    .local v0, "msgResultStart":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$300(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 166
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$200(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 167
    nop

    .line 176
    .end local v0    # "msgResultStart":Landroid/os/Message;
    :goto_0
    return-void
.end method
