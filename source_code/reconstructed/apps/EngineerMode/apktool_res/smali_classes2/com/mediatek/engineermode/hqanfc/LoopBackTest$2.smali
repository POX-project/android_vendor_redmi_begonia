.class Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;
.super Landroid/os/Handler;
.source "LoopBackTest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/LoopBackTest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    .line 59
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 61
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 62
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc8

    if-ne v1, v0, :cond_3

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->dismissDialog(I)V

    .line 64
    const/4 v0, 0x0

    .line 65
    .local v0, "toastMsg":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->access$100(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;

    move-result-object v2

    iget-byte v2, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmLoopbackRsp;->mResult:B

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    if-eq v2, v3, :cond_0

    .line 79
    const-string v0, "LoopBackTest Rsp Result: ERROR"

    goto :goto_0

    .line 76
    :cond_0
    const-string v0, "LoopBackTest Rsp Result: FAIL"

    .line 77
    goto :goto_0

    .line 67
    :cond_1
    const-string v0, "LoopBackTest Rsp Result: SUCCESS"

    .line 68
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->access$300(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;)Landroid/widget/Button;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    const v5, 0x7f0a0383

    .line 69
    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 68
    invoke-virtual {v2, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 70
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->access$400(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;Z)V

    goto :goto_0

    .line 72
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/LoopBackTest;->access$400(Lcom/mediatek/engineermode/hqanfc/LoopBackTest;Z)V

    .line 74
    nop

    .line 82
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/LoopBackTest$2;->this$0:Lcom/mediatek/engineermode/hqanfc/LoopBackTest;

    invoke-static {v2, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 84
    .end local v0    # "toastMsg":Ljava/lang/String;
    :cond_3
    return-void
.end method
