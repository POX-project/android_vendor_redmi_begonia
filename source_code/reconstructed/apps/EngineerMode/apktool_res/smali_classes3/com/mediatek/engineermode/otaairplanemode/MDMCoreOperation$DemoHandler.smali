.class Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;
.super Ljava/lang/Object;
.source "MDMCoreOperation.java"

# interfaces
.implements Lcom/mediatek/mdml/TrapHandlerInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "DemoHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;


# direct methods
.method private constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V
    .locals 0

    .line 226
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
    .param p2, "x1"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;

    .line 226
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;-><init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V

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

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    iget-object v0, v0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mUpdateUiHandler:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    .line 230
    .local v0, "msgToUi":Landroid/os/Message;
    const/4 v1, 0x7

    iput v1, v0, Landroid/os/Message;->what:I

    .line 231
    add-int/lit8 v1, p6, 0x6

    const/4 v2, 0x2

    invoke-static {p5, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/Utils;->getIntFromByte([BII)J

    move-result-wide v1

    long-to-int v1, v1

    .line 232
    .local v1, "msgID":I
    iget-object v2, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-static {v2}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$000(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v2

    invoke-virtual {v2, p5, p6}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;

    move-result-object v2

    .line 234
    .local v2, "msg":Lcom/mediatek/mdml/Msg;
    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v3

    iget-object v4, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-static {v4}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$600(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)I

    move-result v4

    add-int/lit8 v4, v4, 0x1

    if-eq v3, v4, :cond_0

    goto :goto_0

    .line 239
    :cond_0
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 240
    iput-object v2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 241
    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$DemoHandler;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    iget-object v3, v3, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->mUpdateUiHandler:Landroid/os/Handler;

    const-wide/16 v4, 0x32

    invoke-virtual {v3, v0, v4, v5}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 243
    return-void

    .line 235
    :cond_1
    :goto_0
    const-string v3, "MDMCoreOperation"

    const-string v4, "msg is null in ProcessTrap"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    return-void
.end method
