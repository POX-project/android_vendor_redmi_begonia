.class public Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;
.super Ljava/lang/Object;
.source "AgpsDebugInterface.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;,
        Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;,
        Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;
    }
.end annotation


# instance fields
.field protected in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

.field mLLbsHidlDeathRecipient:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;

.field mLbsHidlCallback:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;

.field mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

.field protected messageHandler:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;


# direct methods
.method public constructor <init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    new-instance v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    const/16 v1, 0x2000

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    .line 76
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;-><init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlCallback:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;

    .line 102
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;-><init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLLbsHidlDeathRecipient:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;

    if-eqz p1, :cond_0

    .line 50
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;

    invoke-direct {v0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;-><init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->messageHandler:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;

    .line 51
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->connect()V

    return-void

    .line 48
    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "listener cannot be null"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;Ljava/lang/String;)Z
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->doHidl(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static covertArrayListToByteArray(Ljava/util/ArrayList;[B)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;[B)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 69
    :goto_0
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 70
    invoke-virtual {p0, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Byte;

    invoke-virtual {v1}, Ljava/lang/Byte;->byteValue()B

    move-result v1

    aput-byte v1, p1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private doHidl(Ljava/lang/String;)Z
    .locals 3

    .line 118
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    if-nez v0, :cond_0

    .line 119
    invoke-static {p1}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->getService(Ljava/lang/String;)Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    .line 120
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLLbsHidlDeathRecipient:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;

    const-wide/16 v1, 0x0

    invoke-interface {p1, v0, v1, v2}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->linkToDeath(Landroid/os/IHwBinder$DeathRecipient;J)Z

    .line 121
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlCallback:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;

    invoke-interface {p1, p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->setCallback(Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 125
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 259
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "AgpsDebugInterface"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected static msleep(I)V
    .locals 2

    int-to-long v0, p0

    .line 248
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 250
    invoke-virtual {p0}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method protected connect()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "AgpsDebugInterface"

    .line 239
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->doHidl(Ljava/lang/String;)Z

    return-void
.end method

.method public removeListener()V
    .locals 1

    const/16 v0, 0xff

    .line 132
    invoke-virtual {p0, v0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->write(I)V

    return-void
.end method

.method protected sendMessage2Handler(IIIILjava/lang/String;Ljava/lang/String;[B)V
    .locals 2

    .line 191
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "type"

    .line 192
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string p1, "data1"

    .line 193
    invoke-virtual {v0, p1, p2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string p1, "data2"

    .line 194
    invoke-virtual {v0, p1, p3}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string p1, "data3"

    .line 195
    invoke-virtual {v0, p1, p4}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string p1, "msg1"

    .line 196
    invoke-virtual {v0, p1, p5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "msg2"

    .line 197
    invoke-virtual {v0, p1, p6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "bin"

    .line 198
    invoke-virtual {v0, p1, p7}, Landroid/os/Bundle;->putByteArray(Ljava/lang/String;[B)V

    .line 199
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 p2, 0x0

    .line 200
    iput p2, p1, Landroid/os/Message;->what:I

    .line 201
    invoke-virtual {p1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 202
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->messageHandler:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;

    invoke-virtual {p0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method protected write(I)V
    .locals 1

    .line 230
    :try_start_0
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, -0x1

    .line 231
    invoke-static {v0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 232
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    invoke-interface {p0, p1}, Lvendor/mediatek/hardware/lbs/V1_0/ILbs;->sendToServer(Ljava/util/ArrayList;)Z
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 234
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
