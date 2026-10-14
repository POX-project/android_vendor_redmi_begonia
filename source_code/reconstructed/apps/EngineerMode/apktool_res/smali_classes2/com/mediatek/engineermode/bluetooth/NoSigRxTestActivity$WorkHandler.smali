.class final Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;
.super Landroid/os/Handler;
.source "NoSigRxTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "WorkHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 190
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 191
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 192
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;

    .line 189
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 196
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-eq v0, v1, :cond_1

    const/16 v1, 0xc

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 203
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$700(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 204
    .local v0, "msgResultStop":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$900(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 205
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$700(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 206
    goto :goto_0

    .line 198
    .end local v0    # "msgResultStop":Landroid/os/Message;
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$700(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 199
    .local v0, "msgResultStart":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$800(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 200
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->access$700(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 201
    nop

    .line 211
    .end local v0    # "msgResultStart":Landroid/os/Message;
    :goto_0
    return-void
.end method
