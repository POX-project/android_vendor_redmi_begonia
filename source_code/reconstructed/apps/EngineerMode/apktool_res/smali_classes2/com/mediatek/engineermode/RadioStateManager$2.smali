.class Lcom/mediatek/engineermode/RadioStateManager$2;
.super Landroid/os/Handler;
.source "RadioStateManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/RadioStateManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/RadioStateManager;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/RadioStateManager;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/RadioStateManager;

    .line 128
    iput-object p1, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 7
    .param p1, "msg"    # Landroid/os/Message;

    .line 131
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/AsyncResult;

    .line 132
    .local v0, "ar":Landroid/os/AsyncResult;
    iget v1, p1, Landroid/os/Message;->what:I

    const/16 v2, 0x7d1

    if-eq v1, v2, :cond_0

    goto/16 :goto_0

    .line 134
    :cond_0
    iget-object v1, v0, Landroid/os/AsyncResult;->result:Ljava/lang/Object;

    check-cast v1, [I

    .line 135
    .local v1, "state":[I
    const/4 v2, 0x0

    aget v3, v1, v2

    const/4 v4, 0x1

    const/4 v5, 0x0

    const-string v6, "RadioStateManager"

    if-ne v3, v4, :cond_3

    .line 136
    const-string v2, "RADIO_POWER_ON"

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$200(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/os/CountDownTimer;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 139
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$200(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/os/CountDownTimer;

    move-result-object v2

    invoke-virtual {v2}, Landroid/os/CountDownTimer;->cancel()V

    .line 140
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/RadioStateManager;->access$202(Lcom/mediatek/engineermode/RadioStateManager;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;

    .line 142
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 143
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/ProgressDialog;->dismiss()V

    .line 145
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v2

    if-eqz v2, :cond_7

    .line 146
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v2

    invoke-interface {v2}, Lcom/mediatek/engineermode/RadioStateManager$RadioListener;->onRadioPowerOn()V

    goto :goto_0

    .line 148
    :cond_3
    aget v3, v1, v2

    if-nez v3, :cond_6

    .line 150
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;

    move-result-object v2

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$000(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/app/ProgressDialog;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/ProgressDialog;->isShowing()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 151
    return-void

    .line 154
    :cond_4
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$200(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/os/CountDownTimer;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 155
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$200(Lcom/mediatek/engineermode/RadioStateManager;)Landroid/os/CountDownTimer;

    move-result-object v2

    invoke-virtual {v2}, Landroid/os/CountDownTimer;->cancel()V

    .line 156
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/RadioStateManager;->access$202(Lcom/mediatek/engineermode/RadioStateManager;Landroid/os/CountDownTimer;)Landroid/os/CountDownTimer;

    .line 158
    :cond_5
    const-string v2, "RADIO_POWER_OFF"

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v2

    if-eqz v2, :cond_7

    .line 160
    iget-object v2, p0, Lcom/mediatek/engineermode/RadioStateManager$2;->this$0:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-static {v2}, Lcom/mediatek/engineermode/RadioStateManager;->access$100(Lcom/mediatek/engineermode/RadioStateManager;)Lcom/mediatek/engineermode/RadioStateManager$RadioListener;

    move-result-object v2

    invoke-interface {v2}, Lcom/mediatek/engineermode/RadioStateManager$RadioListener;->onRadioPowerOff()V

    goto :goto_0

    .line 162
    :cond_6
    aget v2, v1, v2

    const/4 v3, 0x2

    if-ne v2, v3, :cond_7

    .line 164
    const-string v2, "RADIO_POWER_UNAVAILABLE"

    invoke-static {v6, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    .end local v1    # "state":[I
    :cond_7
    :goto_0
    return-void
.end method
