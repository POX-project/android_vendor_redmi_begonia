.class Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;
.super Landroid/content/BroadcastReceiver;
.source "VersionQuery.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/hqanfc/VersionQuery;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    .line 46
    iput-object p1, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 49
    const-string v0, "Nfc"

    const-string v1, "[VersionQuery]mReceiver onReceive"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    .line 51
    .local v1, "action":Ljava/lang/String;
    const-string v2, "com.mediatek.hqanfc.132"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 52
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    const-string v3, "content"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$002(Lcom/mediatek/engineermode/hqanfc/VersionQuery;[B)[B

    .line 53
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$000(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)[B

    move-result-object v0

    if-eqz v0, :cond_1

    .line 54
    iget-object v0, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-static {v0}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$000(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)[B

    move-result-object v0

    invoke-static {v0}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 55
    .local v0, "buffer":Ljava/nio/ByteBuffer;
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    new-instance v3, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVersionRsp;

    invoke-direct {v3}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVersionRsp;-><init>()V

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$102(Lcom/mediatek/engineermode/hqanfc/VersionQuery;Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVersionRsp;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVersionRsp;

    .line 56
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$100(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVersionRsp;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/mediatek/engineermode/hqanfc/NfcEmReqRsp$NfcEmVersionRsp;->readRaw(Ljava/nio/ByteBuffer;)V

    .line 57
    iget-object v2, p0, Lcom/mediatek/engineermode/hqanfc/VersionQuery$1;->this$0:Lcom/mediatek/engineermode/hqanfc/VersionQuery;

    invoke-static {v2}, Lcom/mediatek/engineermode/hqanfc/VersionQuery;->access$200(Lcom/mediatek/engineermode/hqanfc/VersionQuery;)Landroid/os/Handler;

    move-result-object v2

    const/16 v3, 0xc8

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 58
    .end local v0    # "buffer":Ljava/nio/ByteBuffer;
    goto :goto_0

    .line 60
    :cond_0
    const-string v2, "[VersionQuery]Other response"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 62
    :cond_1
    :goto_0
    return-void
.end method
