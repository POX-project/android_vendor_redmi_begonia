.class Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;
.super Landroid/os/Handler;
.source "BtRelayerModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 156
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 159
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v2, 0x2

    if-eq v0, v2, :cond_0

    goto :goto_2

    .line 170
    :cond_0
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v2

    if-ne v0, v2, :cond_1

    .line 171
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    const v2, 0x7f0a01c5

    .line 172
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->getText(I)Ljava/lang/CharSequence;

    move-result-object v2

    .line 171
    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 172
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 174
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Z)V

    .line 176
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->removeWaitDlg()V

    .line 177
    goto :goto_2

    .line 161
    :cond_2
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_3

    .line 162
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    const v1, 0x7f0a01c4

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 163
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_1

    .line 165
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Z)V

    .line 167
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->removeWaitDlg()V

    .line 168
    nop

    .line 181
    :goto_2
    return-void
.end method
