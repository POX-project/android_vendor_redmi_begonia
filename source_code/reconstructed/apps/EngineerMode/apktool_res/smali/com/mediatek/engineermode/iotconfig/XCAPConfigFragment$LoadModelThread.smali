.class public Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;
.super Ljava/lang/Thread;
.source "XCAPConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "LoadModelThread"
.end annotation


# instance fields
.field private action:I

.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;
    .param p2, "action"    # I

    .line 207
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    .line 208
    iput p2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->action:I

    .line 209
    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 212
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 213
    .local v0, "msg":Landroid/os/Message;
    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->action:I

    if-eqz v1, :cond_3

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-eq v1, v3, :cond_1

    if-eq v1, v2, :cond_0

    .line 236
    const/4 v1, -0x1

    iput v1, v0, Landroid/os/Message;->what:I

    goto :goto_1

    .line 232
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$300(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 233
    const/4 v1, 0x3

    iput v1, v0, Landroid/os/Message;->what:I

    .line 234
    goto :goto_1

    .line 219
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$200(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 221
    const-wide/16 v1, 0x7d0

    :try_start_0
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 224
    goto :goto_0

    .line 222
    :catch_0
    move-exception v1

    .line 223
    .local v1, "e":Ljava/lang/InterruptedException;
    invoke-virtual {v1}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 225
    .end local v1    # "e":Ljava/lang/InterruptedException;
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 226
    iput v3, v0, Landroid/os/Message;->what:I

    goto :goto_1

    .line 228
    :cond_2
    iput v2, v0, Landroid/os/Message;->what:I

    .line 230
    goto :goto_1

    .line 215
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$100(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 216
    const/4 v1, 0x0

    iput v1, v0, Landroid/os/Message;->what:I

    .line 217
    nop

    .line 239
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->this$0:Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    invoke-static {v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->access$400(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 240
    return-void
.end method
