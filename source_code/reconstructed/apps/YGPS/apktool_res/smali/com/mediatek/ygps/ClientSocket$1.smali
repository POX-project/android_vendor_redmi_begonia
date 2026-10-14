.class Lcom/mediatek/ygps/ClientSocket$1;
.super Ljava/lang/Object;
.source "ClientSocket.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/ClientSocket;-><init>(Lcom/mediatek/ygps/YgpsActivity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/ygps/ClientSocket;


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/ClientSocket;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 9

    const-string v0, "YGPS/ClientSocket"

    .line 94
    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v2}, Lcom/mediatek/ygps/ClientSocket;->access$100(Lcom/mediatek/ygps/ClientSocket;)Ljava/util/concurrent/BlockingQueue;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/concurrent/BlockingQueue;->take()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/mediatek/ygps/ClientSocket;->access$002(Lcom/mediatek/ygps/ClientSocket;Ljava/lang/String;)Ljava/lang/String;

    .line 95
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Queue take command:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v2}, Lcom/mediatek/ygps/ClientSocket;->access$000(Lcom/mediatek/ygps/ClientSocket;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_1

    .line 100
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$200(Lcom/mediatek/ygps/ClientSocket;)V

    .line 101
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$300(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataOutputStream;

    move-result-object v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$400(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataInputStream;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 105
    :try_start_1
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$300(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataOutputStream;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v2}, Lcom/mediatek/ygps/ClientSocket;->access$000(Lcom/mediatek/ygps/ClientSocket;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 106
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$300(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataOutputStream;

    move-result-object v1

    const/16 v2, 0xd

    invoke-virtual {v1, v2}, Ljava/io/DataOutputStream;->write(I)V

    .line 107
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$300(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataOutputStream;

    move-result-object v1

    const/16 v2, 0xa

    invoke-virtual {v1, v2}, Ljava/io/DataOutputStream;->write(I)V

    .line 108
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$300(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataOutputStream;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/DataOutputStream;->flush()V

    const-string v1, "PMTK"

    .line 113
    invoke-static {}, Lcom/mediatek/ygps/ClientSocket;->access$500()[[Ljava/lang/String;

    move-result-object v2

    array-length v3, v2

    const/4 v4, 0x0

    move v5, v4

    :goto_1
    if-ge v5, v3, :cond_1

    aget-object v6, v2, v5

    .line 114
    iget-object v7, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v7}, Lcom/mediatek/ygps/ClientSocket;->access$000(Lcom/mediatek/ygps/ClientSocket;)Ljava/lang/String;

    move-result-object v7

    aget-object v8, v6, v4

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_0

    const/4 v1, 0x1

    .line 115
    aget-object v1, v6, v1

    goto :goto_2

    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 119
    :cond_1
    :goto_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 120
    :cond_2
    iget-object v5, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v5}, Lcom/mediatek/ygps/ClientSocket;->access$400(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataInputStream;

    move-result-object v5

    iget-object v6, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v6}, Lcom/mediatek/ygps/ClientSocket;->access$600(Lcom/mediatek/ygps/ClientSocket;)[B

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/io/DataInputStream;->read([B)I

    move-result v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_4

    .line 123
    new-instance v7, Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v8}, Lcom/mediatek/ygps/ClientSocket;->access$600(Lcom/mediatek/ygps/ClientSocket;)[B

    move-result-object v8

    invoke-direct {v7, v8, v4, v5}, Ljava/lang/String;-><init>([BII)V

    .line 124
    invoke-virtual {v7, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 125
    invoke-virtual {v7, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    .line 126
    invoke-virtual {v7, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "*"

    .line 127
    invoke-virtual {v1, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v6, :cond_4

    .line 129
    iget-object v3, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-virtual {v1, v4, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mediatek/ygps/ClientSocket;->access$702(Lcom/mediatek/ygps/ClientSocket;Ljava/lang/String;)Ljava/lang/String;

    .line 130
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$800(Lcom/mediatek/ygps/ClientSocket;)Lcom/mediatek/ygps/YgpsActivity;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 131
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$800(Lcom/mediatek/ygps/ClientSocket;)Lcom/mediatek/ygps/YgpsActivity;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v2}, Lcom/mediatek/ygps/ClientSocket;->access$700(Lcom/mediatek/ygps/ClientSocket;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/ygps/YgpsActivity;->onResponse(Ljava/lang/String;)V

    goto :goto_3

    .line 136
    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v2

    const-wide/16 v7, 0x7d0

    cmp-long v5, v5, v7

    if-lez v5, :cond_2

    const-string v1, "check time timeout"

    .line 138
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception v1

    .line 143
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendCommand IOException: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 147
    :cond_4
    :goto_3
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/mediatek/ygps/ClientSocket;->access$002(Lcom/mediatek/ygps/ClientSocket;Ljava/lang/String;)Ljava/lang/String;

    .line 148
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket$1;->this$0:Lcom/mediatek/ygps/ClientSocket;

    invoke-static {v1}, Lcom/mediatek/ygps/ClientSocket;->access$900(Lcom/mediatek/ygps/ClientSocket;)V

    goto/16 :goto_0

    :catch_1
    move-exception p0

    .line 97
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Take command interrupted:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/InterruptedException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
