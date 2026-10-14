.class Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;
.super Landroid/os/Handler;
.source "BleEnhancedTestMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 217
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 222
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Rec ui msg "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BLEEhTestMode"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 223
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v2, 0x2

    if-eq v0, v2, :cond_0

    goto :goto_1

    .line 234
    :cond_0
    iget v0, p1, Landroid/os/Message;->arg1:I

    if-nez v0, :cond_1

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$300(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$200(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 237
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$100(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Z)V

    .line 238
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->removeWaitDlg()V

    .line 239
    goto :goto_1

    .line 225
    :cond_2
    iget v0, p1, Landroid/os/Message;->arg1:I

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v2

    if-ne v0, v2, :cond_3

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$100(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Z)V

    goto :goto_0

    .line 228
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    const v2, 0x7f0a01c4

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 229
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 231
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->removeWaitDlg()V

    .line 232
    nop

    .line 243
    :goto_1
    return-void
.end method
