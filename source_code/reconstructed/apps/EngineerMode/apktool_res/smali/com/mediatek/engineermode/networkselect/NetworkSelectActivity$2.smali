.class Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$2;
.super Landroid/os/Handler;
.source "NetworkSelectActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    .line 103
    iput-object p1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 107
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x65

    const-string v2, "NetworkMode"

    if-eq v0, v1, :cond_2

    const/16 v1, 0x66

    if-eq v0, v1, :cond_0

    goto :goto_1

    .line 119
    :cond_0
    const-string v0, ""

    .line 120
    .local v0, "info":Ljava/lang/String;
    iget v1, p1, Landroid/os/Message;->arg1:I

    .line 121
    .local v1, "status":I
    if-nez v1, :cond_1

    .line 122
    const-string v0, "set the network succeed"

    goto :goto_0

    .line 124
    :cond_1
    const-string v0, "set the network failed"

    .line 126
    :goto_0
    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 127
    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 128
    goto :goto_1

    .line 109
    .end local v0    # "info":Ljava/lang/String;
    .end local v1    # "status":I
    :cond_2
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 110
    .local v0, "result":I
    if-ltz v0, :cond_3

    .line 111
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Get Preferred Type = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    iget-object v1, p0, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity$2;->this$0:Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/networkselect/NetworkSelectActivity;->updateNetworkType(I)V

    goto :goto_1

    .line 114
    :cond_3
    const-string v1, "query_preferred_failed"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 115
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 117
    nop

    .line 133
    .end local v0    # "result":I
    :goto_1
    return-void
.end method
