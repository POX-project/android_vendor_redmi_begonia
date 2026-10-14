.class final Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;
.super Landroid/os/Handler;
.source "BleEnhancedTestMode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "WorkHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Landroid/os/Looper;)V
    .locals 0
    .param p2, "looper"    # Landroid/os/Looper;

    .line 251
    iput-object p1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 252
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 253
    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;
    .param p2, "x1"    # Landroid/os/Looper;
    .param p3, "x2"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;

    .line 249
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 257
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-eq v0, v1, :cond_1

    const/16 v1, 0xc

    if-eq v0, v1, :cond_0

    goto :goto_1

    .line 271
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$400(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 272
    .local v0, "msgResultStop":Landroid/os/Message;
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$700(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;I)V

    .line 273
    iget v1, p1, Landroid/os/Message;->arg1:I

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 274
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$400(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 275
    goto :goto_1

    .line 260
    .end local v0    # "msgResultStop":Landroid/os/Message;
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$400(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 261
    .local v0, "msgResultStart":Landroid/os/Message;
    iget v2, p1, Landroid/os/Message;->arg1:I

    if-ne v2, v1, :cond_2

    .line 262
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$500(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_0

    .line 264
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$600(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->ordinal()I

    move-result v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 267
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->this$0:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->access$400(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 269
    nop

    .line 279
    .end local v0    # "msgResultStart":Landroid/os/Message;
    :goto_1
    return-void
.end method
