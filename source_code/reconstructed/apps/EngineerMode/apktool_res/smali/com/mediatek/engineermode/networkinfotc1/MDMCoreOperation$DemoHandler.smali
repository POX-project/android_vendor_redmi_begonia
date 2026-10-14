.class Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;
.super Ljava/lang/Object;
.source "MDMCoreOperation.java"

# interfaces
.implements Lcom/mediatek/mdml/TrapHandlerInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "DemoHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;
    .param p2, "x1"    # Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$1;

    .line 223
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;-><init>(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)V

    return-void
.end method


# virtual methods
.method public ProcessTrap(JLcom/mediatek/mdml/TRAP_TYPE;I[BI)V
    .locals 6
    .param p1, "timestamp"    # J
    .param p3, "type"    # Lcom/mediatek/mdml/TRAP_TYPE;
    .param p4, "len"    # I
    .param p5, "data"    # [B
    .param p6, "offset"    # I

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    iget-object v0, v0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mUpdateUiHandler:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    .line 227
    .local v0, "msgToUi":Landroid/os/Message;
    const/4 v1, 0x7

    iput v1, v0, Landroid/os/Message;->what:I

    .line 228
    add-int/lit8 v1, p6, 0x6

    const/4 v2, 0x2

    invoke-static {p5, v1, v2}, Lcom/mediatek/engineermode/networkinfotc1/Utils;->getIntFromByte([BII)J

    move-result-wide v1

    long-to-int v1, v1

    .line 229
    .local v1, "msgID":I
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-static {v2}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->access$000(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v2

    invoke-virtual {v2, p5, p6}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;

    move-result-object v2

    .line 231
    .local v2, "msg":Lcom/mediatek/mdml/Msg;
    const-string v3, "MDMCoreOperation"

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    invoke-static {v5}, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->access$600(Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;)I

    move-result v5

    add-int/lit8 v5, v5, 0x1

    if-eq v4, v5, :cond_0

    goto :goto_0

    .line 235
    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "frame is incoming: len = ["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "], msgID = ["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "]"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 237
    iput-object v2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 238
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;

    iget-object v3, v3, Lcom/mediatek/engineermode/networkinfotc1/MDMCoreOperation;->mUpdateUiHandler:Landroid/os/Handler;

    const-wide/16 v4, 0x32

    invoke-virtual {v3, v0, v4, v5}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 240
    return-void

    .line 232
    :cond_1
    :goto_0
    const-string v4, "msg is null in ProcessTrap"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 233
    return-void
.end method
