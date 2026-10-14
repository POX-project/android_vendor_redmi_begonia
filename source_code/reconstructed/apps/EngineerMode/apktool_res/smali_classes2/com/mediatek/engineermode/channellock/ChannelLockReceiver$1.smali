.class Lcom/mediatek/engineermode/channellock/ChannelLockReceiver$1;
.super Landroid/os/Handler;
.source "ChannelLockReceiver.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/channellock/ChannelLockReceiver;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/channellock/ChannelLockReceiver;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/channellock/ChannelLockReceiver;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/channellock/ChannelLockReceiver;

    .line 150
    iput-object p1, p0, Lcom/mediatek/engineermode/channellock/ChannelLockReceiver$1;->this$0:Lcom/mediatek/engineermode/channellock/ChannelLockReceiver;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 8
    .param p1, "msg"    # Landroid/os/Message;

    .line 153
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handleMessage: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ChannelLockReceiver"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 154
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 155
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v2, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x7

    if-eq v2, v3, :cond_3

    const/16 v3, 0x8

    if-eq v2, v3, :cond_0

    goto/16 :goto_2

    .line 168
    :cond_0
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v2, :cond_1

    .line 169
    const-string v2, "send AT+EMMCHLCK? failed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    iget-object v2, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 172
    :cond_1
    const-string v2, "send AT+EMMCHLCK? succeed"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    iget-object v2, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/String;

    .line 174
    .local v2, "result":[Ljava/lang/String;
    const/4 v3, 0x0

    .line 175
    .local v3, "splited":[Ljava/lang/String;
    const-string v4, ""

    .line 176
    .local v4, "strTemp":Ljava/lang/String;
    const/4 v5, 0x0

    aget-object v6, v2, v5

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    :try_start_0
    aget-object v5, v2, v5

    const-string v6, "+EMMCHLCK:"

    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    const-string v6, " "

    const-string v7, ""

    invoke-virtual {v5, v6, v7}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    move-object v4, v5

    .line 180
    const-string v5, ","

    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v3, v5

    .line 183
    goto :goto_0

    .line 181
    :catch_0
    move-exception v5

    .line 182
    .local v5, "e":Ljava/lang/Exception;
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "get the chekced label failed:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    .end local v5    # "e":Ljava/lang/Exception;
    :goto_0
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_1
    if-eqz v3, :cond_2

    array-length v6, v3

    if-ge v5, v6, :cond_2

    .line 185
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "splited["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "] = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v3, v5

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 188
    .end local v2    # "result":[Ljava/lang/String;
    .end local v3    # "splited":[Ljava/lang/String;
    .end local v4    # "strTemp":Ljava/lang/String;
    .end local v5    # "i":I
    :cond_2
    goto :goto_2

    .line 157
    :cond_3
    const/4 v2, 0x0

    .line 158
    .local v2, "isOK":Z
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-eqz v3, :cond_4

    .line 159
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    const/4 v2, 0x0

    .line 161
    const-string v3, "send MSG_CHANNEL_LOCK failed"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 163
    :cond_4
    const/4 v2, 0x1

    .line 164
    const-string v3, "send MSG_CHANNEL_LOCK succeed"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 166
    nop

    .line 192
    .end local v2    # "isOK":Z
    :goto_2
    return-void
.end method
