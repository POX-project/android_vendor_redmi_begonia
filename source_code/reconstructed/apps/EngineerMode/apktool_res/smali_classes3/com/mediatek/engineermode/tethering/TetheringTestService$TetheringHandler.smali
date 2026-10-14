.class Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;
.super Landroid/os/Handler;
.source "TetheringTestService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/tethering/TetheringTestService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "TetheringHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/tethering/TetheringTestService;Landroid/os/Looper;)V
    .locals 0
    .param p2, "l"    # Landroid/os/Looper;

    .line 240
    iput-object p1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 241
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 242
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 246
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 247
    .local v0, "i":I
    iget v1, p1, Landroid/os/Message;->what:I

    if-eqz v1, :cond_0

    goto/16 :goto_1

    .line 249
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$100(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$500(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 250
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$600(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)V

    .line 251
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$702(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z

    goto :goto_0

    .line 252
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$700(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$100(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 253
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$600(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)V

    .line 254
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$702(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z

    goto :goto_0

    .line 255
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$700(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$500(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 256
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$600(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)V

    .line 257
    iget-object v1, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$702(Lcom/mediatek/engineermode/tethering/TetheringTestService;Z)Z

    .line 259
    :cond_3
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "NSIOT enabled flag:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    invoke-static {v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$700(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " network:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 260
    invoke-static {v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$100(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " tethering:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/tethering/TetheringTestService$TetheringHandler;->this$0:Lcom/mediatek/engineermode/tethering/TetheringTestService;

    .line 261
    invoke-static {v2}, Lcom/mediatek/engineermode/tethering/TetheringTestService;->access$500(Lcom/mediatek/engineermode/tethering/TetheringTestService;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 259
    const-string v2, "TetheringTestService"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    nop

    .line 266
    :goto_1
    return-void
.end method
