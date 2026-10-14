.class Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;
.super Landroid/os/Handler;
.source "AntTunerDebugMIPI.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field private mReturnData:[Ljava/lang/String;

.field final synthetic this$0:Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;

    .line 108
    iput-object p1, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->this$0:Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 109
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->mReturnData:[Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 113
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x0

    const-string v2, "AntTunerDebugMIPI"

    if-nez v0, :cond_1

    .line 114
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 115
    .local v0, "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_0

    .line 116
    const-string v3, "MIPI read successful."

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    iget-object v3, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v3, [Ljava/lang/String;

    iput-object v3, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->mReturnData:[Ljava/lang/String;

    .line 118
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mReturnData = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->mReturnData:[Ljava/lang/String;

    aget-object v4, v4, v1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    iget-object v2, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->mReturnData:[Ljava/lang/String;

    aget-object v2, v2, v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 120
    iget-object v1, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->this$0:Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;

    iget-object v2, p0, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI$1;->mReturnData:[Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;->access$000(Lcom/mediatek/engineermode/anttunerdebug/AntTunerDebugMIPI;[Ljava/lang/String;)V

    goto :goto_0

    .line 122
    :cond_0
    const-string v3, "MIPI read failed."

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 123
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_0
    goto :goto_3

    :cond_1
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x1

    if-ne v0, v3, :cond_3

    .line 126
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 127
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_2

    .line 128
    const-string v1, "MIPI write successful."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 130
    :cond_2
    const-string v3, "MIPI write failed."

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 131
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 133
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :goto_1
    goto :goto_3

    :cond_3
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x3

    if-ne v0, v3, :cond_5

    .line 134
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 135
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_4

    .line 136
    const-string v1, "MIPI Signaling successful."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 138
    :cond_4
    const-string v3, "MIPI Signaling failed."

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 139
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 141
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_5
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x4

    if-ne v0, v3, :cond_7

    .line 142
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 143
    .restart local v0    # "ar":Landroid/os/AsyncResult;
    iget-object v3, v0, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v3, :cond_6

    .line 144
    const-string v1, "MIPI Non-Signaling successful."

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 146
    :cond_6
    const-string v3, "MIPI Non-Signaling failed."

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 147
    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 141
    .end local v0    # "ar":Landroid/os/AsyncResult;
    :cond_7
    :goto_2
    nop

    .line 151
    :goto_3
    return-void
.end method
