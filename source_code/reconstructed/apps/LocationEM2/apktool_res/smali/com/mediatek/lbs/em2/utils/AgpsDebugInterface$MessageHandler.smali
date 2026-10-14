.class public Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;
.super Landroid/os/Handler;
.source "AgpsDebugInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xc
    name = "MessageHandler"
.end annotation


# instance fields
.field protected listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;


# direct methods
.method public constructor <init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;)V
    .locals 0

    .line 138
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 139
    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;->listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7

    .line 144
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    const-string v0, "type"

    .line 146
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    const-string v1, "data1"

    .line 147
    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v1

    const-string v2, "data2"

    .line 148
    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "data3"

    .line 149
    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "msg1"

    .line 150
    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "msg2"

    .line 151
    invoke-virtual {p1, v5}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "bin"

    .line 152
    invoke-virtual {p1, v6}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object p1

    const/4 v6, 0x1

    if-eqz v0, :cond_1

    if-eq v0, v6, :cond_0

    goto/16 :goto_0

    .line 174
    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "type="

    invoke-virtual {p0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " data1="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " data2="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " data3="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " msg1="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " msg2="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " bin="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->log(Ljava/lang/Object;)V

    if-eqz p1, :cond_6

    .line 178
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "bin.len="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length p1, p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->log(Ljava/lang/Object;)V

    goto :goto_0

    :cond_1
    and-int/lit8 p1, v1, 0x1

    if-ne p1, v6, :cond_2

    .line 157
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;->listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    invoke-interface {p1, v5}, Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;->onToastMessageReceived(Ljava/lang/String;)V

    :cond_2
    and-int/lit8 p1, v1, 0x2

    const/4 v0, 0x2

    if-ne p1, v0, :cond_3

    .line 160
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;->listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    invoke-interface {p1, v2, v5}, Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;->onViewMessageReceived(ILjava/lang/String;)V

    :cond_3
    and-int/lit8 p1, v1, 0x4

    const/4 v0, 0x4

    if-ne p1, v0, :cond_4

    .line 163
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;->listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    invoke-interface {p1, v4, v5}, Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;->onDialogMessageReceived(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    and-int/lit8 p1, v1, 0x8

    const/16 v0, 0x8

    if-ne p1, v0, :cond_5

    .line 166
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;->listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    invoke-interface {p1, v5}, Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;->onVzwDebugMessageReceived(Ljava/lang/String;)V

    :cond_5
    const/16 p1, 0x10

    and-int/lit8 v0, v1, 0x10

    if-ne v0, p1, :cond_6

    .line 169
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$MessageHandler;->listener:Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;

    invoke-interface {p0, v2, v3, v5}, Lcom/mediatek/lbs/em2/utils/AgpsDebugListener;->onNiStatisticMessageReceived(IILjava/lang/String;)V

    :cond_6
    :goto_0
    return-void
.end method
