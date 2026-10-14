.class Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;
.super Landroid/os/Handler;
.source "BtTestBaseActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 213
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 215
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "UI handler receive msg of "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " param "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestBaseActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x1

    if-eq v0, v2, :cond_3

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    const/4 v3, 0x3

    if-eq v0, v3, :cond_0

    goto :goto_0

    .line 231
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->removeDialog(I)V

    .line 232
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_INIT_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    const v1, 0x7f0a0193

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 234
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->finish()V

    goto :goto_0

    .line 237
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->values()[Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    iget v2, p1, Landroid/os/Message;->arg1:I

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->handleInitResult(Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;)V

    .line 239
    goto :goto_0

    .line 228
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->showDialog(I)V

    .line 229
    goto :goto_0

    .line 218
    :cond_3
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v3, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_ANT_SWAP_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v3

    if-ne v0, v3, :cond_4

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    const v3, 0x7f0a0195

    invoke-static {v0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 220
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 221
    const-string v0, "mRgAntSwap.check(mAntCurrentId)"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 222
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/widget/RadioGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$100(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->check(I)V

    goto :goto_0

    .line 224
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;->this$0:Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$500(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/widget/RadioGroup;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->access$102(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;I)I

    .line 226
    nop

    .line 243
    :goto_0
    return-void
.end method
