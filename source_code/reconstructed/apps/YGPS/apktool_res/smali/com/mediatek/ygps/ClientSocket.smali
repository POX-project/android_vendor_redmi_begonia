.class public Lcom/mediatek/ygps/ClientSocket;
.super Ljava/lang/Object;
.source "ClientSocket.java"


# static fields
.field private static final CMD_RESPONSE:[[Ljava/lang/String;


# instance fields
.field private mCallBack:Lcom/mediatek/ygps/YgpsActivity;

.field private mClientSocket:Ljava/net/Socket;

.field private mCommand:Ljava/lang/String;

.field private mCommandQueue:Ljava/util/concurrent/BlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/BlockingQueue<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mDataBuffer:[B

.field private mDataInput:Ljava/io/DataInputStream;

.field private mDataOutput:Ljava/io/DataOutputStream;

.field private mResponse:Ljava/lang/String;

.field private mSendThread:Ljava/lang/Thread;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [[Ljava/lang/String;

    const-string v1, "PMTK605"

    const-string v2, "$PMTK705"

    .line 75
    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const-string v1, "PMTK837"

    const-string v2, "PMTK001"

    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    sput-object v0, Lcom/mediatek/ygps/ClientSocket;->CMD_RESPONSE:[[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/mediatek/ygps/YgpsActivity;)V
    .locals 1

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 66
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    .line 67
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;

    .line 68
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    .line 69
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mCommand:Ljava/lang/String;

    .line 70
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mResponse:Ljava/lang/String;

    .line 71
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mCommandQueue:Ljava/util/concurrent/BlockingQueue;

    .line 72
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mCallBack:Lcom/mediatek/ygps/YgpsActivity;

    .line 73
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mSendThread:Ljava/lang/Thread;

    .line 74
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mDataBuffer:[B

    .line 86
    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mCallBack:Lcom/mediatek/ygps/YgpsActivity;

    .line 87
    new-instance p1, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {p1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mCommandQueue:Ljava/util/concurrent/BlockingQueue;

    const/16 p1, 0x400

    new-array p1, p1, [B

    .line 88
    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataBuffer:[B

    .line 89
    new-instance p1, Ljava/lang/Thread;

    new-instance v0, Lcom/mediatek/ygps/ClientSocket$1;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/ClientSocket$1;-><init>(Lcom/mediatek/ygps/ClientSocket;)V

    invoke-direct {p1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mSendThread:Ljava/lang/Thread;

    .line 152
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/ygps/ClientSocket;)Ljava/lang/String;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mCommand:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$002(Lcom/mediatek/ygps/ClientSocket;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mCommand:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/ygps/ClientSocket;)Ljava/util/concurrent/BlockingQueue;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mCommandQueue:Ljava/util/concurrent/BlockingQueue;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/ygps/ClientSocket;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/mediatek/ygps/ClientSocket;->openClient()V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataOutputStream;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    return-object p0
.end method

.method static synthetic access$400(Lcom/mediatek/ygps/ClientSocket;)Ljava/io/DataInputStream;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;

    return-object p0
.end method

.method static synthetic access$500()[[Ljava/lang/String;
    .locals 1

    .line 59
    sget-object v0, Lcom/mediatek/ygps/ClientSocket;->CMD_RESPONSE:[[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/ygps/ClientSocket;)[B
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mDataBuffer:[B

    return-object p0
.end method

.method static synthetic access$700(Lcom/mediatek/ygps/ClientSocket;)Ljava/lang/String;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mResponse:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$702(Lcom/mediatek/ygps/ClientSocket;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mResponse:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$800(Lcom/mediatek/ygps/ClientSocket;)Lcom/mediatek/ygps/YgpsActivity;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mCallBack:Lcom/mediatek/ygps/YgpsActivity;

    return-object p0
.end method

.method static synthetic access$900(Lcom/mediatek/ygps/ClientSocket;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/mediatek/ygps/ClientSocket;->closeClient()V

    return-void
.end method

.method private calcCS(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string p0, ""

    if-eqz p1, :cond_2

    .line 243
    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 246
    :cond_0
    invoke-virtual {p1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    .line 248
    array-length p1, p0

    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    :goto_0
    if-ge v1, p1, :cond_1

    aget-byte v3, p0, v1

    xor-int/2addr v2, v3

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x1

    new-array p0, p0, [Ljava/lang/Object;

    and-int/lit16 p1, v2, 0xff

    .line 251
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p0, v0

    const-string p1, "%1$02x"

    invoke-static {p1, p0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object p0

    :cond_2
    :goto_1
    return-object p0
.end method

.method private closeClient()V
    .locals 5

    const-string v0, "YGPS/ClientSocket"

    const-string v1, "enter closeClient"

    .line 180
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v1, 0x0

    .line 182
    :try_start_0
    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;

    if-eqz v2, :cond_0

    .line 183
    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;

    invoke-virtual {v2}, Ljava/io/DataInputStream;->close()V

    .line 185
    :cond_0
    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    if-eqz v2, :cond_1

    .line 186
    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    invoke-virtual {v2}, Ljava/io/DataOutputStream;->close()V

    .line 188
    :cond_1
    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    if-eqz v2, :cond_2

    .line 189
    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    invoke-virtual {v2}, Ljava/net/Socket;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 194
    :cond_2
    :goto_0
    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    .line 195
    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;

    .line 196
    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    goto :goto_1

    :catchall_0
    move-exception v0

    goto :goto_2

    :catch_0
    move-exception v2

    .line 192
    :try_start_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "closeClient IOException: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :goto_1
    return-void

    .line 194
    :goto_2
    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    .line 195
    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;

    .line 196
    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    .line 197
    throw v0
.end method

.method private openClient()V
    .locals 4

    const-string v0, "YGPS/ClientSocket"

    const-string v1, "enter startClient"

    .line 159
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 160
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/net/Socket;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p0, "localSocket has started, return"

    .line 161
    invoke-static {v0, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 165
    :cond_0
    :try_start_0
    new-instance v1, Ljava/net/Socket;

    const-string v2, "127.0.0.1"

    const/16 v3, 0x1b58

    invoke-direct {v1, v2, v3}, Ljava/net/Socket;-><init>(Ljava/lang/String;I)V

    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    const/16 v2, 0x7d0

    .line 166
    invoke-virtual {v1, v2}, Ljava/net/Socket;->setSoTimeout(I)V

    .line 167
    new-instance v1, Ljava/io/DataOutputStream;

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    invoke-virtual {v2}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataOutput:Ljava/io/DataOutputStream;

    .line 168
    new-instance v1, Ljava/io/DataInputStream;

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mClientSocket:Ljava/net/Socket;

    invoke-virtual {v2}, Ljava/net/Socket;->getInputStream()Ljava/io/InputStream;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/DataInputStream;-><init>(Ljava/io/InputStream;)V

    iput-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mDataInput:Ljava/io/DataInputStream;
    :try_end_0
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 172
    invoke-virtual {p0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :catch_1
    move-exception p0

    .line 170
    invoke-virtual {p0}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method


# virtual methods
.method endClient()V
    .locals 3

    const-string v0, "YGPS/ClientSocket"

    const-string v1, "enter endClient"

    .line 204
    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 205
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mSendThread:Ljava/lang/Thread;

    invoke-virtual {v1}, Ljava/lang/Thread;->interrupt()V

    .line 206
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Queue remaining:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/ygps/ClientSocket;->mCommandQueue:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v2}, Ljava/util/concurrent/BlockingQueue;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 207
    invoke-direct {p0}, Lcom/mediatek/ygps/ClientSocket;->closeClient()V

    const/4 v0, 0x0

    .line 208
    iput-object v0, p0, Lcom/mediatek/ygps/ClientSocket;->mCallBack:Lcom/mediatek/ygps/YgpsActivity;

    return-void
.end method

.method sendCommand(Ljava/lang/String;)V
    .locals 3

    .line 218
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "$"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "*"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/ClientSocket;->calcCS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 219
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Send command: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YGPS/ClientSocket"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 220
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mSendThread:Ljava/lang/Thread;

    invoke-virtual {v1}, Ljava/lang/Thread;->isAlive()Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "sendThread is not alive"

    .line 221
    invoke-static {v2, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 222
    iget-object v1, p0, Lcom/mediatek/ygps/ClientSocket;->mSendThread:Ljava/lang/Thread;

    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    .line 224
    :cond_0
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/mediatek/ygps/ClientSocket;->mCommandQueue:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {p1, v0}, Ljava/util/concurrent/BlockingQueue;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_1

    .line 229
    :cond_1
    :try_start_0
    iget-object p0, p0, Lcom/mediatek/ygps/ClientSocket;->mCommandQueue:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {p0, v0}, Ljava/util/concurrent/BlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 231
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "send command interrupted:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/InterruptedException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void

    :cond_2
    :goto_1
    const-string p0, "send command return because of hasn\'t handle the same"

    .line 225
    invoke-static {v2, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
