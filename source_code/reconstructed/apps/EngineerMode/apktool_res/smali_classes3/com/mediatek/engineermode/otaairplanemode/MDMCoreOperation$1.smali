.class Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;
.super Landroid/os/Handler;
.source "MDMCoreOperation.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    .line 44
    iput-object p1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 46
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x7

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 48
    :cond_0
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 49
    .local v0, "msgID":I
    iget-object v1, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-static {v1}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$000(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)Lcom/mediatek/mdml/PlainDataDecoder;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/mdml/PlainDataDecoder;->msgInfo_getMsgName(Ljava/lang/Integer;)Ljava/lang/String;

    move-result-object v1

    .line 50
    .local v1, "name":Ljava/lang/String;
    iget-object v2, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/mediatek/mdml/Msg;

    .line 51
    .local v2, "msgObj":Lcom/mediatek/mdml/Msg;
    if-eqz v2, :cond_1

    .line 52
    iget-object v3, p0, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$1;->this$0:Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;

    invoke-static {v3}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;->access$100(Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation;)Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;

    move-result-object v3

    invoke-interface {v3, v1, v2}, Lcom/mediatek/engineermode/otaairplanemode/MDMCoreOperation$IMDMSeiviceInterface;->onUpdateMDMData(Ljava/lang/String;Lcom/mediatek/mdml/Msg;)V

    goto :goto_0

    .line 54
    :cond_1
    const-string v3, "MDMCoreOperation"

    const-string v4, "msgObj is null"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    nop

    .line 59
    .end local v0    # "msgID":I
    .end local v1    # "name":Ljava/lang/String;
    .end local v2    # "msgObj":Lcom/mediatek/mdml/Msg;
    :goto_0
    return-void
.end method
