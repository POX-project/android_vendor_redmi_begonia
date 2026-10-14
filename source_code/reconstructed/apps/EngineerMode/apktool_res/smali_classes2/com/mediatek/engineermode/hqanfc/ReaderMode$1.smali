.class Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;
.super Landroid/content/BroadcastReceiver;
.source "ReaderMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/ReaderMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    .line 87
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 5
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 90
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 91
    .local v0, "action":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[ReaderMode]mReceiver onReceive: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Nfc"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 92
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    const-string v4, "content"

    invoke-virtual {v3, v4}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$002(Lcom/mediatek/engineermode/hqanfc/ReaderMode;[B)[B

    .line 93
    const-string v1, "com.mediatek.hqanfc.102"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 94
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v1

    if-eqz v1, :cond_2

    .line 95
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v1

    invoke-static {v1}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v1

    .line 96
    .local v1, "buffer":Ljava/nio/ByteBuffer;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    new-instance v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    invoke-direct {v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;-><init>()V

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$102(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    .line 97
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$100(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermRsp;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 98
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$200(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/os/Handler;

    move-result-object v2

    const/16 v3, 0xc8

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 99
    .end local v1    # "buffer":Ljava/nio/ByteBuffer;
    goto :goto_0

    .line 100
    :cond_0
    nop

    .line 101
    const-string v1, "com.mediatek.hqanfc.118"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 102
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v1

    if-eqz v1, :cond_2

    .line 103
    iget-object v1, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$000(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)[B

    move-result-object v1

    invoke-static {v1}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v1

    .line 104
    .restart local v1    # "buffer":Ljava/nio/ByteBuffer;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    new-instance v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    invoke-direct {v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;-><init>()V

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$302(Lcom/mediatek/engineermode/hqanfc/ReaderMode;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    .line 105
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$300(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmAlsReadermNtf;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 106
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/ReaderMode$1;->this$0:Lcom/mediatek/engineermode/hqanfc/ReaderMode;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/ReaderMode;->access$200(Lcom/mediatek/engineermode/hqanfc/ReaderMode;)Landroid/os/Handler;

    move-result-object v2

    const/16 v3, 0x64

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 107
    .end local v1    # "buffer":Ljava/nio/ByteBuffer;
    goto :goto_0

    .line 109
    :cond_1
    const-string v1, "[ReaderMode]Other response"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    :cond_2
    :goto_0
    return-void
.end method
