.class Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;
.super Landroid/os/Handler;
.source "VirtualCardFunction.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    .line 86
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 89
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 90
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc8

    if-ne v1, v0, :cond_4

    .line 91
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->dismissDialog(I)V

    .line 92
    const/4 v0, 0x0

    .line 93
    .local v0, "toastMsg":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$100(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;

    move-result-object v2

    iget v2, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVirtualCardRsp;->mResult:I

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    if-eq v2, v3, :cond_1

    const/16 v3, 0xe3

    if-eq v2, v3, :cond_0

    .line 110
    const-string v0, "VirtualCardFunction Rsp Result: ERROR"

    goto :goto_0

    .line 107
    :cond_0
    const-string v0, "Please Remove SIM or uSD"

    .line 108
    goto :goto_0

    .line 104
    :cond_1
    const-string v0, "VirtualCardFunction Rsp Result: FAIL"

    .line 105
    goto :goto_0

    .line 95
    :cond_2
    const-string v0, "VirtualCardFunction Rsp Result: SUCCESS"

    .line 96
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$300(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;)Landroid/widget/Button;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    const v5, 0x7f0a0383

    .line 97
    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 96
    invoke-virtual {v2, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 98
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$400(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;Z)V

    goto :goto_0

    .line 100
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;->access$400(Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;Z)V

    .line 102
    nop

    .line 113
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction$2;->this$0:Lcom/mediatek/engineermode/hqanfc/VirtualCardFunction;

    invoke-static {v2, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 115
    .end local v0    # "toastMsg":Ljava/lang/String;
    :cond_4
    return-void
.end method
