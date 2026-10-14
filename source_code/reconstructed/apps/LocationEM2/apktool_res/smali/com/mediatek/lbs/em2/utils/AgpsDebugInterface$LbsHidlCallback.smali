.class Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;
.super Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback$Stub;
.source "AgpsDebugInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "LbsHidlCallback"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    invoke-direct {p0}, Lvendor/mediatek/hardware/lbs/V1_0/ILbsCallback$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public callbackToClient(Ljava/util/ArrayList;)Z
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Byte;",
            ">;)Z"
        }
    .end annotation

    .line 79
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "callbackToClient() size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->log(Ljava/lang/Object;)V

    .line 81
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mBuff:[B

    invoke-static {p1, v0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->covertArrayListToByteArray(Ljava/util/ArrayList;[B)V

    .line 82
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->clear()V

    .line 83
    :goto_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    iget v0, v0, Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;->mOffset:I

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 85
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v2

    .line 86
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v3

    .line 87
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v4

    .line 88
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getInt(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)I

    move-result v5

    .line 89
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v6

    .line 90
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getString(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)Ljava/lang/String;

    move-result-object v7

    .line 91
    iget-object v0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->in:Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;

    invoke-static {v0}, Lcom/mediatek/lbs/em2/utils/DataCoder2;->getBinary(Lcom/mediatek/lbs/em2/utils/DataCoder2$DataCoderBuffer;)[B

    move-result-object v8

    .line 92
    iget-object v1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlCallback;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    invoke-virtual/range {v1 .. v8}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->sendMessage2Handler(IIIILjava/lang/String;Ljava/lang/String;[B)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 94
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    const/4 p0, 0x1

    return p0
.end method
