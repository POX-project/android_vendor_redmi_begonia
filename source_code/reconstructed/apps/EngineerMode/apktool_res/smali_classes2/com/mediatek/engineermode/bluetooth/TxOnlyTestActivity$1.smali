.class Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;
.super Landroid/os/Handler;
.source "TxOnlyTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 126
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 128
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "receive msg of "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTxOnlyTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x2

    if-eq v0, v2, :cond_0

    goto :goto_1

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$100(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Z)V

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->removeWaitDlg()V

    .line 142
    goto :goto_1

    .line 131
    :cond_1
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v2

    if-ne v0, v2, :cond_2

    .line 132
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->access$100(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Z)V

    goto :goto_0

    .line 134
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    const v2, 0x7f0a01d9

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 135
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 137
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->removeWaitDlg()V

    .line 138
    nop

    .line 146
    :goto_1
    return-void
.end method
