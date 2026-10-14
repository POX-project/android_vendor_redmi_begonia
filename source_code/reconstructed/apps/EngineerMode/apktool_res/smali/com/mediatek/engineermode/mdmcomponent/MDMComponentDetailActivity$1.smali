.class Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;
.super Landroid/os/Handler;
.source "MDMComponentDetailActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    .line 118
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 120
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    const/4 v2, 0x0

    const-string v3, "EmInfo/MDMComponentDetailActivity"

    if-eq v0, v1, :cond_5

    const/4 v1, 0x3

    const/4 v4, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto/16 :goto_0

    .line 146
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_6

    .line 147
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->showDialog(I)V

    goto :goto_0

    .line 129
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->checkMonitorAlive()Z

    move-result v0

    if-nez v0, :cond_3

    .line 130
    const-string v0, "[InitTask] m_cmdProxy is null, md_monitor is stopped, finish"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->isDestroyed()Z

    move-result v0

    if-nez v0, :cond_2

    .line 132
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->showDialog(I)V

    .line 134
    :cond_2
    return-void

    .line 136
    :cond_3
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    if-nez v0, :cond_4

    .line 137
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    invoke-direct {v0}, Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskDriver:Lcom/mediatek/engineermode/mdmcomponent/UpdateTaskDriven;

    .line 139
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->updateUI()V

    .line 140
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->taskExcute(I)V

    .line 141
    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$102(Z)Z

    .line 142
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "init MDMComponentDetailActivity done, select "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$200(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    goto :goto_0

    .line 122
    :cond_5
    const-string v0, "Wait unSubscribe message done"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$000(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/app/ProgressDialog;

    move-result-object v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->access$000(Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;)Landroid/app/ProgressDialog;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/ProgressDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 124
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->removeDialog(I)V

    .line 125
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->finish()V

    .line 153
    :cond_6
    :goto_0
    return-void
.end method
