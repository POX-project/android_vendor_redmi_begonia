.class Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;
.super Landroid/os/Handler;
.source "MDLowPowerMonitor.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    .line 37
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .line 40
    const-string v0, "MDLowPowerMonitor"

    const-string v1, "Receive msg from modem"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/os/AsyncResult;

    .line 42
    .local v1, "asyncResult":Landroid/os/AsyncResult;
    iget v2, p1, Landroid/os/Message;->what:I

    packed-switch v2, :pswitch_data_0

    goto :goto_0

    .line 62
    :pswitch_0
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_0

    .line 63
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    const-string v3, "MD Low Power Monitor Config Succeed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;->access$000(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;Ljava/lang/String;)V

    .line 64
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 66
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    const-string v3, "MD Low Power Monitor Config Failed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;->access$000(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;Ljava/lang/String;)V

    .line 67
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 69
    goto :goto_0

    .line 53
    :pswitch_1
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_1

    .line 54
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    const-string v3, "MD Low Power Monitor Disabled Succeed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;->access$000(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;Ljava/lang/String;)V

    .line 55
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 57
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    const-string v3, "MD Low Power Monitor Disabled Failed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;->access$000(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;Ljava/lang/String;)V

    .line 58
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    goto :goto_0

    .line 44
    :pswitch_2
    iget-object v2, v1, Landroid/os/AsyncResult;->exception:Ljava/lang/Throwable;

    if-nez v2, :cond_2

    .line 45
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    const-string v3, "MD Low Power Monitor Enable Succeed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;->access$000(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;Ljava/lang/String;)V

    .line 46
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 48
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor$1;->this$0:Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;

    const-string v3, "MD Low Power Monitor Enable Failed!"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;->access$000(Lcom/mediatek/engineermode/mdlowpowermonitor/MDLowPowerMonitor;Ljava/lang/String;)V

    .line 49
    invoke-static {v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    nop

    .line 73
    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0x65
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
