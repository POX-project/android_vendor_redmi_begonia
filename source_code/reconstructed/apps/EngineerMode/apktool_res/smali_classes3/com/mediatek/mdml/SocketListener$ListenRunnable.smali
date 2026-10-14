.class Lcom/mediatek/mdml/SocketListener$ListenRunnable;
.super Ljava/lang/Object;
.source "SocketListener.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/mdml/SocketListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "ListenRunnable"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/mdml/SocketListener;


# direct methods
.method private constructor <init>(Lcom/mediatek/mdml/SocketListener;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/mdml/SocketListener;Lcom/mediatek/mdml/SocketListener$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/mdml/SocketListener;
    .param p2, "x1"    # Lcom/mediatek/mdml/SocketListener$1;

    .line 108
    invoke-direct {p0, p1}, Lcom/mediatek/mdml/SocketListener$ListenRunnable;-><init>(Lcom/mediatek/mdml/SocketListener;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 6

    .line 115
    const-string v0, "ListenRunnable will be stopped."

    const-string v1, "MDML/SocketListener"

    const/4 v2, 0x0

    .line 116
    .local v2, "bIsConnected":Z
    :goto_0
    :try_start_0
    iget-object v3, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v3}, Lcom/mediatek/mdml/SocketListener;->access$100(Lcom/mediatek/mdml/SocketListener;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 117
    const-string v3, "ListenRunnable.run"

    invoke-static {v1, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 118
    iget-object v3, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v3}, Lcom/mediatek/mdml/SocketListener;->access$200(Lcom/mediatek/mdml/SocketListener;)Landroid/net/LocalServerSocket;

    move-result-object v3

    invoke-virtual {v3}, Landroid/net/LocalServerSocket;->accept()Landroid/net/LocalSocket;

    move-result-object v3

    .line 119
    .local v3, "receiver":Landroid/net/LocalSocket;
    iget-object v4, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v4}, Lcom/mediatek/mdml/SocketListener;->access$100(Lcom/mediatek/mdml/SocketListener;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 120
    iget-object v4, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v4}, Lcom/mediatek/mdml/SocketListener;->access$200(Lcom/mediatek/mdml/SocketListener;)Landroid/net/LocalServerSocket;

    move-result-object v4

    invoke-virtual {v4}, Landroid/net/LocalServerSocket;->close()V

    .line 121
    return-void

    .line 123
    :cond_0
    new-instance v4, Lcom/mediatek/mdml/SocketConnection;

    invoke-direct {v4, v3}, Lcom/mediatek/mdml/SocketConnection;-><init>(Landroid/net/LocalSocket;)V

    .line 124
    .local v4, "socketConnection":Lcom/mediatek/mdml/SocketConnection;
    const/4 v2, 0x1

    .line 125
    :cond_1
    iget-object v5, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v5}, Lcom/mediatek/mdml/SocketListener;->access$100(Lcom/mediatek/mdml/SocketListener;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 126
    const-string v5, "ListenRunnable.run. Ready to read"

    invoke-static {v1, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 127
    iget-object v5, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v5}, Lcom/mediatek/mdml/SocketListener;->access$300(Lcom/mediatek/mdml/SocketListener;)Lcom/mediatek/mdml/ConnectionHandlerInterface;

    move-result-object v5

    if-eqz v5, :cond_2

    .line 128
    iget-object v5, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v5}, Lcom/mediatek/mdml/SocketListener;->access$300(Lcom/mediatek/mdml/SocketListener;)Lcom/mediatek/mdml/ConnectionHandlerInterface;

    move-result-object v5

    invoke-interface {v5, v4}, Lcom/mediatek/mdml/ConnectionHandlerInterface;->DataIn(Lcom/mediatek/mdml/SocketConnection;)Z

    move-result v5

    move v2, v5

    .line 130
    :cond_2
    const-string v5, "ListenRunnable.run. Ready to read done!"

    invoke-static {v1, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 131
    if-nez v2, :cond_1

    .line 135
    :cond_3
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 136
    iget-object v5, p0, Lcom/mediatek/mdml/SocketListener$ListenRunnable;->this$0:Lcom/mediatek/mdml/SocketListener;

    invoke-static {v5}, Lcom/mediatek/mdml/SocketListener;->access$200(Lcom/mediatek/mdml/SocketListener;)Landroid/net/LocalServerSocket;

    move-result-object v5

    invoke-virtual {v5}, Landroid/net/LocalServerSocket;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 137
    .end local v3    # "receiver":Landroid/net/LocalSocket;
    .end local v4    # "socketConnection":Lcom/mediatek/mdml/SocketConnection;
    goto :goto_0

    .line 141
    .end local v2    # "bIsConnected":Z
    :cond_4
    goto :goto_1

    .line 138
    :catch_0
    move-exception v2

    .line 139
    .local v2, "e":Ljava/io/IOException;
    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 140
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 142
    .end local v2    # "e":Ljava/io/IOException;
    :goto_1
    return-void
.end method
