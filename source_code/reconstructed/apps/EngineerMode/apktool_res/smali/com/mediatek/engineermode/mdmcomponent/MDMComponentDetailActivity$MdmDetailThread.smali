.class public Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;
.super Ljava/lang/Thread;
.source "MDMComponentDetailActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "MdmDetailThread"
.end annotation


# instance fields
.field private action:I

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;I)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;
    .param p2, "action"    # I

    .line 534
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    .line 535
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->action:I

    .line 536
    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 539
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->action:I

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 557
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$500(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Z

    .line 558
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$400(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 559
    goto :goto_0

    .line 541
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$300(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V

    .line 542
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->checkMonitorAlive()Z

    move-result v0

    const-string v1, "EmInfo/MDMComponentDetailActivity"

    if-eqz v0, :cond_2

    .line 544
    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->getCmdProxy()Lcom/mediatek/mdml/MonitorCmdProxy;

    move-result-object v0

    sget-wide v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->m_sid:J

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/mdml/MonitorCmdProxy;->onEnableTrap(J)Lcom/mediatek/mdml/MONITOR_CMD_RESP;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 548
    nop

    .line 554
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$400(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 555
    nop

    .line 563
    :goto_0
    return-void

    .line 545
    :catch_0
    move-exception v0

    .line 546
    .local v0, "e":Ljava/lang/Exception;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ComponentSelectActivity.m_cmdProxy.onEnableTrap failed! "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 547
    return-void

    .line 550
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_2
    const-string v0, "[InitTask] m_cmdProxy is null, md_monitor is stopped, finish"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 551
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$MdmDetailThread;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$400(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 552
    return-void
.end method
