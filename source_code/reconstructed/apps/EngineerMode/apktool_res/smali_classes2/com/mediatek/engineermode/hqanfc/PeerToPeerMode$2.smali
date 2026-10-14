.class Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;
.super Landroid/os/Handler;
.source "PeerToPeerMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    .line 105
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .line 107
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 108
    const/4 v0, 0x0

    .line 109
    .local v0, "toastMsg":Ljava/lang/String;
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/16 v4, 0xc9

    if-ne v4, v1, :cond_2

    .line 110
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$100(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pNtf;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pNtf;->mResult:I

    if-eqz v1, :cond_1

    if-eq v1, v3, :cond_0

    .line 120
    const-string v0, "P2P Data Exchange is ERROR"

    .line 121
    goto :goto_0

    .line 112
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->showDialog(I)V

    .line 113
    goto :goto_0

    .line 115
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$400(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/app/AlertDialog;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 116
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$400(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/app/AlertDialog;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/AlertDialog;->dismiss()V

    goto :goto_0

    .line 123
    :cond_2
    const/16 v1, 0xc8

    iget v4, p1, Landroid/os/Message;->what:I

    if-ne v1, v4, :cond_6

    .line 124
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->dismissDialog(I)V

    .line 125
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$300(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pRsp;

    move-result-object v1

    iget v1, v1, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsP2pRsp;->mResult:I

    if-eqz v1, :cond_4

    if-eq v1, v3, :cond_3

    .line 138
    const-string v0, "P2P Mode Rsp Result: ERROR"

    goto :goto_0

    .line 135
    :cond_3
    const-string v0, "P2P Mode Rsp Result: FAIL"

    .line 136
    goto :goto_0

    .line 127
    :cond_4
    const-string v0, "P2P Mode Rsp Result: SUCCESS"

    .line 128
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$500(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;)Landroid/widget/Button;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Button;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    const v5, 0x7f0a0383

    invoke-virtual {v4, v5}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 129
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$600(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;Z)V

    goto :goto_0

    .line 131
    :cond_5
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;->access$600(Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;Z)V

    .line 142
    :cond_6
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode$2;->this$0:Lcom/mediatek/engineermode/hqanfc/PeerToPeerMode;

    invoke-static {v1, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 143
    return-void
.end method
