.class Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;
.super Landroid/content/BroadcastReceiver;
.source "FunctionWrite.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/FunctionWrite;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    .line 52
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 55
    const-string v0, "Nfc"

    const-string v1, "[FunctionWrite]mReceiver onReceive"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    .line 57
    .local v1, "action":Ljava/lang/String;
    nop

    .line 58
    const-string v2, "com.mediatek.hqanfc.104"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 59
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    const-string v3, "content"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/hqanfc/FunctionWrite;->access$002(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;[B)[B

    .line 60
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/FunctionWrite;->access$000(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;)[B

    move-result-object v0

    if-eqz v0, :cond_1

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/FunctionWrite;->access$000(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;)[B

    move-result-object v0

    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 62
    .local v0, "buffer":Ljava/nio/ByteBuffer;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    new-instance v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    invoke-direct {v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;-><init>()V

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/FunctionWrite;->access$102(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    .line 63
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/FunctionWrite;->access$100(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermOptRsp;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 64
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/FunctionWrite$1;->this$0:Lcom/mediatek/engineermode/hqanfc/FunctionWrite;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/FunctionWrite;->access$200(Lcom/mediatek/engineermode/hqanfc/FunctionWrite;)Landroid/os/Handler;

    move-result-object v2

    const/16 v3, 0xc8

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 65
    .end local v0    # "buffer":Ljava/nio/ByteBuffer;
    goto :goto_0

    .line 67
    :cond_0
    const-string v2, "[FunctionWrite]Other response"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 69
    :cond_1
    :goto_0
    return-void
.end method
