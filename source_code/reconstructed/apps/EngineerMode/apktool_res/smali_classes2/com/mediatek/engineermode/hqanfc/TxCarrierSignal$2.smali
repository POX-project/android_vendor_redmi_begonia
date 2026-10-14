.class Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;
.super Landroid/os/Handler;
.source "TxCarrierSignal.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    .line 60
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 62
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 63
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc8

    if-ne v1, v0, :cond_3

    .line 64
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->dismissDialog(I)V

    .line 65
    const/4 v0, 0x0

    .line 66
    .local v0, "toastMsg":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->access$100(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;

    move-result-object v2

    iget v2, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmTxCarrAlsOnRsp;->mResult:I

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    if-eq v2, v3, :cond_0

    .line 80
    const-string v0, "TxCarrierSignal Rsp Result: ERROR"

    goto :goto_0

    .line 77
    :cond_0
    const-string v0, "TxCarrierSignal Rsp Result: FAIL"

    .line 78
    goto :goto_0

    .line 68
    :cond_1
    const-string v0, "TxCarrierSignal Rsp Result: SUCCESS"

    .line 69
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->access$300(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;)Landroid/widget/Button;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    const v5, 0x7f0a0383

    .line 70
    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 69
    invoke-virtual {v2, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 71
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->access$400(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;Z)V

    goto :goto_0

    .line 73
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;->access$400(Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;Z)V

    .line 75
    nop

    .line 83
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal$2;->this$0:Lcom/mediatek/engineermode/hqanfc/TxCarrierSignal;

    invoke-static {v2, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 85
    .end local v0    # "toastMsg":Ljava/lang/String;
    :cond_3
    return-void
.end method
