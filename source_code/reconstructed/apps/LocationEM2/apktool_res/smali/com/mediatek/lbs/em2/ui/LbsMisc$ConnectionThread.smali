.class Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;
.super Ljava/lang/Object;
.source "LbsMisc.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsMisc;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "ConnectionThread"
.end annotation


# instance fields
.field private ip:Ljava/lang/String;

.field private mThread:Ljava/lang/Thread;

.field private port:I

.field private sessionId:I

.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;


# direct methods
.method public constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;II)V
    .locals 0

    .line 294
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 295
    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->ip:Ljava/lang/String;

    .line 296
    iput p3, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->port:I

    .line 297
    iput p4, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sessionId:I

    .line 298
    new-instance p2, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread$1;

    invoke-direct {p2, p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->mThread:Ljava/lang/Thread;

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;)V
    .locals 0

    .line 289
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->runFunction()V

    return-void
.end method

.method private getTimeString()Ljava/lang/String;
    .locals 3

    .line 348
    new-instance p0, Ljava/util/Date;

    invoke-direct {p0}, Ljava/util/Date;-><init>()V

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    .line 350
    invoke-virtual {p0}, Ljava/util/Date;->getHours()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 351
    invoke-virtual {p0}, Ljava/util/Date;->getMinutes()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    .line 352
    invoke-virtual {p0}, Ljava/util/Date;->getSeconds()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const/4 v1, 0x2

    aput-object p0, v0, v1

    const-string p0, "[%02d:%02d:%02d] "

    .line 349
    invoke-static {p0, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private runFunction()V
    .locals 5

    const/4 v0, 0x0

    .line 315
    :try_start_0
    new-instance v1, Ljava/net/Socket;

    invoke-direct {v1}, Ljava/net/Socket;-><init>()V

    const-string v2, "DNS querying"

    .line 316
    invoke-direct {p0, v0, v2}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    .line 317
    new-instance v2, Ljava/net/InetSocketAddress;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->ip:Ljava/lang/String;

    iget v4, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->port:I

    invoke-direct {v2, v3, v4}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 318
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Name="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/net/InetSocketAddress;->getAddress()Ljava/net/InetAddress;

    move-result-object v4

    invoke-virtual {v4}, Ljava/net/InetAddress;->getHostName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    .line 319
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Address="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/net/InetSocketAddress;->getAddress()Ljava/net/InetAddress;

    move-result-object v4

    invoke-virtual {v4}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    const-string v3, "start connection"

    .line 320
    invoke-direct {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    const/16 v3, 0x2710

    .line 321
    invoke-virtual {v1, v2, v3}, Ljava/net/Socket;->connect(Ljava/net/SocketAddress;I)V

    const-string v2, "connected"

    .line 322
    invoke-direct {p0, v0, v2}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    .line 323
    invoke-virtual {v1}, Ljava/net/Socket;->close()V

    const-string v1, "disconnected"

    .line 324
    invoke-direct {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/net/UnknownHostException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 332
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "IOException "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    .line 333
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v1

    .line 329
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "NullPointerException "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/NullPointerException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    .line 330
    invoke-virtual {v1}, Ljava/lang/NullPointerException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v1

    .line 326
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "UnknownHostException "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/net/UnknownHostException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    .line 327
    invoke-virtual {v1}, Ljava/net/UnknownHostException;->printStackTrace()V

    :goto_0
    const/4 v0, 0x1

    const-string v1, ""

    .line 335
    invoke-direct {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sendMessage(ILjava/lang/String;)V

    return-void
.end method

.method private sendMessage(ILjava/lang/String;)V
    .locals 4

    .line 339
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 340
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 341
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->getTimeString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "[id="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->sessionId:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\n"

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v2, "msg"

    invoke-virtual {v1, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 342
    iput p1, v0, Landroid/os/Message;->what:I

    .line 343
    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 344
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->this$0:Lcom/mediatek/lbs/em2/ui/LbsMisc;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->access$1400(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/os/Handler;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method


# virtual methods
.method public start()V
    .locals 0

    .line 306
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->mThread:Ljava/lang/Thread;

    invoke-virtual {p0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public stop()V
    .locals 0

    .line 310
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;->mThread:Ljava/lang/Thread;

    invoke-virtual {p0}, Ljava/lang/Thread;->interrupt()V

    return-void
.end method
