.class final Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;
.super Landroid/os/Handler;
.source "BleTestMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BleTestMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "WorkHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 278
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 279
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 280
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BleTestMode$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode$1;

    .line 273
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 284
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-eq v0, v1, :cond_1

    const/16 v1, 0xc

    if-eq v0, v1, :cond_0

    goto :goto_1

    .line 294
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    iget v1, p1, Landroid/os/Message;->arg1:I

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$900(Lcom/mediatek/engineermode/bluetooth/BleTestMode;I)V

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$800(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 296
    .local v0, "msgStopResult":Landroid/os/Message;
    iget v1, p1, Landroid/os/Message;->arg1:I

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 297
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$800(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 298
    goto :goto_1

    .line 286
    .end local v0    # "msgStopResult":Landroid/os/Message;
    :cond_1
    iget v0, p1, Landroid/os/Message;->arg1:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_2

    .line 287
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$600(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V

    goto :goto_0

    .line 289
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$700(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V

    .line 291
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->access$800(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 292
    nop

    .line 302
    :goto_1
    return-void
.end method
