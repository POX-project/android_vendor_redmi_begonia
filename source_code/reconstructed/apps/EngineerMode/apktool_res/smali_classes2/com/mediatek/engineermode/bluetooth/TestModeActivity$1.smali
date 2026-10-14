.class Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;
.super Landroid/os/Handler;
.source "TestModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TestModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 82
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 86
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "receive msg of "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestMode"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 87
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq v0, v2, :cond_1

    const/4 v3, 0x2

    if-eq v0, v3, :cond_0

    goto :goto_1

    .line 100
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->setAntSwapInTestProcess(Z)V

    .line 101
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$000(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Z)V

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->removeWaitDlg()V

    .line 103
    goto :goto_1

    .line 89
    :cond_1
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v3, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v3

    if-ne v0, v3, :cond_2

    .line 90
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    const v2, 0x7f0a01d0

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 91
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 93
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->setAntSwapInTestProcess(Z)V

    .line 94
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->access$000(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Z)V

    .line 96
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;->this$0:Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->removeWaitDlg()V

    .line 97
    nop

    .line 108
    :goto_1
    return-void
.end method
