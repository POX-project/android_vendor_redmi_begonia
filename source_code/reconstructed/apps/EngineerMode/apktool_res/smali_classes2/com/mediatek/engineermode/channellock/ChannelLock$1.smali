.class Lcom/mediatek/engineermode/channellock/ChannelLock$1;
.super Landroid/os/Handler;
.source "ChannelLock.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/channellock/ChannelLock;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/channellock/ChannelLock;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/channellock/ChannelLock;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/channellock/ChannelLock;

    .line 83
    iput-object p1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock$1;->this$0:Lcom/mediatek/engineermode/channellock/ChannelLock;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 86
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 87
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x1

    const-string v3, "ChannelLock"

    if-eq v1, v2, :cond_3

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 99
    :cond_0
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v1, :cond_2

    .line 100
    const-string v1, "Query success."

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [Ljava/lang/String;

    .line 102
    .local v1, "data":[Ljava/lang/String;
    if-nez v1, :cond_1

    .line 103
    const-string v2, "The returned data is wrong."

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 104
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 105
    return-void

    .line 107
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/channellock/ChannelLock$1;->this$0:Lcom/mediatek/engineermode/channellock/ChannelLock;

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/channellock/ChannelLock;->access$000(Lcom/mediatek/engineermode/channellock/ChannelLock;[Ljava/lang/String;)V

    .line 109
    .end local v1    # "data":[Ljava/lang/String;
    goto :goto_0

    .line 110
    :cond_2
    const-string v1, "Query failed."

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 111
    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    goto :goto_0

    .line 89
    :cond_3
    iget-object v1, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v1, :cond_4

    .line 90
    const-string v1, "Failed to set Channel Lock"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 91
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_0

    .line 93
    :cond_4
    const-string v1, "set Channel Lock success"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 94
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 95
    iget-object v1, p0, Lcom/mediatek/engineermode/channellock/ChannelLock$1;->this$0:Lcom/mediatek/engineermode/channellock/ChannelLock;

    const/16 v2, 0x7d0

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/channellock/ChannelLock;->showDialog(I)V

    .line 97
    nop

    .line 117
    :goto_0
    return-void
.end method
