.class Lcom/mediatek/engineermode/hqanfc/Option$2;
.super Landroid/os/Handler;
.source "Option.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/Option;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/Option;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/Option;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/Option;

    .line 62
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/Option$2;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 64
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 65
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc8

    if-ne v1, v0, :cond_2

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/Option$2;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/Option;->dismissDialog(I)V

    .line 67
    const/4 v0, 0x0

    .line 68
    .local v0, "toastMsg":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/Option$2;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/Option;->access$100(Lcom/mediatek/engineermode/hqanfc/Option;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmOptionRsp;

    move-result-object v2

    iget-byte v2, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmOptionRsp;->mResult:B

    if-eqz v2, :cond_1

    const/4 v3, 0x1

    if-eq v2, v3, :cond_0

    .line 76
    const-string v0, "Option Rsp Result: ERROR"

    goto :goto_0

    .line 73
    :cond_0
    const-string v0, "Option Rsp Result: FAIL"

    .line 74
    goto :goto_0

    .line 70
    :cond_1
    const-string v0, "Option Rsp Result: SUCCESS"

    .line 71
    nop

    .line 79
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/Option$2;->this$0:Lcom/mediatek/engineermode/hqanfc/Option;

    invoke-static {v2, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 81
    .end local v0    # "toastMsg":Ljava/lang/String;
    :cond_2
    return-void
.end method
