.class Lcom/mediatek/mdml/SocketListener;
.super Ljava/lang/Object;
.source "SocketListener.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/mdml/SocketListener$ListenRunnable;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/SocketListener"


# instance fields
.field private m_connHandlerInstance:Lcom/mediatek/mdml/ConnectionHandlerInterface;

.field private m_notifyListenThreadStop:Z

.field private m_socket:Landroid/net/LocalServerSocket;

.field private m_threadId:Ljava/lang/Thread;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 3
    .param p1, "szServerName"    # Ljava/lang/String;

    .line 62
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 63
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/mdml/SocketListener;->m_threadId:Ljava/lang/Thread;

    .line 64
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/mdml/SocketListener;->m_notifyListenThreadStop:Z

    .line 65
    iput-object v0, p0, Lcom/mediatek/mdml/SocketListener;->m_connHandlerInstance:Lcom/mediatek/mdml/ConnectionHandlerInterface;

    .line 67
    :try_start_0
    new-instance v1, Landroid/net/LocalServerSocket;

    invoke-direct {v1, p1}, Landroid/net/LocalServerSocket;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mediatek/mdml/SocketListener;->m_socket:Landroid/net/LocalServerSocket;

    .line 68
    new-instance v1, Ljava/lang/Thread;

    new-instance v2, Lcom/mediatek/mdml/SocketListener$ListenRunnable;

    invoke-direct {v2, p0, v0}, Lcom/mediatek/mdml/SocketListener$ListenRunnable;-><init>(Lcom/mediatek/mdml/SocketListener;Lcom/mediatek/mdml/SocketListener$1;)V

    invoke-direct {v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    iput-object v1, p0, Lcom/mediatek/mdml/SocketListener;->m_threadId:Ljava/lang/Thread;

    .line 69
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 73
    goto :goto_0

    .line 70
    :catch_0
    move-exception v0

    .line 71
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, "MDML/SocketListener"

    const-string v2, "Failed to initialize SocketListener."

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 72
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 74
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/mdml/SocketListener;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/mdml/SocketListener;

    .line 32
    iget-boolean v0, p0, Lcom/mediatek/mdml/SocketListener;->m_notifyListenThreadStop:Z

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/mdml/SocketListener;)Landroid/net/LocalServerSocket;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/mdml/SocketListener;

    .line 32
    iget-object v0, p0, Lcom/mediatek/mdml/SocketListener;->m_socket:Landroid/net/LocalServerSocket;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/mdml/SocketListener;)Lcom/mediatek/mdml/ConnectionHandlerInterface;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/mdml/SocketListener;

    .line 32
    iget-object v0, p0, Lcom/mediatek/mdml/SocketListener;->m_connHandlerInstance:Lcom/mediatek/mdml/ConnectionHandlerInterface;

    return-object v0
.end method


# virtual methods
.method public SetConnectionHandler(Lcom/mediatek/mdml/ConnectionHandlerInterface;)V
    .locals 0
    .param p1, "handlerInstance"    # Lcom/mediatek/mdml/ConnectionHandlerInterface;

    .line 102
    iput-object p1, p0, Lcom/mediatek/mdml/SocketListener;->m_connHandlerInstance:Lcom/mediatek/mdml/ConnectionHandlerInterface;

    .line 103
    return-void
.end method

.method public finalize()V
    .locals 3

    .line 81
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/mdml/SocketListener;->m_notifyListenThreadStop:Z

    .line 82
    iget-object v0, p0, Lcom/mediatek/mdml/SocketListener;->m_threadId:Ljava/lang/Thread;

    if-eqz v0, :cond_0

    .line 83
    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/SocketListener;->m_socket:Landroid/net/LocalServerSocket;

    if-eqz v0, :cond_1

    .line 87
    :try_start_0
    invoke-virtual {v0}, Landroid/net/LocalServerSocket;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 91
    goto :goto_0

    .line 88
    :catch_0
    move-exception v0

    .line 89
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, "MDML/SocketListener"

    const-string v2, "Failed to close socket."

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 90
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 93
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_1
    :goto_0
    return-void
.end method
