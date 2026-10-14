.class Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;
.super Landroid/os/Handler;
.source "BleTestMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BleTestMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 165
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 167
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "receive msg of "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BleTestMode"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v2, 0x2

    if-eq v0, v2, :cond_0

    goto :goto_0

    .line 174
    :cond_0
    iget v0, p1, Landroid/os/Message;->arg1:I

    if-nez v0, :cond_1

    .line 175
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$500(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$400(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 177
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$300(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Z)V

    .line 178
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->removeWaitDlg()V

    .line 179
    goto :goto_0

    .line 170
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$300(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Z)V

    .line 171
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->removeWaitDlg()V

    .line 172
    nop

    .line 183
    :goto_0
    return-void
.end method
