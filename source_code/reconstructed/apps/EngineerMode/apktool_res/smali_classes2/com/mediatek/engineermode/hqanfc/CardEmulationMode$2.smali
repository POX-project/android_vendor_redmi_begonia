.class Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;
.super Landroid/os/Handler;
.source "CardEmulationMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    .line 70
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 72
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 73
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xc8

    if-ne v1, v0, :cond_4

    .line 74
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->dismissDialog(I)V

    .line 75
    const/4 v0, 0x0

    .line 76
    .local v0, "toastMsg":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->access$100(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;

    move-result-object v2

    iget v2, v2, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsCardmRsp;->mResult:I

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    if-eq v2, v3, :cond_1

    const/16 v3, 0xe1

    if-eq v2, v3, :cond_0

    .line 93
    const-string v0, "CardEmulation Rsp Result: ERROR"

    goto :goto_0

    .line 90
    :cond_0
    const-string v0, "CardEmulation Rsp Result: No SIM"

    .line 91
    goto :goto_0

    .line 87
    :cond_1
    const-string v0, "CardEmulation Rsp Result: FAIL"

    .line 88
    goto :goto_0

    .line 78
    :cond_2
    const-string v0, "CardEmulation Rsp Result: SUCCESS"

    .line 79
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->access$300(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;)Landroid/widget/Button;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    const v5, 0x7f0a0383

    .line 80
    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->getString(I)Ljava/lang/String;

    move-result-object v4

    .line 79
    invoke-virtual {v2, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 81
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->access$400(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;Z)V

    goto :goto_0

    .line 83
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;->access$400(Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;Z)V

    .line 85
    nop

    .line 96
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/CardEmulationMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/CardEmulationMode;

    invoke-static {v2, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 98
    .end local v0    # "toastMsg":Ljava/lang/String;
    :cond_4
    return-void
.end method
