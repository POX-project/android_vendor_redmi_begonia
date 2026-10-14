.class Lcom/mediatek/engineermode/boot/EmBootStartService$1;
.super Landroid/os/Handler;
.source "EmBootStartService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/boot/EmBootStartService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/boot/EmBootStartService;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/boot/EmBootStartService;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/boot/EmBootStartService;

    .line 26
    iput-object p1, p0, Lcom/mediatek/engineermode/boot/EmBootStartService$1;->this$0:Lcom/mediatek/engineermode/boot/EmBootStartService;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 29
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x6f

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 31
    :cond_0
    const-class v0, Lcom/mediatek/engineermode/boot/EmBootStartService;

    monitor-enter v0

    .line 32
    :try_start_0
    const-string v1, "BootStartService"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "size: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mediatek/engineermode/boot/EmBootStartService;->access$000()Ljava/util/Map;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Map;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 33
    invoke-static {}, Lcom/mediatek/engineermode/boot/EmBootStartService;->access$000()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 34
    iget-object v1, p0, Lcom/mediatek/engineermode/boot/EmBootStartService$1;->this$0:Lcom/mediatek/engineermode/boot/EmBootStartService;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/boot/EmBootStartService;->stopSelf()V

    .line 36
    :cond_1
    monitor-exit v0

    .line 37
    nop

    .line 41
    :goto_0
    return-void

    .line 36
    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method
